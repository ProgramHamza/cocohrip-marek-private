// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from checkers_msgs:msg/Move.idl
// generated code does not contain a copyright notice
#include "checkers_msgs/msg/detail/move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `piece_for_moving`
// Member `removed_pieces`
#include "checkers_msgs/msg/detail/piece__functions.h"

bool
checkers_msgs__msg__Move__init(checkers_msgs__msg__Move * msg)
{
  if (!msg) {
    return false;
  }
  // target_row
  // target_col
  // piece_for_moving
  if (!checkers_msgs__msg__Piece__init(&msg->piece_for_moving)) {
    checkers_msgs__msg__Move__fini(msg);
    return false;
  }
  // removed_pieces
  if (!checkers_msgs__msg__Piece__Sequence__init(&msg->removed_pieces, 0)) {
    checkers_msgs__msg__Move__fini(msg);
    return false;
  }
  return true;
}

void
checkers_msgs__msg__Move__fini(checkers_msgs__msg__Move * msg)
{
  if (!msg) {
    return;
  }
  // target_row
  // target_col
  // piece_for_moving
  checkers_msgs__msg__Piece__fini(&msg->piece_for_moving);
  // removed_pieces
  checkers_msgs__msg__Piece__Sequence__fini(&msg->removed_pieces);
}

bool
checkers_msgs__msg__Move__are_equal(const checkers_msgs__msg__Move * lhs, const checkers_msgs__msg__Move * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_row
  if (lhs->target_row != rhs->target_row) {
    return false;
  }
  // target_col
  if (lhs->target_col != rhs->target_col) {
    return false;
  }
  // piece_for_moving
  if (!checkers_msgs__msg__Piece__are_equal(
      &(lhs->piece_for_moving), &(rhs->piece_for_moving)))
  {
    return false;
  }
  // removed_pieces
  if (!checkers_msgs__msg__Piece__Sequence__are_equal(
      &(lhs->removed_pieces), &(rhs->removed_pieces)))
  {
    return false;
  }
  return true;
}

bool
checkers_msgs__msg__Move__copy(
  const checkers_msgs__msg__Move * input,
  checkers_msgs__msg__Move * output)
{
  if (!input || !output) {
    return false;
  }
  // target_row
  output->target_row = input->target_row;
  // target_col
  output->target_col = input->target_col;
  // piece_for_moving
  if (!checkers_msgs__msg__Piece__copy(
      &(input->piece_for_moving), &(output->piece_for_moving)))
  {
    return false;
  }
  // removed_pieces
  if (!checkers_msgs__msg__Piece__Sequence__copy(
      &(input->removed_pieces), &(output->removed_pieces)))
  {
    return false;
  }
  return true;
}

checkers_msgs__msg__Move *
checkers_msgs__msg__Move__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__Move * msg = (checkers_msgs__msg__Move *)allocator.allocate(sizeof(checkers_msgs__msg__Move), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(checkers_msgs__msg__Move));
  bool success = checkers_msgs__msg__Move__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
checkers_msgs__msg__Move__destroy(checkers_msgs__msg__Move * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    checkers_msgs__msg__Move__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
checkers_msgs__msg__Move__Sequence__init(checkers_msgs__msg__Move__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__Move * data = NULL;

  if (size) {
    data = (checkers_msgs__msg__Move *)allocator.zero_allocate(size, sizeof(checkers_msgs__msg__Move), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = checkers_msgs__msg__Move__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        checkers_msgs__msg__Move__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
checkers_msgs__msg__Move__Sequence__fini(checkers_msgs__msg__Move__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      checkers_msgs__msg__Move__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

checkers_msgs__msg__Move__Sequence *
checkers_msgs__msg__Move__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__Move__Sequence * array = (checkers_msgs__msg__Move__Sequence *)allocator.allocate(sizeof(checkers_msgs__msg__Move__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = checkers_msgs__msg__Move__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
checkers_msgs__msg__Move__Sequence__destroy(checkers_msgs__msg__Move__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    checkers_msgs__msg__Move__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
checkers_msgs__msg__Move__Sequence__are_equal(const checkers_msgs__msg__Move__Sequence * lhs, const checkers_msgs__msg__Move__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!checkers_msgs__msg__Move__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
checkers_msgs__msg__Move__Sequence__copy(
  const checkers_msgs__msg__Move__Sequence * input,
  checkers_msgs__msg__Move__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(checkers_msgs__msg__Move);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    checkers_msgs__msg__Move * data =
      (checkers_msgs__msg__Move *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!checkers_msgs__msg__Move__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          checkers_msgs__msg__Move__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!checkers_msgs__msg__Move__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
