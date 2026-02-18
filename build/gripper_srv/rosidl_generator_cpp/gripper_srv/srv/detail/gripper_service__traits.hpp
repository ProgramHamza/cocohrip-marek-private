// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gripper_srv/srv/gripper_service.hpp"


#ifndef GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__TRAITS_HPP_
#define GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gripper_srv/srv/detail/gripper_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gripper_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: force
  {
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force: ";
    rosidl_generator_traits::value_to_yaml(msg.force, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperService_Request & msg, bool use_flow_style = false)
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

}  // namespace gripper_srv

namespace rosidl_generator_traits
{

[[deprecated("use gripper_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gripper_srv::srv::GripperService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gripper_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gripper_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const gripper_srv::srv::GripperService_Request & msg)
{
  return gripper_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gripper_srv::srv::GripperService_Request>()
{
  return "gripper_srv::srv::GripperService_Request";
}

template<>
inline const char * name<gripper_srv::srv::GripperService_Request>()
{
  return "gripper_srv/srv/GripperService_Request";
}

template<>
struct has_fixed_size<gripper_srv::srv::GripperService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gripper_srv::srv::GripperService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gripper_srv::srv::GripperService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gripper_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: response
  {
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "response: ";
    rosidl_generator_traits::value_to_yaml(msg.response, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperService_Response & msg, bool use_flow_style = false)
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

}  // namespace gripper_srv

namespace rosidl_generator_traits
{

[[deprecated("use gripper_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gripper_srv::srv::GripperService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gripper_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gripper_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const gripper_srv::srv::GripperService_Response & msg)
{
  return gripper_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gripper_srv::srv::GripperService_Response>()
{
  return "gripper_srv::srv::GripperService_Response";
}

template<>
inline const char * name<gripper_srv::srv::GripperService_Response>()
{
  return "gripper_srv/srv/GripperService_Response";
}

template<>
struct has_fixed_size<gripper_srv::srv::GripperService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gripper_srv::srv::GripperService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gripper_srv::srv::GripperService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace gripper_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperService_Event & msg,
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
  const GripperService_Event & msg,
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

inline std::string to_yaml(const GripperService_Event & msg, bool use_flow_style = false)
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

}  // namespace gripper_srv

namespace rosidl_generator_traits
{

[[deprecated("use gripper_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gripper_srv::srv::GripperService_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  gripper_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gripper_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const gripper_srv::srv::GripperService_Event & msg)
{
  return gripper_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gripper_srv::srv::GripperService_Event>()
{
  return "gripper_srv::srv::GripperService_Event";
}

template<>
inline const char * name<gripper_srv::srv::GripperService_Event>()
{
  return "gripper_srv/srv/GripperService_Event";
}

template<>
struct has_fixed_size<gripper_srv::srv::GripperService_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gripper_srv::srv::GripperService_Event>
  : std::integral_constant<bool, has_bounded_size<gripper_srv::srv::GripperService_Request>::value && has_bounded_size<gripper_srv::srv::GripperService_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<gripper_srv::srv::GripperService_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gripper_srv::srv::GripperService>()
{
  return "gripper_srv::srv::GripperService";
}

template<>
inline const char * name<gripper_srv::srv::GripperService>()
{
  return "gripper_srv/srv/GripperService";
}

template<>
struct has_fixed_size<gripper_srv::srv::GripperService>
  : std::integral_constant<
    bool,
    has_fixed_size<gripper_srv::srv::GripperService_Request>::value &&
    has_fixed_size<gripper_srv::srv::GripperService_Response>::value
  >
{
};

template<>
struct has_bounded_size<gripper_srv::srv::GripperService>
  : std::integral_constant<
    bool,
    has_bounded_size<gripper_srv::srv::GripperService_Request>::value &&
    has_bounded_size<gripper_srv::srv::GripperService_Response>::value
  >
{
};

template<>
struct is_service<gripper_srv::srv::GripperService>
  : std::true_type
{
};

template<>
struct is_service_request<gripper_srv::srv::GripperService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gripper_srv::srv::GripperService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__TRAITS_HPP_
