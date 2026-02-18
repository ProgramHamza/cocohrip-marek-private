// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gripper_srv:srv/GripperService.idl
// generated code does not contain a copyright notice
#include "gripper_srv/srv/detail/gripper_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
gripper_srv__srv__GripperService_Request__init(gripper_srv__srv__GripperService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // speed
  // force
  return true;
}

void
gripper_srv__srv__GripperService_Request__fini(gripper_srv__srv__GripperService_Request * msg)
{
  if (!msg) {
    return;
  }
  // position
  // speed
  // force
}

bool
gripper_srv__srv__GripperService_Request__are_equal(const gripper_srv__srv__GripperService_Request * lhs, const gripper_srv__srv__GripperService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // force
  if (lhs->force != rhs->force) {
    return false;
  }
  return true;
}

bool
gripper_srv__srv__GripperService_Request__copy(
  const gripper_srv__srv__GripperService_Request * input,
  gripper_srv__srv__GripperService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // speed
  output->speed = input->speed;
  // force
  output->force = input->force;
  return true;
}

gripper_srv__srv__GripperService_Request *
gripper_srv__srv__GripperService_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Request * msg = (gripper_srv__srv__GripperService_Request *)allocator.allocate(sizeof(gripper_srv__srv__GripperService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gripper_srv__srv__GripperService_Request));
  bool success = gripper_srv__srv__GripperService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gripper_srv__srv__GripperService_Request__destroy(gripper_srv__srv__GripperService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gripper_srv__srv__GripperService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gripper_srv__srv__GripperService_Request__Sequence__init(gripper_srv__srv__GripperService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Request * data = NULL;

  if (size) {
    data = (gripper_srv__srv__GripperService_Request *)allocator.zero_allocate(size, sizeof(gripper_srv__srv__GripperService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gripper_srv__srv__GripperService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gripper_srv__srv__GripperService_Request__fini(&data[i - 1]);
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
gripper_srv__srv__GripperService_Request__Sequence__fini(gripper_srv__srv__GripperService_Request__Sequence * array)
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
      gripper_srv__srv__GripperService_Request__fini(&array->data[i]);
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

gripper_srv__srv__GripperService_Request__Sequence *
gripper_srv__srv__GripperService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Request__Sequence * array = (gripper_srv__srv__GripperService_Request__Sequence *)allocator.allocate(sizeof(gripper_srv__srv__GripperService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gripper_srv__srv__GripperService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gripper_srv__srv__GripperService_Request__Sequence__destroy(gripper_srv__srv__GripperService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gripper_srv__srv__GripperService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gripper_srv__srv__GripperService_Request__Sequence__are_equal(const gripper_srv__srv__GripperService_Request__Sequence * lhs, const gripper_srv__srv__GripperService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gripper_srv__srv__GripperService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gripper_srv__srv__GripperService_Request__Sequence__copy(
  const gripper_srv__srv__GripperService_Request__Sequence * input,
  gripper_srv__srv__GripperService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gripper_srv__srv__GripperService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gripper_srv__srv__GripperService_Request * data =
      (gripper_srv__srv__GripperService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gripper_srv__srv__GripperService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gripper_srv__srv__GripperService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gripper_srv__srv__GripperService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "rosidl_runtime_c/string_functions.h"

bool
gripper_srv__srv__GripperService_Response__init(gripper_srv__srv__GripperService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    gripper_srv__srv__GripperService_Response__fini(msg);
    return false;
  }
  return true;
}

void
gripper_srv__srv__GripperService_Response__fini(gripper_srv__srv__GripperService_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
gripper_srv__srv__GripperService_Response__are_equal(const gripper_srv__srv__GripperService_Response * lhs, const gripper_srv__srv__GripperService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
gripper_srv__srv__GripperService_Response__copy(
  const gripper_srv__srv__GripperService_Response * input,
  gripper_srv__srv__GripperService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

gripper_srv__srv__GripperService_Response *
gripper_srv__srv__GripperService_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Response * msg = (gripper_srv__srv__GripperService_Response *)allocator.allocate(sizeof(gripper_srv__srv__GripperService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gripper_srv__srv__GripperService_Response));
  bool success = gripper_srv__srv__GripperService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gripper_srv__srv__GripperService_Response__destroy(gripper_srv__srv__GripperService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gripper_srv__srv__GripperService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gripper_srv__srv__GripperService_Response__Sequence__init(gripper_srv__srv__GripperService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Response * data = NULL;

  if (size) {
    data = (gripper_srv__srv__GripperService_Response *)allocator.zero_allocate(size, sizeof(gripper_srv__srv__GripperService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gripper_srv__srv__GripperService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gripper_srv__srv__GripperService_Response__fini(&data[i - 1]);
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
gripper_srv__srv__GripperService_Response__Sequence__fini(gripper_srv__srv__GripperService_Response__Sequence * array)
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
      gripper_srv__srv__GripperService_Response__fini(&array->data[i]);
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

gripper_srv__srv__GripperService_Response__Sequence *
gripper_srv__srv__GripperService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Response__Sequence * array = (gripper_srv__srv__GripperService_Response__Sequence *)allocator.allocate(sizeof(gripper_srv__srv__GripperService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gripper_srv__srv__GripperService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gripper_srv__srv__GripperService_Response__Sequence__destroy(gripper_srv__srv__GripperService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gripper_srv__srv__GripperService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gripper_srv__srv__GripperService_Response__Sequence__are_equal(const gripper_srv__srv__GripperService_Response__Sequence * lhs, const gripper_srv__srv__GripperService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gripper_srv__srv__GripperService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gripper_srv__srv__GripperService_Response__Sequence__copy(
  const gripper_srv__srv__GripperService_Response__Sequence * input,
  gripper_srv__srv__GripperService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gripper_srv__srv__GripperService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gripper_srv__srv__GripperService_Response * data =
      (gripper_srv__srv__GripperService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gripper_srv__srv__GripperService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gripper_srv__srv__GripperService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gripper_srv__srv__GripperService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "gripper_srv/srv/detail/gripper_service__functions.h"

bool
gripper_srv__srv__GripperService_Event__init(gripper_srv__srv__GripperService_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    gripper_srv__srv__GripperService_Event__fini(msg);
    return false;
  }
  // request
  if (!gripper_srv__srv__GripperService_Request__Sequence__init(&msg->request, 0)) {
    gripper_srv__srv__GripperService_Event__fini(msg);
    return false;
  }
  // response
  if (!gripper_srv__srv__GripperService_Response__Sequence__init(&msg->response, 0)) {
    gripper_srv__srv__GripperService_Event__fini(msg);
    return false;
  }
  return true;
}

void
gripper_srv__srv__GripperService_Event__fini(gripper_srv__srv__GripperService_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  gripper_srv__srv__GripperService_Request__Sequence__fini(&msg->request);
  // response
  gripper_srv__srv__GripperService_Response__Sequence__fini(&msg->response);
}

bool
gripper_srv__srv__GripperService_Event__are_equal(const gripper_srv__srv__GripperService_Event * lhs, const gripper_srv__srv__GripperService_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!gripper_srv__srv__GripperService_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!gripper_srv__srv__GripperService_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
gripper_srv__srv__GripperService_Event__copy(
  const gripper_srv__srv__GripperService_Event * input,
  gripper_srv__srv__GripperService_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!gripper_srv__srv__GripperService_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!gripper_srv__srv__GripperService_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

gripper_srv__srv__GripperService_Event *
gripper_srv__srv__GripperService_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Event * msg = (gripper_srv__srv__GripperService_Event *)allocator.allocate(sizeof(gripper_srv__srv__GripperService_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gripper_srv__srv__GripperService_Event));
  bool success = gripper_srv__srv__GripperService_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gripper_srv__srv__GripperService_Event__destroy(gripper_srv__srv__GripperService_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gripper_srv__srv__GripperService_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gripper_srv__srv__GripperService_Event__Sequence__init(gripper_srv__srv__GripperService_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Event * data = NULL;

  if (size) {
    data = (gripper_srv__srv__GripperService_Event *)allocator.zero_allocate(size, sizeof(gripper_srv__srv__GripperService_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gripper_srv__srv__GripperService_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gripper_srv__srv__GripperService_Event__fini(&data[i - 1]);
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
gripper_srv__srv__GripperService_Event__Sequence__fini(gripper_srv__srv__GripperService_Event__Sequence * array)
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
      gripper_srv__srv__GripperService_Event__fini(&array->data[i]);
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

gripper_srv__srv__GripperService_Event__Sequence *
gripper_srv__srv__GripperService_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gripper_srv__srv__GripperService_Event__Sequence * array = (gripper_srv__srv__GripperService_Event__Sequence *)allocator.allocate(sizeof(gripper_srv__srv__GripperService_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gripper_srv__srv__GripperService_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gripper_srv__srv__GripperService_Event__Sequence__destroy(gripper_srv__srv__GripperService_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gripper_srv__srv__GripperService_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gripper_srv__srv__GripperService_Event__Sequence__are_equal(const gripper_srv__srv__GripperService_Event__Sequence * lhs, const gripper_srv__srv__GripperService_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gripper_srv__srv__GripperService_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gripper_srv__srv__GripperService_Event__Sequence__copy(
  const gripper_srv__srv__GripperService_Event__Sequence * input,
  gripper_srv__srv__GripperService_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gripper_srv__srv__GripperService_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gripper_srv__srv__GripperService_Event * data =
      (gripper_srv__srv__GripperService_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gripper_srv__srv__GripperService_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gripper_srv__srv__GripperService_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gripper_srv__srv__GripperService_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
