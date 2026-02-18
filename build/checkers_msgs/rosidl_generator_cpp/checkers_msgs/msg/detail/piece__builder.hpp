// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/piece.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__PIECE__BUILDER_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__PIECE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "checkers_msgs/msg/detail/piece__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace checkers_msgs
{

namespace msg
{

namespace builder
{

class Init_Piece_king
{
public:
  explicit Init_Piece_king(::checkers_msgs::msg::Piece & msg)
  : msg_(msg)
  {}
  ::checkers_msgs::msg::Piece king(::checkers_msgs::msg::Piece::_king_type arg)
  {
    msg_.king = std::move(arg);
    return std::move(msg_);
  }

private:
  ::checkers_msgs::msg::Piece msg_;
};

class Init_Piece_color
{
public:
  explicit Init_Piece_color(::checkers_msgs::msg::Piece & msg)
  : msg_(msg)
  {}
  Init_Piece_king color(::checkers_msgs::msg::Piece::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Piece_king(msg_);
  }

private:
  ::checkers_msgs::msg::Piece msg_;
};

class Init_Piece_col
{
public:
  explicit Init_Piece_col(::checkers_msgs::msg::Piece & msg)
  : msg_(msg)
  {}
  Init_Piece_color col(::checkers_msgs::msg::Piece::_col_type arg)
  {
    msg_.col = std::move(arg);
    return Init_Piece_color(msg_);
  }

private:
  ::checkers_msgs::msg::Piece msg_;
};

class Init_Piece_row
{
public:
  Init_Piece_row()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Piece_col row(::checkers_msgs::msg::Piece::_row_type arg)
  {
    msg_.row = std::move(arg);
    return Init_Piece_col(msg_);
  }

private:
  ::checkers_msgs::msg::Piece msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::checkers_msgs::msg::Piece>()
{
  return checkers_msgs::msg::builder::Init_Piece_row();
}

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__PIECE__BUILDER_HPP_
