// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice
#include "checkers_msgs/msg/detail/piece__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `color`
#include "rosidl_runtime_c/string_functions.h"

bool
checkers_msgs__msg__Piece__init(checkers_msgs__msg__Piece * msg)
{
  if (!msg) {
    return false;
  }
  // row
  // col
  // color
  if (!rosidl_runtime_c__String__init(&msg->color)) {
    checkers_msgs__msg__Piece__fini(msg);
    return false;
  }
  // king
  return true;
}

void
checkers_msgs__msg__Piece__fini(checkers_msgs__msg__Piece * msg)
{
  if (!msg) {
    return;
  }
  // row
  // col
  // color
  rosidl_runtime_c__String__fini(&msg->color);
  // king
}

bool
checkers_msgs__msg__Piece__are_equal(const checkers_msgs__msg__Piece * lhs, const checkers_msgs__msg__Piece * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // row
  if (lhs->row != rhs->row) {
    return false;
  }
  // col
  if (lhs->col != rhs->col) {
    return false;
  }
  // color
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->color), &(rhs->color)))
  {
    return false;
  }
  // king
  if (lhs->king != rhs->king) {
    return false;
  }
  return true;
}

bool
checkers_msgs__msg__Piece__copy(
  const checkers_msgs__msg__Piece * input,
  checkers_msgs__msg__Piece * output)
{
  if (!input || !output) {
    return false;
  }
  // row
  output->row = input->row;
  // col
  output->col = input->col;
  // color
  if (!rosidl_runtime_c__String__copy(
      &(input->color), &(output->color)))
  {
    return false;
  }
  // king
  output->king = input->king;
  return true;
}

checkers_msgs__msg__Piece *
checkers_msgs__msg__Piece__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__Piece * msg = (checkers_msgs__msg__Piece *)allocator.allocate(sizeof(checkers_msgs__msg__Piece), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(checkers_msgs__msg__Piece));
  bool success = checkers_msgs__msg__Piece__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
checkers_msgs__msg__Piece__destroy(checkers_msgs__msg__Piece * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    checkers_msgs__msg__Piece__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
checkers_msgs__msg__Piece__Sequence__init(checkers_msgs__msg__Piece__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__Piece * data = NULL;

  if (size) {
    data = (checkers_msgs__msg__Piece *)allocator.zero_allocate(size, sizeof(checkers_msgs__msg__Piece), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = checkers_msgs__msg__Piece__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        checkers_msgs__msg__Piece__fini(&data[i - 1]);
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
checkers_msgs__msg__Piece__Sequence__fini(checkers_msgs__msg__Piece__Sequence * array)
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
      checkers_msgs__msg__Piece__fini(&array->data[i]);
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

checkers_msgs__msg__Piece__Sequence *
checkers_msgs__msg__Piece__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__Piece__Sequence * array = (checkers_msgs__msg__Piece__Sequence *)allocator.allocate(sizeof(checkers_msgs__msg__Piece__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = checkers_msgs__msg__Piece__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
checkers_msgs__msg__Piece__Sequence__destroy(checkers_msgs__msg__Piece__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    checkers_msgs__msg__Piece__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
checkers_msgs__msg__Piece__Sequence__are_equal(const checkers_msgs__msg__Piece__Sequence * lhs, const checkers_msgs__msg__Piece__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!checkers_msgs__msg__Piece__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
checkers_msgs__msg__Piece__Sequence__copy(
  const checkers_msgs__msg__Piece__Sequence * input,
  checkers_msgs__msg__Piece__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(checkers_msgs__msg__Piece);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    checkers_msgs__msg__Piece * data =
      (checkers_msgs__msg__Piece *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!checkers_msgs__msg__Piece__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          checkers_msgs__msg__Piece__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!checkers_msgs__msg__Piece__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
