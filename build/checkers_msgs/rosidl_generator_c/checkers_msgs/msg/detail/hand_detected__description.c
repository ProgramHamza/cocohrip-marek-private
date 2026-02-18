// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from checkers_msgs:msg/HandDetected.idl
// generated code does not contain a copyright notice

#include "checkers_msgs/msg/detail/hand_detected__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__msg__HandDetected__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa9, 0xfb, 0x32, 0x4b, 0x2d, 0xe9, 0xb4, 0x6a,
      0x2a, 0xf4, 0xcc, 0xc9, 0xdc, 0xcb, 0x02, 0x26,
      0xee, 0x2f, 0x74, 0x71, 0xe7, 0x81, 0x2c, 0x98,
      0xe5, 0xa1, 0x54, 0x0a, 0x41, 0xd3, 0xab, 0xe4,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char checkers_msgs__msg__HandDetected__TYPE_NAME[] = "checkers_msgs/msg/HandDetected";

// Define type names, field names, and default values
static char checkers_msgs__msg__HandDetected__FIELD_NAME__hand_detected[] = "hand_detected";

static rosidl_runtime_c__type_description__Field checkers_msgs__msg__HandDetected__FIELDS[] = {
  {
    {checkers_msgs__msg__HandDetected__FIELD_NAME__hand_detected, 13, 13},
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
checkers_msgs__msg__HandDetected__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {checkers_msgs__msg__HandDetected__TYPE_NAME, 30, 30},
      {checkers_msgs__msg__HandDetected__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# HandDetected.msg\n"
  "bool hand_detected";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__msg__HandDetected__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {checkers_msgs__msg__HandDetected__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 37, 37},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__msg__HandDetected__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *checkers_msgs__msg__HandDetected__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
