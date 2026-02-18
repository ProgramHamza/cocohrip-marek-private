// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/piece.h"


#ifndef CHECKERS_MSGS__MSG__DETAIL__PIECE__STRUCT_H_
#define CHECKERS_MSGS__MSG__DETAIL__PIECE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Piece in the package checkers_msgs.
/**
  * Piece.msg
 */
typedef struct checkers_msgs__msg__Piece
{
  int32_t row;
  int32_t col;
  rosidl_runtime_c__String color;
  bool king;
} checkers_msgs__msg__Piece;

// Struct for a sequence of checkers_msgs__msg__Piece.
typedef struct checkers_msgs__msg__Piece__Sequence
{
  checkers_msgs__msg__Piece * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} checkers_msgs__msg__Piece__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CHECKERS_MSGS__MSG__DETAIL__PIECE__STRUCT_H_
