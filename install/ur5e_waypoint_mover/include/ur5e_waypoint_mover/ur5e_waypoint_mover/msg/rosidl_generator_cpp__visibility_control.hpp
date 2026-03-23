// generated from rosidl_generator_cpp/resource/rosidl_generator_cpp__visibility_control.hpp.in
// generated code does not contain a copyright notice

#ifndef UR5E_WAYPOINT_MOVER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
#define UR5E_WAYPOINT_MOVER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_CPP_EXPORT_ur5e_waypoint_mover __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_CPP_IMPORT_ur5e_waypoint_mover __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_CPP_EXPORT_ur5e_waypoint_mover __declspec(dllexport)
    #define ROSIDL_GENERATOR_CPP_IMPORT_ur5e_waypoint_mover __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_CPP_BUILDING_DLL_ur5e_waypoint_mover
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ur5e_waypoint_mover ROSIDL_GENERATOR_CPP_EXPORT_ur5e_waypoint_mover
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ur5e_waypoint_mover ROSIDL_GENERATOR_CPP_IMPORT_ur5e_waypoint_mover
  #endif
#else
  #define ROSIDL_GENERATOR_CPP_EXPORT_ur5e_waypoint_mover __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_CPP_IMPORT_ur5e_waypoint_mover
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ur5e_waypoint_mover __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_CPP_PUBLIC_ur5e_waypoint_mover
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // UR5E_WAYPOINT_MOVER__MSG__ROSIDL_GENERATOR_CPP__VISIBILITY_CONTROL_HPP_
