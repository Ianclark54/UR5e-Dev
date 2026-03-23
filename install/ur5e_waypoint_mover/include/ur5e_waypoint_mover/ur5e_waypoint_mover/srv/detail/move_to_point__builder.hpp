// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur5e_waypoint_mover:srv/MoveToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/move_to_point.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__BUILDER_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur5e_waypoint_mover/srv/detail/move_to_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_MoveToPoint_Request_yaw
{
public:
  explicit Init_MoveToPoint_Request_yaw(::ur5e_waypoint_mover::srv::MoveToPoint_Request & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::MoveToPoint_Request yaw(::ur5e_waypoint_mover::srv::MoveToPoint_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Request msg_;
};

class Init_MoveToPoint_Request_pitch
{
public:
  explicit Init_MoveToPoint_Request_pitch(::ur5e_waypoint_mover::srv::MoveToPoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPoint_Request_yaw pitch(::ur5e_waypoint_mover::srv::MoveToPoint_Request::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_MoveToPoint_Request_yaw(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Request msg_;
};

class Init_MoveToPoint_Request_roll
{
public:
  explicit Init_MoveToPoint_Request_roll(::ur5e_waypoint_mover::srv::MoveToPoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPoint_Request_pitch roll(::ur5e_waypoint_mover::srv::MoveToPoint_Request::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_MoveToPoint_Request_pitch(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Request msg_;
};

class Init_MoveToPoint_Request_use_rpy
{
public:
  explicit Init_MoveToPoint_Request_use_rpy(::ur5e_waypoint_mover::srv::MoveToPoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPoint_Request_roll use_rpy(::ur5e_waypoint_mover::srv::MoveToPoint_Request::_use_rpy_type arg)
  {
    msg_.use_rpy = std::move(arg);
    return Init_MoveToPoint_Request_roll(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Request msg_;
};

class Init_MoveToPoint_Request_frame_id
{
public:
  explicit Init_MoveToPoint_Request_frame_id(::ur5e_waypoint_mover::srv::MoveToPoint_Request & msg)
  : msg_(msg)
  {}
  Init_MoveToPoint_Request_use_rpy frame_id(::ur5e_waypoint_mover::srv::MoveToPoint_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_MoveToPoint_Request_use_rpy(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Request msg_;
};

class Init_MoveToPoint_Request_pose
{
public:
  Init_MoveToPoint_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPoint_Request_frame_id pose(::ur5e_waypoint_mover::srv::MoveToPoint_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_MoveToPoint_Request_frame_id(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::MoveToPoint_Request>()
{
  return ur5e_waypoint_mover::srv::builder::Init_MoveToPoint_Request_pose();
}

}  // namespace ur5e_waypoint_mover


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_MoveToPoint_Response_planning_time
{
public:
  explicit Init_MoveToPoint_Response_planning_time(::ur5e_waypoint_mover::srv::MoveToPoint_Response & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::MoveToPoint_Response planning_time(::ur5e_waypoint_mover::srv::MoveToPoint_Response::_planning_time_type arg)
  {
    msg_.planning_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Response msg_;
};

class Init_MoveToPoint_Response_message
{
public:
  explicit Init_MoveToPoint_Response_message(::ur5e_waypoint_mover::srv::MoveToPoint_Response & msg)
  : msg_(msg)
  {}
  Init_MoveToPoint_Response_planning_time message(::ur5e_waypoint_mover::srv::MoveToPoint_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_MoveToPoint_Response_planning_time(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Response msg_;
};

class Init_MoveToPoint_Response_success
{
public:
  Init_MoveToPoint_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPoint_Response_message success(::ur5e_waypoint_mover::srv::MoveToPoint_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveToPoint_Response_message(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::MoveToPoint_Response>()
{
  return ur5e_waypoint_mover::srv::builder::Init_MoveToPoint_Response_success();
}

}  // namespace ur5e_waypoint_mover


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_MoveToPoint_Event_response
{
public:
  explicit Init_MoveToPoint_Event_response(::ur5e_waypoint_mover::srv::MoveToPoint_Event & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::MoveToPoint_Event response(::ur5e_waypoint_mover::srv::MoveToPoint_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Event msg_;
};

class Init_MoveToPoint_Event_request
{
public:
  explicit Init_MoveToPoint_Event_request(::ur5e_waypoint_mover::srv::MoveToPoint_Event & msg)
  : msg_(msg)
  {}
  Init_MoveToPoint_Event_response request(::ur5e_waypoint_mover::srv::MoveToPoint_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_MoveToPoint_Event_response(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Event msg_;
};

class Init_MoveToPoint_Event_info
{
public:
  Init_MoveToPoint_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveToPoint_Event_request info(::ur5e_waypoint_mover::srv::MoveToPoint_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_MoveToPoint_Event_request(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::MoveToPoint_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::MoveToPoint_Event>()
{
  return ur5e_waypoint_mover::srv::builder::Init_MoveToPoint_Event_info();
}

}  // namespace ur5e_waypoint_mover

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__BUILDER_HPP_
