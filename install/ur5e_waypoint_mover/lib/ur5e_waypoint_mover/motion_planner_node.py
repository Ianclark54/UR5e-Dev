#!/usr/bin/env python3
"""
ur5e_waypoint_mover — motion_planner_node.py
============================================
ROS 2 Jazzy node for controlling a UR5e arm via MoveIt2 (moveit_py).

Three input methods run simultaneously:
  1. YAML waypoints file (loaded at startup via ROS parameters)
  2. ROS 2 topic & service interface
  3. Interactive terminal CLI (runs in a background thread)

Topics (subscribed):
  /ur5e_mover/target_pose  [geometry_msgs/PoseStamped]
    → Plans and executes a move immediately.

Services (served):
  /ur5e_mover/move_to_point     [ur5e_waypoint_mover/MoveToPoint]
  /ur5e_mover/add_waypoint      [ur5e_waypoint_mover/AddWaypoint]
  /ur5e_mover/execute_waypoints [ur5e_waypoint_mover/ExecuteWaypoints]
  /ur5e_mover/list_waypoints    [ur5e_waypoint_mover/ListWaypoints]
  /ur5e_mover/clear_waypoints   [std_srvs/Empty]
"""

import os
import subprocess
import sys
import math
import threading
import time
import yaml

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup

from geometry_msgs.msg import Pose, PoseStamped
from std_srvs.srv import Empty

from ur5e_waypoint_mover.srv import (
    AddWaypoint,
    MoveToPoint,
    ExecuteWaypoints,
    ListWaypoints,
)

# MoveItPy —— ROS 2 Jazzy Python bindings
from moveit.planning import MoveItPy
from moveit.core.robot_state import RobotState


# ---------------------------------------------------------------------------
# Helper: euler angles → quaternion
# ---------------------------------------------------------------------------
def euler_to_quaternion(roll_deg: float, pitch_deg: float, yaw_deg: float):
    """Convert roll/pitch/yaw (degrees) to quaternion (qx, qy, qz, qw)."""
    r = math.radians(roll_deg)
    p = math.radians(pitch_deg)
    y = math.radians(yaw_deg)

    cy = math.cos(y * 0.5)
    sy = math.sin(y * 0.5)
    cp = math.cos(p * 0.5)
    sp = math.sin(p * 0.5)
    cr = math.cos(r * 0.5)
    sr = math.sin(r * 0.5)

    qw = cr * cp * cy + sr * sp * sy
    qx = sr * cp * cy - cr * sp * sy
    qy = cr * sp * cy + sr * cp * sy
    qz = cr * cp * sy - sr * sp * cy
    return qx, qy, qz, qw


def make_pose(x, y, z, qx=0.0, qy=0.0, qz=0.0, qw=1.0) -> Pose:
    pose = Pose()
    pose.position.x = float(x)
    pose.position.y = float(y)
    pose.position.z = float(z)
    pose.orientation.x = float(qx)
    pose.orientation.y = float(qy)
    pose.orientation.z = float(qz)
    pose.orientation.w = float(qw)
    return pose


# ---------------------------------------------------------------------------
# Main Node
# ---------------------------------------------------------------------------
class WaypointMoverNode(Node):

    # -----------------------------------------------------------------------
    # Initialisation
    # -----------------------------------------------------------------------
    def __init__(self):
        super().__init__("ur5e_waypoint_mover")

        # --- Parameters ---------------------------------------------------------
        self.declare_parameter("planning_group", "ur_manipulator")
        self.declare_parameter("end_effector_link", "tool0")
        self.declare_parameter("base_frame", "base_link")
        self.declare_parameter("planning_time", 5.0)
        self.declare_parameter("max_velocity_scaling", 0.3)
        self.declare_parameter("max_acceleration_scaling", 0.3)
        # Waypoints from YAML file declared as a list of dicts (passed as JSON string)
        self.declare_parameter("waypoints", "[]")

        self.planning_group = self.get_parameter("planning_group").value
        self.ee_link = self.get_parameter("end_effector_link").value
        self.base_frame = self.get_parameter("base_frame").value
        self.planning_time = self.get_parameter("planning_time").value
        self.vel_scale = self.get_parameter("max_velocity_scaling").value
        self.acc_scale = self.get_parameter("max_acceleration_scaling").value

        # --- Internal waypoint queue --------------------------------------------
        self._waypoints: list[dict] = []  # {label: str, pose: Pose}
        self._move_lock = threading.Lock()  # Only one motion at a time
        self._executing = False

        # --- MoveItPy -----------------------------------------------------------
        self.get_logger().info("Initialising MoveItPy …")
        self._moveit = MoveItPy(node_name="ur5e_waypoint_mover_moveit")
        self._arm = self._moveit.get_planning_component(self.planning_group)
        self.get_logger().info(
            f"MoveItPy ready. Planning group: '{self.planning_group}', "
            f"EE link: '{self.ee_link}'"
        )

        # --- Load YAML waypoints ------------------------------------------------
        self._load_yaml_waypoints()

        # --- Callback group (allows services to be called while spinning) -------
        cb_group = ReentrantCallbackGroup()

        # --- Topic subscriber ---------------------------------------------------
        self._pose_sub = self.create_subscription(
            PoseStamped,
            "/ur5e_mover/target_pose",
            self._target_pose_callback,
            10,
            callback_group=cb_group,
        )

        # --- Service servers ----------------------------------------------------
        self._srv_move = self.create_service(
            MoveToPoint,
            "/ur5e_mover/move_to_point",
            self._handle_move_to_point,
            callback_group=cb_group,
        )
        self._srv_add = self.create_service(
            AddWaypoint,
            "/ur5e_mover/add_waypoint",
            self._handle_add_waypoint,
            callback_group=cb_group,
        )
        self._srv_exec = self.create_service(
            ExecuteWaypoints,
            "/ur5e_mover/execute_waypoints",
            self._handle_execute_waypoints,
            callback_group=cb_group,
        )
        self._srv_list = self.create_service(
            ListWaypoints,
            "/ur5e_mover/list_waypoints",
            self._handle_list_waypoints,
            callback_group=cb_group,
        )
        self._srv_clear = self.create_service(
            Empty,
            "/ur5e_mover/clear_waypoints",
            self._handle_clear_waypoints,
            callback_group=cb_group,
        )

        # --- Start interactive CLI in background thread -------------------------
        self._cli_thread = threading.Thread(
            target=self._interactive_cli, daemon=True
        )
        self._cli_thread.start()

        self.get_logger().info(
            "\n"
            "╔══════════════════════════════════════════════╗\n"
            "║    UR5e Waypoint Mover — Node Ready          ║\n"
            "╚══════════════════════════════════════════════╝\n"
            f"  Planning group : {self.planning_group}\n"
            f"  End-effector   : {self.ee_link}\n"
            f"  Base frame     : {self.base_frame}\n"
            f"  Waypoints loaded from YAML: {len(self._waypoints)}\n"
        )

    # -----------------------------------------------------------------------
    # YAML Waypoint Loading
    # -----------------------------------------------------------------------
    def _load_yaml_waypoints(self):
        """
        Load waypoints declared as a ROS parameter list.
        Each waypoint is a parameter namespace like:
            waypoints.0.label / .x / .y / .z / .qx / .qy / .qz / .qw
        See config/waypoints.yaml for the exact format.
        """
        import json
        raw = self.get_parameter("waypoints").value
        if not raw or raw == "[]":
            return

        try:
            wps = json.loads(raw)
        except Exception:
            self.get_logger().warn("Could not parse 'waypoints' parameter as JSON. Skipping.")
            return

        for wp in wps:
            try:
                label = str(wp.get("label", f"wp_{len(self._waypoints)}"))
                use_rpy = wp.get("use_rpy", False)
                if use_rpy:
                    qx, qy, qz, qw = euler_to_quaternion(
                        wp.get("roll", 0.0),
                        wp.get("pitch", 0.0),
                        wp.get("yaw", 0.0),
                    )
                else:
                    qx = wp.get("qx", 0.0)
                    qy = wp.get("qy", 0.0)
                    qz = wp.get("qz", 0.0)
                    qw = wp.get("qw", 1.0)

                pose = make_pose(
                    wp["x"], wp["y"], wp["z"], qx, qy, qz, qw
                )
                self._waypoints.append({"label": label, "pose": pose})
                self.get_logger().info(f"  Loaded waypoint '{label}'")
            except KeyError as e:
                self.get_logger().warn(f"Skipping waypoint — missing key: {e}")

    # -----------------------------------------------------------------------
    # Core: Plan & Execute
    # -----------------------------------------------------------------------
    def _plan_and_execute(self, pose: Pose, frame_id: str = "") -> tuple[bool, str, float]:
        """
        Plan a path to *pose* and execute it.
        Returns (success, message, planning_time_seconds).
        Thread-safe via _move_lock.
        """
        if not frame_id:
            frame_id = self.base_frame

        with self._move_lock:
            ps = PoseStamped()
            ps.header.frame_id = frame_id
            ps.header.stamp = self.get_clock().now().to_msg()
            ps.pose = pose

            self._arm.set_start_state_to_current_state()
            self._arm.set_goal_state(
                pose_stamped_msg=ps, pose_link=self.ee_link
            )

            t_start = time.time()
            try:
                plan_result = self._arm.plan()
            except Exception as e:
                return False, f"Planning exception: {e}", 0.0
            planning_time = time.time() - t_start

            if not plan_result:
                return (
                    False,
                    f"MoveIt planning failed after {planning_time:.2f}s",
                    planning_time,
                )

            try:
                self._moveit.execute(plan_result.trajectory, controllers=[])
            except Exception as e:
                return False, f"Execution exception: {e}", planning_time

            return True, "Success", planning_time

    # -----------------------------------------------------------------------
    # Topic Callback
    # -----------------------------------------------------------------------
    def _target_pose_callback(self, msg: PoseStamped):
        frame = msg.header.frame_id or self.base_frame
        self.get_logger().info(
            f"[Topic] Moving to pose in frame '{frame}': "
            f"({msg.pose.position.x:.3f}, {msg.pose.position.y:.3f}, {msg.pose.position.z:.3f})"
        )
        ok, msg_str, t = self._plan_and_execute(msg.pose, frame)
        if ok:
            self.get_logger().info(f"[Topic] Move succeeded in {t:.2f}s")
        else:
            self.get_logger().error(f"[Topic] Move failed: {msg_str}")

    # -----------------------------------------------------------------------
    # Service Handlers
    # -----------------------------------------------------------------------
    def _handle_move_to_point(self, request: MoveToPoint.Request, response: MoveToPoint.Response):
        pose = request.pose
        if request.use_rpy:
            qx, qy, qz, qw = euler_to_quaternion(request.roll, request.pitch, request.yaw)
            pose = make_pose(
                pose.position.x, pose.position.y, pose.position.z, qx, qy, qz, qw
            )
        frame = request.frame_id or self.base_frame
        self.get_logger().info(
            f"[Service] move_to_point → "
            f"({pose.position.x:.3f}, {pose.position.y:.3f}, {pose.position.z:.3f}) "
            f"frame='{frame}'"
        )
        ok, msg, t = self._plan_and_execute(pose, frame)
        response.success = ok
        response.message = msg
        response.planning_time = t
        return response

    def _handle_add_waypoint(self, request: AddWaypoint.Request, response: AddWaypoint.Response):
        pose = request.pose
        if request.use_rpy:
            qx, qy, qz, qw = euler_to_quaternion(request.roll, request.pitch, request.yaw)
            pose = make_pose(
                pose.position.x, pose.position.y, pose.position.z, qx, qy, qz, qw
            )
        label = request.label or f"wp_{len(self._waypoints)}"
        self._waypoints.append({"label": label, "pose": pose})
        self.get_logger().info(f"[Service] Added waypoint '{label}' (total: {len(self._waypoints)})")
        response.success = True
        response.message = f"Added '{label}'"
        return response

    def _handle_execute_waypoints(self, request: ExecuteWaypoints.Request, response: ExecuteWaypoints.Response):
        if not self._waypoints:
            response.success = False
            response.message = "Waypoint queue is empty."
            response.waypoints_executed = 0
            return response

        self.get_logger().info(
            f"[Service] Executing {len(self._waypoints)} waypoints (loop={request.loop})"
        )
        executed = 0
        while True:
            for wp in list(self._waypoints):
                self.get_logger().info(f"  → Moving to '{wp['label']}'")
                ok, msg, _ = self._plan_and_execute(wp["pose"])
                if ok:
                    executed += 1
                else:
                    self.get_logger().error(f"  ✗ Failed at '{wp['label']}': {msg}")
                    response.success = False
                    response.message = f"Failed at waypoint '{wp['label']}': {msg}"
                    response.waypoints_executed = executed
                    return response
            if not request.loop:
                break

        response.success = True
        response.message = f"Executed {executed} waypoints."
        response.waypoints_executed = executed
        return response

    def _handle_list_waypoints(self, _request: ListWaypoints.Request, response: ListWaypoints.Response):
        response.labels = [wp["label"] for wp in self._waypoints]
        response.poses = [wp["pose"] for wp in self._waypoints]
        return response

    def _handle_clear_waypoints(self, _request: Empty.Request, response: Empty.Response):
        n = len(self._waypoints)
        self._waypoints.clear()
        self.get_logger().info(f"[Service] Cleared {n} waypoints.")
        return response

    # -----------------------------------------------------------------------
    # Interactive CLI
    # -----------------------------------------------------------------------
    def _interactive_cli(self):
        """Runs in a background thread. Provides a menu-driven interface."""
        # Give the node a moment to fully initialize
        time.sleep(2.0)

        menu = (
            "\n"
            "┌─────────────────────────────────────────────┐\n"
            "│  UR5e Waypoint Mover — Interactive CLI      │\n"
            "├─────────────────────────────────────────────┤\n"
            "│  1. Move to pose (immediate)                │\n"
            "│  2. Add waypoint to queue                   │\n"
            "│  3. Execute all waypoints                   │\n"
            "│  4. List waypoints                          │\n"
            "│  5. Clear waypoints                         │\n"
            "│  6. Load waypoints from YAML file           │\n"
            "│  q. Quit                                    │\n"
            "└─────────────────────────────────────────────┘"
        )

        while True:
            print(menu)
            try:
                choice = input("Choice: ").strip().lower()
            except EOFError:
                break

            if choice == "1":
                self._cli_move_to_pose()
            elif choice == "2":
                self._cli_add_waypoint()
            elif choice == "3":
                self._cli_execute_waypoints()
            elif choice == "4":
                self._cli_list_waypoints()
            elif choice == "5":
                self._waypoints.clear()
                print("✓ Waypoints cleared.")
            elif choice == "6":
                self._cli_load_yaml()
            elif choice in ("q", "quit", "exit"):
                print("Shutting down…")
                rclpy.shutdown()
                break
            else:
                print("  Unknown choice, try again.")

    def _cli_prompt_pose(self) -> tuple[Pose | None, bool]:
        """
        Prompt user for a pose via CLI.
        Returns (Pose, success_bool).
        Supports quaternion or RPY input.
        """
        print("  Enter position (x y z) in metres:")
        try:
            parts = input("    x y z: ").split()
            x, y, z = float(parts[0]), float(parts[1]), float(parts[2])
        except (ValueError, IndexError):
            print("  ✗ Invalid position. Use '0.4 0.1 0.5' format.")
            return None, False

        print("  Orientation format?")
        print("    [1] Quaternion (qx qy qz qw)  [2] RPY degrees (roll pitch yaw)")
        fmt = input("    Choice [1/2, default 1]: ").strip()

        if fmt == "2":
            try:
                parts = input("    roll pitch yaw (deg): ").split()
                roll, pitch, yaw = float(parts[0]), float(parts[1]), float(parts[2])
                qx, qy, qz, qw = euler_to_quaternion(roll, pitch, yaw)
            except (ValueError, IndexError):
                print("  ✗ Invalid RPY. Use '0 90 0' format.")
                return None, False
        else:
            raw = input("    qx qy qz qw [default: 0 0 0 1]: ").strip()
            if not raw:
                qx, qy, qz, qw = 0.0, 0.0, 0.0, 1.0
            else:
                try:
                    parts = raw.split()
                    qx, qy, qz, qw = (
                        float(parts[0]), float(parts[1]),
                        float(parts[2]), float(parts[3]),
                    )
                except (ValueError, IndexError):
                    print("  ✗ Invalid quaternion.")
                    return None, False

        return make_pose(x, y, z, qx, qy, qz, qw), True

    def _cli_move_to_pose(self):
        pose, ok = self._cli_prompt_pose()
        if not ok:
            return
        frame = input(f"  Frame ID [default: {self.base_frame}]: ").strip() or self.base_frame
        print(f"  Planning move to ({pose.position.x:.3f}, {pose.position.y:.3f}, {pose.position.z:.3f})…")
        success, msg, t = self._plan_and_execute(pose, frame)
        if success:
            print(f"  ✓ Move succeeded in {t:.2f}s")
        else:
            print(f"  ✗ Move failed: {msg}")

    def _cli_add_waypoint(self):
        pose, ok = self._cli_prompt_pose()
        if not ok:
            return
        label = input(f"  Waypoint label [default: wp_{len(self._waypoints)}]: ").strip()
        if not label:
            label = f"wp_{len(self._waypoints)}"
        self._waypoints.append({"label": label, "pose": pose})
        print(f"  ✓ Added '{label}' (total: {len(self._waypoints)} waypoints)")

    def _cli_execute_waypoints(self):
        if not self._waypoints:
            print("  ✗ Waypoint queue is empty. Add waypoints first.")
            return
        print(f"  Executing {len(self._waypoints)} waypoints:")
        for i, wp in enumerate(self._waypoints):
            p = wp["pose"].position
            print(f"    [{i+1}] {wp['label']}  ({p.x:.3f}, {p.y:.3f}, {p.z:.3f})")
        loop_str = input("  Loop continuously? [y/N]: ").strip().lower()
        loop = loop_str in ("y", "yes")

        executed = 0
        while True:
            for wp in list(self._waypoints):
                print(f"  → Moving to '{wp['label']}'…", end=" ", flush=True)
                ok, msg, _ = self._plan_and_execute(wp["pose"])
                if ok:
                    executed += 1
                    print("✓")
                else:
                    print(f"✗ ({msg})")
                    print("  Stopping execution.")
                    return
            if not loop:
                break
            print("  Loop complete, repeating…")

        print(f"  ✓ Executed {executed} waypoint(s).")

    def _cli_list_waypoints(self):
        if not self._waypoints:
            print("  (No waypoints in queue)")
            return
        print(f"  Waypoint queue ({len(self._waypoints)} total):")
        for i, wp in enumerate(self._waypoints):
            p = wp["pose"].position
            o = wp["pose"].orientation
            print(
                f"    [{i}] {wp['label']:20s}  "
                f"pos=({p.x:.3f}, {p.y:.3f}, {p.z:.3f})  "
                f"quat=({o.x:.3f}, {o.y:.3f}, {o.z:.3f}, {o.w:.3f})"
            )

    def _cli_load_yaml(self):
        """Load waypoints from a user-specified YAML file path at runtime."""
        import yaml
        path = input("  Path to YAML file: ").strip()
        try:
            with open(path, "r") as f:
                data = yaml.safe_load(f)
        except FileNotFoundError:
            print(f"  ✗ File not found: {path}")
            return
        except Exception as e:
            print(f"  ✗ Error reading file: {e}")
            return

        # Support two formats:
        # 1. Top-level list of waypoint dicts
        # 2. Dict with key 'waypoints' containing the list
        if isinstance(data, list):
            wps = data
        elif isinstance(data, dict) and "waypoints" in data:
            wps = data["waypoints"]
        else:
            print("  ✗ Unrecognised YAML format. See config/waypoints.yaml for reference.")
            return

        count = 0
        for wp in wps:
            try:
                label = str(wp.get("label", f"wp_{len(self._waypoints)}"))
                use_rpy = wp.get("use_rpy", False)
                if use_rpy:
                    qx, qy, qz, qw = euler_to_quaternion(
                        wp.get("roll", 0.0),
                        wp.get("pitch", 0.0),
                        wp.get("yaw", 0.0),
                    )
                else:
                    qx = wp.get("qx", 0.0)
                    qy = wp.get("qy", 0.0)
                    qz = wp.get("qz", 0.0)
                    qw = wp.get("qw", 1.0)
                pose = make_pose(wp["x"], wp["y"], wp["z"], qx, qy, qz, qw)
                self._waypoints.append({"label": label, "pose": pose})
                count += 1
            except KeyError as e:
                print(f"  ⚠ Skipping waypoint — missing key: {e}")

        print(f"  ✓ Loaded {count} waypoints from '{path}' (total: {len(self._waypoints)})")


# ---------------------------------------------------------------------------
# Auto-load MoveIt params (so ros2 run works without a launch file)
# ---------------------------------------------------------------------------
def _ensure_moveit_params():
    """
    If planning pipeline params are not already on sys.argv (i.e. the node was
    started with `ros2 run` rather than `ros2 launch`), generate them from the
    ur_moveit_config package and inject a temp params file into sys.argv before
    rclpy/rclcpp are initialised.
    """
    argv_str = " ".join(sys.argv)
    if "planning_pipelines" in argv_str or "ompl" in argv_str:
        return  # already provided by launch file

    try:
        from ament_index_python.packages import get_package_share_directory
        ur_moveit_share = get_package_share_directory("ur_moveit_config")
    except Exception:
        print("[WARN] ur_moveit_config not found — skipping auto MoveIt param load")
        return

    import tempfile

    # Generate SRDF via xacro
    srdf_xacro = os.path.join(ur_moveit_share, "srdf", "ur.srdf.xacro")
    try:
        result = subprocess.run(
            ["xacro", srdf_xacro, "name:=ur", "ur_type:=ur5e"],
            capture_output=True, text=True, check=True,
        )
        srdf = result.stdout
    except Exception as e:
        print(f"[WARN] xacro failed: {e} — robot_description_semantic will be empty")
        srdf = ""

    # Load OMPL and kinematics YAMLs
    with open(os.path.join(ur_moveit_share, "config", "ompl_planning.yaml")) as f:
        ompl_yaml = yaml.safe_load(f)
    with open(os.path.join(ur_moveit_share, "config", "kinematics.yaml")) as f:
        kinematics_yaml = yaml.safe_load(f)

    params = {
        "robot_description_semantic": srdf,
        "robot_description_kinematics": kinematics_yaml,
        "planning_pipelines": {"pipeline_names": ["ompl"]},
        "ompl": ompl_yaml,
    }

    tmp = tempfile.NamedTemporaryFile(
        mode="w", suffix=".yaml", delete=False, prefix="/tmp/moveit_params_"
    )
    yaml.dump(params, tmp)
    tmp.close()

    if "--ros-args" not in sys.argv:
        sys.argv += ["--ros-args"]
    sys.argv += ["--params-file", tmp.name]
    print(f"[INFO] Auto-loaded MoveIt params → {tmp.name}")


# ---------------------------------------------------------------------------
# Entry point
# ---------------------------------------------------------------------------
def main(args=None):
    _ensure_moveit_params()
    rclpy.init(args=args)
    node = WaypointMoverNode()

    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
