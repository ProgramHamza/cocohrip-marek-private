// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/piece.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__PIECE__STRUCT_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__PIECE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__checkers_msgs__msg__Piece __attribute__((deprecated))
#else
# define DEPRECATED__checkers_msgs__msg__Piece __declspec(deprecated)
#endif

namespace checkers_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Piece_
{
  using Type = Piece_<ContainerAllocator>;

  explicit Piece_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row = 0l;
      this->col = 0l;
      this->color = "";
      this->king = false;
    }
  }

  explicit Piece_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->row = 0l;
      this->col = 0l;
      this->color = "";
      this->king = false;
    }
  }

  // field types and members
  using _row_type =
    int32_t;
  _row_type row;
  using _col_type =
    int32_t;
  _col_type col;
  using _color_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _color_type color;
  using _king_type =
    bool;
  _king_type king;

  // setters for named parameter idiom
  Type & set__row(
    const int32_t & _arg)
  {
    this->row = _arg;
    return *this;
  }
  Type & set__col(
    const int32_t & _arg)
  {
    this->col = _arg;
    return *this;
  }
  Type & set__color(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__king(
    const bool & _arg)
  {
    this->king = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    checkers_msgs::msg::Piece_<ContainerAllocator> *;
  using ConstRawPtr =
    const checkers_msgs::msg::Piece_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<checkers_msgs::msg::Piece_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<checkers_msgs::msg::Piece_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::Piece_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::Piece_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::Piece_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::Piece_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<checkers_msgs::msg::Piece_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<checkers_msgs::msg::Piece_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__checkers_msgs__msg__Piece
    std::shared_ptr<checkers_msgs::msg::Piece_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__checkers_msgs__msg__Piece
    std::shared_ptr<checkers_msgs::msg::Piece_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Piece_ & other) const
  {
    if (this->row != other.row) {
      return false;
    }
    if (this->col != other.col) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->king != other.king) {
      return false;
    }
    return true;
  }
  bool operator!=(const Piece_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Piece_

// alias to use template instance with default allocator
using Piece =
  checkers_msgs::msg::Piece_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__PIECE__STRUCT_HPP_
