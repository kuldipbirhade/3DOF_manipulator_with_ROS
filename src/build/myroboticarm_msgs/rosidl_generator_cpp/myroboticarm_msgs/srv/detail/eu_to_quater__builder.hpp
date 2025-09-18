// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myroboticarm_msgs:srv/EuToQuater.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "myroboticarm_msgs/srv/eu_to_quater.hpp"


#ifndef MYROBOTICARM_MSGS__SRV__DETAIL__EU_TO_QUATER__BUILDER_HPP_
#define MYROBOTICARM_MSGS__SRV__DETAIL__EU_TO_QUATER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myroboticarm_msgs/srv/detail/eu_to_quater__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_EuToQuater_Request_yaw
{
public:
  explicit Init_EuToQuater_Request_yaw(::myroboticarm_msgs::srv::EuToQuater_Request & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::srv::EuToQuater_Request yaw(::myroboticarm_msgs::srv::EuToQuater_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Request msg_;
};

class Init_EuToQuater_Request_pitch
{
public:
  explicit Init_EuToQuater_Request_pitch(::myroboticarm_msgs::srv::EuToQuater_Request & msg)
  : msg_(msg)
  {}
  Init_EuToQuater_Request_yaw pitch(::myroboticarm_msgs::srv::EuToQuater_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_EuToQuater_Request_yaw(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Request msg_;
};

class Init_EuToQuater_Request_roll
{
public:
  Init_EuToQuater_Request_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EuToQuater_Request_pitch roll(::myroboticarm_msgs::srv::EuToQuater_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_EuToQuater_Request_pitch(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::EuToQuater_Request>()
{
  return myroboticarm_msgs::srv::builder::Init_EuToQuater_Request_roll();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_EuToQuater_Response_w
{
public:
  explicit Init_EuToQuater_Response_w(::myroboticarm_msgs::srv::EuToQuater_Response & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::srv::EuToQuater_Response w(::myroboticarm_msgs::srv::EuToQuater_Response::_w_type arg)
  {
    msg_.w = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Response msg_;
};

class Init_EuToQuater_Response_z
{
public:
  explicit Init_EuToQuater_Response_z(::myroboticarm_msgs::srv::EuToQuater_Response & msg)
  : msg_(msg)
  {}
  Init_EuToQuater_Response_w z(::myroboticarm_msgs::srv::EuToQuater_Response::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_EuToQuater_Response_w(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Response msg_;
};

class Init_EuToQuater_Response_y
{
public:
  explicit Init_EuToQuater_Response_y(::myroboticarm_msgs::srv::EuToQuater_Response & msg)
  : msg_(msg)
  {}
  Init_EuToQuater_Response_z y(::myroboticarm_msgs::srv::EuToQuater_Response::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EuToQuater_Response_z(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Response msg_;
};

class Init_EuToQuater_Response_x
{
public:
  Init_EuToQuater_Response_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EuToQuater_Response_y x(::myroboticarm_msgs::srv::EuToQuater_Response::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EuToQuater_Response_y(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::EuToQuater_Response>()
{
  return myroboticarm_msgs::srv::builder::Init_EuToQuater_Response_x();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace srv
{

namespace builder
{

class Init_EuToQuater_Event_response
{
public:
  explicit Init_EuToQuater_Event_response(::myroboticarm_msgs::srv::EuToQuater_Event & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::srv::EuToQuater_Event response(::myroboticarm_msgs::srv::EuToQuater_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Event msg_;
};

class Init_EuToQuater_Event_request
{
public:
  explicit Init_EuToQuater_Event_request(::myroboticarm_msgs::srv::EuToQuater_Event & msg)
  : msg_(msg)
  {}
  Init_EuToQuater_Event_response request(::myroboticarm_msgs::srv::EuToQuater_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EuToQuater_Event_response(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Event msg_;
};

class Init_EuToQuater_Event_info
{
public:
  Init_EuToQuater_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EuToQuater_Event_request info(::myroboticarm_msgs::srv::EuToQuater_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_EuToQuater_Event_request(msg_);
  }

private:
  ::myroboticarm_msgs::srv::EuToQuater_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::srv::EuToQuater_Event>()
{
  return myroboticarm_msgs::srv::builder::Init_EuToQuater_Event_info();
}

}  // namespace myroboticarm_msgs

#endif  // MYROBOTICARM_MSGS__SRV__DETAIL__EU_TO_QUATER__BUILDER_HPP_
