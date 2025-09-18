// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from myroboticarm_msgs:srv/QuaterToEu.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "myroboticarm_msgs/srv/detail/quater_to_eu__functions.h"
#include "myroboticarm_msgs/srv/detail/quater_to_eu__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace myroboticarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _QuaterToEu_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QuaterToEu_Request_type_support_ids_t;

static const _QuaterToEu_Request_type_support_ids_t _QuaterToEu_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _QuaterToEu_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QuaterToEu_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QuaterToEu_Request_type_support_symbol_names_t _QuaterToEu_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myroboticarm_msgs, srv, QuaterToEu_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, myroboticarm_msgs, srv, QuaterToEu_Request)),
  }
};

typedef struct _QuaterToEu_Request_type_support_data_t
{
  void * data[2];
} _QuaterToEu_Request_type_support_data_t;

static _QuaterToEu_Request_type_support_data_t _QuaterToEu_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QuaterToEu_Request_message_typesupport_map = {
  2,
  "myroboticarm_msgs",
  &_QuaterToEu_Request_message_typesupport_ids.typesupport_identifier[0],
  &_QuaterToEu_Request_message_typesupport_symbol_names.symbol_name[0],
  &_QuaterToEu_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QuaterToEu_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QuaterToEu_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &myroboticarm_msgs__srv__QuaterToEu_Request__get_type_hash,
  &myroboticarm_msgs__srv__QuaterToEu_Request__get_type_description,
  &myroboticarm_msgs__srv__QuaterToEu_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace myroboticarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Request>()
{
  return &::myroboticarm_msgs::srv::rosidl_typesupport_cpp::QuaterToEu_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, myroboticarm_msgs, srv, QuaterToEu_Request)() {
  return get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/quater_to_eu__functions.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/quater_to_eu__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace myroboticarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _QuaterToEu_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QuaterToEu_Response_type_support_ids_t;

static const _QuaterToEu_Response_type_support_ids_t _QuaterToEu_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _QuaterToEu_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QuaterToEu_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QuaterToEu_Response_type_support_symbol_names_t _QuaterToEu_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myroboticarm_msgs, srv, QuaterToEu_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, myroboticarm_msgs, srv, QuaterToEu_Response)),
  }
};

typedef struct _QuaterToEu_Response_type_support_data_t
{
  void * data[2];
} _QuaterToEu_Response_type_support_data_t;

static _QuaterToEu_Response_type_support_data_t _QuaterToEu_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QuaterToEu_Response_message_typesupport_map = {
  2,
  "myroboticarm_msgs",
  &_QuaterToEu_Response_message_typesupport_ids.typesupport_identifier[0],
  &_QuaterToEu_Response_message_typesupport_symbol_names.symbol_name[0],
  &_QuaterToEu_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QuaterToEu_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QuaterToEu_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &myroboticarm_msgs__srv__QuaterToEu_Response__get_type_hash,
  &myroboticarm_msgs__srv__QuaterToEu_Response__get_type_description,
  &myroboticarm_msgs__srv__QuaterToEu_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace myroboticarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Response>()
{
  return &::myroboticarm_msgs::srv::rosidl_typesupport_cpp::QuaterToEu_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, myroboticarm_msgs, srv, QuaterToEu_Response)() {
  return get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/quater_to_eu__functions.h"
// already included above
// #include "myroboticarm_msgs/srv/detail/quater_to_eu__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace myroboticarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _QuaterToEu_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QuaterToEu_Event_type_support_ids_t;

static const _QuaterToEu_Event_type_support_ids_t _QuaterToEu_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _QuaterToEu_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QuaterToEu_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QuaterToEu_Event_type_support_symbol_names_t _QuaterToEu_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myroboticarm_msgs, srv, QuaterToEu_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, myroboticarm_msgs, srv, QuaterToEu_Event)),
  }
};

typedef struct _QuaterToEu_Event_type_support_data_t
{
  void * data[2];
} _QuaterToEu_Event_type_support_data_t;

static _QuaterToEu_Event_type_support_data_t _QuaterToEu_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QuaterToEu_Event_message_typesupport_map = {
  2,
  "myroboticarm_msgs",
  &_QuaterToEu_Event_message_typesupport_ids.typesupport_identifier[0],
  &_QuaterToEu_Event_message_typesupport_symbol_names.symbol_name[0],
  &_QuaterToEu_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t QuaterToEu_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QuaterToEu_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &myroboticarm_msgs__srv__QuaterToEu_Event__get_type_hash,
  &myroboticarm_msgs__srv__QuaterToEu_Event__get_type_description,
  &myroboticarm_msgs__srv__QuaterToEu_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace myroboticarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Event>()
{
  return &::myroboticarm_msgs::srv::rosidl_typesupport_cpp::QuaterToEu_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, myroboticarm_msgs, srv, QuaterToEu_Event)() {
  return get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "myroboticarm_msgs/srv/detail/quater_to_eu__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace myroboticarm_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _QuaterToEu_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _QuaterToEu_type_support_ids_t;

static const _QuaterToEu_type_support_ids_t _QuaterToEu_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _QuaterToEu_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _QuaterToEu_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _QuaterToEu_type_support_symbol_names_t _QuaterToEu_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, myroboticarm_msgs, srv, QuaterToEu)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, myroboticarm_msgs, srv, QuaterToEu)),
  }
};

typedef struct _QuaterToEu_type_support_data_t
{
  void * data[2];
} _QuaterToEu_type_support_data_t;

static _QuaterToEu_type_support_data_t _QuaterToEu_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _QuaterToEu_service_typesupport_map = {
  2,
  "myroboticarm_msgs",
  &_QuaterToEu_service_typesupport_ids.typesupport_identifier[0],
  &_QuaterToEu_service_typesupport_symbol_names.symbol_name[0],
  &_QuaterToEu_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t QuaterToEu_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_QuaterToEu_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<myroboticarm_msgs::srv::QuaterToEu_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<myroboticarm_msgs::srv::QuaterToEu>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<myroboticarm_msgs::srv::QuaterToEu>,
  &myroboticarm_msgs__srv__QuaterToEu__get_type_hash,
  &myroboticarm_msgs__srv__QuaterToEu__get_type_description,
  &myroboticarm_msgs__srv__QuaterToEu__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace myroboticarm_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<myroboticarm_msgs::srv::QuaterToEu>()
{
  return &::myroboticarm_msgs::srv::rosidl_typesupport_cpp::QuaterToEu_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, myroboticarm_msgs, srv, QuaterToEu)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<myroboticarm_msgs::srv::QuaterToEu>();
}

#ifdef __cplusplus
}
#endif
