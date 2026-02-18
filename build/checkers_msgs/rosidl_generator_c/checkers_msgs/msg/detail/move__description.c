// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from checkers_msgs:msg/Move.idl
// generated code does not contain a copyright notice

#include "checkers_msgs/msg/detail/move__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__msg__Move__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x96, 0xd6, 0x9b, 0x47, 0xb6, 0xa4, 0x1f, 0x3c,
      0x86, 0x37, 0xae, 0x37, 0xba, 0x52, 0xe7, 0xa2,
      0x39, 0x65, 0xdf, 0x63, 0x9f, 0xc5, 0xf2, 0x3f,
      0x0f, 0x7f, 0x8a, 0xa7, 0xbf, 0x68, 0xe8, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "checkers_msgs/msg/detail/piece__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t checkers_msgs__msg__Piece__EXPECTED_HASH = {1, {
    0xb9, 0xc0, 0x72, 0x8e, 0x66, 0x1b, 0xbb, 0xa3,
    0x53, 0xe4, 0xce, 0x07, 0x43, 0x2a, 0x38, 0xdb,
    0x39, 0x2e, 0x03, 0x34, 0xff, 0xc1, 0x42, 0x69,
    0x73, 0x3a, 0x16, 0x33, 0x31, 0x9c, 0xea, 0x49,
  }};
#endif

static char checkers_msgs__msg__Move__TYPE_NAME[] = "checkers_msgs/msg/Move";
static char checkers_msgs__msg__Piece__TYPE_NAME[] = "checkers_msgs/msg/Piece";

// Define type names, field names, and default values
static char checkers_msgs__msg__Move__FIELD_NAME__target_row[] = "target_row";
static char checkers_msgs__msg__Move__FIELD_NAME__target_col[] = "target_col";
static char checkers_msgs__msg__Move__FIELD_NAME__piece_for_moving[] = "piece_for_moving";
static char checkers_msgs__msg__Move__FIELD_NAME__removed_pieces[] = "removed_pieces";

static rosidl_runtime_c__type_description__Field checkers_msgs__msg__Move__FIELDS[] = {
  {
    {checkers_msgs__msg__Move__FIELD_NAME__target_row, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__msg__Move__FIELD_NAME__target_col, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__msg__Move__FIELD_NAME__piece_for_moving, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {checkers_msgs__msg__Piece__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__msg__Move__FIELD_NAME__removed_pieces, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {checkers_msgs__msg__Piece__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription checkers_msgs__msg__Move__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {checkers_msgs__msg__Piece__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
checkers_msgs__msg__Move__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__msg__Move__TYPE_NAME, 22, 22},
      {checkers_msgs__msg__Move__FIELDS, 4, 4},
    },
    {checkers_msgs__msg__Move__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&checkers_msgs__msg__Piece__EXPECTED_HASH, checkers_msgs__msg__Piece__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = checkers_msgs__msg__Piece__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Move.msg\n"
  "int32 target_row\n"
  "int32 target_col\n"
  "Piece piece_for_moving\n"
  "Piece[] removed_pieces";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__msg__Move__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__msg__Move__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 90, 90},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__msg__Move__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__msg__Move__get_individual_type_description_source(NULL),
    sources[1] = *checkers_msgs__msg__Piece__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
