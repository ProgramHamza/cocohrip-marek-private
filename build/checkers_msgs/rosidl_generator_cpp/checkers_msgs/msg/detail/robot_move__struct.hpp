// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from checkers_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/robot_move.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__STRUCT_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__checkers_msgs__msg__RobotMove __attribute__((deprecated))
#else
# define DEPRECATED__checkers_msgs__msg__RobotMove __declspec(deprecated)
#endif

namespace checkers_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotMove_
{
  using Type = RobotMove_<ContainerAllocator>;

  explicit RobotMove_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_move_done = false;
    }
  }

  explicit RobotMove_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_move_done = false;
    }
  }

  // field types and members
  using _robot_move_done_type =
    bool;
  _robot_move_done_type robot_move_done;

  // setters for named parameter idiom
  Type & set__robot_move_done(
    const bool & _arg)
  {
    this->robot_move_done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    checkers_msgs::msg::RobotMove_<ContainerAllocator> *;
  using ConstRawPtr =
    const checkers_msgs::msg::RobotMove_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<checkers_msgs::msg::RobotMove_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<checkers_msgs::msg::RobotMove_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::RobotMove_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::RobotMove_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::RobotMove_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::RobotMove_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<checkers_msgs::msg::RobotMove_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<checkers_msgs::msg::RobotMove_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__checkers_msgs__msg__RobotMove
    std::shared_ptr<checkers_msgs::msg::RobotMove_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__checkers_msgs__msg__RobotMove
    std::shared_ptr<checkers_msgs::msg::RobotMove_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotMove_ & other) const
  {
    if (this->robot_move_done != other.robot_move_done) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotMove_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotMove_

// alias to use template instance with default allocator
using RobotMove =
  checkers_msgs::msg::RobotMove_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__STRUCT_HPP_
