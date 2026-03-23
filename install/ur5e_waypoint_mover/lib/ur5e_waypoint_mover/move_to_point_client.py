#!/usr/bin/env python3
"""
move_to_point_client.py
=======================
Standalone ROS 2 client script for sending a single point-to-point move
to the ur5e_waypoint_mover node via the /ur5e_mover/move_to_point service.

Usage (run after sourcing your workspace):
  python3 move_to_point_client.py --x 0.4 --y 0.0 --z 0.5
  python3 move_to_point_client.py --x 0.4 --y 0.0 --z 0.5 --rpy 0 90 0
  python3 move_to_point_client.py --x 0.4 --y 0.0 --z 0.5 --quat 0 0.707 0 0.707

Can also be imported and used programmatically:
  from move_to_point_client import move_to_point
  move_to_point(x=0.4, y=0.0, z=0.5, roll=0, pitch=90, yaw=0, use_rpy=True)
"""

import argparse
import sys

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Pose
from ur5e_waypoint_mover.srv import MoveToPoint


def move_to_point(
    x: float,
    y: float,
    z: float,
    qx: float = 0.0,
    qy: float = 0.0,
    qz: float = 0.0,
    qw: float = 1.0,
    roll: float = 0.0,
    pitch: float = 0.0,
    yaw: float = 0.0,
    use_rpy: bool = False,
    frame_id: str = "base_link",
    timeout: float = 30.0,
) -> tuple[bool, str, float]:
    """
    Send a MoveToPoint request to the ur5e_waypoint_mover node.

    Returns (success, message, planning_time).
    Can be called from other scripts after rclpy.init().
    """
    rclpy.init()
    node = Node("move_to_point_client")
    client = node.create_client(MoveToPoint, "/ur5e_mover/move_to_point")

    if not client.wait_for_service(timeout_sec=10.0):
        node.get_logger().error(
            "Service /ur5e_mover/move_to_point not available. "
            "Is motion_planner_node running?"
        )
        node.destroy_node()
        rclpy.shutdown()
        return False, "Service unavailable", 0.0

    req = MoveToPoint.Request()
    req.frame_id = frame_id
    req.use_rpy = use_rpy

    pose = Pose()
    pose.position.x = float(x)
    pose.position.y = float(y)
    pose.position.z = float(z)

    if use_rpy:
        req.roll = float(roll)
        req.pitch = float(pitch)
        req.yaw = float(yaw)
        # Pose orientation is ignored when use_rpy=True (node converts internally)
        pose.orientation.w = 1.0
    else:
        pose.orientation.x = float(qx)
        pose.orientation.y = float(qy)
        pose.orientation.z = float(qz)
        pose.orientation.w = float(qw)

    req.pose = pose

    node.get_logger().info(
        f"Requesting move to ({x:.4f}, {y:.4f}, {z:.4f}) "
        f"frame='{frame_id}' use_rpy={use_rpy}"
    )

    future = client.call_async(req)
    rclpy.spin_until_future_complete(node, future, timeout_sec=timeout)

    if future.result() is None:
        node.get_logger().error("Service call timed out or failed.")
        node.destroy_node()
        rclpy.shutdown()
        return False, "Timeout", 0.0

    result = future.result()
    if result.success:
        node.get_logger().info(
            f"Move succeeded. Planning time: {result.planning_time:.2f}s"
        )
    else:
        node.get_logger().error(f"Move failed: {result.message}")

    node.destroy_node()
    rclpy.shutdown()
    return result.success, result.message, result.planning_time


def main():
    parser = argparse.ArgumentParser(
        description="Send a point-to-point move command to the UR5e via MoveIt2."
    )
    parser.add_argument("--x", type=float, required=True, help="X position (metres)")
    parser.add_argument("--y", type=float, required=True, help="Y position (metres)")
    parser.add_argument("--z", type=float, required=True, help="Z position (metres)")
    parser.add_argument(
        "--rpy", type=float, nargs=3, metavar=("ROLL", "PITCH", "YAW"),
        help="Orientation as roll pitch yaw in degrees"
    )
    parser.add_argument(
        "--quat", type=float, nargs=4, metavar=("QX", "QY", "QZ", "QW"),
        help="Orientation as quaternion qx qy qz qw"
    )
    parser.add_argument(
        "--frame", type=str, default="base_link",
        help="Reference frame (default: base_link)"
    )
    parser.add_argument(
        "--timeout", type=float, default=30.0,
        help="Seconds to wait for the move to complete (default: 30)"
    )
    args = parser.parse_args()

    if args.rpy and args.quat:
        print("Error: specify either --rpy or --quat, not both.")
        sys.exit(1)

    kwargs = dict(x=args.x, y=args.y, z=args.z, frame_id=args.frame, timeout=args.timeout)

    if args.rpy:
        kwargs.update(roll=args.rpy[0], pitch=args.rpy[1], yaw=args.rpy[2], use_rpy=True)
    elif args.quat:
        kwargs.update(qx=args.quat[0], qy=args.quat[1], qz=args.quat[2], qw=args.quat[3])
    else:
        # Default orientation: tool pointing down
        kwargs.update(qx=0.0, qy=0.7071, qz=0.0, qw=0.7071)

    success, message, planning_time = move_to_point(**kwargs)
    sys.exit(0 if success else 1)


if __name__ == "__main__":
    main()
