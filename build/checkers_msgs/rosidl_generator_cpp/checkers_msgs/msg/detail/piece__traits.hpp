// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/piece.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__PIECE__TRAITS_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__PIECE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "checkers_msgs/msg/detail/piece__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace checkers_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Piece & msg,
  std::ostream & out)
{
  out << "{";
  // member: row
  {
    out << "row: ";
    rosidl_generator_traits::value_to_yaml(msg.row, out);
    out << ", ";
  }

  // member: col
  {
    out << "col: ";
    rosidl_generator_traits::value_to_yaml(msg.col, out);
    out << ", ";
  }

  // member: color
  {
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << ", ";
  }

  // member: king
  {
    out << "king: ";
    rosidl_generator_traits::value_to_yaml(msg.king, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Piece & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: row
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "row: ";
    rosidl_generator_traits::value_to_yaml(msg.row, out);
    out << "\n";
  }

  // member: col
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "col: ";
    rosidl_generator_traits::value_to_yaml(msg.col, out);
    out << "\n";
  }

  // member: color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "color: ";
    rosidl_generator_traits::value_to_yaml(msg.color, out);
    out << "\n";
  }

  // member: king
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "king: ";
    rosidl_generator_traits::value_to_yaml(msg.king, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Piece & msg, bool use_flow_style = false)
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
  const checkers_msgs::msg::Piece & msg,
  std::ostream & out, size_t indentation = 0)
{
  checkers_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use checkers_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const checkers_msgs::msg::Piece & msg)
{
  return checkers_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<checkers_msgs::msg::Piece>()
{
  return "checkers_msgs::msg::Piece";
}

template<>
inline const char * name<checkers_msgs::msg::Piece>()
{
  return "checkers_msgs/msg/Piece";
}

template<>
struct has_fixed_size<checkers_msgs::msg::Piece>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<checkers_msgs::msg::Piece>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<checkers_msgs::msg::Piece>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHECKERS_MSGS__MSG__DETAIL__PIECE__TRAITS_HPP_
