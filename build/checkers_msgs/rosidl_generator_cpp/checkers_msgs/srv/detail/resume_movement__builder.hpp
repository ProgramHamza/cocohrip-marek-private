// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from checkers_msgs:srv/ResumeMovement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/srv/resume_movement.hpp"


#ifndef CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__BUILDER_HPP_
#define CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "checkers_msgs/srv/detail/resume_movement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace checkers_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::checkers_msgs::srv::ResumeMovement_Request>()
{
  return ::checkers_msgs::srv::ResumeMovement_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace checkers_msgs


namespace checkers_msgs
{

namespace srv
{

namespace builder
{

class Init_ResumeMovement_Response_success
{
public:
  Init_ResumeMovement_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::checkers_msgs::srv::ResumeMovement_Response success(::checkers_msgs::srv::ResumeMovement_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::checkers_msgs::srv::ResumeMovement_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::checkers_msgs::srv::ResumeMovement_Response>()
{
  return checkers_msgs::srv::builder::Init_ResumeMovement_Response_success();
}

}  // namespace checkers_msgs


namespace checkers_msgs
{

namespace srv
{

namespace builder
{

class Init_ResumeMovement_Event_response
{
public:
  explicit Init_ResumeMovement_Event_response(::checkers_msgs::srv::ResumeMovement_Event & msg)
  : msg_(msg)
  {}
  ::checkers_msgs::srv::ResumeMovement_Event response(::checkers_msgs::srv::ResumeMovement_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::checkers_msgs::srv::ResumeMovement_Event msg_;
};

class Init_ResumeMovement_Event_request
{
public:
  explicit Init_ResumeMovement_Event_request(::checkers_msgs::srv::ResumeMovement_Event & msg)
  : msg_(msg)
  {}
  Init_ResumeMovement_Event_response request(::checkers_msgs::srv::ResumeMovement_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ResumeMovement_Event_response(msg_);
  }

private:
  ::checkers_msgs::srv::ResumeMovement_Event msg_;
};

class Init_ResumeMovement_Event_info
{
public:
  Init_ResumeMovement_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResumeMovement_Event_request info(::checkers_msgs::srv::ResumeMovement_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ResumeMovement_Event_request(msg_);
  }

private:
  ::checkers_msgs::srv::ResumeMovement_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::checkers_msgs::srv::ResumeMovement_Event>()
{
  return checkers_msgs::srv::builder::Init_ResumeMovement_Event_info();
}

}  // namespace checkers_msgs

#endif  // CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__BUILDER_HPP_
