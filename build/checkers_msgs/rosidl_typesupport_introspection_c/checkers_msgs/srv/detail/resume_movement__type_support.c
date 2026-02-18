// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from checkers_msgs:srv/ResumeMovement.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "checkers_msgs/srv/detail/resume_movement__rosidl_typesupport_introspection_c.h"
#include "checkers_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "checkers_msgs/srv/detail/resume_movement__functions.h"
#include "checkers_msgs/srv/detail/resume_movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  checkers_msgs__srv__ResumeMovement_Request__init(message_memory);
}

void checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_fini_function(void * message_memory)
{
  checkers_msgs__srv__ResumeMovement_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs__srv__ResumeMovement_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_members = {
  "checkers_msgs__srv",  // message namespace
  "ResumeMovement_Request",  // message name
  1,  // number of fields
  sizeof(checkers_msgs__srv__ResumeMovement_Request),
  false,  // has_any_key_member_
  checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_member_array,  // message members
  checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_type_support_handle = {
  0,
  &checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_members,
  get_message_typesupport_handle_function,
  &checkers_msgs__srv__ResumeMovement_Request__get_type_hash,
  &checkers_msgs__srv__ResumeMovement_Request__get_type_description,
  &checkers_msgs__srv__ResumeMovement_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_checkers_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Request)() {
  if (!checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_type_support_handle.typesupport_identifier) {
    checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "checkers_msgs/srv/detail/resume_movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "checkers_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "checkers_msgs/srv/detail/resume_movement__functions.h"
// already included above
// #include "checkers_msgs/srv/detail/resume_movement__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  checkers_msgs__srv__ResumeMovement_Response__init(message_memory);
}

void checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_fini_function(void * message_memory)
{
  checkers_msgs__srv__ResumeMovement_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs__srv__ResumeMovement_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_members = {
  "checkers_msgs__srv",  // message namespace
  "ResumeMovement_Response",  // message name
  1,  // number of fields
  sizeof(checkers_msgs__srv__ResumeMovement_Response),
  false,  // has_any_key_member_
  checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_member_array,  // message members
  checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_type_support_handle = {
  0,
  &checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_members,
  get_message_typesupport_handle_function,
  &checkers_msgs__srv__ResumeMovement_Response__get_type_hash,
  &checkers_msgs__srv__ResumeMovement_Response__get_type_description,
  &checkers_msgs__srv__ResumeMovement_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_checkers_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Response)() {
  if (!checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_type_support_handle.typesupport_identifier) {
    checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "checkers_msgs/srv/detail/resume_movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "checkers_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "checkers_msgs/srv/detail/resume_movement__functions.h"
// already included above
// #include "checkers_msgs/srv/detail/resume_movement__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "checkers_msgs/srv/resume_movement.h"
// Member `request`
// Member `response`
// already included above
// #include "checkers_msgs/srv/detail/resume_movement__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  checkers_msgs__srv__ResumeMovement_Event__init(message_memory);
}

void checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_fini_function(void * message_memory)
{
  checkers_msgs__srv__ResumeMovement_Event__fini(message_memory);
}

size_t checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__size_function__ResumeMovement_Event__request(
  const void * untyped_member)
{
  const checkers_msgs__srv__ResumeMovement_Request__Sequence * member =
    (const checkers_msgs__srv__ResumeMovement_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_const_function__ResumeMovement_Event__request(
  const void * untyped_member, size_t index)
{
  const checkers_msgs__srv__ResumeMovement_Request__Sequence * member =
    (const checkers_msgs__srv__ResumeMovement_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_function__ResumeMovement_Event__request(
  void * untyped_member, size_t index)
{
  checkers_msgs__srv__ResumeMovement_Request__Sequence * member =
    (checkers_msgs__srv__ResumeMovement_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__fetch_function__ResumeMovement_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const checkers_msgs__srv__ResumeMovement_Request * item =
    ((const checkers_msgs__srv__ResumeMovement_Request *)
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_const_function__ResumeMovement_Event__request(untyped_member, index));
  checkers_msgs__srv__ResumeMovement_Request * value =
    (checkers_msgs__srv__ResumeMovement_Request *)(untyped_value);
  *value = *item;
}

void checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__assign_function__ResumeMovement_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  checkers_msgs__srv__ResumeMovement_Request * item =
    ((checkers_msgs__srv__ResumeMovement_Request *)
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_function__ResumeMovement_Event__request(untyped_member, index));
  const checkers_msgs__srv__ResumeMovement_Request * value =
    (const checkers_msgs__srv__ResumeMovement_Request *)(untyped_value);
  *item = *value;
}

bool checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__resize_function__ResumeMovement_Event__request(
  void * untyped_member, size_t size)
{
  checkers_msgs__srv__ResumeMovement_Request__Sequence * member =
    (checkers_msgs__srv__ResumeMovement_Request__Sequence *)(untyped_member);
  checkers_msgs__srv__ResumeMovement_Request__Sequence__fini(member);
  return checkers_msgs__srv__ResumeMovement_Request__Sequence__init(member, size);
}

size_t checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__size_function__ResumeMovement_Event__response(
  const void * untyped_member)
{
  const checkers_msgs__srv__ResumeMovement_Response__Sequence * member =
    (const checkers_msgs__srv__ResumeMovement_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_const_function__ResumeMovement_Event__response(
  const void * untyped_member, size_t index)
{
  const checkers_msgs__srv__ResumeMovement_Response__Sequence * member =
    (const checkers_msgs__srv__ResumeMovement_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_function__ResumeMovement_Event__response(
  void * untyped_member, size_t index)
{
  checkers_msgs__srv__ResumeMovement_Response__Sequence * member =
    (checkers_msgs__srv__ResumeMovement_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__fetch_function__ResumeMovement_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const checkers_msgs__srv__ResumeMovement_Response * item =
    ((const checkers_msgs__srv__ResumeMovement_Response *)
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_const_function__ResumeMovement_Event__response(untyped_member, index));
  checkers_msgs__srv__ResumeMovement_Response * value =
    (checkers_msgs__srv__ResumeMovement_Response *)(untyped_value);
  *value = *item;
}

void checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__assign_function__ResumeMovement_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  checkers_msgs__srv__ResumeMovement_Response * item =
    ((checkers_msgs__srv__ResumeMovement_Response *)
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_function__ResumeMovement_Event__response(untyped_member, index));
  const checkers_msgs__srv__ResumeMovement_Response * value =
    (const checkers_msgs__srv__ResumeMovement_Response *)(untyped_value);
  *item = *value;
}

bool checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__resize_function__ResumeMovement_Event__response(
  void * untyped_member, size_t size)
{
  checkers_msgs__srv__ResumeMovement_Response__Sequence * member =
    (checkers_msgs__srv__ResumeMovement_Response__Sequence *)(untyped_member);
  checkers_msgs__srv__ResumeMovement_Response__Sequence__fini(member);
  return checkers_msgs__srv__ResumeMovement_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(checkers_msgs__srv__ResumeMovement_Event, info),  // bytes offset in struct
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
    offsetof(checkers_msgs__srv__ResumeMovement_Event, request),  // bytes offset in struct
    NULL,  // default value
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__size_function__ResumeMovement_Event__request,  // size() function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_const_function__ResumeMovement_Event__request,  // get_const(index) function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_function__ResumeMovement_Event__request,  // get(index) function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__fetch_function__ResumeMovement_Event__request,  // fetch(index, &value) function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__assign_function__ResumeMovement_Event__request,  // assign(index, value) function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__resize_function__ResumeMovement_Event__request  // resize(index) function pointer
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
    offsetof(checkers_msgs__srv__ResumeMovement_Event, response),  // bytes offset in struct
    NULL,  // default value
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__size_function__ResumeMovement_Event__response,  // size() function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_const_function__ResumeMovement_Event__response,  // get_const(index) function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__get_function__ResumeMovement_Event__response,  // get(index) function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__fetch_function__ResumeMovement_Event__response,  // fetch(index, &value) function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__assign_function__ResumeMovement_Event__response,  // assign(index, value) function pointer
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__resize_function__ResumeMovement_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_members = {
  "checkers_msgs__srv",  // message namespace
  "ResumeMovement_Event",  // message name
  3,  // number of fields
  sizeof(checkers_msgs__srv__ResumeMovement_Event),
  false,  // has_any_key_member_
  checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_member_array,  // message members
  checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_type_support_handle = {
  0,
  &checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_members,
  get_message_typesupport_handle_function,
  &checkers_msgs__srv__ResumeMovement_Event__get_type_hash,
  &checkers_msgs__srv__ResumeMovement_Event__get_type_description,
  &checkers_msgs__srv__ResumeMovement_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_checkers_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Event)() {
  checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Request)();
  checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Response)();
  if (!checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_type_support_handle.typesupport_identifier) {
    checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "checkers_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "checkers_msgs/srv/detail/resume_movement__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_service_members = {
  "checkers_msgs__srv",  // service namespace
  "ResumeMovement",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_type_support_handle,
  NULL,  // response message
  // checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_type_support_handle
  NULL  // event_message
  // checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_type_support_handle
};


static rosidl_service_type_support_t checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_service_type_support_handle = {
  0,
  &checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_service_members,
  get_service_typesupport_handle_function,
  &checkers_msgs__srv__ResumeMovement_Request__rosidl_typesupport_introspection_c__ResumeMovement_Request_message_type_support_handle,
  &checkers_msgs__srv__ResumeMovement_Response__rosidl_typesupport_introspection_c__ResumeMovement_Response_message_type_support_handle,
  &checkers_msgs__srv__ResumeMovement_Event__rosidl_typesupport_introspection_c__ResumeMovement_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    checkers_msgs,
    srv,
    ResumeMovement
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    checkers_msgs,
    srv,
    ResumeMovement
  ),
  &checkers_msgs__srv__ResumeMovement__get_type_hash,
  &checkers_msgs__srv__ResumeMovement__get_type_description,
  &checkers_msgs__srv__ResumeMovement__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_checkers_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement)(void) {
  if (!checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_service_type_support_handle.typesupport_identifier) {
    checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, checkers_msgs, srv, ResumeMovement_Event)()->data;
  }

  return &checkers_msgs__srv__detail__resume_movement__rosidl_typesupport_introspection_c__ResumeMovement_service_type_support_handle;
}
