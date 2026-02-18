// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from checkers_msgs:msg/Move.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "checkers_msgs/msg/detail/move__functions.h"
#include "checkers_msgs/msg/detail/move__struct.hpp"
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

void Move_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) checkers_msgs::msg::Move(_init);
}

void Move_fini_function(void * message_memory)
{
  auto typed_message = static_cast<checkers_msgs::msg::Move *>(message_memory);
  typed_message->~Move();
}

size_t size_function__Move__removed_pieces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<checkers_msgs::msg::Piece> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Move__removed_pieces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<checkers_msgs::msg::Piece> *>(untyped_member);
  return &member[index];
}

void * get_function__Move__removed_pieces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<checkers_msgs::msg::Piece> *>(untyped_member);
  return &member[index];
}

void fetch_function__Move__removed_pieces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const checkers_msgs::msg::Piece *>(
    get_const_function__Move__removed_pieces(untyped_member, index));
  auto & value = *reinterpret_cast<checkers_msgs::msg::Piece *>(untyped_value);
  value = item;
}

void assign_function__Move__removed_pieces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<checkers_msgs::msg::Piece *>(
    get_function__Move__removed_pieces(untyped_member, index));
  const auto & value = *reinterpret_cast<const checkers_msgs::msg::Piece *>(untyped_value);
  item = value;
}

void resize_function__Move__removed_pieces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<checkers_msgs::msg::Piece> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Move_message_member_array[4] = {
  {
    "target_row",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs::msg::Move, target_row),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_col",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs::msg::Move, target_col),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "piece_for_moving",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<checkers_msgs::msg::Piece>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs::msg::Move, piece_for_moving),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "removed_pieces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<checkers_msgs::msg::Piece>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs::msg::Move, removed_pieces),  // bytes offset in struct
    nullptr,  // default value
    size_function__Move__removed_pieces,  // size() function pointer
    get_const_function__Move__removed_pieces,  // get_const(index) function pointer
    get_function__Move__removed_pieces,  // get(index) function pointer
    fetch_function__Move__removed_pieces,  // fetch(index, &value) function pointer
    assign_function__Move__removed_pieces,  // assign(index, value) function pointer
    resize_function__Move__removed_pieces  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Move_message_members = {
  "checkers_msgs::msg",  // message namespace
  "Move",  // message name
  4,  // number of fields
  sizeof(checkers_msgs::msg::Move),
  false,  // has_any_key_member_
  Move_message_member_array,  // message members
  Move_init_function,  // function to initialize message memory (memory has to be allocated)
  Move_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Move_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Move_message_members,
  get_message_typesupport_handle_function,
  &checkers_msgs__msg__Move__get_type_hash,
  &checkers_msgs__msg__Move__get_type_description,
  &checkers_msgs__msg__Move__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace checkers_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<checkers_msgs::msg::Move>()
{
  return &::checkers_msgs::msg::rosidl_typesupport_introspection_cpp::Move_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, checkers_msgs, msg, Move)() {
  return &::checkers_msgs::msg::rosidl_typesupport_introspection_cpp::Move_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
