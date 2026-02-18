// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from checkers_msgs:msg/Board.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/board.h"


#ifndef CHECKERS_MSGS__MSG__DETAIL__BOARD__STRUCT_H_
#define CHECKERS_MSGS__MSG__DETAIL__BOARD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'pieces'
#include "checkers_msgs/msg/detail/piece__struct.h"

/// Struct defined in msg/Board in the package checkers_msgs.
/**
  * Board.msg
 */
typedef struct checkers_msgs__msg__Board
{
  checkers_msgs__msg__Piece__Sequence pieces;
} checkers_msgs__msg__Board;

// Struct for a sequence of checkers_msgs__msg__Board.
typedef struct checkers_msgs__msg__Board__Sequence
{
  checkers_msgs__msg__Board * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} checkers_msgs__msg__Board__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHECKERS_MSGS__MSG__DETAIL__BOARD__STRUCT_H_
