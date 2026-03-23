// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur5e_waypoint_mover:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/add_waypoint.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur5e_waypoint_mover/srv/detail/add_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_AddWaypoint_Request_yaw
{
public:
  explicit Init_AddWaypoint_Request_yaw(::ur5e_waypoint_mover::srv::AddWaypoint_Request & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::AddWaypoint_Request yaw(::ur5e_waypoint_mover::srv::AddWaypoint_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Request msg_;
};

class Init_AddWaypoint_Request_pitch
{
public:
  explicit Init_AddWaypoint_Request_pitch(::ur5e_waypoint_mover::srv::AddWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_AddWaypoint_Request_yaw pitch(::ur5e_waypoint_mover::srv::AddWaypoint_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_AddWaypoint_Request_yaw(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Request msg_;
};

class Init_AddWaypoint_Request_roll
{
public:
  explicit Init_AddWaypoint_Request_roll(::ur5e_waypoint_mover::srv::AddWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_AddWaypoint_Request_pitch roll(::ur5e_waypoint_mover::srv::AddWaypoint_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_AddWaypoint_Request_pitch(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Request msg_;
};

class Init_AddWaypoint_Request_use_rpy
{
public:
  explicit Init_AddWaypoint_Request_use_rpy(::ur5e_waypoint_mover::srv::AddWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_AddWaypoint_Request_roll use_rpy(::ur5e_waypoint_mover::srv::AddWaypoint_Request::_use_rpy_type arg)
  {
    msg_.use_rpy = std::move(arg);
    return Init_AddWaypoint_Request_roll(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Request msg_;
};

class Init_AddWaypoint_Request_pose
{
public:
  explicit Init_AddWaypoint_Request_pose(::ur5e_waypoint_mover::srv::AddWaypoint_Request & msg)
  : msg_(msg)
  {}
  Init_AddWaypoint_Request_use_rpy pose(::ur5e_waypoint_mover::srv::AddWaypoint_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_AddWaypoint_Request_use_rpy(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Request msg_;
};

class Init_AddWaypoint_Request_label
{
public:
  Init_AddWaypoint_Request_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddWaypoint_Request_pose label(::ur5e_waypoint_mover::srv::AddWaypoint_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_AddWaypoint_Request_pose(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::AddWaypoint_Request>()
{
  return ur5e_waypoint_mover::srv::builder::Init_AddWaypoint_Request_label();
}

}  // namespace ur5e_waypoint_mover


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_AddWaypoint_Response_message
{
public:
  explicit Init_AddWaypoint_Response_message(::ur5e_waypoint_mover::srv::AddWaypoint_Response & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::AddWaypoint_Response message(::ur5e_waypoint_mover::srv::AddWaypoint_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Response msg_;
};

class Init_AddWaypoint_Response_success
{
public:
  Init_AddWaypoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddWaypoint_Response_message success(::ur5e_waypoint_mover::srv::AddWaypoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddWaypoint_Response_message(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::AddWaypoint_Response>()
{
  return ur5e_waypoint_mover::srv::builder::Init_AddWaypoint_Response_success();
}

}  // namespace ur5e_waypoint_mover


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_AddWaypoint_Event_response
{
public:
  explicit Init_AddWaypoint_Event_response(::ur5e_waypoint_mover::srv::AddWaypoint_Event & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::AddWaypoint_Event response(::ur5e_waypoint_mover::srv::AddWaypoint_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Event msg_;
};

class Init_AddWaypoint_Event_request
{
public:
  explicit Init_AddWaypoint_Event_request(::ur5e_waypoint_mover::srv::AddWaypoint_Event & msg)
  : msg_(msg)
  {}
  Init_AddWaypoint_Event_response request(::ur5e_waypoint_mover::srv::AddWaypoint_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AddWaypoint_Event_response(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Event msg_;
};

class Init_AddWaypoint_Event_info
{
public:
  Init_AddWaypoint_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddWaypoint_Event_request info(::ur5e_waypoint_mover::srv::AddWaypoint_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AddWaypoint_Event_request(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::AddWaypoint_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::AddWaypoint_Event>()
{
  return ur5e_waypoint_mover::srv::builder::Init_AddWaypoint_Event_info();
}

}  // namespace ur5e_waypoint_mover

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__BUILDER_HPP_
