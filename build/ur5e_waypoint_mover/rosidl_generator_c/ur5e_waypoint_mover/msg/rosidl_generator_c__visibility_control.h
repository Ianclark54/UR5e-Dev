// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef UR5E_WAYPOINT_MOVER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define UR5E_WAYPOINT_MOVER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_ur5e_waypoint_mover __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_ur5e_waypoint_mover __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_ur5e_waypoint_mover __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_ur5e_waypoint_mover __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_ur5e_waypoint_mover
    #define ROSIDL_GENERATOR_C_PUBLIC_ur5e_waypoint_mover ROSIDL_GENERATOR_C_EXPORT_ur5e_waypoint_mover
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_ur5e_waypoint_mover ROSIDL_GENERATOR_C_IMPORT_ur5e_waypoint_mover
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_ur5e_waypoint_mover __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_ur5e_waypoint_mover
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_ur5e_waypoint_mover __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_ur5e_waypoint_mover
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // UR5E_WAYPOINT_MOVER__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
