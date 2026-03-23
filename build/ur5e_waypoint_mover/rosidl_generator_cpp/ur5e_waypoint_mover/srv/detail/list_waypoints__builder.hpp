// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ur5e_waypoint_mover:srv/ListWaypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/list_waypoints.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__BUILDER_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ur5e_waypoint_mover/srv/detail/list_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ur5e_waypoint_mover
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::ListWaypoints_Request>()
{
  return ::ur5e_waypoint_mover::srv::ListWaypoints_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace ur5e_waypoint_mover


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_ListWaypoints_Response_poses
{
public:
  explicit Init_ListWaypoints_Response_poses(::ur5e_waypoint_mover::srv::ListWaypoints_Response & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::ListWaypoints_Response poses(::ur5e_waypoint_mover::srv::ListWaypoints_Response::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ListWaypoints_Response msg_;
};

class Init_ListWaypoints_Response_labels
{
public:
  Init_ListWaypoints_Response_labels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListWaypoints_Response_poses labels(::ur5e_waypoint_mover::srv::ListWaypoints_Response::_labels_type arg)
  {
    msg_.labels = std::move(arg);
    return Init_ListWaypoints_Response_poses(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ListWaypoints_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::ListWaypoints_Response>()
{
  return ur5e_waypoint_mover::srv::builder::Init_ListWaypoints_Response_labels();
}

}  // namespace ur5e_waypoint_mover


namespace ur5e_waypoint_mover
{

namespace srv
{

namespace builder
{

class Init_ListWaypoints_Event_response
{
public:
  explicit Init_ListWaypoints_Event_response(::ur5e_waypoint_mover::srv::ListWaypoints_Event & msg)
  : msg_(msg)
  {}
  ::ur5e_waypoint_mover::srv::ListWaypoints_Event response(::ur5e_waypoint_mover::srv::ListWaypoints_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ListWaypoints_Event msg_;
};

class Init_ListWaypoints_Event_request
{
public:
  explicit Init_ListWaypoints_Event_request(::ur5e_waypoint_mover::srv::ListWaypoints_Event & msg)
  : msg_(msg)
  {}
  Init_ListWaypoints_Event_response request(::ur5e_waypoint_mover::srv::ListWaypoints_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ListWaypoints_Event_response(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ListWaypoints_Event msg_;
};

class Init_ListWaypoints_Event_info
{
public:
  Init_ListWaypoints_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListWaypoints_Event_request info(::ur5e_waypoint_mover::srv::ListWaypoints_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ListWaypoints_Event_request(msg_);
  }

private:
  ::ur5e_waypoint_mover::srv::ListWaypoints_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ur5e_waypoint_mover::srv::ListWaypoints_Event>()
{
  return ur5e_waypoint_mover::srv::builder::Init_ListWaypoints_Event_info();
}

}  // namespace ur5e_waypoint_mover

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__BUILDER_HPP_
