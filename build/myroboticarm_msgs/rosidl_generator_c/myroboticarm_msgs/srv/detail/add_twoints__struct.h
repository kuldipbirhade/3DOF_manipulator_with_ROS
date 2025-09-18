// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from myroboticarm_msgs:srv/AddTwoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "myroboticarm_msgs/srv/add_twoints.h"


#ifndef MYROBOTICARM_MSGS__SRV__DETAIL__ADD_TWOINTS__STRUCT_H_
#define MYROBOTICARM_MSGS__SRV__DETAIL__ADD_TWOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoints in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__srv__AddTwoints_Request
{
  int64_t a;
  int64_t b;
} myroboticarm_msgs__srv__AddTwoints_Request;

// Struct for a sequence of myroboticarm_msgs__srv__AddTwoints_Request.
typedef struct myroboticarm_msgs__srv__AddTwoints_Request__Sequence
{
  myroboticarm_msgs__srv__AddTwoints_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__srv__AddTwoints_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddTwoints in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__srv__AddTwoints_Response
{
  /// Now after writing this script, we need to declare its existance to the "comliper"
  int64_t sum;
} myroboticarm_msgs__srv__AddTwoints_Response;

// Struct for a sequence of myroboticarm_msgs__srv__AddTwoints_Response.
typedef struct myroboticarm_msgs__srv__AddTwoints_Response__Sequence
{
  myroboticarm_msgs__srv__AddTwoints_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__srv__AddTwoints_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  myroboticarm_msgs__srv__AddTwoints_Event__request__MAX_SIZE = 1
};
// response
enum
{
  myroboticarm_msgs__srv__AddTwoints_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddTwoints in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__srv__AddTwoints_Event
{
  service_msgs__msg__ServiceEventInfo info;
  myroboticarm_msgs__srv__AddTwoints_Request__Sequence request;
  myroboticarm_msgs__srv__AddTwoints_Response__Sequence response;
} myroboticarm_msgs__srv__AddTwoints_Event;

// Struct for a sequence of myroboticarm_msgs__srv__AddTwoints_Event.
typedef struct myroboticarm_msgs__srv__AddTwoints_Event__Sequence
{
  myroboticarm_msgs__srv__AddTwoints_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__srv__AddTwoints_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYROBOTICARM_MSGS__SRV__DETAIL__ADD_TWOINTS__STRUCT_H_
