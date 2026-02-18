// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice

#include "checkers_msgs/msg/detail/piece__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__msg__Piece__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb9, 0xc0, 0x72, 0x8e, 0x66, 0x1b, 0xbb, 0xa3,
      0x53, 0xe4, 0xce, 0x07, 0x43, 0x2a, 0x38, 0xdb,
      0x39, 0x2e, 0x03, 0x34, 0xff, 0xc1, 0x42, 0x69,
      0x73, 0x3a, 0x16, 0x33, 0x31, 0x9c, 0xea, 0x49,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char checkers_msgs__msg__Piece__TYPE_NAME[] = "checkers_msgs/msg/Piece";

// Define type names, field names, and default values
static char checkers_msgs__msg__Piece__FIELD_NAME__row[] = "row";
static char checkers_msgs__msg__Piece__FIELD_NAME__col[] = "col";
static char checkers_msgs__msg__Piece__FIELD_NAME__color[] = "color";
static char checkers_msgs__msg__Piece__FIELD_NAME__king[] = "king";

static rosidl_runtime_c__type_description__Field checkers_msgs__msg__Piece__FIELDS[] = {
  {
    {checkers_msgs__msg__Piece__FIELD_NAME__row, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__msg__Piece__FIELD_NAME__col, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__msg__Piece__FIELD_NAME__color, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {checkers_msgs__msg__Piece__FIELD_NAME__king, 4, 4},
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
checkers_msgs__msg__Piece__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__msg__Piece__TYPE_NAME, 23, 23},
      {checkers_msgs__msg__Piece__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Piece.msg\n"
  "int32 row\n"
  "int32 col\n"
  "string color\n"
  "bool king";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__msg__Piece__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__msg__Piece__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 55, 55},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__msg__Piece__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__msg__Piece__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
