// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from checkers_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/move.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__MOVE__TRAITS_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__MOVE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "checkers_msgs/msg/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'piece_for_moving'
// Member 'removed_pieces'
#include "checkers_msgs/msg/detail/piece__traits.hpp"

namespace checkers_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Move & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_row
  {
    out << "target_row: ";
    rosidl_generator_traits::value_to_yaml(msg.target_row, out);
    out << ", ";
  }

  // member: target_col
  {
    out << "target_col: ";
    rosidl_generator_traits::value_to_yaml(msg.target_col, out);
    out << ", ";
  }

  // member: piece_for_moving
  {
    out << "piece_for_moving: ";
    to_flow_style_yaml(msg.piece_for_moving, out);
    out << ", ";
  }

  // member: removed_pieces
  {
    if (msg.removed_pieces.size() == 0) {
      out << "removed_pieces: []";
    } else {
      out << "removed_pieces: [";
      size_t pending_items = msg.removed_pieces.size();
      for (auto item : msg.removed_pieces) {
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
  const Move & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_row
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_row: ";
    rosidl_generator_traits::value_to_yaml(msg.target_row, out);
    out << "\n";
  }

  // member: target_col
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_col: ";
    rosidl_generator_traits::value_to_yaml(msg.target_col, out);
    out << "\n";
  }

  // member: piece_for_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "piece_for_moving:\n";
    to_block_style_yaml(msg.piece_for_moving, out, indentation + 2);
  }

  // member: removed_pieces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.removed_pieces.size() == 0) {
      out << "removed_pieces: []\n";
    } else {
      out << "removed_pieces:\n";
      for (auto item : msg.removed_pieces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Move & msg, bool use_flow_style = false)
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
  const checkers_msgs::msg::Move & msg,
  std::ostream & out, size_t indentation = 0)
{
  checkers_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use checkers_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const checkers_msgs::msg::Move & msg)
{
  return checkers_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<checkers_msgs::msg::Move>()
{
  return "checkers_msgs::msg::Move";
}

template<>
inline const char * name<checkers_msgs::msg::Move>()
{
  return "checkers_msgs/msg/Move";
}

template<>
struct has_fixed_size<checkers_msgs::msg::Move>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<checkers_msgs::msg::Move>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<checkers_msgs::msg::Move>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHECKERS_MSGS__MSG__DETAIL__MOVE__TRAITS_HPP_
