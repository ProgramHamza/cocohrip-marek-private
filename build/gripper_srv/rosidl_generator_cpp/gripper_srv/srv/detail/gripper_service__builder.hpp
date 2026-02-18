// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gripper_srv/srv/gripper_service.hpp"


#ifndef GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__BUILDER_HPP_
#define GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gripper_srv/srv/detail/gripper_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gripper_srv
{

namespace srv
{

namespace builder
{

class Init_GripperService_Request_force
{
public:
  explicit Init_GripperService_Request_force(::gripper_srv::srv::GripperService_Request & msg)
  : msg_(msg)
  {}
  ::gripper_srv::srv::GripperService_Request force(::gripper_srv::srv::GripperService_Request::_force_type arg)
  {
    msg_.force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gripper_srv::srv::GripperService_Request msg_;
};

class Init_GripperService_Request_speed
{
public:
  explicit Init_GripperService_Request_speed(::gripper_srv::srv::GripperService_Request & msg)
  : msg_(msg)
  {}
  Init_GripperService_Request_force speed(::gripper_srv::srv::GripperService_Request::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GripperService_Request_force(msg_);
  }

private:
  ::gripper_srv::srv::GripperService_Request msg_;
};

class Init_GripperService_Request_position
{
public:
  Init_GripperService_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperService_Request_speed position(::gripper_srv::srv::GripperService_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_GripperService_Request_speed(msg_);
  }

private:
  ::gripper_srv::srv::GripperService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gripper_srv::srv::GripperService_Request>()
{
  return gripper_srv::srv::builder::Init_GripperService_Request_position();
}

}  // namespace gripper_srv


namespace gripper_srv
{

namespace srv
{

namespace builder
{

class Init_GripperService_Response_response
{
public:
  Init_GripperService_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gripper_srv::srv::GripperService_Response response(::gripper_srv::srv::GripperService_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gripper_srv::srv::GripperService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gripper_srv::srv::GripperService_Response>()
{
  return gripper_srv::srv::builder::Init_GripperService_Response_response();
}

}  // namespace gripper_srv


namespace gripper_srv
{

namespace srv
{

namespace builder
{

class Init_GripperService_Event_response
{
public:
  explicit Init_GripperService_Event_response(::gripper_srv::srv::GripperService_Event & msg)
  : msg_(msg)
  {}
  ::gripper_srv::srv::GripperService_Event response(::gripper_srv::srv::GripperService_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gripper_srv::srv::GripperService_Event msg_;
};

class Init_GripperService_Event_request
{
public:
  explicit Init_GripperService_Event_request(::gripper_srv::srv::GripperService_Event & msg)
  : msg_(msg)
  {}
  Init_GripperService_Event_response request(::gripper_srv::srv::GripperService_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GripperService_Event_response(msg_);
  }

private:
  ::gripper_srv::srv::GripperService_Event msg_;
};

class Init_GripperService_Event_info
{
public:
  Init_GripperService_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperService_Event_request info(::gripper_srv::srv::GripperService_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GripperService_Event_request(msg_);
  }

private:
  ::gripper_srv::srv::GripperService_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gripper_srv::srv::GripperService_Event>()
{
  return gripper_srv::srv::builder::Init_GripperService_Event_info();
}

}  // namespace gripper_srv

#endif  // GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__BUILDER_HPP_
