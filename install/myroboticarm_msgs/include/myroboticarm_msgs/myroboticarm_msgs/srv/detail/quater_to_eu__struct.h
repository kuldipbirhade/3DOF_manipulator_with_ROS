// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from myroboticarm_msgs:srv/QuaterToEu.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "myroboticarm_msgs/srv/quater_to_eu.h"


#ifndef MYROBOTICARM_MSGS__SRV__DETAIL__QUATER_TO_EU__STRUCT_H_
#define MYROBOTICARM_MSGS__SRV__DETAIL__QUATER_TO_EU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/QuaterToEu in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__srv__QuaterToEu_Request
{
  double x;
  double y;
  double z;
  double w;
} myroboticarm_msgs__srv__QuaterToEu_Request;

// Struct for a sequence of myroboticarm_msgs__srv__QuaterToEu_Request.
typedef struct myroboticarm_msgs__srv__QuaterToEu_Request__Sequence
{
  myroboticarm_msgs__srv__QuaterToEu_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__srv__QuaterToEu_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/QuaterToEu in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__srv__QuaterToEu_Response
{
  double roll;
  double pitch;
  double yaw;
} myroboticarm_msgs__srv__QuaterToEu_Response;

// Struct for a sequence of myroboticarm_msgs__srv__QuaterToEu_Response.
typedef struct myroboticarm_msgs__srv__QuaterToEu_Response__Sequence
{
  myroboticarm_msgs__srv__QuaterToEu_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__srv__QuaterToEu_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  myroboticarm_msgs__srv__QuaterToEu_Event__request__MAX_SIZE = 1
};
// response
enum
{
  myroboticarm_msgs__srv__QuaterToEu_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/QuaterToEu in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__srv__QuaterToEu_Event
{
  service_msgs__msg__ServiceEventInfo info;
  myroboticarm_msgs__srv__QuaterToEu_Request__Sequence request;
  myroboticarm_msgs__srv__QuaterToEu_Response__Sequence response;
} myroboticarm_msgs__srv__QuaterToEu_Event;

// Struct for a sequence of myroboticarm_msgs__srv__QuaterToEu_Event.
typedef struct myroboticarm_msgs__srv__QuaterToEu_Event__Sequence
{
  myroboticarm_msgs__srv__QuaterToEu_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__srv__QuaterToEu_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYROBOTICARM_MSGS__SRV__DETAIL__QUATER_TO_EU__STRUCT_H_
