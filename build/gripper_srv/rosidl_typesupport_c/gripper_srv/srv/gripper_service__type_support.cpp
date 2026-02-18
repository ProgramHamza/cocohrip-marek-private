// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "gripper_srv/srv/detail/gripper_service__struct.h"
#include "gripper_srv/srv/detail/gripper_service__type_support.h"
#include "gripper_srv/srv/detail/gripper_service__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace gripper_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GripperService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperService_Request_type_support_ids_t;

static const _GripperService_Request_type_support_ids_t _GripperService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gripper_srv, srv, GripperService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperService_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Request__get_type_hash,
  &gripper_srv__srv__GripperService_Request__get_type_description,
  &gripper_srv__srv__GripperService_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gripper_srv

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gripper_srv, srv, GripperService_Request)() {
  return &::gripper_srv::srv::rosidl_typesupport_c::GripperService_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__struct.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__type_support.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gripper_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GripperService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperService_Response_type_support_ids_t;

static const _GripperService_Response_type_support_ids_t _GripperService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gripper_srv, srv, GripperService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperService_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Response__get_type_hash,
  &gripper_srv__srv__GripperService_Response__get_type_description,
  &gripper_srv__srv__GripperService_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gripper_srv

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gripper_srv, srv, GripperService_Response)() {
  return &::gripper_srv::srv::rosidl_typesupport_c::GripperService_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__struct.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__type_support.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace gripper_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GripperService_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperService_Event_type_support_ids_t;

static const _GripperService_Event_type_support_ids_t _GripperService_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gripper_srv, srv, GripperService_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Event)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperService_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Event__get_type_hash,
  &gripper_srv__srv__GripperService_Event__get_type_description,
  &gripper_srv__srv__GripperService_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gripper_srv

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, gripper_srv, srv, GripperService_Event)() {
  return &::gripper_srv::srv::rosidl_typesupport_c::GripperService_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace gripper_srv
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _GripperService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GripperService_type_support_ids_t;

static const _GripperService_type_support_ids_t _GripperService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gripper_srv, srv, GripperService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GripperService_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &GripperService_Request_message_type_support_handle,
  &GripperService_Response_message_type_support_handle,
  &GripperService_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    gripper_srv,
    srv,
    GripperService
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    gripper_srv,
    srv,
    GripperService
  ),
  &gripper_srv__srv__GripperService__get_type_hash,
  &gripper_srv__srv__GripperService__get_type_description,
  &gripper_srv__srv__GripperService__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace gripper_srv

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, gripper_srv, srv, GripperService)() {
  return &::gripper_srv::srv::rosidl_typesupport_c::GripperService_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
