// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from checkers_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/move.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__MOVE__BUILDER_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "checkers_msgs/msg/detail/move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace checkers_msgs
{

namespace msg
{

namespace builder
{

class Init_Move_removed_pieces
{
public:
  explicit Init_Move_removed_pieces(::checkers_msgs::msg::Move & msg)
  : msg_(msg)
  {}
  ::checkers_msgs::msg::Move removed_pieces(::checkers_msgs::msg::Move::_removed_pieces_type arg)
  {
    msg_.removed_pieces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::checkers_msgs::msg::Move msg_;
};

class Init_Move_piece_for_moving
{
public:
  explicit Init_Move_piece_for_moving(::checkers_msgs::msg::Move & msg)
  : msg_(msg)
  {}
  Init_Move_removed_pieces piece_for_moving(::checkers_msgs::msg::Move::_piece_for_moving_type arg)
  {
    msg_.piece_for_moving = std::move(arg);
    return Init_Move_removed_pieces(msg_);
  }

private:
  ::checkers_msgs::msg::Move msg_;
};

class Init_Move_target_col
{
public:
  explicit Init_Move_target_col(::checkers_msgs::msg::Move & msg)
  : msg_(msg)
  {}
  Init_Move_piece_for_moving target_col(::checkers_msgs::msg::Move::_target_col_type arg)
  {
    msg_.target_col = std::move(arg);
    return Init_Move_piece_for_moving(msg_);
  }

private:
  ::checkers_msgs::msg::Move msg_;
};

class Init_Move_target_row
{
public:
  Init_Move_target_row()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Move_target_col target_row(::checkers_msgs::msg::Move::_target_row_type arg)
  {
    msg_.target_row = std::move(arg);
    return Init_Move_target_col(msg_);
  }

private:
  ::checkers_msgs::msg::Move msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::checkers_msgs::msg::Move>()
{
  return checkers_msgs::msg::builder::Init_Move_target_row();
}

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__MOVE__BUILDER_HPP_
