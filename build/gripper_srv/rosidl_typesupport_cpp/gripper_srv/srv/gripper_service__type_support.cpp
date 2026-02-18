// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gripper_srv/srv/detail/gripper_service__functions.h"
#include "gripper_srv/srv/detail/gripper_service__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gripper_srv
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GripperService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperService_Request_type_support_ids_t;

static const _GripperService_Request_type_support_ids_t _GripperService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GripperService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GripperService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GripperService_Request_type_support_symbol_names_t _GripperService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gripper_srv, srv, GripperService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gripper_srv, srv, GripperService_Request)),
  }
};

typedef struct _GripperService_Request_type_support_data_t
{
  void * data[2];
} _GripperService_Request_type_support_data_t;

static _GripperService_Request_type_support_data_t _GripperService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GripperService_Request_message_typesupport_map = {
  2,
  "gripper_srv",
  &_GripperService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GripperService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GripperService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GripperService_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperService_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Request__get_type_hash,
  &gripper_srv__srv__GripperService_Request__get_type_description,
  &gripper_srv__srv__GripperService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gripper_srv

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gripper_srv::srv::GripperService_Request>()
{
  return &::gripper_srv::srv::rosidl_typesupport_cpp::GripperService_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gripper_srv, srv, GripperService_Request)() {
  return get_message_type_support_handle<gripper_srv::srv::GripperService_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__functions.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gripper_srv
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GripperService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperService_Response_type_support_ids_t;

static const _GripperService_Response_type_support_ids_t _GripperService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GripperService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GripperService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GripperService_Response_type_support_symbol_names_t _GripperService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gripper_srv, srv, GripperService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gripper_srv, srv, GripperService_Response)),
  }
};

typedef struct _GripperService_Response_type_support_data_t
{
  void * data[2];
} _GripperService_Response_type_support_data_t;

static _GripperService_Response_type_support_data_t _GripperService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GripperService_Response_message_typesupport_map = {
  2,
  "gripper_srv",
  &_GripperService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GripperService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GripperService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GripperService_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperService_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Response__get_type_hash,
  &gripper_srv__srv__GripperService_Response__get_type_description,
  &gripper_srv__srv__GripperService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gripper_srv

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gripper_srv::srv::GripperService_Response>()
{
  return &::gripper_srv::srv::rosidl_typesupport_cpp::GripperService_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gripper_srv, srv, GripperService_Response)() {
  return get_message_type_support_handle<gripper_srv::srv::GripperService_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__functions.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gripper_srv
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GripperService_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperService_Event_type_support_ids_t;

static const _GripperService_Event_type_support_ids_t _GripperService_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GripperService_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GripperService_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GripperService_Event_type_support_symbol_names_t _GripperService_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gripper_srv, srv, GripperService_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gripper_srv, srv, GripperService_Event)),
  }
};

typedef struct _GripperService_Event_type_support_data_t
{
  void * data[2];
} _GripperService_Event_type_support_data_t;

static _GripperService_Event_type_support_data_t _GripperService_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GripperService_Event_message_typesupport_map = {
  2,
  "gripper_srv",
  &_GripperService_Event_message_typesupport_ids.typesupport_identifier[0],
  &_GripperService_Event_message_typesupport_symbol_names.symbol_name[0],
  &_GripperService_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GripperService_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperService_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Event__get_type_hash,
  &gripper_srv__srv__GripperService_Event__get_type_description,
  &gripper_srv__srv__GripperService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gripper_srv

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gripper_srv::srv::GripperService_Event>()
{
  return &::gripper_srv::srv::rosidl_typesupport_cpp::GripperService_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, gripper_srv, srv, GripperService_Event)() {
  return get_message_type_support_handle<gripper_srv::srv::GripperService_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gripper_srv
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GripperService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperService_type_support_ids_t;

static const _GripperService_type_support_ids_t _GripperService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GripperService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GripperService_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GripperService_type_support_symbol_names_t _GripperService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gripper_srv, srv, GripperService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gripper_srv, srv, GripperService)),
  }
};

typedef struct _GripperService_type_support_data_t
{
  void * data[2];
} _GripperService_type_support_data_t;

static _GripperService_type_support_data_t _GripperService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GripperService_service_typesupport_map = {
  2,
  "gripper_srv",
  &_GripperService_service_typesupport_ids.typesupport_identifier[0],
  &_GripperService_service_typesupport_symbol_names.symbol_name[0],
  &_GripperService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GripperService_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperService_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gripper_srv::srv::GripperService_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gripper_srv::srv::GripperService_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<gripper_srv::srv::GripperService_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<gripper_srv::srv::GripperService>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<gripper_srv::srv::GripperService>,
  &gripper_srv__srv__GripperService__get_type_hash,
  &gripper_srv__srv__GripperService__get_type_description,
  &gripper_srv__srv__GripperService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace gripper_srv

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gripper_srv::srv::GripperService>()
{
  return &::gripper_srv::srv::rosidl_typesupport_cpp::GripperService_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, gripper_srv, srv, GripperService)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<gripper_srv::srv::GripperService>();
}

#ifdef __cplusplus
}
#endif
