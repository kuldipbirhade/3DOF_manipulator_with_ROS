// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from myroboticarm_msgs:action/MyroboticarmTask.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "myroboticarm_msgs/action/myroboticarm_task.hpp"


#ifndef MYROBOTICARM_MSGS__ACTION__DETAIL__MYROBOTICARM_TASK__BUILDER_HPP_
#define MYROBOTICARM_MSGS__ACTION__DETAIL__MYROBOTICARM_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "myroboticarm_msgs/action/detail/myroboticarm_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_Goal_task_number
{
public:
  Init_MyroboticarmTask_Goal_task_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_Goal task_number(::myroboticarm_msgs::action::MyroboticarmTask_Goal::_task_number_type arg)
  {
    msg_.task_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_Goal>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_Goal_task_number();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_Result_success
{
public:
  Init_MyroboticarmTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_Result success(::myroboticarm_msgs::action::MyroboticarmTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_Result>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_Result_success();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_Feedback_percentage
{
public:
  Init_MyroboticarmTask_Feedback_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_Feedback percentage(::myroboticarm_msgs::action::MyroboticarmTask_Feedback::_percentage_type arg)
  {
    msg_.percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_Feedback>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_Feedback_percentage();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_SendGoal_Request_goal
{
public:
  explicit Init_MyroboticarmTask_SendGoal_Request_goal(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Request goal(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Request msg_;
};

class Init_MyroboticarmTask_SendGoal_Request_goal_id
{
public:
  Init_MyroboticarmTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyroboticarmTask_SendGoal_Request_goal goal_id(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyroboticarmTask_SendGoal_Request_goal(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Request>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_SendGoal_Request_goal_id();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_SendGoal_Response_stamp
{
public:
  explicit Init_MyroboticarmTask_SendGoal_Response_stamp(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Response stamp(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Response msg_;
};

class Init_MyroboticarmTask_SendGoal_Response_accepted
{
public:
  Init_MyroboticarmTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyroboticarmTask_SendGoal_Response_stamp accepted(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MyroboticarmTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Response>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_SendGoal_Response_accepted();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_SendGoal_Event_response
{
public:
  explicit Init_MyroboticarmTask_SendGoal_Event_response(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event response(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event msg_;
};

class Init_MyroboticarmTask_SendGoal_Event_request
{
public:
  explicit Init_MyroboticarmTask_SendGoal_Event_request(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_MyroboticarmTask_SendGoal_Event_response request(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MyroboticarmTask_SendGoal_Event_response(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event msg_;
};

class Init_MyroboticarmTask_SendGoal_Event_info
{
public:
  Init_MyroboticarmTask_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyroboticarmTask_SendGoal_Event_request info(::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MyroboticarmTask_SendGoal_Event_request(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_SendGoal_Event>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_SendGoal_Event_info();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_GetResult_Request_goal_id
{
public:
  Init_MyroboticarmTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Request goal_id(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Request>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_GetResult_Request_goal_id();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_GetResult_Response_result
{
public:
  explicit Init_MyroboticarmTask_GetResult_Response_result(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Response result(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Response msg_;
};

class Init_MyroboticarmTask_GetResult_Response_status
{
public:
  Init_MyroboticarmTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyroboticarmTask_GetResult_Response_result status(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MyroboticarmTask_GetResult_Response_result(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Response>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_GetResult_Response_status();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_GetResult_Event_response
{
public:
  explicit Init_MyroboticarmTask_GetResult_Event_response(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event response(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event msg_;
};

class Init_MyroboticarmTask_GetResult_Event_request
{
public:
  explicit Init_MyroboticarmTask_GetResult_Event_request(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_MyroboticarmTask_GetResult_Event_response request(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MyroboticarmTask_GetResult_Event_response(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event msg_;
};

class Init_MyroboticarmTask_GetResult_Event_info
{
public:
  Init_MyroboticarmTask_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyroboticarmTask_GetResult_Event_request info(::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MyroboticarmTask_GetResult_Event_request(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_GetResult_Event>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_GetResult_Event_info();
}

}  // namespace myroboticarm_msgs


namespace myroboticarm_msgs
{

namespace action
{

namespace builder
{

class Init_MyroboticarmTask_FeedbackMessage_feedback
{
public:
  explicit Init_MyroboticarmTask_FeedbackMessage_feedback(::myroboticarm_msgs::action::MyroboticarmTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::myroboticarm_msgs::action::MyroboticarmTask_FeedbackMessage feedback(::myroboticarm_msgs::action::MyroboticarmTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_FeedbackMessage msg_;
};

class Init_MyroboticarmTask_FeedbackMessage_goal_id
{
public:
  Init_MyroboticarmTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyroboticarmTask_FeedbackMessage_feedback goal_id(::myroboticarm_msgs::action::MyroboticarmTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MyroboticarmTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::myroboticarm_msgs::action::MyroboticarmTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::myroboticarm_msgs::action::MyroboticarmTask_FeedbackMessage>()
{
  return myroboticarm_msgs::action::builder::Init_MyroboticarmTask_FeedbackMessage_goal_id();
}

}  // namespace myroboticarm_msgs

#endif  // MYROBOTICARM_MSGS__ACTION__DETAIL__MYROBOTICARM_TASK__BUILDER_HPP_
