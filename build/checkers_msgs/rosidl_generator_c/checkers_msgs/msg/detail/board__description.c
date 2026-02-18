// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from checkers_msgs:msg/Board.idl
// generated code does not contain a copyright notice

#include "checkers_msgs/msg/detail/board__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__msg__Board__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x74, 0x02, 0x11, 0xdc, 0x65, 0xa8, 0xc8, 0x89,
      0x14, 0x97, 0x40, 0x7c, 0x9a, 0x48, 0x4f, 0x45,
      0x73, 0x83, 0x6e, 0x9c, 0x1b, 0xe1, 0x21, 0xb8,
      0x74, 0x6a, 0x16, 0xea, 0x3f, 0x00, 0x84, 0x6d,
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

static char checkers_msgs__msg__Board__TYPE_NAME[] = "checkers_msgs/msg/Board";
static char checkers_msgs__msg__Piece__TYPE_NAME[] = "checkers_msgs/msg/Piece";

// Define type names, field names, and default values
static char checkers_msgs__msg__Board__FIELD_NAME__pieces[] = "pieces";

static rosidl_runtime_c__type_description__Field checkers_msgs__msg__Board__FIELDS[] = {
  {
    {checkers_msgs__msg__Board__FIELD_NAME__pieces, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {checkers_msgs__msg__Piece__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription checkers_msgs__msg__Board__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {checkers_msgs__msg__Piece__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
checkers_msgs__msg__Board__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__msg__Board__TYPE_NAME, 23, 23},
      {checkers_msgs__msg__Board__FIELDS, 1, 1},
    },
    {checkers_msgs__msg__Board__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&checkers_msgs__msg__Piece__EXPECTED_HASH, checkers_msgs__msg__Piece__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = checkers_msgs__msg__Piece__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Board.msg\n"
  "Piece[] pieces";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__msg__Board__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__msg__Board__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 27, 27},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__msg__Board__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__msg__Board__get_individual_type_description_source(NULL),
    sources[1] = *checkers_msgs__msg__Piece__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
