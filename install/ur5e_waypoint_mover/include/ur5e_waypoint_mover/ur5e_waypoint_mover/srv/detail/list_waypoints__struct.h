// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur5e_waypoint_mover:srv/ListWaypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/list_waypoints.h"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__STRUCT_H_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListWaypoints in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__ListWaypoints_Request
{
  uint8_t structure_needs_at_least_one_member;
} ur5e_waypoint_mover__srv__ListWaypoints_Request;

// Struct for a sequence of ur5e_waypoint_mover__srv__ListWaypoints_Request.
typedef struct ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence
{
  ur5e_waypoint_mover__srv__ListWaypoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'labels'
#include "rosidl_runtime_c/string.h"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/ListWaypoints in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__ListWaypoints_Response
{
  rosidl_runtime_c__String__Sequence labels;
  geometry_msgs__msg__Pose__Sequence poses;
} ur5e_waypoint_mover__srv__ListWaypoints_Response;

// Struct for a sequence of ur5e_waypoint_mover__srv__ListWaypoints_Response.
typedef struct ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence
{
  ur5e_waypoint_mover__srv__ListWaypoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ur5e_waypoint_mover__srv__ListWaypoints_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ur5e_waypoint_mover__srv__ListWaypoints_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListWaypoints in the package ur5e_waypoint_mover.
typedef struct ur5e_waypoint_mover__srv__ListWaypoints_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence request;
  ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence response;
} ur5e_waypoint_mover__srv__ListWaypoints_Event;

// Struct for a sequence of ur5e_waypoint_mover__srv__ListWaypoints_Event.
typedef struct ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence
{
  ur5e_waypoint_mover__srv__ListWaypoints_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__STRUCT_H_
