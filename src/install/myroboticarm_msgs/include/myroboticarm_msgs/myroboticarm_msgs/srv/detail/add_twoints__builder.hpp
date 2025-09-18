// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myroboticarm_msgs:srv/AddTwoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "myroboticarm_msgs/srv/add_twoints.hpp"


#ifndef MYROBOTICARM_MSGS__SRV__DETAIL__ADD_TWOINTS__BUILDER_HPP_
#define MYROBOTICARM_MSGS__SRV__DETAIL__ADD_TWOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myroboticarm_msgs/srv/detail/add_twoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoints_Request_b
{
public:
  explicit Init_AddTwoints_Request_b(::myroboticarm_msgs::srv::AddTwoints_Request & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::srv::AddTwoints_Request b(::myroboticarm_msgs::srv::AddTwoints_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::AddTwoints_Request msg_;
};

class Init_AddTwoints_Request_a
{
public:
  Init_AddTwoints_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoints_Request_b a(::myroboticarm_msgs::srv::AddTwoints_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoints_Request_b(msg_);
  }

private:
  ::myroboticarm_msgs::srv::AddTwoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::AddTwoints_Request>()
{
  return myroboticarm_msgs::srv::builder::Init_AddTwoints_Request_a();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoints_Response_sum
{
public:
  Init_AddTwoints_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myroboticarm_msgs::srv::AddTwoints_Response sum(::myroboticarm_msgs::srv::AddTwoints_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::AddTwoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::AddTwoints_Response>()
{
  return myroboticarm_msgs::srv::builder::Init_AddTwoints_Response_sum();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_AddTwoints_Event_response
{
public:
  explicit Init_AddTwoints_Event_response(::myroboticarm_msgs::srv::AddTwoints_Event & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::srv::AddTwoints_Event response(::myroboticarm_msgs::srv::AddTwoints_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::AddTwoints_Event msg_;
};

class Init_AddTwoints_Event_request
{
public:
  explicit Init_AddTwoints_Event_request(::myroboticarm_msgs::srv::AddTwoints_Event & msg)
  : msg_(msg)
  {}
  Init_AddTwoints_Event_response request(::myroboticarm_msgs::srv::AddTwoints_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddTwoints_Event_response(msg_);
  }

private:
  ::myroboticarm_msgs::srv::AddTwoints_Event msg_;
};

class Init_AddTwoints_Event_info
{
public:
  Init_AddTwoints_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoints_Event_request info(::myroboticarm_msgs::srv::AddTwoints_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddTwoints_Event_request(msg_);
  }

private:
  ::myroboticarm_msgs::srv::AddTwoints_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::AddTwoints_Event>()
{
  return myroboticarm_msgs::srv::builder::Init_AddTwoints_Event_info();
}

}  // namespace myroboticarm_msgs

#endif  // MYROBOTICARM_MSGS__SRV__DETAIL__ADD_TWOINTS__BUILDER_HPP_
