// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from checkers_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/robot_move.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__BUILDER_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "checkers_msgs/msg/detail/robot_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace checkers_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotMove_robot_move_done
{
public:
  Init_RobotMove_robot_move_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::checkers_msgs::msg::RobotMove robot_move_done(::checkers_msgs::msg::RobotMove::_robot_move_done_type arg)
  {
    msg_.robot_move_done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::checkers_msgs::msg::RobotMove msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::checkers_msgs::msg::RobotMove>()
{
  return checkers_msgs::msg::builder::Init_RobotMove_robot_move_done();
}

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__BUILDER_HPP_
