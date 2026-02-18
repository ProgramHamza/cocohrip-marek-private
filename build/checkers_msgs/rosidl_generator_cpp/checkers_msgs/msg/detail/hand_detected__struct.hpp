// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from checkers_msgs:msg/HandDetected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/hand_detected.hpp"


#ifndef CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__STRUCT_HPP_
#define CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__checkers_msgs__msg__HandDetected __attribute__((deprecated))
#else
# define DEPRECATED__checkers_msgs__msg__HandDetected __declspec(deprecated)
#endif

namespace checkers_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandDetected_
{
  using Type = HandDetected_<ContainerAllocator>;

  explicit HandDetected_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_detected = false;
    }
  }

  explicit HandDetected_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_detected = false;
    }
  }

  // field types and members
  using _hand_detected_type =
    bool;
  _hand_detected_type hand_detected;

  // setters for named parameter idiom
  Type & set__hand_detected(
    const bool & _arg)
  {
    this->hand_detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    checkers_msgs::msg::HandDetected_<ContainerAllocator> *;
  using ConstRawPtr =
    const checkers_msgs::msg::HandDetected_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<checkers_msgs::msg::HandDetected_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<checkers_msgs::msg::HandDetected_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::HandDetected_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::HandDetected_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      checkers_msgs::msg::HandDetected_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<checkers_msgs::msg::HandDetected_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<checkers_msgs::msg::HandDetected_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<checkers_msgs::msg::HandDetected_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__checkers_msgs__msg__HandDetected
    std::shared_ptr<checkers_msgs::msg::HandDetected_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__checkers_msgs__msg__HandDetected
    std::shared_ptr<checkers_msgs::msg::HandDetected_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandDetected_ & other) const
  {
    if (this->hand_detected != other.hand_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandDetected_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandDetected_

// alias to use template instance with default allocator
using HandDetected =
  checkers_msgs::msg::HandDetected_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__STRUCT_HPP_
