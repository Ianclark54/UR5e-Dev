"""
launch/motion_planner.launch.py
================================
Launches the ur5e_waypoint_mover motion planner node.

Usage:
  ros2 launch ur5e_waypoint_mover motion_planner.launch.py
"""

import os
import yaml

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import (
    LaunchConfiguration,
    PathJoinSubstitution,
    Command,
    FindExecutable,
)
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch_ros.parameter_descriptions import ParameterValue


def load_yaml(package_name, file_path):
    pkg_path = get_package_share_directory(package_name)
    full_path = os.path.join(pkg_path, file_path)
    with open(full_path) as f:
        return yaml.safe_load(f)


def generate_launch_description():

    pkg_share = FindPackageShare("ur5e_waypoint_mover")
    ur_moveit_share = get_package_share_directory("ur_moveit_config")

    # ── Launch arguments ──────────────────────────────────────────────────────
    planning_group_arg = DeclareLaunchArgument(
        "planning_group", default_value="ur_manipulator"
    )
    ee_link_arg = DeclareLaunchArgument(
        "end_effector_link", default_value="tool0"
    )
    base_frame_arg = DeclareLaunchArgument(
        "base_frame", default_value="base_link"
    )
    planning_time_arg = DeclareLaunchArgument(
        "planning_time", default_value="5.0"
    )
    vel_scale_arg = DeclareLaunchArgument(
        "max_velocity_scaling", default_value="0.3"
    )
    acc_scale_arg = DeclareLaunchArgument(
        "max_acceleration_scaling", default_value="0.3"
    )
    waypoints_file_arg = DeclareLaunchArgument(
        "waypoints_file",
        default_value=PathJoinSubstitution([pkg_share, "config", "waypoints.yaml"]),
    )

    # ── Robot description semantic (SRDF via xacro) ───────────────────────────
    srdf_xacro = os.path.join(ur_moveit_share, "srdf", "ur.srdf.xacro")
    robot_description_semantic = {
        "robot_description_semantic": ParameterValue(
            Command([FindExecutable(name="xacro"), " ", srdf_xacro,
                     " name:=ur ur_type:=ur5e"]),
            value_type=str,
        )
    }

    # ── Kinematics ────────────────────────────────────────────────────────────
    kinematics_yaml = load_yaml("ur_moveit_config", "config/kinematics.yaml")

    # ── Planning pipelines (OMPL) ─────────────────────────────────────────────
    ompl_yaml = load_yaml("ur_moveit_config", "config/ompl_planning.yaml")
    planning_pipelines = {
        "planning_pipelines": {"pipeline_names": ["ompl"]},
        "ompl": ompl_yaml,
    }

    # ── Node ──────────────────────────────────────────────────────────────────
    motion_planner_node = Node(
        package="ur5e_waypoint_mover",
        executable="motion_planner_node.py",
        name="ur5e_waypoint_mover",
        output="screen",
        emulate_tty=True,
        parameters=[
            robot_description_semantic,
            {"robot_description_kinematics": kinematics_yaml},
            planning_pipelines,
            LaunchConfiguration("waypoints_file"),
            {
                "planning_group": LaunchConfiguration("planning_group"),
                "end_effector_link": LaunchConfiguration("end_effector_link"),
                "base_frame": LaunchConfiguration("base_frame"),
                "planning_time": LaunchConfiguration("planning_time"),
                "max_velocity_scaling": LaunchConfiguration("max_velocity_scaling"),
                "max_acceleration_scaling": LaunchConfiguration("max_acceleration_scaling"),
            },
        ],
    )

    return LaunchDescription([
        planning_group_arg,
        ee_link_arg,
        base_frame_arg,
        planning_time_arg,
        vel_scale_arg,
        acc_scale_arg,
        waypoints_file_arg,
        motion_planner_node,
    ])
