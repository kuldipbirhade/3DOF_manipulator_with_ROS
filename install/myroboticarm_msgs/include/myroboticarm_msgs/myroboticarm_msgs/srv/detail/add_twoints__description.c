// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from myroboticarm_msgs:srv/AddTwoints.idl
// generated code does not contain a copyright notice

#include "myroboticarm_msgs/srv/detail/add_twoints__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_myroboticarm_msgs
const rosidl_type_hash_t *
myroboticarm_msgs__srv__AddTwoints__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc4, 0x11, 0x57, 0x06, 0x43, 0x11, 0x7d, 0x35,
      0x4b, 0xd5, 0x0d, 0x79, 0xe2, 0x08, 0x4a, 0x02,
      0x7d, 0xb4, 0xbf, 0xb1, 0xb7, 0xf2, 0xc2, 0xec,
      0x0c, 0x8d, 0x6c, 0x15, 0xec, 0xb0, 0xe3, 0x0a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_myroboticarm_msgs
const rosidl_type_hash_t *
myroboticarm_msgs__srv__AddTwoints_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8b, 0xd9, 0x97, 0x50, 0x48, 0xce, 0xc1, 0x69,
      0x2b, 0x8a, 0xcd, 0xab, 0x2f, 0x5e, 0x2a, 0xef,
      0xc7, 0xcc, 0xb7, 0x34, 0xae, 0x95, 0xcd, 0x6d,
      0x98, 0xbe, 0x78, 0xf7, 0xee, 0x0a, 0x0f, 0x75,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_myroboticarm_msgs
const rosidl_type_hash_t *
myroboticarm_msgs__srv__AddTwoints_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x62, 0xca, 0x40, 0x0c, 0xa8, 0x66, 0x7c,
      0x15, 0x3d, 0x98, 0xb8, 0xd1, 0xb6, 0x54, 0xdc,
      0x18, 0x24, 0x16, 0x78, 0x9f, 0x0f, 0x4c, 0x44,
      0x58, 0xdf, 0xfe, 0xf8, 0x5f, 0xc3, 0xf9, 0x51,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_myroboticarm_msgs
const rosidl_type_hash_t *
myroboticarm_msgs__srv__AddTwoints_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2c, 0x61, 0x36, 0xcd, 0x16, 0x3e, 0xff, 0xee,
      0x3f, 0x5f, 0x89, 0x8a, 0x4e, 0xda, 0x8c, 0xd1,
      0xcb, 0x87, 0x87, 0xdb, 0x16, 0x9c, 0x9c, 0xe9,
      0x02, 0x04, 0xe2, 0x5f, 0x7c, 0x2d, 0xff, 0xc4,
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

static char myroboticarm_msgs__srv__AddTwoints__TYPE_NAME[] = "myroboticarm_msgs/srv/AddTwoints";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char myroboticarm_msgs__srv__AddTwoints_Event__TYPE_NAME[] = "myroboticarm_msgs/srv/AddTwoints_Event";
static char myroboticarm_msgs__srv__AddTwoints_Request__TYPE_NAME[] = "myroboticarm_msgs/srv/AddTwoints_Request";
static char myroboticarm_msgs__srv__AddTwoints_Response__TYPE_NAME[] = "myroboticarm_msgs/srv/AddTwoints_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char myroboticarm_msgs__srv__AddTwoints__FIELD_NAME__request_message[] = "request_message";
static char myroboticarm_msgs__srv__AddTwoints__FIELD_NAME__response_message[] = "response_message";
static char myroboticarm_msgs__srv__AddTwoints__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field myroboticarm_msgs__srv__AddTwoints__FIELDS[] = {
  {
    {myroboticarm_msgs__srv__AddTwoints__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {myroboticarm_msgs__srv__AddTwoints_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {myroboticarm_msgs__srv__AddTwoints_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {myroboticarm_msgs__srv__AddTwoints_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription myroboticarm_msgs__srv__AddTwoints__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
myroboticarm_msgs__srv__AddTwoints__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {myroboticarm_msgs__srv__AddTwoints__TYPE_NAME, 32, 32},
      {myroboticarm_msgs__srv__AddTwoints__FIELDS, 3, 3},
    },
    {myroboticarm_msgs__srv__AddTwoints__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = myroboticarm_msgs__srv__AddTwoints_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = myroboticarm_msgs__srv__AddTwoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = myroboticarm_msgs__srv__AddTwoints_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char myroboticarm_msgs__srv__AddTwoints_Request__FIELD_NAME__a[] = "a";
static char myroboticarm_msgs__srv__AddTwoints_Request__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field myroboticarm_msgs__srv__AddTwoints_Request__FIELDS[] = {
  {
    {myroboticarm_msgs__srv__AddTwoints_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
myroboticarm_msgs__srv__AddTwoints_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {myroboticarm_msgs__srv__AddTwoints_Request__TYPE_NAME, 40, 40},
      {myroboticarm_msgs__srv__AddTwoints_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char myroboticarm_msgs__srv__AddTwoints_Response__FIELD_NAME__sum[] = "sum";

static rosidl_runtime_c__type_description__Field myroboticarm_msgs__srv__AddTwoints_Response__FIELDS[] = {
  {
    {myroboticarm_msgs__srv__AddTwoints_Response__FIELD_NAME__sum, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
myroboticarm_msgs__srv__AddTwoints_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {myroboticarm_msgs__srv__AddTwoints_Response__TYPE_NAME, 41, 41},
      {myroboticarm_msgs__srv__AddTwoints_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char myroboticarm_msgs__srv__AddTwoints_Event__FIELD_NAME__info[] = "info";
static char myroboticarm_msgs__srv__AddTwoints_Event__FIELD_NAME__request[] = "request";
static char myroboticarm_msgs__srv__AddTwoints_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field myroboticarm_msgs__srv__AddTwoints_Event__FIELDS[] = {
  {
    {myroboticarm_msgs__srv__AddTwoints_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {myroboticarm_msgs__srv__AddTwoints_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {myroboticarm_msgs__srv__AddTwoints_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription myroboticarm_msgs__srv__AddTwoints_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {myroboticarm_msgs__srv__AddTwoints_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
myroboticarm_msgs__srv__AddTwoints_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {myroboticarm_msgs__srv__AddTwoints_Event__TYPE_NAME, 38, 38},
      {myroboticarm_msgs__srv__AddTwoints_Event__FIELDS, 3, 3},
    },
    {myroboticarm_msgs__srv__AddTwoints_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = myroboticarm_msgs__srv__AddTwoints_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = myroboticarm_msgs__srv__AddTwoints_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Request\n"
  "int64 a\n"
  "int64 b \n"
  "---\n"
  "#Response\n"
  "int64 sum   #Now after writing this script, we need to declare its existance to the \"comliper\" ";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
myroboticarm_msgs__srv__AddTwoints__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {myroboticarm_msgs__srv__AddTwoints__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 135, 135},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
myroboticarm_msgs__srv__AddTwoints_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {myroboticarm_msgs__srv__AddTwoints_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
myroboticarm_msgs__srv__AddTwoints_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {myroboticarm_msgs__srv__AddTwoints_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
myroboticarm_msgs__srv__AddTwoints_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {myroboticarm_msgs__srv__AddTwoints_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
myroboticarm_msgs__srv__AddTwoints__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *myroboticarm_msgs__srv__AddTwoints__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *myroboticarm_msgs__srv__AddTwoints_Event__get_individual_type_description_source(NULL);
    sources[3] = *myroboticarm_msgs__srv__AddTwoints_Request__get_individual_type_description_source(NULL);
    sources[4] = *myroboticarm_msgs__srv__AddTwoints_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
myroboticarm_msgs__srv__AddTwoints_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *myroboticarm_msgs__srv__AddTwoints_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
myroboticarm_msgs__srv__AddTwoints_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *myroboticarm_msgs__srv__AddTwoints_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
myroboticarm_msgs__srv__AddTwoints_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *myroboticarm_msgs__srv__AddTwoints_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *myroboticarm_msgs__srv__AddTwoints_Request__get_individual_type_description_source(NULL);
    sources[3] = *myroboticarm_msgs__srv__AddTwoints_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
