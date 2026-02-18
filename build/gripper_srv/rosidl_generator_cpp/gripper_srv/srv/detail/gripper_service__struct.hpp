// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gripper_srv/srv/gripper_service.hpp"


#ifndef GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__STRUCT_HPP_
#define GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gripper_srv__srv__GripperService_Request __attribute__((deprecated))
#else
# define DEPRECATED__gripper_srv__srv__GripperService_Request __declspec(deprecated)
#endif

namespace gripper_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperService_Request_
{
  using Type = GripperService_Request_<ContainerAllocator>;

  explicit GripperService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0l;
      this->speed = 0l;
      this->force = 0l;
    }
  }

  explicit GripperService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0l;
      this->speed = 0l;
      this->force = 0l;
    }
  }

  // field types and members
  using _position_type =
    int32_t;
  _position_type position;
  using _speed_type =
    int32_t;
  _speed_type speed;
  using _force_type =
    int32_t;
  _force_type force;

  // setters for named parameter idiom
  Type & set__position(
    const int32_t & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__speed(
    const int32_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__force(
    const int32_t & _arg)
  {
    this->force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gripper_srv::srv::GripperService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const gripper_srv::srv::GripperService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gripper_srv::srv::GripperService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gripper_srv::srv::GripperService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gripper_srv::srv::GripperService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gripper_srv::srv::GripperService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gripper_srv::srv::GripperService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gripper_srv::srv::GripperService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gripper_srv::srv::GripperService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gripper_srv::srv::GripperService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gripper_srv__srv__GripperService_Request
    std::shared_ptr<gripper_srv::srv::GripperService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gripper_srv__srv__GripperService_Request
    std::shared_ptr<gripper_srv::srv::GripperService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperService_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->force != other.force) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperService_Request_

// alias to use template instance with default allocator
using GripperService_Request =
  gripper_srv::srv::GripperService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gripper_srv


#ifndef _WIN32
# define DEPRECATED__gripper_srv__srv__GripperService_Response __attribute__((deprecated))
#else
# define DEPRECATED__gripper_srv__srv__GripperService_Response __declspec(deprecated)
#endif

namespace gripper_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperService_Response_
{
  using Type = GripperService_Response_<ContainerAllocator>;

  explicit GripperService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit GripperService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gripper_srv::srv::GripperService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const gripper_srv::srv::GripperService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gripper_srv::srv::GripperService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gripper_srv::srv::GripperService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gripper_srv::srv::GripperService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gripper_srv::srv::GripperService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gripper_srv::srv::GripperService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gripper_srv::srv::GripperService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gripper_srv::srv::GripperService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gripper_srv::srv::GripperService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gripper_srv__srv__GripperService_Response
    std::shared_ptr<gripper_srv::srv::GripperService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gripper_srv__srv__GripperService_Response
    std::shared_ptr<gripper_srv::srv::GripperService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperService_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperService_Response_

// alias to use template instance with default allocator
using GripperService_Response =
  gripper_srv::srv::GripperService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gripper_srv


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gripper_srv__srv__GripperService_Event __attribute__((deprecated))
#else
# define DEPRECATED__gripper_srv__srv__GripperService_Event __declspec(deprecated)
#endif

namespace gripper_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GripperService_Event_
{
  using Type = GripperService_Event_<ContainerAllocator>;

  explicit GripperService_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit GripperService_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<gripper_srv::srv::GripperService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gripper_srv::srv::GripperService_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<gripper_srv::srv::GripperService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gripper_srv::srv::GripperService_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<gripper_srv::srv::GripperService_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gripper_srv::srv::GripperService_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<gripper_srv::srv::GripperService_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<gripper_srv::srv::GripperService_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gripper_srv::srv::GripperService_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const gripper_srv::srv::GripperService_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gripper_srv::srv::GripperService_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gripper_srv::srv::GripperService_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gripper_srv::srv::GripperService_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gripper_srv::srv::GripperService_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gripper_srv::srv::GripperService_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gripper_srv::srv::GripperService_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gripper_srv::srv::GripperService_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gripper_srv::srv::GripperService_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gripper_srv__srv__GripperService_Event
    std::shared_ptr<gripper_srv::srv::GripperService_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gripper_srv__srv__GripperService_Event
    std::shared_ptr<gripper_srv::srv::GripperService_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperService_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperService_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperService_Event_

// alias to use template instance with default allocator
using GripperService_Event =
  gripper_srv::srv::GripperService_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace gripper_srv

namespace gripper_srv
{

namespace srv
{

struct GripperService
{
  using Request = gripper_srv::srv::GripperService_Request;
  using Response = gripper_srv::srv::GripperService_Response;
  using Event = gripper_srv::srv::GripperService_Event;
};

}  // namespace srv

}  // namespace gripper_srv

#endif  // GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__STRUCT_HPP_
