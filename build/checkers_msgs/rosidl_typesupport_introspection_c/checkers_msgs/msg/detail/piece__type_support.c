// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "checkers_msgs/msg/detail/piece__rosidl_typesupport_introspection_c.h"
#include "checkers_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "checkers_msgs/msg/detail/piece__functions.h"
#include "checkers_msgs/msg/detail/piece__struct.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  checkers_msgs__msg__Piece__init(message_memory);
}

void checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_fini_function(void * message_memory)
{
  checkers_msgs__msg__Piece__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_message_member_array[4] = {
  {
    "row",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs__msg__Piece, row),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "col",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs__msg__Piece, col),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs__msg__Piece, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "king",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs__msg__Piece, king),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_message_members = {
  "checkers_msgs__msg",  // message namespace
  "Piece",  // message name
  4,  // number of fields
  sizeof(checkers_msgs__msg__Piece),
  false,  // has_any_key_member_
  checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_message_member_array,  // message members
  checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_init_function,  // function to initialize message memory (memory has to be allocated)
  checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_message_type_support_handle = {
  0,
  &checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_message_members,
  get_message_typesupport_handle_function,
  &checkers_msgs__msg__Piece__get_type_hash,
  &checkers_msgs__msg__Piece__get_type_description,
  &checkers_msgs__msg__Piece__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_checkers_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, msg, Piece)() {
  if (!checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_message_type_support_handle.typesupport_identifier) {
    checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &checkers_msgs__msg__Piece__rosidl_typesupport_introspection_c__Piece_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
