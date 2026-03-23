// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from ur5e_waypoint_mover:srv/MoveToPoint.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ur5e_waypoint_mover/srv/detail/move_to_point__functions.h"
#include "ur5e_waypoint_mover/srv/detail/move_to_point__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ur5e_waypoint_mover
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToPoint_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPoint_Request_type_support_ids_t;

static const _MoveToPoint_Request_type_support_ids_t _MoveToPoint_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToPoint_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPoint_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPoint_Request_type_support_symbol_names_t _MoveToPoint_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Request)),
  }
};

typedef struct _MoveToPoint_Request_type_support_data_t
{
  void * data[2];
} _MoveToPoint_Request_type_support_data_t;

static _MoveToPoint_Request_type_support_data_t _MoveToPoint_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPoint_Request_message_typesupport_map = {
  2,
  "ur5e_waypoint_mover",
  &_MoveToPoint_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPoint_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPoint_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPoint_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPoint_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__MoveToPoint_Request__get_type_hash,
  &ur5e_waypoint_mover__srv__MoveToPoint_Request__get_type_description,
  &ur5e_waypoint_mover__srv__MoveToPoint_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Request>()
{
  return &::ur5e_waypoint_mover::srv::rosidl_typesupport_cpp::MoveToPoint_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Request)() {
  return get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/move_to_point__functions.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/move_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur5e_waypoint_mover
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToPoint_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPoint_Response_type_support_ids_t;

static const _MoveToPoint_Response_type_support_ids_t _MoveToPoint_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToPoint_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPoint_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPoint_Response_type_support_symbol_names_t _MoveToPoint_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Response)),
  }
};

typedef struct _MoveToPoint_Response_type_support_data_t
{
  void * data[2];
} _MoveToPoint_Response_type_support_data_t;

static _MoveToPoint_Response_type_support_data_t _MoveToPoint_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPoint_Response_message_typesupport_map = {
  2,
  "ur5e_waypoint_mover",
  &_MoveToPoint_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPoint_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPoint_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPoint_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPoint_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__MoveToPoint_Response__get_type_hash,
  &ur5e_waypoint_mover__srv__MoveToPoint_Response__get_type_description,
  &ur5e_waypoint_mover__srv__MoveToPoint_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Response>()
{
  return &::ur5e_waypoint_mover::srv::rosidl_typesupport_cpp::MoveToPoint_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Response)() {
  return get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/move_to_point__functions.h"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/move_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur5e_waypoint_mover
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToPoint_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPoint_Event_type_support_ids_t;

static const _MoveToPoint_Event_type_support_ids_t _MoveToPoint_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToPoint_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPoint_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPoint_Event_type_support_symbol_names_t _MoveToPoint_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Event)),
  }
};

typedef struct _MoveToPoint_Event_type_support_data_t
{
  void * data[2];
} _MoveToPoint_Event_type_support_data_t;

static _MoveToPoint_Event_type_support_data_t _MoveToPoint_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPoint_Event_message_typesupport_map = {
  2,
  "ur5e_waypoint_mover",
  &_MoveToPoint_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveToPoint_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveToPoint_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveToPoint_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPoint_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &ur5e_waypoint_mover__srv__MoveToPoint_Event__get_type_hash,
  &ur5e_waypoint_mover__srv__MoveToPoint_Event__get_type_description,
  &ur5e_waypoint_mover__srv__MoveToPoint_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Event>()
{
  return &::ur5e_waypoint_mover::srv::rosidl_typesupport_cpp::MoveToPoint_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, ur5e_waypoint_mover, srv, MoveToPoint_Event)() {
  return get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "ur5e_waypoint_mover/srv/detail/move_to_point__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace ur5e_waypoint_mover
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveToPoint_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveToPoint_type_support_ids_t;

static const _MoveToPoint_type_support_ids_t _MoveToPoint_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveToPoint_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveToPoint_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveToPoint_type_support_symbol_names_t _MoveToPoint_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ur5e_waypoint_mover, srv, MoveToPoint)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur5e_waypoint_mover, srv, MoveToPoint)),
  }
};

typedef struct _MoveToPoint_type_support_data_t
{
  void * data[2];
} _MoveToPoint_type_support_data_t;

static _MoveToPoint_type_support_data_t _MoveToPoint_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveToPoint_service_typesupport_map = {
  2,
  "ur5e_waypoint_mover",
  &_MoveToPoint_service_typesupport_ids.typesupport_identifier[0],
  &_MoveToPoint_service_typesupport_symbol_names.symbol_name[0],
  &_MoveToPoint_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveToPoint_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveToPoint_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<ur5e_waypoint_mover::srv::MoveToPoint>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<ur5e_waypoint_mover::srv::MoveToPoint>,
  &ur5e_waypoint_mover__srv__MoveToPoint__get_type_hash,
  &ur5e_waypoint_mover__srv__MoveToPoint__get_type_description,
  &ur5e_waypoint_mover__srv__MoveToPoint__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint>()
{
  return &::ur5e_waypoint_mover::srv::rosidl_typesupport_cpp::MoveToPoint_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, ur5e_waypoint_mover, srv, MoveToPoint)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<ur5e_waypoint_mover::srv::MoveToPoint>();
}

#ifdef __cplusplus
}
#endif
