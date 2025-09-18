// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from myroboticarm_msgs:srv/EuToQuater.idl
// generated code does not contain a copyright notice
#include "myroboticarm_msgs/srv/detail/eu_to_quater__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
myroboticarm_msgs__srv__EuToQuater_Request__init(myroboticarm_msgs__srv__EuToQuater_Request * msg)
{
  if (!msg) {
    return false;
  }
  // roll
  // pitch
  // yaw
  return true;
}

void
myroboticarm_msgs__srv__EuToQuater_Request__fini(myroboticarm_msgs__srv__EuToQuater_Request * msg)
{
  if (!msg) {
    return;
  }
  // roll
  // pitch
  // yaw
}

bool
myroboticarm_msgs__srv__EuToQuater_Request__are_equal(const myroboticarm_msgs__srv__EuToQuater_Request * lhs, const myroboticarm_msgs__srv__EuToQuater_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
myroboticarm_msgs__srv__EuToQuater_Request__copy(
  const myroboticarm_msgs__srv__EuToQuater_Request * input,
  myroboticarm_msgs__srv__EuToQuater_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  return true;
}

myroboticarm_msgs__srv__EuToQuater_Request *
myroboticarm_msgs__srv__EuToQuater_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Request * msg = (myroboticarm_msgs__srv__EuToQuater_Request *)allocator.allocate(sizeof(myroboticarm_msgs__srv__EuToQuater_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myroboticarm_msgs__srv__EuToQuater_Request));
  bool success = myroboticarm_msgs__srv__EuToQuater_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myroboticarm_msgs__srv__EuToQuater_Request__destroy(myroboticarm_msgs__srv__EuToQuater_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myroboticarm_msgs__srv__EuToQuater_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myroboticarm_msgs__srv__EuToQuater_Request__Sequence__init(myroboticarm_msgs__srv__EuToQuater_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Request * data = NULL;

  if (size) {
    data = (myroboticarm_msgs__srv__EuToQuater_Request *)allocator.zero_allocate(size, sizeof(myroboticarm_msgs__srv__EuToQuater_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myroboticarm_msgs__srv__EuToQuater_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myroboticarm_msgs__srv__EuToQuater_Request__fini(&data[i - 1]);
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
myroboticarm_msgs__srv__EuToQuater_Request__Sequence__fini(myroboticarm_msgs__srv__EuToQuater_Request__Sequence * array)
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
      myroboticarm_msgs__srv__EuToQuater_Request__fini(&array->data[i]);
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

myroboticarm_msgs__srv__EuToQuater_Request__Sequence *
myroboticarm_msgs__srv__EuToQuater_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Request__Sequence * array = (myroboticarm_msgs__srv__EuToQuater_Request__Sequence *)allocator.allocate(sizeof(myroboticarm_msgs__srv__EuToQuater_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myroboticarm_msgs__srv__EuToQuater_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myroboticarm_msgs__srv__EuToQuater_Request__Sequence__destroy(myroboticarm_msgs__srv__EuToQuater_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myroboticarm_msgs__srv__EuToQuater_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myroboticarm_msgs__srv__EuToQuater_Request__Sequence__are_equal(const myroboticarm_msgs__srv__EuToQuater_Request__Sequence * lhs, const myroboticarm_msgs__srv__EuToQuater_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myroboticarm_msgs__srv__EuToQuater_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myroboticarm_msgs__srv__EuToQuater_Request__Sequence__copy(
  const myroboticarm_msgs__srv__EuToQuater_Request__Sequence * input,
  myroboticarm_msgs__srv__EuToQuater_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myroboticarm_msgs__srv__EuToQuater_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myroboticarm_msgs__srv__EuToQuater_Request * data =
      (myroboticarm_msgs__srv__EuToQuater_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myroboticarm_msgs__srv__EuToQuater_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myroboticarm_msgs__srv__EuToQuater_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myroboticarm_msgs__srv__EuToQuater_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
myroboticarm_msgs__srv__EuToQuater_Response__init(myroboticarm_msgs__srv__EuToQuater_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // w
  return true;
}

void
myroboticarm_msgs__srv__EuToQuater_Response__fini(myroboticarm_msgs__srv__EuToQuater_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // w
}

bool
myroboticarm_msgs__srv__EuToQuater_Response__are_equal(const myroboticarm_msgs__srv__EuToQuater_Response * lhs, const myroboticarm_msgs__srv__EuToQuater_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  return true;
}

bool
myroboticarm_msgs__srv__EuToQuater_Response__copy(
  const myroboticarm_msgs__srv__EuToQuater_Response * input,
  myroboticarm_msgs__srv__EuToQuater_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // w
  output->w = input->w;
  return true;
}

myroboticarm_msgs__srv__EuToQuater_Response *
myroboticarm_msgs__srv__EuToQuater_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Response * msg = (myroboticarm_msgs__srv__EuToQuater_Response *)allocator.allocate(sizeof(myroboticarm_msgs__srv__EuToQuater_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myroboticarm_msgs__srv__EuToQuater_Response));
  bool success = myroboticarm_msgs__srv__EuToQuater_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myroboticarm_msgs__srv__EuToQuater_Response__destroy(myroboticarm_msgs__srv__EuToQuater_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myroboticarm_msgs__srv__EuToQuater_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myroboticarm_msgs__srv__EuToQuater_Response__Sequence__init(myroboticarm_msgs__srv__EuToQuater_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Response * data = NULL;

  if (size) {
    data = (myroboticarm_msgs__srv__EuToQuater_Response *)allocator.zero_allocate(size, sizeof(myroboticarm_msgs__srv__EuToQuater_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myroboticarm_msgs__srv__EuToQuater_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myroboticarm_msgs__srv__EuToQuater_Response__fini(&data[i - 1]);
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
myroboticarm_msgs__srv__EuToQuater_Response__Sequence__fini(myroboticarm_msgs__srv__EuToQuater_Response__Sequence * array)
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
      myroboticarm_msgs__srv__EuToQuater_Response__fini(&array->data[i]);
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

myroboticarm_msgs__srv__EuToQuater_Response__Sequence *
myroboticarm_msgs__srv__EuToQuater_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Response__Sequence * array = (myroboticarm_msgs__srv__EuToQuater_Response__Sequence *)allocator.allocate(sizeof(myroboticarm_msgs__srv__EuToQuater_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myroboticarm_msgs__srv__EuToQuater_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myroboticarm_msgs__srv__EuToQuater_Response__Sequence__destroy(myroboticarm_msgs__srv__EuToQuater_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myroboticarm_msgs__srv__EuToQuater_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myroboticarm_msgs__srv__EuToQuater_Response__Sequence__are_equal(const myroboticarm_msgs__srv__EuToQuater_Response__Sequence * lhs, const myroboticarm_msgs__srv__EuToQuater_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myroboticarm_msgs__srv__EuToQuater_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myroboticarm_msgs__srv__EuToQuater_Response__Sequence__copy(
  const myroboticarm_msgs__srv__EuToQuater_Response__Sequence * input,
  myroboticarm_msgs__srv__EuToQuater_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myroboticarm_msgs__srv__EuToQuater_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myroboticarm_msgs__srv__EuToQuater_Response * data =
      (myroboticarm_msgs__srv__EuToQuater_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myroboticarm_msgs__srv__EuToQuater_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myroboticarm_msgs__srv__EuToQuater_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myroboticarm_msgs__srv__EuToQuater_Response__copy(
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
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__functions.h"

bool
myroboticarm_msgs__srv__EuToQuater_Event__init(myroboticarm_msgs__srv__EuToQuater_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    myroboticarm_msgs__srv__EuToQuater_Event__fini(msg);
    return false;
  }
  // request
  if (!myroboticarm_msgs__srv__EuToQuater_Request__Sequence__init(&msg->request, 0)) {
    myroboticarm_msgs__srv__EuToQuater_Event__fini(msg);
    return false;
  }
  // response
  if (!myroboticarm_msgs__srv__EuToQuater_Response__Sequence__init(&msg->response, 0)) {
    myroboticarm_msgs__srv__EuToQuater_Event__fini(msg);
    return false;
  }
  return true;
}

void
myroboticarm_msgs__srv__EuToQuater_Event__fini(myroboticarm_msgs__srv__EuToQuater_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  myroboticarm_msgs__srv__EuToQuater_Request__Sequence__fini(&msg->request);
  // response
  myroboticarm_msgs__srv__EuToQuater_Response__Sequence__fini(&msg->response);
}

bool
myroboticarm_msgs__srv__EuToQuater_Event__are_equal(const myroboticarm_msgs__srv__EuToQuater_Event * lhs, const myroboticarm_msgs__srv__EuToQuater_Event * rhs)
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
  if (!myroboticarm_msgs__srv__EuToQuater_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!myroboticarm_msgs__srv__EuToQuater_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
myroboticarm_msgs__srv__EuToQuater_Event__copy(
  const myroboticarm_msgs__srv__EuToQuater_Event * input,
  myroboticarm_msgs__srv__EuToQuater_Event * output)
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
  if (!myroboticarm_msgs__srv__EuToQuater_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!myroboticarm_msgs__srv__EuToQuater_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

myroboticarm_msgs__srv__EuToQuater_Event *
myroboticarm_msgs__srv__EuToQuater_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Event * msg = (myroboticarm_msgs__srv__EuToQuater_Event *)allocator.allocate(sizeof(myroboticarm_msgs__srv__EuToQuater_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myroboticarm_msgs__srv__EuToQuater_Event));
  bool success = myroboticarm_msgs__srv__EuToQuater_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myroboticarm_msgs__srv__EuToQuater_Event__destroy(myroboticarm_msgs__srv__EuToQuater_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myroboticarm_msgs__srv__EuToQuater_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myroboticarm_msgs__srv__EuToQuater_Event__Sequence__init(myroboticarm_msgs__srv__EuToQuater_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Event * data = NULL;

  if (size) {
    data = (myroboticarm_msgs__srv__EuToQuater_Event *)allocator.zero_allocate(size, sizeof(myroboticarm_msgs__srv__EuToQuater_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myroboticarm_msgs__srv__EuToQuater_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myroboticarm_msgs__srv__EuToQuater_Event__fini(&data[i - 1]);
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
myroboticarm_msgs__srv__EuToQuater_Event__Sequence__fini(myroboticarm_msgs__srv__EuToQuater_Event__Sequence * array)
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
      myroboticarm_msgs__srv__EuToQuater_Event__fini(&array->data[i]);
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

myroboticarm_msgs__srv__EuToQuater_Event__Sequence *
myroboticarm_msgs__srv__EuToQuater_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__EuToQuater_Event__Sequence * array = (myroboticarm_msgs__srv__EuToQuater_Event__Sequence *)allocator.allocate(sizeof(myroboticarm_msgs__srv__EuToQuater_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myroboticarm_msgs__srv__EuToQuater_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myroboticarm_msgs__srv__EuToQuater_Event__Sequence__destroy(myroboticarm_msgs__srv__EuToQuater_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myroboticarm_msgs__srv__EuToQuater_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myroboticarm_msgs__srv__EuToQuater_Event__Sequence__are_equal(const myroboticarm_msgs__srv__EuToQuater_Event__Sequence * lhs, const myroboticarm_msgs__srv__EuToQuater_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myroboticarm_msgs__srv__EuToQuater_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myroboticarm_msgs__srv__EuToQuater_Event__Sequence__copy(
  const myroboticarm_msgs__srv__EuToQuater_Event__Sequence * input,
  myroboticarm_msgs__srv__EuToQuater_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myroboticarm_msgs__srv__EuToQuater_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myroboticarm_msgs__srv__EuToQuater_Event * data =
      (myroboticarm_msgs__srv__EuToQuater_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myroboticarm_msgs__srv__EuToQuater_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myroboticarm_msgs__srv__EuToQuater_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myroboticarm_msgs__srv__EuToQuater_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
