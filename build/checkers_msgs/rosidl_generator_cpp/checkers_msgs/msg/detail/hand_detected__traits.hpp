// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from checkers_msgs:msg/HandDetected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/hand_detected.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__TRAITS_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "checkers_msgs/msg/detail/hand_detected__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace checkers_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandDetected & msg,
  std::ostream & out)
{
  out << "{";
  // member: hand_detected
  {
    out << "hand_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_detected, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandDetected & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: hand_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_detected: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_detected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandDetected & msg, bool use_flow_style = false)
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
  const checkers_msgs::msg::HandDetected & msg,
  std::ostream & out, size_t indentation = 0)
{
  checkers_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use checkers_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const checkers_msgs::msg::HandDetected & msg)
{
  return checkers_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<checkers_msgs::msg::HandDetected>()
{
  return "checkers_msgs::msg::HandDetected";
}

template<>
inline const char * name<checkers_msgs::msg::HandDetected>()
{
  return "checkers_msgs/msg/HandDetected";
}

template<>
struct has_fixed_size<checkers_msgs::msg::HandDetected>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<checkers_msgs::msg::HandDetected>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<checkers_msgs::msg::HandDetected>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__TRAITS_HPP_
