// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur5e_waypoint_mover:srv/ExecuteWaypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/execute_waypoints.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__BUILDER_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur5e_waypoint_mover/srv/detail/execute_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_ExecuteWaypoints_Request_loop
{
public:
  Init_ExecuteWaypoints_Request_loop()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Request loop(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Request::_loop_type arg)
  {
    msg_.loop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>()
{
  return ur5e_waypoint_mover::srv::builder::Init_ExecuteWaypoints_Request_loop();
}

}  // namespace ur5e_waypoint_mover


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_ExecuteWaypoints_Response_waypoints_executed
{
public:
  explicit Init_ExecuteWaypoints_Response_waypoints_executed(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response waypoints_executed(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response::_waypoints_executed_type arg)
  {
    msg_.waypoints_executed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response msg_;
};

class Init_ExecuteWaypoints_Response_message
{
public:
  explicit Init_ExecuteWaypoints_Response_message(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response & msg)
  : msg_(msg)
  {}
  Init_ExecuteWaypoints_Response_waypoints_executed message(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecuteWaypoints_Response_waypoints_executed(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response msg_;
};

class Init_ExecuteWaypoints_Response_success
{
public:
  Init_ExecuteWaypoints_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteWaypoints_Response_message success(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteWaypoints_Response_message(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>()
{
  return ur5e_waypoint_mover::srv::builder::Init_ExecuteWaypoints_Response_success();
}

}  // namespace ur5e_waypoint_mover


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_ExecuteWaypoints_Event_response
{
public:
  explicit Init_ExecuteWaypoints_Event_response(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event response(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event msg_;
};

class Init_ExecuteWaypoints_Event_request
{
public:
  explicit Init_ExecuteWaypoints_Event_request(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteWaypoints_Event_response request(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteWaypoints_Event_response(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event msg_;
};

class Init_ExecuteWaypoints_Event_info
{
public:
  Init_ExecuteWaypoints_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteWaypoints_Event_request info(::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteWaypoints_Event_request(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::ExecuteWaypoints_Event>()
{
  return ur5e_waypoint_mover::srv::builder::Init_ExecuteWaypoints_Event_info();
}

}  // namespace ur5e_waypoint_mover

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__BUILDER_HPP_
