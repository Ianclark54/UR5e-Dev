// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ur5e_waypoint_mover:srv/ExecuteWaypoints.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur5e_waypoint_mover/srv/detail/execute_waypoints__struct.h"
#include "ur5e_waypoint_mover/srv/detail/execute_waypoints__type_support.h"
#include "ur5e_waypoint_mover/srv/detail/execute_waypoints__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur5e_waypoint_mover
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteWaypoints_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteWaypoints_Request_type_support_ids_t;

static const _ExecuteWaypoints_Request_type_support_ids_t _ExecuteWaypoints_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteWaypoints_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteWaypoints_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteWaypoints_Request_type_support_symbol_names_t _ExecuteWaypoints_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Request)),
  }
};

typedef struct _ExecuteWaypoints_Request_type_support_data_t
{
  void * data[2];
} _ExecuteWaypoints_Request_type_support_data_t;

static _ExecuteWaypoints_Request_type_support_data_t _ExecuteWaypoints_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteWaypoints_Request_message_typesupport_map = {
  2,
  "ur5e_waypoint_mover",
  &_ExecuteWaypoints_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteWaypoints_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteWaypoints_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteWaypoints_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteWaypoints_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_type_hash,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_type_description,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur5e_waypoint_mover

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Request)() {
  return &::ur5e_waypoint_mover::srv::rosidl_typesupport_c::ExecuteWaypoints_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/execute_waypoints__struct.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/execute_waypoints__type_support.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/execute_waypoints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur5e_waypoint_mover
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteWaypoints_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteWaypoints_Response_type_support_ids_t;

static const _ExecuteWaypoints_Response_type_support_ids_t _ExecuteWaypoints_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteWaypoints_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteWaypoints_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteWaypoints_Response_type_support_symbol_names_t _ExecuteWaypoints_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Response)),
  }
};

typedef struct _ExecuteWaypoints_Response_type_support_data_t
{
  void * data[2];
} _ExecuteWaypoints_Response_type_support_data_t;

static _ExecuteWaypoints_Response_type_support_data_t _ExecuteWaypoints_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteWaypoints_Response_message_typesupport_map = {
  2,
  "ur5e_waypoint_mover",
  &_ExecuteWaypoints_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteWaypoints_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteWaypoints_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteWaypoints_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteWaypoints_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_type_hash,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_type_description,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur5e_waypoint_mover

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Response)() {
  return &::ur5e_waypoint_mover::srv::rosidl_typesupport_c::ExecuteWaypoints_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/execute_waypoints__struct.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/execute_waypoints__type_support.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/execute_waypoints__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur5e_waypoint_mover
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteWaypoints_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteWaypoints_Event_type_support_ids_t;

static const _ExecuteWaypoints_Event_type_support_ids_t _ExecuteWaypoints_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteWaypoints_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteWaypoints_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteWaypoints_Event_type_support_symbol_names_t _ExecuteWaypoints_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Event)),
  }
};

typedef struct _ExecuteWaypoints_Event_type_support_data_t
{
  void * data[2];
} _ExecuteWaypoints_Event_type_support_data_t;

static _ExecuteWaypoints_Event_type_support_data_t _ExecuteWaypoints_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteWaypoints_Event_message_typesupport_map = {
  2,
  "ur5e_waypoint_mover",
  &_ExecuteWaypoints_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteWaypoints_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteWaypoints_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteWaypoints_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteWaypoints_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_type_hash,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_type_description,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur5e_waypoint_mover

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ur5e_waypoint_mover, srv, ExecuteWaypoints_Event)() {
  return &::ur5e_waypoint_mover::srv::rosidl_typesupport_c::ExecuteWaypoints_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/execute_waypoints__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ur5e_waypoint_mover
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ExecuteWaypoints_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteWaypoints_type_support_ids_t;

static const _ExecuteWaypoints_type_support_ids_t _ExecuteWaypoints_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteWaypoints_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteWaypoints_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteWaypoints_type_support_symbol_names_t _ExecuteWaypoints_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ur5e_waypoint_mover, srv, ExecuteWaypoints)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur5e_waypoint_mover, srv, ExecuteWaypoints)),
  }
};

typedef struct _ExecuteWaypoints_type_support_data_t
{
  void * data[2];
} _ExecuteWaypoints_type_support_data_t;

static _ExecuteWaypoints_type_support_data_t _ExecuteWaypoints_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteWaypoints_service_typesupport_map = {
  2,
  "ur5e_waypoint_mover",
  &_ExecuteWaypoints_service_typesupport_ids.typesupport_identifier[0],
  &_ExecuteWaypoints_service_typesupport_symbol_names.symbol_name[0],
  &_ExecuteWaypoints_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecuteWaypoints_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteWaypoints_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ExecuteWaypoints_Request_message_type_support_handle,
  &ExecuteWaypoints_Response_message_type_support_handle,
  &ExecuteWaypoints_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur5e_waypoint_mover,
    srv,
    ExecuteWaypoints
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ur5e_waypoint_mover,
    srv,
    ExecuteWaypoints
  ),
  &ur5e_waypoint_mover__srv__ExecuteWaypoints__get_type_hash,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints__get_type_description,
  &ur5e_waypoint_mover__srv__ExecuteWaypoints__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ur5e_waypoint_mover

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ur5e_waypoint_mover, srv, ExecuteWaypoints)() {
  return &::ur5e_waypoint_mover::srv::rosidl_typesupport_c::ExecuteWaypoints_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
