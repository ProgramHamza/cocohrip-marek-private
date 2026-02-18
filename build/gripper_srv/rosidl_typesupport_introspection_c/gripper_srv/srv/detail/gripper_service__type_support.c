// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gripper_srv/srv/detail/gripper_service__rosidl_typesupport_introspection_c.h"
#include "gripper_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gripper_srv/srv/detail/gripper_service__functions.h"
#include "gripper_srv/srv/detail/gripper_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gripper_srv__srv__GripperService_Request__init(message_memory);
}

void gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_fini_function(void * message_memory)
{
  gripper_srv__srv__GripperService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_member_array[3] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gripper_srv__srv__GripperService_Request, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gripper_srv__srv__GripperService_Request, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gripper_srv__srv__GripperService_Request, force),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_members = {
  "gripper_srv__srv",  // message namespace
  "GripperService_Request",  // message name
  3,  // number of fields
  sizeof(gripper_srv__srv__GripperService_Request),
  false,  // has_any_key_member_
  gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_member_array,  // message members
  gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_type_support_handle = {
  0,
  &gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_members,
  get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Request__get_type_hash,
  &gripper_srv__srv__GripperService_Request__get_type_description,
  &gripper_srv__srv__GripperService_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gripper_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Request)() {
  if (!gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_type_support_handle.typesupport_identifier) {
    gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gripper_srv/srv/detail/gripper_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gripper_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__functions.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__struct.h"


// Include directives for member types
// Member `response`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gripper_srv__srv__GripperService_Response__init(message_memory);
}

void gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_fini_function(void * message_memory)
{
  gripper_srv__srv__GripperService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_member_array[1] = {
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gripper_srv__srv__GripperService_Response, response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_members = {
  "gripper_srv__srv",  // message namespace
  "GripperService_Response",  // message name
  1,  // number of fields
  sizeof(gripper_srv__srv__GripperService_Response),
  false,  // has_any_key_member_
  gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_member_array,  // message members
  gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_type_support_handle = {
  0,
  &gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_members,
  get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Response__get_type_hash,
  &gripper_srv__srv__GripperService_Response__get_type_description,
  &gripper_srv__srv__GripperService_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gripper_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Response)() {
  if (!gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_type_support_handle.typesupport_identifier) {
    gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gripper_srv/srv/detail/gripper_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gripper_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__functions.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "gripper_srv/srv/gripper_service.h"
// Member `request`
// Member `response`
// already included above
// #include "gripper_srv/srv/detail/gripper_service__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gripper_srv__srv__GripperService_Event__init(message_memory);
}

void gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_fini_function(void * message_memory)
{
  gripper_srv__srv__GripperService_Event__fini(message_memory);
}

size_t gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__size_function__GripperService_Event__request(
  const void * untyped_member)
{
  const gripper_srv__srv__GripperService_Request__Sequence * member =
    (const gripper_srv__srv__GripperService_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_const_function__GripperService_Event__request(
  const void * untyped_member, size_t index)
{
  const gripper_srv__srv__GripperService_Request__Sequence * member =
    (const gripper_srv__srv__GripperService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_function__GripperService_Event__request(
  void * untyped_member, size_t index)
{
  gripper_srv__srv__GripperService_Request__Sequence * member =
    (gripper_srv__srv__GripperService_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__fetch_function__GripperService_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gripper_srv__srv__GripperService_Request * item =
    ((const gripper_srv__srv__GripperService_Request *)
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_const_function__GripperService_Event__request(untyped_member, index));
  gripper_srv__srv__GripperService_Request * value =
    (gripper_srv__srv__GripperService_Request *)(untyped_value);
  *value = *item;
}

void gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__assign_function__GripperService_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gripper_srv__srv__GripperService_Request * item =
    ((gripper_srv__srv__GripperService_Request *)
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_function__GripperService_Event__request(untyped_member, index));
  const gripper_srv__srv__GripperService_Request * value =
    (const gripper_srv__srv__GripperService_Request *)(untyped_value);
  *item = *value;
}

bool gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__resize_function__GripperService_Event__request(
  void * untyped_member, size_t size)
{
  gripper_srv__srv__GripperService_Request__Sequence * member =
    (gripper_srv__srv__GripperService_Request__Sequence *)(untyped_member);
  gripper_srv__srv__GripperService_Request__Sequence__fini(member);
  return gripper_srv__srv__GripperService_Request__Sequence__init(member, size);
}

size_t gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__size_function__GripperService_Event__response(
  const void * untyped_member)
{
  const gripper_srv__srv__GripperService_Response__Sequence * member =
    (const gripper_srv__srv__GripperService_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_const_function__GripperService_Event__response(
  const void * untyped_member, size_t index)
{
  const gripper_srv__srv__GripperService_Response__Sequence * member =
    (const gripper_srv__srv__GripperService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_function__GripperService_Event__response(
  void * untyped_member, size_t index)
{
  gripper_srv__srv__GripperService_Response__Sequence * member =
    (gripper_srv__srv__GripperService_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__fetch_function__GripperService_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gripper_srv__srv__GripperService_Response * item =
    ((const gripper_srv__srv__GripperService_Response *)
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_const_function__GripperService_Event__response(untyped_member, index));
  gripper_srv__srv__GripperService_Response * value =
    (gripper_srv__srv__GripperService_Response *)(untyped_value);
  *value = *item;
}

void gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__assign_function__GripperService_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gripper_srv__srv__GripperService_Response * item =
    ((gripper_srv__srv__GripperService_Response *)
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_function__GripperService_Event__response(untyped_member, index));
  const gripper_srv__srv__GripperService_Response * value =
    (const gripper_srv__srv__GripperService_Response *)(untyped_value);
  *item = *value;
}

bool gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__resize_function__GripperService_Event__response(
  void * untyped_member, size_t size)
{
  gripper_srv__srv__GripperService_Response__Sequence * member =
    (gripper_srv__srv__GripperService_Response__Sequence *)(untyped_member);
  gripper_srv__srv__GripperService_Response__Sequence__fini(member);
  return gripper_srv__srv__GripperService_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gripper_srv__srv__GripperService_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(gripper_srv__srv__GripperService_Event, request),  // bytes offset in struct
    NULL,  // default value
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__size_function__GripperService_Event__request,  // size() function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_const_function__GripperService_Event__request,  // get_const(index) function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_function__GripperService_Event__request,  // get(index) function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__fetch_function__GripperService_Event__request,  // fetch(index, &value) function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__assign_function__GripperService_Event__request,  // assign(index, value) function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__resize_function__GripperService_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(gripper_srv__srv__GripperService_Event, response),  // bytes offset in struct
    NULL,  // default value
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__size_function__GripperService_Event__response,  // size() function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_const_function__GripperService_Event__response,  // get_const(index) function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__get_function__GripperService_Event__response,  // get(index) function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__fetch_function__GripperService_Event__response,  // fetch(index, &value) function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__assign_function__GripperService_Event__response,  // assign(index, value) function pointer
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__resize_function__GripperService_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_members = {
  "gripper_srv__srv",  // message namespace
  "GripperService_Event",  // message name
  3,  // number of fields
  sizeof(gripper_srv__srv__GripperService_Event),
  false,  // has_any_key_member_
  gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_member_array,  // message members
  gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_type_support_handle = {
  0,
  &gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_members,
  get_message_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Event__get_type_hash,
  &gripper_srv__srv__GripperService_Event__get_type_description,
  &gripper_srv__srv__GripperService_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gripper_srv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Event)() {
  gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Request)();
  gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Response)();
  if (!gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_type_support_handle.typesupport_identifier) {
    gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gripper_srv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gripper_srv/srv/detail/gripper_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_service_members = {
  "gripper_srv__srv",  // service namespace
  "GripperService",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_Request_message_type_support_handle,
  NULL,  // response message
  // gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_Response_message_type_support_handle
  NULL  // event_message
  // gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_Response_message_type_support_handle
};


static rosidl_service_type_support_t gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_service_type_support_handle = {
  0,
  &gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_service_members,
  get_service_typesupport_handle_function,
  &gripper_srv__srv__GripperService_Request__rosidl_typesupport_introspection_c__GripperService_Request_message_type_support_handle,
  &gripper_srv__srv__GripperService_Response__rosidl_typesupport_introspection_c__GripperService_Response_message_type_support_handle,
  &gripper_srv__srv__GripperService_Event__rosidl_typesupport_introspection_c__GripperService_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gripper_srv
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService)(void) {
  if (!gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_service_type_support_handle.typesupport_identifier) {
    gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gripper_srv, srv, GripperService_Event)()->data;
  }

  return &gripper_srv__srv__detail__gripper_service__rosidl_typesupport_introspection_c__GripperService_service_type_support_handle;
}
