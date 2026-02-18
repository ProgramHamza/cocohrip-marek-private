// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from checkers_msgs:msg/Board.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/board.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__BOARD__BUILDER_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__BOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "checkers_msgs/msg/detail/board__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace checkers_msgs
{

namespace msg
{

namespace builder
{

class Init_Board_pieces
{
public:
  Init_Board_pieces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::checkers_msgs::msg::Board pieces(::checkers_msgs::msg::Board::_pieces_type arg)
  {
    msg_.pieces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::checkers_msgs::msg::Board msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::checkers_msgs::msg::Board>()
{
  return checkers_msgs::msg::builder::Init_Board_pieces();
}

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__BOARD__BUILDER_HPP_
