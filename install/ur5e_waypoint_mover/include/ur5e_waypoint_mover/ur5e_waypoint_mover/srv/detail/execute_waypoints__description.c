// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ur5e_waypoint_mover:srv/ExecuteWaypoints.idl
// generated code does not contain a copyright notice

#include "ur5e_waypoint_mover/srv/detail/execute_waypoints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ur5e_waypoint_mover
const rosidl_type_hash_t *
ur5e_waypoint_mover__srv__ExecuteWaypoints__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x16, 0xfb, 0x33, 0xc7, 0xbd, 0x43, 0xbd, 0x84,
      0xbd, 0xed, 0x3c, 0x34, 0x42, 0xf4, 0xa5, 0x49,
      0xe8, 0x89, 0x9d, 0x59, 0x86, 0x9a, 0x5e, 0xcc,
      0x91, 0xb9, 0xfd, 0xc9, 0xf3, 0x72, 0x27, 0xc8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur5e_waypoint_mover
const rosidl_type_hash_t *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x3e, 0x5b, 0x88, 0x2e, 0xf7, 0xe6, 0x29,
      0x6f, 0x8f, 0x85, 0x1e, 0x89, 0x0f, 0x52, 0x69,
      0xcd, 0x78, 0xb8, 0x21, 0x52, 0x26, 0x51, 0x59,
      0x7b, 0x8f, 0xa2, 0x9b, 0x40, 0x50, 0xaa, 0x83,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur5e_waypoint_mover
const rosidl_type_hash_t *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0x6a, 0xb0, 0x88, 0x74, 0x3e, 0x37, 0x2c,
      0xf1, 0xbd, 0xae, 0xb4, 0x7f, 0xfb, 0xf5, 0x8e,
      0xba, 0x9a, 0x1b, 0x1b, 0xd4, 0x44, 0xf2, 0x55,
      0x68, 0xfc, 0xec, 0xf3, 0x79, 0xca, 0xbd, 0xd0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ur5e_waypoint_mover
const rosidl_type_hash_t *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9e, 0x66, 0xaa, 0xdf, 0xe8, 0x30, 0xa5, 0xff,
      0x73, 0x6e, 0xf0, 0x14, 0x85, 0x34, 0x87, 0xcf,
      0x56, 0x75, 0x71, 0xea, 0x62, 0x7a, 0x0e, 0x7d,
      0xa5, 0x39, 0xf6, 0xe1, 0x0a, 0x1a, 0x90, 0x02,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char ur5e_waypoint_mover__srv__ExecuteWaypoints__TYPE_NAME[] = "ur5e_waypoint_mover/srv/ExecuteWaypoints";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__TYPE_NAME[] = "ur5e_waypoint_mover/srv/ExecuteWaypoints_Event";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__TYPE_NAME[] = "ur5e_waypoint_mover/srv/ExecuteWaypoints_Request";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__TYPE_NAME[] = "ur5e_waypoint_mover/srv/ExecuteWaypoints_Response";

// Define type names, field names, and default values
static char ur5e_waypoint_mover__srv__ExecuteWaypoints__FIELD_NAME__request_message[] = "request_message";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints__FIELD_NAME__response_message[] = "response_message";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ur5e_waypoint_mover__srv__ExecuteWaypoints__FIELDS[] = {
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur5e_waypoint_mover__srv__ExecuteWaypoints__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur5e_waypoint_mover__srv__ExecuteWaypoints__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur5e_waypoint_mover__srv__ExecuteWaypoints__TYPE_NAME, 40, 40},
      {ur5e_waypoint_mover__srv__ExecuteWaypoints__FIELDS, 3, 3},
    },
    {ur5e_waypoint_mover__srv__ExecuteWaypoints__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__FIELD_NAME__loop[] = "loop";

static rosidl_runtime_c__type_description__Field ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__FIELDS[] = {
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__FIELD_NAME__loop, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__TYPE_NAME, 48, 48},
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__FIELD_NAME__success[] = "success";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__FIELD_NAME__message[] = "message";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__FIELD_NAME__waypoints_executed[] = "waypoints_executed";

static rosidl_runtime_c__type_description__Field ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__FIELDS[] = {
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__FIELD_NAME__waypoints_executed, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__TYPE_NAME, 49, 49},
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__FIELD_NAME__info[] = "info";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__FIELD_NAME__request[] = "request";
static char ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__FIELDS[] = {
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__TYPE_NAME, 46, 46},
      {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__FIELDS, 3, 3},
    },
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Execute all stored waypoints in sequence.\n"
  "# Set loop=true to repeat the sequence indefinitely (call clear_waypoints to stop).\n"
  "bool loop\n"
  "---\n"
  "bool success\n"
  "string message\n"
  "int32 waypoints_executed";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ur5e_waypoint_mover__srv__ExecuteWaypoints__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 195, 195},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur5e_waypoint_mover__srv__ExecuteWaypoints__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur5e_waypoint_mover__srv__ExecuteWaypoints__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_individual_type_description_source(NULL);
    sources[4] = *ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_individual_type_description_source(NULL);
    sources[5] = *ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ur5e_waypoint_mover__srv__ExecuteWaypoints_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *ur5e_waypoint_mover__srv__ExecuteWaypoints_Request__get_individual_type_description_source(NULL);
    sources[4] = *ur5e_waypoint_mover__srv__ExecuteWaypoints_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
