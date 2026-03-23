// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ur5e_waypoint_mover:srv/ListWaypoints.idl
// generated code does not contain a copyright notice
#include "ur5e_waypoint_mover/srv/detail/list_waypoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ur5e_waypoint_mover__srv__ListWaypoints_Request__init(ur5e_waypoint_mover__srv__ListWaypoints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Request__fini(ur5e_waypoint_mover__srv__ListWaypoints_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Request__are_equal(const ur5e_waypoint_mover__srv__ListWaypoints_Request * lhs, const ur5e_waypoint_mover__srv__ListWaypoints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Request__copy(
  const ur5e_waypoint_mover__srv__ListWaypoints_Request * input,
  ur5e_waypoint_mover__srv__ListWaypoints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

ur5e_waypoint_mover__srv__ListWaypoints_Request *
ur5e_waypoint_mover__srv__ListWaypoints_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Request * msg = (ur5e_waypoint_mover__srv__ListWaypoints_Request *)allocator.allocate(sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Request));
  bool success = ur5e_waypoint_mover__srv__ListWaypoints_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Request__destroy(ur5e_waypoint_mover__srv__ListWaypoints_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur5e_waypoint_mover__srv__ListWaypoints_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__init(ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Request * data = NULL;

  if (size) {
    data = (ur5e_waypoint_mover__srv__ListWaypoints_Request *)allocator.zero_allocate(size, sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur5e_waypoint_mover__srv__ListWaypoints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur5e_waypoint_mover__srv__ListWaypoints_Request__fini(&data[i - 1]);
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
ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__fini(ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * array)
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
      ur5e_waypoint_mover__srv__ListWaypoints_Request__fini(&array->data[i]);
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

ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence *
ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * array = (ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence *)allocator.allocate(sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__destroy(ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__are_equal(const ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * lhs, const ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur5e_waypoint_mover__srv__ListWaypoints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__copy(
  const ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * input,
  ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur5e_waypoint_mover__srv__ListWaypoints_Request * data =
      (ur5e_waypoint_mover__srv__ListWaypoints_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur5e_waypoint_mover__srv__ListWaypoints_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur5e_waypoint_mover__srv__ListWaypoints_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur5e_waypoint_mover__srv__ListWaypoints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `labels`
#include "rosidl_runtime_c/string_functions.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
ur5e_waypoint_mover__srv__ListWaypoints_Response__init(ur5e_waypoint_mover__srv__ListWaypoints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__init(&msg->labels, 0)) {
    ur5e_waypoint_mover__srv__ListWaypoints_Response__fini(msg);
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->poses, 0)) {
    ur5e_waypoint_mover__srv__ListWaypoints_Response__fini(msg);
    return false;
  }
  return true;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Response__fini(ur5e_waypoint_mover__srv__ListWaypoints_Response * msg)
{
  if (!msg) {
    return;
  }
  // labels
  rosidl_runtime_c__String__Sequence__fini(&msg->labels);
  // poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->poses);
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Response__are_equal(const ur5e_waypoint_mover__srv__ListWaypoints_Response * lhs, const ur5e_waypoint_mover__srv__ListWaypoints_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->labels), &(rhs->labels)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->poses), &(rhs->poses)))
  {
    return false;
  }
  return true;
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Response__copy(
  const ur5e_waypoint_mover__srv__ListWaypoints_Response * input,
  ur5e_waypoint_mover__srv__ListWaypoints_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // labels
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->labels), &(output->labels)))
  {
    return false;
  }
  // poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->poses), &(output->poses)))
  {
    return false;
  }
  return true;
}

ur5e_waypoint_mover__srv__ListWaypoints_Response *
ur5e_waypoint_mover__srv__ListWaypoints_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Response * msg = (ur5e_waypoint_mover__srv__ListWaypoints_Response *)allocator.allocate(sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Response));
  bool success = ur5e_waypoint_mover__srv__ListWaypoints_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Response__destroy(ur5e_waypoint_mover__srv__ListWaypoints_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur5e_waypoint_mover__srv__ListWaypoints_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__init(ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Response * data = NULL;

  if (size) {
    data = (ur5e_waypoint_mover__srv__ListWaypoints_Response *)allocator.zero_allocate(size, sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur5e_waypoint_mover__srv__ListWaypoints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur5e_waypoint_mover__srv__ListWaypoints_Response__fini(&data[i - 1]);
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
ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__fini(ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * array)
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
      ur5e_waypoint_mover__srv__ListWaypoints_Response__fini(&array->data[i]);
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

ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence *
ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * array = (ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence *)allocator.allocate(sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__destroy(ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__are_equal(const ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * lhs, const ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur5e_waypoint_mover__srv__ListWaypoints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__copy(
  const ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * input,
  ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur5e_waypoint_mover__srv__ListWaypoints_Response * data =
      (ur5e_waypoint_mover__srv__ListWaypoints_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur5e_waypoint_mover__srv__ListWaypoints_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur5e_waypoint_mover__srv__ListWaypoints_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur5e_waypoint_mover__srv__ListWaypoints_Response__copy(
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
// #include "ur5e_waypoint_mover/srv/detail/list_waypoints__functions.h"

bool
ur5e_waypoint_mover__srv__ListWaypoints_Event__init(ur5e_waypoint_mover__srv__ListWaypoints_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(msg);
    return false;
  }
  // request
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__init(&msg->request, 0)) {
    ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(msg);
    return false;
  }
  // response
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__init(&msg->response, 0)) {
    ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(msg);
    return false;
  }
  return true;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(ur5e_waypoint_mover__srv__ListWaypoints_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__fini(&msg->request);
  // response
  ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__fini(&msg->response);
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Event__are_equal(const ur5e_waypoint_mover__srv__ListWaypoints_Event * lhs, const ur5e_waypoint_mover__srv__ListWaypoints_Event * rhs)
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
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Event__copy(
  const ur5e_waypoint_mover__srv__ListWaypoints_Event * input,
  ur5e_waypoint_mover__srv__ListWaypoints_Event * output)
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
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ur5e_waypoint_mover__srv__ListWaypoints_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ur5e_waypoint_mover__srv__ListWaypoints_Event *
ur5e_waypoint_mover__srv__ListWaypoints_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Event * msg = (ur5e_waypoint_mover__srv__ListWaypoints_Event *)allocator.allocate(sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Event));
  bool success = ur5e_waypoint_mover__srv__ListWaypoints_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Event__destroy(ur5e_waypoint_mover__srv__ListWaypoints_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence__init(ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Event * data = NULL;

  if (size) {
    data = (ur5e_waypoint_mover__srv__ListWaypoints_Event *)allocator.zero_allocate(size, sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ur5e_waypoint_mover__srv__ListWaypoints_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(&data[i - 1]);
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
ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence__fini(ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence * array)
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
      ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(&array->data[i]);
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

ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence *
ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence * array = (ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence *)allocator.allocate(sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence__destroy(ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence__are_equal(const ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence * lhs, const ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ur5e_waypoint_mover__srv__ListWaypoints_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence__copy(
  const ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence * input,
  ur5e_waypoint_mover__srv__ListWaypoints_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ur5e_waypoint_mover__srv__ListWaypoints_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ur5e_waypoint_mover__srv__ListWaypoints_Event * data =
      (ur5e_waypoint_mover__srv__ListWaypoints_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ur5e_waypoint_mover__srv__ListWaypoints_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ur5e_waypoint_mover__srv__ListWaypoints_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ur5e_waypoint_mover__srv__ListWaypoints_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
