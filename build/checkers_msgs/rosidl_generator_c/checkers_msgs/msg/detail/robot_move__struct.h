// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from checkers_msgs:msg/RobotMove.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/robot_move.h"


#ifndef CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__STRUCT_H_
#define CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/RobotMove in the package checkers_msgs.
/**
  * RobotMove.msg
 */
typedef struct checkers_msgs__msg__RobotMove
{
  bool robot_move_done;
} checkers_msgs__msg__RobotMove;

// Struct for a sequence of checkers_msgs__msg__RobotMove.
typedef struct checkers_msgs__msg__RobotMove__Sequence
{
  checkers_msgs__msg__RobotMove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} checkers_msgs__msg__RobotMove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHECKERS_MSGS__MSG__DETAIL__ROBOT_MOVE__STRUCT_H_
