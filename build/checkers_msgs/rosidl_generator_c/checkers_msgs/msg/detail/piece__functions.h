// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "checkers_msgs/msg/piece.h"


#ifndef CHECKERS_MSGS__MSG__DETAIL__PIECE__FUNCTIONS_H_
#define CHECKERS_MSGS__MSG__DETAIL__PIECE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "checkers_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "checkers_msgs/msg/detail/piece__struct.h"

/// Initialize msg/Piece message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * checkers_msgs__msg__Piece
 * )) before or use
 * checkers_msgs__msg__Piece__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
bool
checkers_msgs__msg__Piece__init(checkers_msgs__msg__Piece * msg);

/// Finalize msg/Piece message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
void
checkers_msgs__msg__Piece__fini(checkers_msgs__msg__Piece * msg);

/// Create msg/Piece message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * checkers_msgs__msg__Piece__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
checkers_msgs__msg__Piece *
checkers_msgs__msg__Piece__create(void);

/// Destroy msg/Piece message.
/**
 * It calls
 * checkers_msgs__msg__Piece__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
void
checkers_msgs__msg__Piece__destroy(checkers_msgs__msg__Piece * msg);

/// Check for msg/Piece message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
bool
checkers_msgs__msg__Piece__are_equal(const checkers_msgs__msg__Piece * lhs, const checkers_msgs__msg__Piece * rhs);

/// Copy a msg/Piece message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
bool
checkers_msgs__msg__Piece__copy(
  const checkers_msgs__msg__Piece * input,
  checkers_msgs__msg__Piece * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_type_hash_t *
checkers_msgs__msg__Piece__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_runtime_c__type_description__TypeDescription *
checkers_msgs__msg__Piece__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_runtime_c__type_description__TypeSource *
checkers_msgs__msg__Piece__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
checkers_msgs__msg__Piece__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/Piece messages.
/**
 * It allocates the memory for the number of elements and calls
 * checkers_msgs__msg__Piece__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
bool
checkers_msgs__msg__Piece__Sequence__init(checkers_msgs__msg__Piece__Sequence * array, size_t size);

/// Finalize array of msg/Piece messages.
/**
 * It calls
 * checkers_msgs__msg__Piece__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
void
checkers_msgs__msg__Piece__Sequence__fini(checkers_msgs__msg__Piece__Sequence * array);

/// Create array of msg/Piece messages.
/**
 * It allocates the memory for the array and calls
 * checkers_msgs__msg__Piece__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
checkers_msgs__msg__Piece__Sequence *
checkers_msgs__msg__Piece__Sequence__create(size_t size);

/// Destroy array of msg/Piece messages.
/**
 * It calls
 * checkers_msgs__msg__Piece__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
void
checkers_msgs__msg__Piece__Sequence__destroy(checkers_msgs__msg__Piece__Sequence * array);

/// Check for msg/Piece message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
bool
checkers_msgs__msg__Piece__Sequence__are_equal(const checkers_msgs__msg__Piece__Sequence * lhs, const checkers_msgs__msg__Piece__Sequence * rhs);

/// Copy an array of msg/Piece messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_checkers_msgs
bool
checkers_msgs__msg__Piece__Sequence__copy(
  const checkers_msgs__msg__Piece__Sequence * input,
  checkers_msgs__msg__Piece__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CHECKERS_MSGS__MSG__DETAIL__PIECE__FUNCTIONS_H_
