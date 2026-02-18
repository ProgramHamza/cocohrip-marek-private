// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "gripper_srv/srv/gripper_service.h"


#ifndef GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__FUNCTIONS_H_
#define GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__FUNCTIONS_H_

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
#include "gripper_srv/msg/rosidl_generator_c__visibility_control.h"

#include "gripper_srv/srv/detail/gripper_service__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_type_hash_t *
gripper_srv__srv__GripperService__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeDescription *
gripper_srv__srv__GripperService__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeSource *
gripper_srv__srv__GripperService__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeSource__Sequence *
gripper_srv__srv__GripperService__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/GripperService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gripper_srv__srv__GripperService_Request
 * )) before or use
 * gripper_srv__srv__GripperService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Request__init(gripper_srv__srv__GripperService_Request * msg);

/// Finalize srv/GripperService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Request__fini(gripper_srv__srv__GripperService_Request * msg);

/// Create srv/GripperService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gripper_srv__srv__GripperService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
gripper_srv__srv__GripperService_Request *
gripper_srv__srv__GripperService_Request__create(void);

/// Destroy srv/GripperService message.
/**
 * It calls
 * gripper_srv__srv__GripperService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Request__destroy(gripper_srv__srv__GripperService_Request * msg);

/// Check for srv/GripperService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Request__are_equal(const gripper_srv__srv__GripperService_Request * lhs, const gripper_srv__srv__GripperService_Request * rhs);

/// Copy a srv/GripperService message.
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
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Request__copy(
  const gripper_srv__srv__GripperService_Request * input,
  gripper_srv__srv__GripperService_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_type_hash_t *
gripper_srv__srv__GripperService_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeDescription *
gripper_srv__srv__GripperService_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeSource *
gripper_srv__srv__GripperService_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeSource__Sequence *
gripper_srv__srv__GripperService_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GripperService messages.
/**
 * It allocates the memory for the number of elements and calls
 * gripper_srv__srv__GripperService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Request__Sequence__init(gripper_srv__srv__GripperService_Request__Sequence * array, size_t size);

/// Finalize array of srv/GripperService messages.
/**
 * It calls
 * gripper_srv__srv__GripperService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Request__Sequence__fini(gripper_srv__srv__GripperService_Request__Sequence * array);

/// Create array of srv/GripperService messages.
/**
 * It allocates the memory for the array and calls
 * gripper_srv__srv__GripperService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
gripper_srv__srv__GripperService_Request__Sequence *
gripper_srv__srv__GripperService_Request__Sequence__create(size_t size);

/// Destroy array of srv/GripperService messages.
/**
 * It calls
 * gripper_srv__srv__GripperService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Request__Sequence__destroy(gripper_srv__srv__GripperService_Request__Sequence * array);

/// Check for srv/GripperService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Request__Sequence__are_equal(const gripper_srv__srv__GripperService_Request__Sequence * lhs, const gripper_srv__srv__GripperService_Request__Sequence * rhs);

/// Copy an array of srv/GripperService messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Request__Sequence__copy(
  const gripper_srv__srv__GripperService_Request__Sequence * input,
  gripper_srv__srv__GripperService_Request__Sequence * output);

/// Initialize srv/GripperService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gripper_srv__srv__GripperService_Response
 * )) before or use
 * gripper_srv__srv__GripperService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Response__init(gripper_srv__srv__GripperService_Response * msg);

/// Finalize srv/GripperService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Response__fini(gripper_srv__srv__GripperService_Response * msg);

/// Create srv/GripperService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gripper_srv__srv__GripperService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
gripper_srv__srv__GripperService_Response *
gripper_srv__srv__GripperService_Response__create(void);

/// Destroy srv/GripperService message.
/**
 * It calls
 * gripper_srv__srv__GripperService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Response__destroy(gripper_srv__srv__GripperService_Response * msg);

/// Check for srv/GripperService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Response__are_equal(const gripper_srv__srv__GripperService_Response * lhs, const gripper_srv__srv__GripperService_Response * rhs);

/// Copy a srv/GripperService message.
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
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Response__copy(
  const gripper_srv__srv__GripperService_Response * input,
  gripper_srv__srv__GripperService_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_type_hash_t *
gripper_srv__srv__GripperService_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeDescription *
gripper_srv__srv__GripperService_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeSource *
gripper_srv__srv__GripperService_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeSource__Sequence *
gripper_srv__srv__GripperService_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GripperService messages.
/**
 * It allocates the memory for the number of elements and calls
 * gripper_srv__srv__GripperService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Response__Sequence__init(gripper_srv__srv__GripperService_Response__Sequence * array, size_t size);

/// Finalize array of srv/GripperService messages.
/**
 * It calls
 * gripper_srv__srv__GripperService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Response__Sequence__fini(gripper_srv__srv__GripperService_Response__Sequence * array);

/// Create array of srv/GripperService messages.
/**
 * It allocates the memory for the array and calls
 * gripper_srv__srv__GripperService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
gripper_srv__srv__GripperService_Response__Sequence *
gripper_srv__srv__GripperService_Response__Sequence__create(size_t size);

/// Destroy array of srv/GripperService messages.
/**
 * It calls
 * gripper_srv__srv__GripperService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Response__Sequence__destroy(gripper_srv__srv__GripperService_Response__Sequence * array);

/// Check for srv/GripperService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Response__Sequence__are_equal(const gripper_srv__srv__GripperService_Response__Sequence * lhs, const gripper_srv__srv__GripperService_Response__Sequence * rhs);

/// Copy an array of srv/GripperService messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Response__Sequence__copy(
  const gripper_srv__srv__GripperService_Response__Sequence * input,
  gripper_srv__srv__GripperService_Response__Sequence * output);

/// Initialize srv/GripperService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gripper_srv__srv__GripperService_Event
 * )) before or use
 * gripper_srv__srv__GripperService_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Event__init(gripper_srv__srv__GripperService_Event * msg);

/// Finalize srv/GripperService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Event__fini(gripper_srv__srv__GripperService_Event * msg);

/// Create srv/GripperService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gripper_srv__srv__GripperService_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
gripper_srv__srv__GripperService_Event *
gripper_srv__srv__GripperService_Event__create(void);

/// Destroy srv/GripperService message.
/**
 * It calls
 * gripper_srv__srv__GripperService_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Event__destroy(gripper_srv__srv__GripperService_Event * msg);

/// Check for srv/GripperService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Event__are_equal(const gripper_srv__srv__GripperService_Event * lhs, const gripper_srv__srv__GripperService_Event * rhs);

/// Copy a srv/GripperService message.
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
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Event__copy(
  const gripper_srv__srv__GripperService_Event * input,
  gripper_srv__srv__GripperService_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_type_hash_t *
gripper_srv__srv__GripperService_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeDescription *
gripper_srv__srv__GripperService_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeSource *
gripper_srv__srv__GripperService_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
const rosidl_runtime_c__type_description__TypeSource__Sequence *
gripper_srv__srv__GripperService_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/GripperService messages.
/**
 * It allocates the memory for the number of elements and calls
 * gripper_srv__srv__GripperService_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Event__Sequence__init(gripper_srv__srv__GripperService_Event__Sequence * array, size_t size);

/// Finalize array of srv/GripperService messages.
/**
 * It calls
 * gripper_srv__srv__GripperService_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Event__Sequence__fini(gripper_srv__srv__GripperService_Event__Sequence * array);

/// Create array of srv/GripperService messages.
/**
 * It allocates the memory for the array and calls
 * gripper_srv__srv__GripperService_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
gripper_srv__srv__GripperService_Event__Sequence *
gripper_srv__srv__GripperService_Event__Sequence__create(size_t size);

/// Destroy array of srv/GripperService messages.
/**
 * It calls
 * gripper_srv__srv__GripperService_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
void
gripper_srv__srv__GripperService_Event__Sequence__destroy(gripper_srv__srv__GripperService_Event__Sequence * array);

/// Check for srv/GripperService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Event__Sequence__are_equal(const gripper_srv__srv__GripperService_Event__Sequence * lhs, const gripper_srv__srv__GripperService_Event__Sequence * rhs);

/// Copy an array of srv/GripperService messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gripper_srv
bool
gripper_srv__srv__GripperService_Event__Sequence__copy(
  const gripper_srv__srv__GripperService_Event__Sequence * input,
  gripper_srv__srv__GripperService_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // GRIPPER_SRV__SRV__DETAIL__GRIPPER_SERVICE__FUNCTIONS_H_
