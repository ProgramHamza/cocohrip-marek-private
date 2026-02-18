// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from checkers_msgs:srv/ResumeMovement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/srv/resume_movement.hpp"


#ifndef CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__TRAITS_HPP_
#define CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "checkers_msgs/srv/detail/resume_movement__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace checkers_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResumeMovement_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResumeMovement_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResumeMovement_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace checkers_msgs

namespace rosidl_generator_traits
{

[[deprecated("use checkers_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const checkers_msgs::srv::ResumeMovement_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  checkers_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use checkers_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const checkers_msgs::srv::ResumeMovement_Request & msg)
{
  return checkers_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<checkers_msgs::srv::ResumeMovement_Request>()
{
  return "checkers_msgs::srv::ResumeMovement_Request";
}

template<>
inline const char * name<checkers_msgs::srv::ResumeMovement_Request>()
{
  return "checkers_msgs/srv/ResumeMovement_Request";
}

template<>
struct has_fixed_size<checkers_msgs::srv::ResumeMovement_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<checkers_msgs::srv::ResumeMovement_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<checkers_msgs::srv::ResumeMovement_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace checkers_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResumeMovement_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResumeMovement_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResumeMovement_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace checkers_msgs

namespace rosidl_generator_traits
{

[[deprecated("use checkers_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const checkers_msgs::srv::ResumeMovement_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  checkers_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use checkers_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const checkers_msgs::srv::ResumeMovement_Response & msg)
{
  return checkers_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<checkers_msgs::srv::ResumeMovement_Response>()
{
  return "checkers_msgs::srv::ResumeMovement_Response";
}

template<>
inline const char * name<checkers_msgs::srv::ResumeMovement_Response>()
{
  return "checkers_msgs/srv/ResumeMovement_Response";
}

template<>
struct has_fixed_size<checkers_msgs::srv::ResumeMovement_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<checkers_msgs::srv::ResumeMovement_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<checkers_msgs::srv::ResumeMovement_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace checkers_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ResumeMovement_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ResumeMovement_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ResumeMovement_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace checkers_msgs

namespace rosidl_generator_traits
{

[[deprecated("use checkers_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const checkers_msgs::srv::ResumeMovement_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  checkers_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use checkers_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const checkers_msgs::srv::ResumeMovement_Event & msg)
{
  return checkers_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<checkers_msgs::srv::ResumeMovement_Event>()
{
  return "checkers_msgs::srv::ResumeMovement_Event";
}

template<>
inline const char * name<checkers_msgs::srv::ResumeMovement_Event>()
{
  return "checkers_msgs/srv/ResumeMovement_Event";
}

template<>
struct has_fixed_size<checkers_msgs::srv::ResumeMovement_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<checkers_msgs::srv::ResumeMovement_Event>
  : std::integral_constant<bool, has_bounded_size<checkers_msgs::srv::ResumeMovement_Request>::value && has_bounded_size<checkers_msgs::srv::ResumeMovement_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<checkers_msgs::srv::ResumeMovement_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<checkers_msgs::srv::ResumeMovement>()
{
  return "checkers_msgs::srv::ResumeMovement";
}

template<>
inline const char * name<checkers_msgs::srv::ResumeMovement>()
{
  return "checkers_msgs/srv/ResumeMovement";
}

template<>
struct has_fixed_size<checkers_msgs::srv::ResumeMovement>
  : std::integral_constant<
    bool,
    has_fixed_size<checkers_msgs::srv::ResumeMovement_Request>::value &&
    has_fixed_size<checkers_msgs::srv::ResumeMovement_Response>::value
  >
{
};

template<>
struct has_bounded_size<checkers_msgs::srv::ResumeMovement>
  : std::integral_constant<
    bool,
    has_bounded_size<checkers_msgs::srv::ResumeMovement_Request>::value &&
    has_bounded_size<checkers_msgs::srv::ResumeMovement_Response>::value
  >
{
};

template<>
struct is_service<checkers_msgs::srv::ResumeMovement>
  : std::true_type
{
};

template<>
struct is_service_request<checkers_msgs::srv::ResumeMovement_Request>
  : std::true_type
{
};

template<>
struct is_service_response<checkers_msgs::srv::ResumeMovement_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__TRAITS_HPP_
