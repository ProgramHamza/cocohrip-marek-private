// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "checkers_msgs/msg/detail/piece__functions.h"
#include "checkers_msgs/msg/detail/piece__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace checkers_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Piece_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) checkers_msgs::msg::Piece(_init);
}

void Piece_fini_function(void * message_memory)
{
  auto typed_message = static_cast<checkers_msgs::msg::Piece *>(message_memory);
  typed_message->~Piece();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Piece_message_member_array[4] = {
  {
    "row",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs::msg::Piece, row),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "col",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs::msg::Piece, col),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs::msg::Piece, color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "king",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs::msg::Piece, king),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Piece_message_members = {
  "checkers_msgs::msg",  // message namespace
  "Piece",  // message name
  4,  // number of fields
  sizeof(checkers_msgs::msg::Piece),
  false,  // has_any_key_member_
  Piece_message_member_array,  // message members
  Piece_init_function,  // function to initialize message memory (memory has to be allocated)
  Piece_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Piece_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Piece_message_members,
  get_message_typesupport_handle_function,
  &checkers_msgs__msg__Piece__get_type_hash,
  &checkers_msgs__msg__Piece__get_type_description,
  &checkers_msgs__msg__Piece__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace checkers_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<checkers_msgs::msg::Piece>()
{
  return &::checkers_msgs::msg::rosidl_typesupport_introspection_cpp::Piece_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, checkers_msgs, msg, Piece)() {
  return &::checkers_msgs::msg::rosidl_typesupport_introspection_cpp::Piece_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
