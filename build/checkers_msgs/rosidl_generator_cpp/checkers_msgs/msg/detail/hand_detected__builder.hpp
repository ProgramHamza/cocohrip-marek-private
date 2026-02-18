// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from checkers_msgs:msg/HandDetected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/hand_detected.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__BUILDER_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "checkers_msgs/msg/detail/hand_detected__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace checkers_msgs
{

namespace msg
{

namespace builder
{

class Init_HandDetected_hand_detected
{
public:
  Init_HandDetected_hand_detected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::checkers_msgs::msg::HandDetected hand_detected(::checkers_msgs::msg::HandDetected::_hand_detected_type arg)
  {
    msg_.hand_detected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::checkers_msgs::msg::HandDetected msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::checkers_msgs::msg::HandDetected>()
{
  return checkers_msgs::msg::builder::Init_HandDetected_hand_detected();
}

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__BUILDER_HPP_
