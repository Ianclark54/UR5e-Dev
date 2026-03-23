// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur5e_waypoint_mover:srv/ExecuteWaypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/execute_waypoints.h"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__STRUCT_H_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ExecuteWaypoints in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__ExecuteWaypoints_Request
{
  bool loop;
} ur5e_waypoint_mover__srv__ExecuteWaypoints_Request;

// Struct for a sequence of ur5e_waypoint_mover__srv__ExecuteWaypoints_Request.
typedef struct ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__Sequence
{
  ur5e_waypoint_mover__srv__ExecuteWaypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecuteWaypoints in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__ExecuteWaypoints_Response
{
  bool success;
  rosidl_runtime_c__String message;
  int32_t waypoints_executed;
} ur5e_waypoint_mover__srv__ExecuteWaypoints_Response;

// Struct for a sequence of ur5e_waypoint_mover__srv__ExecuteWaypoints_Response.
typedef struct ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__Sequence
{
  ur5e_waypoint_mover__srv__ExecuteWaypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ExecuteWaypoints in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__ExecuteWaypoints_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__Sequence request;
  ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__Sequence response;
} ur5e_waypoint_mover__srv__ExecuteWaypoints_Event;

// Struct for a sequence of ur5e_waypoint_mover__srv__ExecuteWaypoints_Event.
typedef struct ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__Sequence
{
  ur5e_waypoint_mover__srv__ExecuteWaypoints_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__STRUCT_H_
