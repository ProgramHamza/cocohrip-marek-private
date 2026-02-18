// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from checkers_msgs:msg/HandDetected.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/hand_detected.h"


#ifndef CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__STRUCT_H_
#define CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/HandDetected in the package checkers_msgs.
/**
  * HandDetected.msg
 */
typedef struct checkers_msgs__msg__HandDetected
{
  bool hand_detected;
} checkers_msgs__msg__HandDetected;

// Struct for a sequence of checkers_msgs__msg__HandDetected.
typedef struct checkers_msgs__msg__HandDetected__Sequence
{
  checkers_msgs__msg__HandDetected * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} checkers_msgs__msg__HandDetected__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__STRUCT_H_
