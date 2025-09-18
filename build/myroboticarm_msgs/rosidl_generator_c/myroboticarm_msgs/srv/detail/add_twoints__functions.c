// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from myroboticarm_msgs:srv/AddTwoints.idl
// generated code does not contain a copyright notice
#include "myroboticarm_msgs/srv/detail/add_twoints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
myroboticarm_msgs__srv__AddTwoints_Request__init(myroboticarm_msgs__srv__AddTwoints_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
myroboticarm_msgs__srv__AddTwoints_Request__fini(myroboticarm_msgs__srv__AddTwoints_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
myroboticarm_msgs__srv__AddTwoints_Request__are_equal(const myroboticarm_msgs__srv__AddTwoints_Request * lhs, const myroboticarm_msgs__srv__AddTwoints_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
myroboticarm_msgs__srv__AddTwoints_Request__copy(
  const myroboticarm_msgs__srv__AddTwoints_Request * input,
  myroboticarm_msgs__srv__AddTwoints_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

myroboticarm_msgs__srv__AddTwoints_Request *
myroboticarm_msgs__srv__AddTwoints_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Request * msg = (myroboticarm_msgs__srv__AddTwoints_Request *)allocator.allocate(sizeof(myroboticarm_msgs__srv__AddTwoints_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myroboticarm_msgs__srv__AddTwoints_Request));
  bool success = myroboticarm_msgs__srv__AddTwoints_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myroboticarm_msgs__srv__AddTwoints_Request__destroy(myroboticarm_msgs__srv__AddTwoints_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myroboticarm_msgs__srv__AddTwoints_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myroboticarm_msgs__srv__AddTwoints_Request__Sequence__init(myroboticarm_msgs__srv__AddTwoints_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Request * data = NULL;

  if (size) {
    data = (myroboticarm_msgs__srv__AddTwoints_Request *)allocator.zero_allocate(size, sizeof(myroboticarm_msgs__srv__AddTwoints_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myroboticarm_msgs__srv__AddTwoints_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myroboticarm_msgs__srv__AddTwoints_Request__fini(&data[i - 1]);
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
myroboticarm_msgs__srv__AddTwoints_Request__Sequence__fini(myroboticarm_msgs__srv__AddTwoints_Request__Sequence * array)
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
      myroboticarm_msgs__srv__AddTwoints_Request__fini(&array->data[i]);
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

myroboticarm_msgs__srv__AddTwoints_Request__Sequence *
myroboticarm_msgs__srv__AddTwoints_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Request__Sequence * array = (myroboticarm_msgs__srv__AddTwoints_Request__Sequence *)allocator.allocate(sizeof(myroboticarm_msgs__srv__AddTwoints_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myroboticarm_msgs__srv__AddTwoints_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myroboticarm_msgs__srv__AddTwoints_Request__Sequence__destroy(myroboticarm_msgs__srv__AddTwoints_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myroboticarm_msgs__srv__AddTwoints_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myroboticarm_msgs__srv__AddTwoints_Request__Sequence__are_equal(const myroboticarm_msgs__srv__AddTwoints_Request__Sequence * lhs, const myroboticarm_msgs__srv__AddTwoints_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myroboticarm_msgs__srv__AddTwoints_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myroboticarm_msgs__srv__AddTwoints_Request__Sequence__copy(
  const myroboticarm_msgs__srv__AddTwoints_Request__Sequence * input,
  myroboticarm_msgs__srv__AddTwoints_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myroboticarm_msgs__srv__AddTwoints_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myroboticarm_msgs__srv__AddTwoints_Request * data =
      (myroboticarm_msgs__srv__AddTwoints_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myroboticarm_msgs__srv__AddTwoints_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myroboticarm_msgs__srv__AddTwoints_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myroboticarm_msgs__srv__AddTwoints_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
myroboticarm_msgs__srv__AddTwoints_Response__init(myroboticarm_msgs__srv__AddTwoints_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
myroboticarm_msgs__srv__AddTwoints_Response__fini(myroboticarm_msgs__srv__AddTwoints_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
myroboticarm_msgs__srv__AddTwoints_Response__are_equal(const myroboticarm_msgs__srv__AddTwoints_Response * lhs, const myroboticarm_msgs__srv__AddTwoints_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
myroboticarm_msgs__srv__AddTwoints_Response__copy(
  const myroboticarm_msgs__srv__AddTwoints_Response * input,
  myroboticarm_msgs__srv__AddTwoints_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

myroboticarm_msgs__srv__AddTwoints_Response *
myroboticarm_msgs__srv__AddTwoints_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Response * msg = (myroboticarm_msgs__srv__AddTwoints_Response *)allocator.allocate(sizeof(myroboticarm_msgs__srv__AddTwoints_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myroboticarm_msgs__srv__AddTwoints_Response));
  bool success = myroboticarm_msgs__srv__AddTwoints_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myroboticarm_msgs__srv__AddTwoints_Response__destroy(myroboticarm_msgs__srv__AddTwoints_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myroboticarm_msgs__srv__AddTwoints_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myroboticarm_msgs__srv__AddTwoints_Response__Sequence__init(myroboticarm_msgs__srv__AddTwoints_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Response * data = NULL;

  if (size) {
    data = (myroboticarm_msgs__srv__AddTwoints_Response *)allocator.zero_allocate(size, sizeof(myroboticarm_msgs__srv__AddTwoints_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myroboticarm_msgs__srv__AddTwoints_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myroboticarm_msgs__srv__AddTwoints_Response__fini(&data[i - 1]);
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
myroboticarm_msgs__srv__AddTwoints_Response__Sequence__fini(myroboticarm_msgs__srv__AddTwoints_Response__Sequence * array)
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
      myroboticarm_msgs__srv__AddTwoints_Response__fini(&array->data[i]);
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

myroboticarm_msgs__srv__AddTwoints_Response__Sequence *
myroboticarm_msgs__srv__AddTwoints_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Response__Sequence * array = (myroboticarm_msgs__srv__AddTwoints_Response__Sequence *)allocator.allocate(sizeof(myroboticarm_msgs__srv__AddTwoints_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myroboticarm_msgs__srv__AddTwoints_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myroboticarm_msgs__srv__AddTwoints_Response__Sequence__destroy(myroboticarm_msgs__srv__AddTwoints_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myroboticarm_msgs__srv__AddTwoints_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myroboticarm_msgs__srv__AddTwoints_Response__Sequence__are_equal(const myroboticarm_msgs__srv__AddTwoints_Response__Sequence * lhs, const myroboticarm_msgs__srv__AddTwoints_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myroboticarm_msgs__srv__AddTwoints_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myroboticarm_msgs__srv__AddTwoints_Response__Sequence__copy(
  const myroboticarm_msgs__srv__AddTwoints_Response__Sequence * input,
  myroboticarm_msgs__srv__AddTwoints_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myroboticarm_msgs__srv__AddTwoints_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myroboticarm_msgs__srv__AddTwoints_Response * data =
      (myroboticarm_msgs__srv__AddTwoints_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myroboticarm_msgs__srv__AddTwoints_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myroboticarm_msgs__srv__AddTwoints_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myroboticarm_msgs__srv__AddTwoints_Response__copy(
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
// #include "myroboticarm_msgs/srv/detail/add_twoints__functions.h"

bool
myroboticarm_msgs__srv__AddTwoints_Event__init(myroboticarm_msgs__srv__AddTwoints_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    myroboticarm_msgs__srv__AddTwoints_Event__fini(msg);
    return false;
  }
  // request
  if (!myroboticarm_msgs__srv__AddTwoints_Request__Sequence__init(&msg->request, 0)) {
    myroboticarm_msgs__srv__AddTwoints_Event__fini(msg);
    return false;
  }
  // response
  if (!myroboticarm_msgs__srv__AddTwoints_Response__Sequence__init(&msg->response, 0)) {
    myroboticarm_msgs__srv__AddTwoints_Event__fini(msg);
    return false;
  }
  return true;
}

void
myroboticarm_msgs__srv__AddTwoints_Event__fini(myroboticarm_msgs__srv__AddTwoints_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  myroboticarm_msgs__srv__AddTwoints_Request__Sequence__fini(&msg->request);
  // response
  myroboticarm_msgs__srv__AddTwoints_Response__Sequence__fini(&msg->response);
}

bool
myroboticarm_msgs__srv__AddTwoints_Event__are_equal(const myroboticarm_msgs__srv__AddTwoints_Event * lhs, const myroboticarm_msgs__srv__AddTwoints_Event * rhs)
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
  if (!myroboticarm_msgs__srv__AddTwoints_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!myroboticarm_msgs__srv__AddTwoints_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
myroboticarm_msgs__srv__AddTwoints_Event__copy(
  const myroboticarm_msgs__srv__AddTwoints_Event * input,
  myroboticarm_msgs__srv__AddTwoints_Event * output)
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
  if (!myroboticarm_msgs__srv__AddTwoints_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!myroboticarm_msgs__srv__AddTwoints_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

myroboticarm_msgs__srv__AddTwoints_Event *
myroboticarm_msgs__srv__AddTwoints_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Event * msg = (myroboticarm_msgs__srv__AddTwoints_Event *)allocator.allocate(sizeof(myroboticarm_msgs__srv__AddTwoints_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(myroboticarm_msgs__srv__AddTwoints_Event));
  bool success = myroboticarm_msgs__srv__AddTwoints_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
myroboticarm_msgs__srv__AddTwoints_Event__destroy(myroboticarm_msgs__srv__AddTwoints_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    myroboticarm_msgs__srv__AddTwoints_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
myroboticarm_msgs__srv__AddTwoints_Event__Sequence__init(myroboticarm_msgs__srv__AddTwoints_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Event * data = NULL;

  if (size) {
    data = (myroboticarm_msgs__srv__AddTwoints_Event *)allocator.zero_allocate(size, sizeof(myroboticarm_msgs__srv__AddTwoints_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = myroboticarm_msgs__srv__AddTwoints_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        myroboticarm_msgs__srv__AddTwoints_Event__fini(&data[i - 1]);
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
myroboticarm_msgs__srv__AddTwoints_Event__Sequence__fini(myroboticarm_msgs__srv__AddTwoints_Event__Sequence * array)
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
      myroboticarm_msgs__srv__AddTwoints_Event__fini(&array->data[i]);
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

myroboticarm_msgs__srv__AddTwoints_Event__Sequence *
myroboticarm_msgs__srv__AddTwoints_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  myroboticarm_msgs__srv__AddTwoints_Event__Sequence * array = (myroboticarm_msgs__srv__AddTwoints_Event__Sequence *)allocator.allocate(sizeof(myroboticarm_msgs__srv__AddTwoints_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = myroboticarm_msgs__srv__AddTwoints_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
myroboticarm_msgs__srv__AddTwoints_Event__Sequence__destroy(myroboticarm_msgs__srv__AddTwoints_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    myroboticarm_msgs__srv__AddTwoints_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
myroboticarm_msgs__srv__AddTwoints_Event__Sequence__are_equal(const myroboticarm_msgs__srv__AddTwoints_Event__Sequence * lhs, const myroboticarm_msgs__srv__AddTwoints_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!myroboticarm_msgs__srv__AddTwoints_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
myroboticarm_msgs__srv__AddTwoints_Event__Sequence__copy(
  const myroboticarm_msgs__srv__AddTwoints_Event__Sequence * input,
  myroboticarm_msgs__srv__AddTwoints_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(myroboticarm_msgs__srv__AddTwoints_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    myroboticarm_msgs__srv__AddTwoints_Event * data =
      (myroboticarm_msgs__srv__AddTwoints_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!myroboticarm_msgs__srv__AddTwoints_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          myroboticarm_msgs__srv__AddTwoints_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!myroboticarm_msgs__srv__AddTwoints_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
