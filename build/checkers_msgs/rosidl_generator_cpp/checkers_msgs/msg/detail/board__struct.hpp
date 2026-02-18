// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from checkers_msgs:msg/Board.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/board.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__BOARD__STRUCT_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__BOARD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pieces'
#include "checkers_msgs/msg/detail/piece__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__checkers_msgs__msg__Board __attribute__((deprecated))
#else
# define DEPRECATED__checkers_msgs__msg__Board __declspec(deprecated)
#endif

namespace checkers_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Board_
{
  using Type = Board_<ContainerAllocator>;

  explicit Board_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Board_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _pieces_type =
    std::vector<checkers_msgs::msg::Piece_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<checkers_msgs::msg::Piece_<ContainerAllocator>>>;
  _pieces_type pieces;

  // setters for named parameter idiom
  Type & set__pieces(
    const std::vector<checkers_msgs::msg::Piece_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<checkers_msgs::msg::Piece_<ContainerAllocator>>> & _arg)
  {
    this->pieces = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    checkers_msgs::msg::Board_<ContainerAllocator> *;
  using ConstRawPtr =
    const checkers_msgs::msg::Board_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<checkers_msgs::msg::Board_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<checkers_msgs::msg::Board_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::Board_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::Board_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::Board_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::Board_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<checkers_msgs::msg::Board_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<checkers_msgs::msg::Board_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__checkers_msgs__msg__Board
    std::shared_ptr<checkers_msgs::msg::Board_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__checkers_msgs__msg__Board
    std::shared_ptr<checkers_msgs::msg::Board_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Board_ & other) const
  {
    if (this->pieces != other.pieces) {
      return false;
    }
    return true;
  }
  bool operator!=(const Board_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Board_

// alias to use template instance with default allocator
using Board =
  checkers_msgs::msg::Board_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__BOARD__STRUCT_HPP_
