// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from myroboticarm_msgs:srv/EuToQuater.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "myroboticarm_msgs/srv/detail/eu_to_quater__rosidl_typesupport_introspection_c.h"
#include "myroboticarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "myroboticarm_msgs/srv/detail/eu_to_quater__functions.h"
#include "myroboticarm_msgs/srv/detail/eu_to_quater__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myroboticarm_msgs__srv__EuToQuater_Request__init(message_memory);
}

void myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_fini_function(void * message_memory)
{
  myroboticarm_msgs__srv__EuToQuater_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_member_array[3] = {
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Request, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Request, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Request, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_members = {
  "myroboticarm_msgs__srv",  // message namespace
  "EuToQuater_Request",  // message name
  3,  // number of fields
  sizeof(myroboticarm_msgs__srv__EuToQuater_Request),
  false,  // has_any_key_member_
  myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_member_array,  // message members
  myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_type_support_handle = {
  0,
  &myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_members,
  get_message_typesupport_handle_function,
  &myroboticarm_msgs__srv__EuToQuater_Request__get_type_hash,
  &myroboticarm_msgs__srv__EuToQuater_Request__get_type_description,
  &myroboticarm_msgs__srv__EuToQuater_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myroboticarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Request)() {
  if (!myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_type_support_handle.typesupport_identifier) {
    myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__rosidl_typesupport_introspection_c.h"
// already included above
// #include "myroboticarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__functions.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myroboticarm_msgs__srv__EuToQuater_Response__init(message_memory);
}

void myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_fini_function(void * message_memory)
{
  myroboticarm_msgs__srv__EuToQuater_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_member_array[4] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Response, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "w",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Response, w),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_members = {
  "myroboticarm_msgs__srv",  // message namespace
  "EuToQuater_Response",  // message name
  4,  // number of fields
  sizeof(myroboticarm_msgs__srv__EuToQuater_Response),
  false,  // has_any_key_member_
  myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_member_array,  // message members
  myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_type_support_handle = {
  0,
  &myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_members,
  get_message_typesupport_handle_function,
  &myroboticarm_msgs__srv__EuToQuater_Response__get_type_hash,
  &myroboticarm_msgs__srv__EuToQuater_Response__get_type_description,
  &myroboticarm_msgs__srv__EuToQuater_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myroboticarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Response)() {
  if (!myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_type_support_handle.typesupport_identifier) {
    myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__rosidl_typesupport_introspection_c.h"
// already included above
// #include "myroboticarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__functions.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "myroboticarm_msgs/srv/eu_to_quater.h"
// Member `request`
// Member `response`
// already included above
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  myroboticarm_msgs__srv__EuToQuater_Event__init(message_memory);
}

void myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_fini_function(void * message_memory)
{
  myroboticarm_msgs__srv__EuToQuater_Event__fini(message_memory);
}

size_t myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__size_function__EuToQuater_Event__request(
  const void * untyped_member)
{
  const myroboticarm_msgs__srv__EuToQuater_Request__Sequence * member =
    (const myroboticarm_msgs__srv__EuToQuater_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_const_function__EuToQuater_Event__request(
  const void * untyped_member, size_t index)
{
  const myroboticarm_msgs__srv__EuToQuater_Request__Sequence * member =
    (const myroboticarm_msgs__srv__EuToQuater_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_function__EuToQuater_Event__request(
  void * untyped_member, size_t index)
{
  myroboticarm_msgs__srv__EuToQuater_Request__Sequence * member =
    (myroboticarm_msgs__srv__EuToQuater_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__fetch_function__EuToQuater_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const myroboticarm_msgs__srv__EuToQuater_Request * item =
    ((const myroboticarm_msgs__srv__EuToQuater_Request *)
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_const_function__EuToQuater_Event__request(untyped_member, index));
  myroboticarm_msgs__srv__EuToQuater_Request * value =
    (myroboticarm_msgs__srv__EuToQuater_Request *)(untyped_value);
  *value = *item;
}

void myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__assign_function__EuToQuater_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  myroboticarm_msgs__srv__EuToQuater_Request * item =
    ((myroboticarm_msgs__srv__EuToQuater_Request *)
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_function__EuToQuater_Event__request(untyped_member, index));
  const myroboticarm_msgs__srv__EuToQuater_Request * value =
    (const myroboticarm_msgs__srv__EuToQuater_Request *)(untyped_value);
  *item = *value;
}

bool myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__resize_function__EuToQuater_Event__request(
  void * untyped_member, size_t size)
{
  myroboticarm_msgs__srv__EuToQuater_Request__Sequence * member =
    (myroboticarm_msgs__srv__EuToQuater_Request__Sequence *)(untyped_member);
  myroboticarm_msgs__srv__EuToQuater_Request__Sequence__fini(member);
  return myroboticarm_msgs__srv__EuToQuater_Request__Sequence__init(member, size);
}

size_t myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__size_function__EuToQuater_Event__response(
  const void * untyped_member)
{
  const myroboticarm_msgs__srv__EuToQuater_Response__Sequence * member =
    (const myroboticarm_msgs__srv__EuToQuater_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_const_function__EuToQuater_Event__response(
  const void * untyped_member, size_t index)
{
  const myroboticarm_msgs__srv__EuToQuater_Response__Sequence * member =
    (const myroboticarm_msgs__srv__EuToQuater_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_function__EuToQuater_Event__response(
  void * untyped_member, size_t index)
{
  myroboticarm_msgs__srv__EuToQuater_Response__Sequence * member =
    (myroboticarm_msgs__srv__EuToQuater_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__fetch_function__EuToQuater_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const myroboticarm_msgs__srv__EuToQuater_Response * item =
    ((const myroboticarm_msgs__srv__EuToQuater_Response *)
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_const_function__EuToQuater_Event__response(untyped_member, index));
  myroboticarm_msgs__srv__EuToQuater_Response * value =
    (myroboticarm_msgs__srv__EuToQuater_Response *)(untyped_value);
  *value = *item;
}

void myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__assign_function__EuToQuater_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  myroboticarm_msgs__srv__EuToQuater_Response * item =
    ((myroboticarm_msgs__srv__EuToQuater_Response *)
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_function__EuToQuater_Event__response(untyped_member, index));
  const myroboticarm_msgs__srv__EuToQuater_Response * value =
    (const myroboticarm_msgs__srv__EuToQuater_Response *)(untyped_value);
  *item = *value;
}

bool myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__resize_function__EuToQuater_Event__response(
  void * untyped_member, size_t size)
{
  myroboticarm_msgs__srv__EuToQuater_Response__Sequence * member =
    (myroboticarm_msgs__srv__EuToQuater_Response__Sequence *)(untyped_member);
  myroboticarm_msgs__srv__EuToQuater_Response__Sequence__fini(member);
  return myroboticarm_msgs__srv__EuToQuater_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Event, request),  // bytes offset in struct
    NULL,  // default value
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__size_function__EuToQuater_Event__request,  // size() function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_const_function__EuToQuater_Event__request,  // get_const(index) function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_function__EuToQuater_Event__request,  // get(index) function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__fetch_function__EuToQuater_Event__request,  // fetch(index, &value) function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__assign_function__EuToQuater_Event__request,  // assign(index, value) function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__resize_function__EuToQuater_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(myroboticarm_msgs__srv__EuToQuater_Event, response),  // bytes offset in struct
    NULL,  // default value
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__size_function__EuToQuater_Event__response,  // size() function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_const_function__EuToQuater_Event__response,  // get_const(index) function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__get_function__EuToQuater_Event__response,  // get(index) function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__fetch_function__EuToQuater_Event__response,  // fetch(index, &value) function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__assign_function__EuToQuater_Event__response,  // assign(index, value) function pointer
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__resize_function__EuToQuater_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_members = {
  "myroboticarm_msgs__srv",  // message namespace
  "EuToQuater_Event",  // message name
  3,  // number of fields
  sizeof(myroboticarm_msgs__srv__EuToQuater_Event),
  false,  // has_any_key_member_
  myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_member_array,  // message members
  myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_type_support_handle = {
  0,
  &myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_members,
  get_message_typesupport_handle_function,
  &myroboticarm_msgs__srv__EuToQuater_Event__get_type_hash,
  &myroboticarm_msgs__srv__EuToQuater_Event__get_type_description,
  &myroboticarm_msgs__srv__EuToQuater_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myroboticarm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Event)() {
  myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Request)();
  myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Response)();
  if (!myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_type_support_handle.typesupport_identifier) {
    myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "myroboticarm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/eu_to_quater__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_service_members = {
  "myroboticarm_msgs__srv",  // service namespace
  "EuToQuater",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_Request_message_type_support_handle,
  NULL,  // response message
  // myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_Response_message_type_support_handle
  NULL  // event_message
  // myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_Response_message_type_support_handle
};


static rosidl_service_type_support_t myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_service_type_support_handle = {
  0,
  &myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_service_members,
  get_service_typesupport_handle_function,
  &myroboticarm_msgs__srv__EuToQuater_Request__rosidl_typesupport_introspection_c__EuToQuater_Request_message_type_support_handle,
  &myroboticarm_msgs__srv__EuToQuater_Response__rosidl_typesupport_introspection_c__EuToQuater_Response_message_type_support_handle,
  &myroboticarm_msgs__srv__EuToQuater_Event__rosidl_typesupport_introspection_c__EuToQuater_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    myroboticarm_msgs,
    srv,
    EuToQuater
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    myroboticarm_msgs,
    srv,
    EuToQuater
  ),
  &myroboticarm_msgs__srv__EuToQuater__get_type_hash,
  &myroboticarm_msgs__srv__EuToQuater__get_type_description,
  &myroboticarm_msgs__srv__EuToQuater__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_myroboticarm_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater)(void) {
  if (!myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_service_type_support_handle.typesupport_identifier) {
    myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, myroboticarm_msgs, srv, EuToQuater_Event)()->data;
  }

  return &myroboticarm_msgs__srv__detail__eu_to_quater__rosidl_typesupport_introspection_c__EuToQuater_service_type_support_handle;
}
