// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from checkers_msgs:srv/ResumeMovement.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/srv/resume_movement.h"


#ifndef CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__STRUCT_H_
#define CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ResumeMovement in the package checkers_msgs.
typedef struct checkers_msgs__srv__ResumeMovement_Request
{
  uint8_t structure_needs_at_least_one_member;
} checkers_msgs__srv__ResumeMovement_Request;

// Struct for a sequence of checkers_msgs__srv__ResumeMovement_Request.
typedef struct checkers_msgs__srv__ResumeMovement_Request__Sequence
{
  checkers_msgs__srv__ResumeMovement_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} checkers_msgs__srv__ResumeMovement_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/ResumeMovement in the package checkers_msgs.
typedef struct checkers_msgs__srv__ResumeMovement_Response
{
  /// indicate if the call was successful
  bool success;
} checkers_msgs__srv__ResumeMovement_Response;

// Struct for a sequence of checkers_msgs__srv__ResumeMovement_Response.
typedef struct checkers_msgs__srv__ResumeMovement_Response__Sequence
{
  checkers_msgs__srv__ResumeMovement_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} checkers_msgs__srv__ResumeMovement_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  checkers_msgs__srv__ResumeMovement_Event__request__MAX_SIZE = 1
};
// response
enum
{
  checkers_msgs__srv__ResumeMovement_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ResumeMovement in the package checkers_msgs.
typedef struct checkers_msgs__srv__ResumeMovement_Event
{
  service_msgs__msg__ServiceEventInfo info;
  checkers_msgs__srv__ResumeMovement_Request__Sequence request;
  checkers_msgs__srv__ResumeMovement_Response__Sequence response;
} checkers_msgs__srv__ResumeMovement_Event;

// Struct for a sequence of checkers_msgs__srv__ResumeMovement_Event.
typedef struct checkers_msgs__srv__ResumeMovement_Event__Sequence
{
  checkers_msgs__srv__ResumeMovement_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} checkers_msgs__srv__ResumeMovement_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHECKERS_MSGS__SRV__DETAIL__RESUME_MOVEMENT__STRUCT_H_
