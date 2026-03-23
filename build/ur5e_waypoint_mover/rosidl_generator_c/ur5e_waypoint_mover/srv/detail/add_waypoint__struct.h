// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur5e_waypoint_mover:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/add_waypoint.h"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/AddWaypoint in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__AddWaypoint_Request
{
  rosidl_runtime_c__String label;
  geometry_msgs__msg__Pose pose;
  bool use_rpy;
  double roll;
  double pitch;
  double yaw;
} ur5e_waypoint_mover__srv__AddWaypoint_Request;

// Struct for a sequence of ur5e_waypoint_mover__srv__AddWaypoint_Request.
typedef struct ur5e_waypoint_mover__srv__AddWaypoint_Request__Sequence
{
  ur5e_waypoint_mover__srv__AddWaypoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__AddWaypoint_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/AddWaypoint in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__AddWaypoint_Response
{
  bool success;
  rosidl_runtime_c__String message;
} ur5e_waypoint_mover__srv__AddWaypoint_Response;

// Struct for a sequence of ur5e_waypoint_mover__srv__AddWaypoint_Response.
typedef struct ur5e_waypoint_mover__srv__AddWaypoint_Response__Sequence
{
  ur5e_waypoint_mover__srv__AddWaypoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__AddWaypoint_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur5e_waypoint_mover__srv__AddWaypoint_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur5e_waypoint_mover__srv__AddWaypoint_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddWaypoint in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__AddWaypoint_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur5e_waypoint_mover__srv__AddWaypoint_Request__Sequence request;
  ur5e_waypoint_mover__srv__AddWaypoint_Response__Sequence response;
} ur5e_waypoint_mover__srv__AddWaypoint_Event;

// Struct for a sequence of ur5e_waypoint_mover__srv__AddWaypoint_Event.
typedef struct ur5e_waypoint_mover__srv__AddWaypoint_Event__Sequence
{
  ur5e_waypoint_mover__srv__AddWaypoint_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__AddWaypoint_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__STRUCT_H_
