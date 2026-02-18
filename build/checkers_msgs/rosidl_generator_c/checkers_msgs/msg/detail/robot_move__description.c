// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from checkers_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice

#include "checkers_msgs/msg/detail/robot_move__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__msg__RobotMove__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0x46, 0x7f, 0x89, 0x5a, 0x19, 0x50, 0x25,
      0xe4, 0xb6, 0xb6, 0x6c, 0x6e, 0x6a, 0xf0, 0x9b,
      0xe9, 0x7e, 0xae, 0x4d, 0xd5, 0x77, 0x7b, 0x78,
      0xa0, 0xe1, 0x57, 0xde, 0xbc, 0x9f, 0xe2, 0x6d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char checkers_msgs__msg__RobotMove__TYPE_NAME[] = "checkers_msgs/msg/RobotMove";

// Define type names, field names, and default values
static char checkers_msgs__msg__RobotMove__FIELD_NAME__robot_move_done[] = "robot_move_done";

static rosidl_runtime_c__type_description__Field checkers_msgs__msg__RobotMove__FIELDS[] = {
  {
    {checkers_msgs__msg__RobotMove__FIELD_NAME__robot_move_done, 15, 15},
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
checkers_msgs__msg__RobotMove__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__msg__RobotMove__TYPE_NAME, 27, 27},
      {checkers_msgs__msg__RobotMove__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# RobotMove.msg\n"
  "bool robot_move_done";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__msg__RobotMove__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__msg__RobotMove__TYPE_NAME, 27, 27},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 36, 36},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__msg__RobotMove__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__msg__RobotMove__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
