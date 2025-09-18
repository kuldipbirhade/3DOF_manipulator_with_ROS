// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from myroboticarm_msgs:action/MyroboticarmTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "myroboticarm_msgs/action/myroboticarm_task.h"


#ifndef MYROBOTICARM_MSGS__ACTION__DETAIL__MYROBOTICARM_TASK__STRUCT_H_
#define MYROBOTICARM_MSGS__ACTION__DETAIL__MYROBOTICARM_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_Goal
{
  int32_t task_number;
} myroboticarm_msgs__action__MyroboticarmTask_Goal;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_Goal.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_Goal__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_Result
{
  bool success;
} myroboticarm_msgs__action__MyroboticarmTask_Result;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_Result.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_Result__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_Feedback
{
  int32_t percentage;
} myroboticarm_msgs__action__MyroboticarmTask_Feedback;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_Feedback.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_Feedback__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "myroboticarm_msgs/action/detail/myroboticarm_task__struct.h"

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  myroboticarm_msgs__action__MyroboticarmTask_Goal goal;
} myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Request;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Request.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Request__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Response;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Response.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Response__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Request__Sequence request;
  myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Response__Sequence response;
} myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Event;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Event.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Event__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} myroboticarm_msgs__action__MyroboticarmTask_GetResult_Request;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_GetResult_Request.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_GetResult_Request__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "myroboticarm_msgs/action/detail/myroboticarm_task__struct.h"

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_GetResult_Response
{
  int8_t status;
  myroboticarm_msgs__action__MyroboticarmTask_Result result;
} myroboticarm_msgs__action__MyroboticarmTask_GetResult_Response;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_GetResult_Response.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_GetResult_Response__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  myroboticarm_msgs__action__MyroboticarmTask_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  myroboticarm_msgs__action__MyroboticarmTask_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  myroboticarm_msgs__action__MyroboticarmTask_GetResult_Request__Sequence request;
  myroboticarm_msgs__action__MyroboticarmTask_GetResult_Response__Sequence response;
} myroboticarm_msgs__action__MyroboticarmTask_GetResult_Event;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_GetResult_Event.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_GetResult_Event__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "myroboticarm_msgs/action/detail/myroboticarm_task__struct.h"

/// Struct defined in action/MyroboticarmTask in the package myroboticarm_msgs.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  myroboticarm_msgs__action__MyroboticarmTask_Feedback feedback;
} myroboticarm_msgs__action__MyroboticarmTask_FeedbackMessage;

// Struct for a sequence of myroboticarm_msgs__action__MyroboticarmTask_FeedbackMessage.
typedef struct myroboticarm_msgs__action__MyroboticarmTask_FeedbackMessage__Sequence
{
  myroboticarm_msgs__action__MyroboticarmTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} myroboticarm_msgs__action__MyroboticarmTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYROBOTICARM_MSGS__ACTION__DETAIL__MYROBOTICARM_TASK__STRUCT_H_
