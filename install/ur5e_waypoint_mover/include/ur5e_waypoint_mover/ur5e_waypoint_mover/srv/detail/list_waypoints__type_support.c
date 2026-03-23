// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur5e_waypoint_mover:srv/ListWaypoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur5e_waypoint_mover/srv/detail/list_waypoints__rosidl_typesupport_introspection_c.h"
#include "ur5e_waypoint_mover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur5e_waypoint_mover/srv/detail/list_waypoints__functions.h"
#include "ur5e_waypoint_mover/srv/detail/list_waypoints__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur5e_waypoint_mover__srv__ListWaypoints_Request__init(message_memory);
}

void ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_fini_function(void * message_memory)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur5e_waypoint_mover__srv__ListWaypoints_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_members = {
  "ur5e_waypoint_mover__srv",  // message namespace
  "ListWaypoints_Request",  // message name
  1,  // number of fields
  sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Request),
  false,  // has_any_key_member_
  ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_member_array,  // message members
  ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_type_support_handle = {
  0,
  &ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_members,
  get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__ListWaypoints_Request__get_type_hash,
  &ur5e_waypoint_mover__srv__ListWaypoints_Request__get_type_description,
  &ur5e_waypoint_mover__srv__ListWaypoints_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur5e_waypoint_mover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Request)() {
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_type_support_handle.typesupport_identifier) {
    ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur5e_waypoint_mover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__functions.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__struct.h"


// Include directives for member types
// Member `labels`
#include "rosidl_runtime_c/string_functions.h"
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur5e_waypoint_mover__srv__ListWaypoints_Response__init(message_memory);
}

void ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_fini_function(void * message_memory)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Response__fini(message_memory);
}

size_t ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__size_function__ListWaypoints_Response__labels(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Response__labels(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Response__labels(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__fetch_function__ListWaypoints_Response__labels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Response__labels(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__assign_function__ListWaypoints_Response__labels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Response__labels(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__resize_function__ListWaypoints_Response__labels(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__size_function__ListWaypoints_Response__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Response__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Response__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__fetch_function__ListWaypoints_Response__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Response__poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__assign_function__ListWaypoints_Response__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Response__poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__resize_function__ListWaypoints_Response__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_member_array[2] = {
  {
    "labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur5e_waypoint_mover__srv__ListWaypoints_Response, labels),  // bytes offset in struct
    NULL,  // default value
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__size_function__ListWaypoints_Response__labels,  // size() function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Response__labels,  // get_const(index) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Response__labels,  // get(index) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__fetch_function__ListWaypoints_Response__labels,  // fetch(index, &value) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__assign_function__ListWaypoints_Response__labels,  // assign(index, value) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__resize_function__ListWaypoints_Response__labels  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur5e_waypoint_mover__srv__ListWaypoints_Response, poses),  // bytes offset in struct
    NULL,  // default value
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__size_function__ListWaypoints_Response__poses,  // size() function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Response__poses,  // get_const(index) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Response__poses,  // get(index) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__fetch_function__ListWaypoints_Response__poses,  // fetch(index, &value) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__assign_function__ListWaypoints_Response__poses,  // assign(index, value) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__resize_function__ListWaypoints_Response__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_members = {
  "ur5e_waypoint_mover__srv",  // message namespace
  "ListWaypoints_Response",  // message name
  2,  // number of fields
  sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Response),
  false,  // has_any_key_member_
  ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_member_array,  // message members
  ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_type_support_handle = {
  0,
  &ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_members,
  get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__ListWaypoints_Response__get_type_hash,
  &ur5e_waypoint_mover__srv__ListWaypoints_Response__get_type_description,
  &ur5e_waypoint_mover__srv__ListWaypoints_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur5e_waypoint_mover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Response)() {
  ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_type_support_handle.typesupport_identifier) {
    ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ur5e_waypoint_mover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__functions.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "ur5e_waypoint_mover/srv/list_waypoints.h"
// Member `request`
// Member `response`
// already included above
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur5e_waypoint_mover__srv__ListWaypoints_Event__init(message_memory);
}

void ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_fini_function(void * message_memory)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(message_memory);
}

size_t ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__size_function__ListWaypoints_Event__request(
  const void * untyped_member)
{
  const ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * member =
    (const ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Event__request(
  const void * untyped_member, size_t index)
{
  const ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * member =
    (const ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Event__request(
  void * untyped_member, size_t index)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * member =
    (ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__fetch_function__ListWaypoints_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur5e_waypoint_mover__srv__ListWaypoints_Request * item =
    ((const ur5e_waypoint_mover__srv__ListWaypoints_Request *)
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Event__request(untyped_member, index));
  ur5e_waypoint_mover__srv__ListWaypoints_Request * value =
    (ur5e_waypoint_mover__srv__ListWaypoints_Request *)(untyped_value);
  *value = *item;
}

void ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__assign_function__ListWaypoints_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Request * item =
    ((ur5e_waypoint_mover__srv__ListWaypoints_Request *)
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Event__request(untyped_member, index));
  const ur5e_waypoint_mover__srv__ListWaypoints_Request * value =
    (const ur5e_waypoint_mover__srv__ListWaypoints_Request *)(untyped_value);
  *item = *value;
}

bool ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__resize_function__ListWaypoints_Event__request(
  void * untyped_member, size_t size)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * member =
    (ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence *)(untyped_member);
  ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__fini(member);
  return ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__init(member, size);
}

size_t ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__size_function__ListWaypoints_Event__response(
  const void * untyped_member)
{
  const ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * member =
    (const ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Event__response(
  const void * untyped_member, size_t index)
{
  const ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * member =
    (const ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Event__response(
  void * untyped_member, size_t index)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * member =
    (ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__fetch_function__ListWaypoints_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ur5e_waypoint_mover__srv__ListWaypoints_Response * item =
    ((const ur5e_waypoint_mover__srv__ListWaypoints_Response *)
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Event__response(untyped_member, index));
  ur5e_waypoint_mover__srv__ListWaypoints_Response * value =
    (ur5e_waypoint_mover__srv__ListWaypoints_Response *)(untyped_value);
  *value = *item;
}

void ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__assign_function__ListWaypoints_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Response * item =
    ((ur5e_waypoint_mover__srv__ListWaypoints_Response *)
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Event__response(untyped_member, index));
  const ur5e_waypoint_mover__srv__ListWaypoints_Response * value =
    (const ur5e_waypoint_mover__srv__ListWaypoints_Response *)(untyped_value);
  *item = *value;
}

bool ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__resize_function__ListWaypoints_Event__response(
  void * untyped_member, size_t size)
{
  ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * member =
    (ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence *)(untyped_member);
  ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__fini(member);
  return ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur5e_waypoint_mover__srv__ListWaypoints_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur5e_waypoint_mover__srv__ListWaypoints_Event, request),  // bytes offset in struct
    NULL,  // default value
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__size_function__ListWaypoints_Event__request,  // size() function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Event__request,  // get_const(index) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Event__request,  // get(index) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__fetch_function__ListWaypoints_Event__request,  // fetch(index, &value) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__assign_function__ListWaypoints_Event__request,  // assign(index, value) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__resize_function__ListWaypoints_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(ur5e_waypoint_mover__srv__ListWaypoints_Event, response),  // bytes offset in struct
    NULL,  // default value
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__size_function__ListWaypoints_Event__response,  // size() function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_const_function__ListWaypoints_Event__response,  // get_const(index) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__get_function__ListWaypoints_Event__response,  // get(index) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__fetch_function__ListWaypoints_Event__response,  // fetch(index, &value) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__assign_function__ListWaypoints_Event__response,  // assign(index, value) function pointer
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__resize_function__ListWaypoints_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_members = {
  "ur5e_waypoint_mover__srv",  // message namespace
  "ListWaypoints_Event",  // message name
  3,  // number of fields
  sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Event),
  false,  // has_any_key_member_
  ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_member_array,  // message members
  ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_type_support_handle = {
  0,
  &ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_members,
  get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__ListWaypoints_Event__get_type_hash,
  &ur5e_waypoint_mover__srv__ListWaypoints_Event__get_type_description,
  &ur5e_waypoint_mover__srv__ListWaypoints_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur5e_waypoint_mover
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Event)() {
  ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Request)();
  ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Response)();
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_type_support_handle.typesupport_identifier) {
    ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur5e_waypoint_mover/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_service_members = {
  "ur5e_waypoint_mover__srv",  // service namespace
  "ListWaypoints",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_type_support_handle,
  NULL,  // response message
  // ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_type_support_handle
  NULL  // event_message
  // ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_type_support_handle
};


static rosidl_service_type_support_t ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_service_type_support_handle = {
  0,
  &ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_service_members,
  get_service_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__ListWaypoints_Request__rosidl_typesupport_introspection_c__ListWaypoints_Request_message_type_support_handle,
  &ur5e_waypoint_mover__srv__ListWaypoints_Response__rosidl_typesupport_introspection_c__ListWaypoints_Response_message_type_support_handle,
  &ur5e_waypoint_mover__srv__ListWaypoints_Event__rosidl_typesupport_introspection_c__ListWaypoints_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur5e_waypoint_mover,
    srv,
    ListWaypoints
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur5e_waypoint_mover,
    srv,
    ListWaypoints
  ),
  &ur5e_waypoint_mover__srv__ListWaypoints__get_type_hash,
  &ur5e_waypoint_mover__srv__ListWaypoints__get_type_description,
  &ur5e_waypoint_mover__srv__ListWaypoints__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur5e_waypoint_mover
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints)(void) {
  if (!ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_service_type_support_handle.typesupport_identifier) {
    ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ListWaypoints_Event)()->data;
  }

  return &ur5e_waypoint_mover__srv__detail__list_waypoints__rosidl_typesupport_introspection_c__ListWaypoints_service_type_support_handle;
}
