// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from checkers_msgs:msg/Board.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/board.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__BOARD__TRAITS_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__BOARD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "checkers_msgs/msg/detail/board__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pieces'
#include "checkers_msgs/msg/detail/piece__traits.hpp"

namespace checkers_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Board & msg,
  std::ostream & out)
{
  out << "{";
  // member: pieces
  {
    if (msg.pieces.size() == 0) {
      out << "pieces: []";
    } else {
      out << "pieces: [";
      size_t pending_items = msg.pieces.size();
      for (auto item : msg.pieces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Board & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pieces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pieces.size() == 0) {
      out << "pieces: []\n";
    } else {
      out << "pieces:\n";
      for (auto item : msg.pieces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Board & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace checkers_msgs

namespace rosidl_generator_traits
{

[[deprecated("use checkers_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const checkers_msgs::msg::Board & msg,
  std::ostream & out, size_t indentation = 0)
{
  checkers_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use checkers_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const checkers_msgs::msg::Board & msg)
{
  return checkers_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<checkers_msgs::msg::Board>()
{
  return "checkers_msgs::msg::Board";
}

template<>
inline const char * name<checkers_msgs::msg::Board>()
{
  return "checkers_msgs/msg/Board";
}

template<>
struct has_fixed_size<checkers_msgs::msg::Board>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<checkers_msgs::msg::Board>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<checkers_msgs::msg::Board>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHECKERS_MSGS__MSG__DETAIL__BOARD__TRAITS_HPP_
