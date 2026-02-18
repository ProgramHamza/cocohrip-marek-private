// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from checkers_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/move.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__MOVE__STRUCT_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'piece_for_moving'
// Member 'removed_pieces'
#include "checkers_msgs/msg/detail/piece__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__checkers_msgs__msg__Move __attribute__((deprecated))
#else
# define DEPRECATED__checkers_msgs__msg__Move __declspec(deprecated)
#endif

namespace checkers_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Move_
{
  using Type = Move_<ContainerAllocator>;

  explicit Move_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : piece_for_moving(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_row = 0l;
      this->target_col = 0l;
    }
  }

  explicit Move_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : piece_for_moving(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_row = 0l;
      this->target_col = 0l;
    }
  }

  // field types and members
  using _target_row_type =
    int32_t;
  _target_row_type target_row;
  using _target_col_type =
    int32_t;
  _target_col_type target_col;
  using _piece_for_moving_type =
    checkers_msgs::msg::Piece_<ContainerAllocator>;
  _piece_for_moving_type piece_for_moving;
  using _removed_pieces_type =
    std::vector<checkers_msgs::msg::Piece_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<checkers_msgs::msg::Piece_<ContainerAllocator>>>;
  _removed_pieces_type removed_pieces;

  // setters for named parameter idiom
  Type & set__target_row(
    const int32_t & _arg)
  {
    this->target_row = _arg;
    return *this;
  }
  Type & set__target_col(
    const int32_t & _arg)
  {
    this->target_col = _arg;
    return *this;
  }
  Type & set__piece_for_moving(
    const checkers_msgs::msg::Piece_<ContainerAllocator> & _arg)
  {
    this->piece_for_moving = _arg;
    return *this;
  }
  Type & set__removed_pieces(
    const std::vector<checkers_msgs::msg::Piece_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<checkers_msgs::msg::Piece_<ContainerAllocator>>> & _arg)
  {
    this->removed_pieces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    checkers_msgs::msg::Move_<ContainerAllocator> *;
  using ConstRawPtr =
    const checkers_msgs::msg::Move_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<checkers_msgs::msg::Move_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<checkers_msgs::msg::Move_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::Move_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::Move_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::Move_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::Move_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<checkers_msgs::msg::Move_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<checkers_msgs::msg::Move_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__checkers_msgs__msg__Move
    std::shared_ptr<checkers_msgs::msg::Move_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__checkers_msgs__msg__Move
    std::shared_ptr<checkers_msgs::msg::Move_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Move_ & other) const
  {
    if (this->target_row != other.target_row) {
      return false;
    }
    if (this->target_col != other.target_col) {
      return false;
    }
    if (this->piece_for_moving != other.piece_for_moving) {
      return false;
    }
    if (this->removed_pieces != other.removed_pieces) {
      return false;
    }
    return true;
  }
  bool operator!=(const Move_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Move_

// alias to use template instance with default allocator
using Move =
  checkers_msgs::msg::Move_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__MOVE__STRUCT_HPP_
