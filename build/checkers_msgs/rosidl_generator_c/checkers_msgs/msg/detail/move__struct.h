// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from checkers_msgs:msg/Move.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/move.h"


#ifndef CHECKERS_MSGS__MSG__DETAIL__MOVE__STRUCT_H_
#define CHECKERS_MSGS__MSG__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'piece_for_moving'
// Member 'removed_pieces'
#include "checkers_msgs/msg/detail/piece__struct.h"

/// Struct defined in msg/Move in the package checkers_msgs.
/**
  * Move.msg
 */
typedef struct checkers_msgs__msg__Move
{
  int32_t target_row;
  int32_t target_col;
  checkers_msgs__msg__Piece piece_for_moving;
  checkers_msgs__msg__Piece__Sequence removed_pieces;
} checkers_msgs__msg__Move;

// Struct for a sequence of checkers_msgs__msg__Move.
typedef struct checkers_msgs__msg__Move__Sequence
{
  checkers_msgs__msg__Move * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} checkers_msgs__msg__Move__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHECKERS_MSGS__MSG__DETAIL__MOVE__STRUCT_H_
