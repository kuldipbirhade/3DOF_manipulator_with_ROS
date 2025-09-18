// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myroboticarm_msgs:srv/QuaterToEu.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "myroboticarm_msgs/srv/quater_to_eu.hpp"


#ifndef MYROBOTICARM_MSGS__SRV__DETAIL__QUATER_TO_EU__BUILDER_HPP_
#define MYROBOTICARM_MSGS__SRV__DETAIL__QUATER_TO_EU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myroboticarm_msgs/srv/detail/quater_to_eu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaterToEu_Request_w
{
public:
  explicit Init_QuaterToEu_Request_w(::myroboticarm_msgs::srv::QuaterToEu_Request & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::srv::QuaterToEu_Request w(::myroboticarm_msgs::srv::QuaterToEu_Request::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Request msg_;
};

class Init_QuaterToEu_Request_z
{
public:
  explicit Init_QuaterToEu_Request_z(::myroboticarm_msgs::srv::QuaterToEu_Request & msg)
  : msg_(msg)
  {}
  Init_QuaterToEu_Request_w z(::myroboticarm_msgs::srv::QuaterToEu_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_QuaterToEu_Request_w(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Request msg_;
};

class Init_QuaterToEu_Request_y
{
public:
  explicit Init_QuaterToEu_Request_y(::myroboticarm_msgs::srv::QuaterToEu_Request & msg)
  : msg_(msg)
  {}
  Init_QuaterToEu_Request_z y(::myroboticarm_msgs::srv::QuaterToEu_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_QuaterToEu_Request_z(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Request msg_;
};

class Init_QuaterToEu_Request_x
{
public:
  Init_QuaterToEu_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaterToEu_Request_y x(::myroboticarm_msgs::srv::QuaterToEu_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_QuaterToEu_Request_y(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::QuaterToEu_Request>()
{
  return myroboticarm_msgs::srv::builder::Init_QuaterToEu_Request_x();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaterToEu_Response_yaw
{
public:
  explicit Init_QuaterToEu_Response_yaw(::myroboticarm_msgs::srv::QuaterToEu_Response & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::srv::QuaterToEu_Response yaw(::myroboticarm_msgs::srv::QuaterToEu_Response::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Response msg_;
};

class Init_QuaterToEu_Response_pitch
{
public:
  explicit Init_QuaterToEu_Response_pitch(::myroboticarm_msgs::srv::QuaterToEu_Response & msg)
  : msg_(msg)
  {}
  Init_QuaterToEu_Response_yaw pitch(::myroboticarm_msgs::srv::QuaterToEu_Response::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_QuaterToEu_Response_yaw(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Response msg_;
};

class Init_QuaterToEu_Response_roll
{
public:
  Init_QuaterToEu_Response_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaterToEu_Response_pitch roll(::myroboticarm_msgs::srv::QuaterToEu_Response::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_QuaterToEu_Response_pitch(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::QuaterToEu_Response>()
{
  return myroboticarm_msgs::srv::builder::Init_QuaterToEu_Response_roll();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_QuaterToEu_Event_response
{
public:
  explicit Init_QuaterToEu_Event_response(::myroboticarm_msgs::srv::QuaterToEu_Event & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::srv::QuaterToEu_Event response(::myroboticarm_msgs::srv::QuaterToEu_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Event msg_;
};

class Init_QuaterToEu_Event_request
{
public:
  explicit Init_QuaterToEu_Event_request(::myroboticarm_msgs::srv::QuaterToEu_Event & msg)
  : msg_(msg)
  {}
  Init_QuaterToEu_Event_response request(::myroboticarm_msgs::srv::QuaterToEu_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_QuaterToEu_Event_response(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Event msg_;
};

class Init_QuaterToEu_Event_info
{
public:
  Init_QuaterToEu_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuaterToEu_Event_request info(::myroboticarm_msgs::srv::QuaterToEu_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_QuaterToEu_Event_request(msg_);
  }

private:
  ::myroboticarm_msgs::srv::QuaterToEu_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::QuaterToEu_Event>()
{
  return myroboticarm_msgs::srv::builder::Init_QuaterToEu_Event_info();
}

}  // namespace myroboticarm_msgs

#endif  // MYROBOTICARM_MSGS__SRV__DETAIL__QUATER_TO_EU__BUILDER_HPP_
