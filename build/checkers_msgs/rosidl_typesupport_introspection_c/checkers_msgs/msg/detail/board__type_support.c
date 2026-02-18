// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from checkers_msgs:msg/Board.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "checkers_msgs/msg/detail/board__rosidl_typesupport_introspection_c.h"
#include "checkers_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "checkers_msgs/msg/detail/board__functions.h"
#include "checkers_msgs/msg/detail/board__struct.h"


// Include directives for member types
// Member `pieces`
#include "checkers_msgs/msg/piece.h"
// Member `pieces`
#include "checkers_msgs/msg/detail/piece__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  checkers_msgs__msg__Board__init(message_memory);
}

void checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_fini_function(void * message_memory)
{
  checkers_msgs__msg__Board__fini(message_memory);
}

size_t checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__size_function__Board__pieces(
  const void * untyped_member)
{
  const checkers_msgs__msg__Piece__Sequence * member =
    (const checkers_msgs__msg__Piece__Sequence *)(untyped_member);
  return member->size;
}

const void * checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__get_const_function__Board__pieces(
  const void * untyped_member, size_t index)
{
  const checkers_msgs__msg__Piece__Sequence * member =
    (const checkers_msgs__msg__Piece__Sequence *)(untyped_member);
  return &member->data[index];
}

void * checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__get_function__Board__pieces(
  void * untyped_member, size_t index)
{
  checkers_msgs__msg__Piece__Sequence * member =
    (checkers_msgs__msg__Piece__Sequence *)(untyped_member);
  return &member->data[index];
}

void checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__fetch_function__Board__pieces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const checkers_msgs__msg__Piece * item =
    ((const checkers_msgs__msg__Piece *)
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__get_const_function__Board__pieces(untyped_member, index));
  checkers_msgs__msg__Piece * value =
    (checkers_msgs__msg__Piece *)(untyped_value);
  *value = *item;
}

void checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__assign_function__Board__pieces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  checkers_msgs__msg__Piece * item =
    ((checkers_msgs__msg__Piece *)
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__get_function__Board__pieces(untyped_member, index));
  const checkers_msgs__msg__Piece * value =
    (const checkers_msgs__msg__Piece *)(untyped_value);
  *item = *value;
}

bool checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__resize_function__Board__pieces(
  void * untyped_member, size_t size)
{
  checkers_msgs__msg__Piece__Sequence * member =
    (checkers_msgs__msg__Piece__Sequence *)(untyped_member);
  checkers_msgs__msg__Piece__Sequence__fini(member);
  return checkers_msgs__msg__Piece__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_member_array[1] = {
  {
    "pieces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs__msg__Board, pieces),  // bytes offset in struct
    NULL,  // default value
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__size_function__Board__pieces,  // size() function pointer
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__get_const_function__Board__pieces,  // get_const(index) function pointer
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__get_function__Board__pieces,  // get(index) function pointer
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__fetch_function__Board__pieces,  // fetch(index, &value) function pointer
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__assign_function__Board__pieces,  // assign(index, value) function pointer
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__resize_function__Board__pieces  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_members = {
  "checkers_msgs__msg",  // message namespace
  "Board",  // message name
  1,  // number of fields
  sizeof(checkers_msgs__msg__Board),
  false,  // has_any_key_member_
  checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_member_array,  // message members
  checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_init_function,  // function to initialize message memory (memory has to be allocated)
  checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_type_support_handle = {
  0,
  &checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_members,
  get_message_typesupport_handle_function,
  &checkers_msgs__msg__Board__get_type_hash,
  &checkers_msgs__msg__Board__get_type_description,
  &checkers_msgs__msg__Board__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_checkers_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, msg, Board)() {
  checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, msg, Piece)();
  if (!checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_type_support_handle.typesupport_identifier) {
    checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &checkers_msgs__msg__Board__rosidl_typesupport_introspection_c__Board_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
