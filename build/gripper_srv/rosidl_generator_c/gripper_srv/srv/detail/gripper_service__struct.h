// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gripper_srv/srv/gripper_service.h"


#ifndef GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__STRUCT_H_
#define GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperService in the package gripper_srv.
typedef struct gripper_srv__srv__GripperService_Request
{
  int32_t position;
  int32_t speed;
  int32_t force;
} gripper_srv__srv__GripperService_Request;

// Struct for a sequence of gripper_srv__srv__GripperService_Request.
typedef struct gripper_srv__srv__GripperService_Request__Sequence
{
  gripper_srv__srv__GripperService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gripper_srv__srv__GripperService_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GripperService in the package gripper_srv.
typedef struct gripper_srv__srv__GripperService_Response
{
  rosidl_runtime_c__String response;
} gripper_srv__srv__GripperService_Response;

// Struct for a sequence of gripper_srv__srv__GripperService_Response.
typedef struct gripper_srv__srv__GripperService_Response__Sequence
{
  gripper_srv__srv__GripperService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gripper_srv__srv__GripperService_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  gripper_srv__srv__GripperService_Event__request__MAX_SIZE = 1
};
// response
enum
{
  gripper_srv__srv__GripperService_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GripperService in the package gripper_srv.
typedef struct gripper_srv__srv__GripperService_Event
{
  service_msgs__msg__ServiceEventInfo info;
  gripper_srv__srv__GripperService_Request__Sequence request;
  gripper_srv__srv__GripperService_Response__Sequence response;
} gripper_srv__srv__GripperService_Event;

// Struct for a sequence of gripper_srv__srv__GripperService_Event.
typedef struct gripper_srv__srv__GripperService_Event__Sequence
{
  gripper_srv__srv__GripperService_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gripper_srv__srv__GripperService_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__STRUCT_H_
