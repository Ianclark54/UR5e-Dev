// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur5e_waypoint_mover:srv/MoveToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/move_to_point.h"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__STRUCT_H_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveToPoint in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__MoveToPoint_Request
{
  geometry_msgs__msg__Pose pose;
  rosidl_runtime_c__String frame_id;
  bool use_rpy;
  double roll;
  double pitch;
  double yaw;
} ur5e_waypoint_mover__srv__MoveToPoint_Request;

// Struct for a sequence of ur5e_waypoint_mover__srv__MoveToPoint_Request.
typedef struct ur5e_waypoint_mover__srv__MoveToPoint_Request__Sequence
{
  ur5e_waypoint_mover__srv__MoveToPoint_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__MoveToPoint_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveToPoint in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__MoveToPoint_Response
{
  bool success;
  rosidl_runtime_c__String message;
  double planning_time;
} ur5e_waypoint_mover__srv__MoveToPoint_Response;

// Struct for a sequence of ur5e_waypoint_mover__srv__MoveToPoint_Response.
typedef struct ur5e_waypoint_mover__srv__MoveToPoint_Response__Sequence
{
  ur5e_waypoint_mover__srv__MoveToPoint_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__MoveToPoint_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur5e_waypoint_mover__srv__MoveToPoint_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur5e_waypoint_mover__srv__MoveToPoint_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MoveToPoint in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__MoveToPoint_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur5e_waypoint_mover__srv__MoveToPoint_Request__Sequence request;
  ur5e_waypoint_mover__srv__MoveToPoint_Response__Sequence response;
} ur5e_waypoint_mover__srv__MoveToPoint_Event;

// Struct for a sequence of ur5e_waypoint_mover__srv__MoveToPoint_Event.
typedef struct ur5e_waypoint_mover__srv__MoveToPoint_Event__Sequence
{
  ur5e_waypoint_mover__srv__MoveToPoint_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__MoveToPoint_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__STRUCT_H_
