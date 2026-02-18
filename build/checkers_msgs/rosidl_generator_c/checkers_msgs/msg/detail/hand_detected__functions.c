// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from checkers_msgs:msg/HandDetected.idl
// generated code does not contain a copyright notice
#include "checkers_msgs/msg/detail/hand_detected__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
checkers_msgs__msg__HandDetected__init(checkers_msgs__msg__HandDetected * msg)
{
  if (!msg) {
    return false;
  }
  // hand_detected
  return true;
}

void
checkers_msgs__msg__HandDetected__fini(checkers_msgs__msg__HandDetected * msg)
{
  if (!msg) {
    return;
  }
  // hand_detected
}

bool
checkers_msgs__msg__HandDetected__are_equal(const checkers_msgs__msg__HandDetected * lhs, const checkers_msgs__msg__HandDetected * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hand_detected
  if (lhs->hand_detected != rhs->hand_detected) {
    return false;
  }
  return true;
}

bool
checkers_msgs__msg__HandDetected__copy(
  const checkers_msgs__msg__HandDetected * input,
  checkers_msgs__msg__HandDetected * output)
{
  if (!input || !output) {
    return false;
  }
  // hand_detected
  output->hand_detected = input->hand_detected;
  return true;
}

checkers_msgs__msg__HandDetected *
checkers_msgs__msg__HandDetected__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__HandDetected * msg = (checkers_msgs__msg__HandDetected *)allocator.allocate(sizeof(checkers_msgs__msg__HandDetected), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(checkers_msgs__msg__HandDetected));
  bool success = checkers_msgs__msg__HandDetected__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
checkers_msgs__msg__HandDetected__destroy(checkers_msgs__msg__HandDetected * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    checkers_msgs__msg__HandDetected__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
checkers_msgs__msg__HandDetected__Sequence__init(checkers_msgs__msg__HandDetected__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__HandDetected * data = NULL;

  if (size) {
    data = (checkers_msgs__msg__HandDetected *)allocator.zero_allocate(size, sizeof(checkers_msgs__msg__HandDetected), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = checkers_msgs__msg__HandDetected__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        checkers_msgs__msg__HandDetected__fini(&data[i - 1]);
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
checkers_msgs__msg__HandDetected__Sequence__fini(checkers_msgs__msg__HandDetected__Sequence * array)
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
      checkers_msgs__msg__HandDetected__fini(&array->data[i]);
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

checkers_msgs__msg__HandDetected__Sequence *
checkers_msgs__msg__HandDetected__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  checkers_msgs__msg__HandDetected__Sequence * array = (checkers_msgs__msg__HandDetected__Sequence *)allocator.allocate(sizeof(checkers_msgs__msg__HandDetected__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = checkers_msgs__msg__HandDetected__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
checkers_msgs__msg__HandDetected__Sequence__destroy(checkers_msgs__msg__HandDetected__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    checkers_msgs__msg__HandDetected__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
checkers_msgs__msg__HandDetected__Sequence__are_equal(const checkers_msgs__msg__HandDetected__Sequence * lhs, const checkers_msgs__msg__HandDetected__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!checkers_msgs__msg__HandDetected__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
checkers_msgs__msg__HandDetected__Sequence__copy(
  const checkers_msgs__msg__HandDetected__Sequence * input,
  checkers_msgs__msg__HandDetected__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(checkers_msgs__msg__HandDetected);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    checkers_msgs__msg__HandDetected * data =
      (checkers_msgs__msg__HandDetected *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!checkers_msgs__msg__HandDetected__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          checkers_msgs__msg__HandDetected__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!checkers_msgs__msg__HandDetected__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
