// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from checkers_msgs:srv/ResumeMovement.idl
// generated code does not contain a copyright notice

#include "checkers_msgs/srv/detail/resume_movement__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__srv__ResumeMovement__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x92, 0x12, 0x18, 0x4f, 0x31, 0xba, 0x2d,
      0x00, 0xd3, 0x50, 0x41, 0x5f, 0x10, 0x4b, 0x4b,
      0xfd, 0x6f, 0x05, 0x50, 0xf4, 0xeb, 0x0b, 0x2b,
      0xda, 0x6f, 0xc8, 0xb0, 0xb3, 0xdf, 0xb0, 0x40,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__srv__ResumeMovement_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x0c, 0x32, 0xc4, 0xb4, 0xef, 0xf7, 0xe7,
      0xbb, 0x9c, 0xe0, 0xc7, 0xd0, 0x37, 0xf0, 0x89,
      0x83, 0x8f, 0x10, 0xed, 0xb6, 0x70, 0x6e, 0x81,
      0x1d, 0x66, 0xc9, 0xd6, 0xa3, 0x36, 0xdd, 0x70,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__srv__ResumeMovement_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x42, 0x9e, 0x15, 0xb9, 0x38, 0x4c, 0x9c,
      0xab, 0xbe, 0xed, 0x79, 0xb6, 0xcf, 0xbe, 0xb5,
      0xe7, 0xf8, 0x72, 0xbb, 0xa1, 0x85, 0x8a, 0x61,
      0x31, 0x7b, 0xd4, 0x06, 0x17, 0xfc, 0x18, 0x3c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__srv__ResumeMovement_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xab, 0x8c, 0xe2, 0x83, 0x5b, 0x6b, 0x61, 0x2f,
      0x83, 0x5e, 0x6b, 0x45, 0xeb, 0x89, 0xba, 0xf2,
      0xad, 0x57, 0x61, 0x51, 0xd1, 0xd8, 0xdb, 0xf2,
      0x0b, 0xb8, 0x69, 0xb9, 0x8d, 0xf5, 0x3d, 0x07,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char checkers_msgs__srv__ResumeMovement__TYPE_NAME[] = "checkers_msgs/srv/ResumeMovement";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char checkers_msgs__srv__ResumeMovement_Event__TYPE_NAME[] = "checkers_msgs/srv/ResumeMovement_Event";
static char checkers_msgs__srv__ResumeMovement_Request__TYPE_NAME[] = "checkers_msgs/srv/ResumeMovement_Request";
static char checkers_msgs__srv__ResumeMovement_Response__TYPE_NAME[] = "checkers_msgs/srv/ResumeMovement_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char checkers_msgs__srv__ResumeMovement__FIELD_NAME__request_message[] = "request_message";
static char checkers_msgs__srv__ResumeMovement__FIELD_NAME__response_message[] = "response_message";
static char checkers_msgs__srv__ResumeMovement__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field checkers_msgs__srv__ResumeMovement__FIELDS[] = {
  {
    {checkers_msgs__srv__ResumeMovement__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {checkers_msgs__srv__ResumeMovement_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {checkers_msgs__srv__ResumeMovement_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {checkers_msgs__srv__ResumeMovement_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription checkers_msgs__srv__ResumeMovement__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
checkers_msgs__srv__ResumeMovement__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__srv__ResumeMovement__TYPE_NAME, 32, 32},
      {checkers_msgs__srv__ResumeMovement__FIELDS, 3, 3},
    },
    {checkers_msgs__srv__ResumeMovement__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = checkers_msgs__srv__ResumeMovement_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = checkers_msgs__srv__ResumeMovement_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = checkers_msgs__srv__ResumeMovement_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char checkers_msgs__srv__ResumeMovement_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field checkers_msgs__srv__ResumeMovement_Request__FIELDS[] = {
  {
    {checkers_msgs__srv__ResumeMovement_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
checkers_msgs__srv__ResumeMovement_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__srv__ResumeMovement_Request__TYPE_NAME, 40, 40},
      {checkers_msgs__srv__ResumeMovement_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char checkers_msgs__srv__ResumeMovement_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field checkers_msgs__srv__ResumeMovement_Response__FIELDS[] = {
  {
    {checkers_msgs__srv__ResumeMovement_Response__FIELD_NAME__success, 7, 7},
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
checkers_msgs__srv__ResumeMovement_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__srv__ResumeMovement_Response__TYPE_NAME, 41, 41},
      {checkers_msgs__srv__ResumeMovement_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char checkers_msgs__srv__ResumeMovement_Event__FIELD_NAME__info[] = "info";
static char checkers_msgs__srv__ResumeMovement_Event__FIELD_NAME__request[] = "request";
static char checkers_msgs__srv__ResumeMovement_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field checkers_msgs__srv__ResumeMovement_Event__FIELDS[] = {
  {
    {checkers_msgs__srv__ResumeMovement_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {checkers_msgs__srv__ResumeMovement_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {checkers_msgs__srv__ResumeMovement_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription checkers_msgs__srv__ResumeMovement_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__srv__ResumeMovement_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
checkers_msgs__srv__ResumeMovement_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__srv__ResumeMovement_Event__TYPE_NAME, 38, 38},
      {checkers_msgs__srv__ResumeMovement_Event__FIELDS, 3, 3},
    },
    {checkers_msgs__srv__ResumeMovement_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = checkers_msgs__srv__ResumeMovement_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = checkers_msgs__srv__ResumeMovement_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "---\n"
  "bool success  # indicate if the call was successful";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__srv__ResumeMovement__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__srv__ResumeMovement__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__srv__ResumeMovement_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__srv__ResumeMovement_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__srv__ResumeMovement_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__srv__ResumeMovement_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__srv__ResumeMovement_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__srv__ResumeMovement_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__srv__ResumeMovement__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__srv__ResumeMovement__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *checkers_msgs__srv__ResumeMovement_Event__get_individual_type_description_source(NULL);
    sources[3] = *checkers_msgs__srv__ResumeMovement_Request__get_individual_type_description_source(NULL);
    sources[4] = *checkers_msgs__srv__ResumeMovement_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__srv__ResumeMovement_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__srv__ResumeMovement_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__srv__ResumeMovement_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__srv__ResumeMovement_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__srv__ResumeMovement_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__srv__ResumeMovement_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *checkers_msgs__srv__ResumeMovement_Request__get_individual_type_description_source(NULL);
    sources[3] = *checkers_msgs__srv__ResumeMovement_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
