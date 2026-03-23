// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur5e_waypoint_mover:srv/MoveToPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/move_to_point.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__STRUCT_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Request __attribute__((deprecated))
#else
# define DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Request __declspec(deprecated)
#endif

namespace ur5e_waypoint_mover
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToPoint_Request_
{
  using Type = MoveToPoint_Request_<ContainerAllocator>;

  explicit MoveToPoint_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->use_rpy = false;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit MoveToPoint_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init),
    frame_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_id = "";
      this->use_rpy = false;
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _frame_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _frame_id_type frame_id;
  using _use_rpy_type =
    bool;
  _use_rpy_type use_rpy;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__frame_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__use_rpy(
    const bool & _arg)
  {
    this->use_rpy = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Request
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Request
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToPoint_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->use_rpy != other.use_rpy) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToPoint_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToPoint_Request_

// alias to use template instance with default allocator
using MoveToPoint_Request =
  ur5e_waypoint_mover::srv::MoveToPoint_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur5e_waypoint_mover


#ifndef _WIN32
# define DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Response __attribute__((deprecated))
#else
# define DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Response __declspec(deprecated)
#endif

namespace ur5e_waypoint_mover
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToPoint_Response_
{
  using Type = MoveToPoint_Response_<ContainerAllocator>;

  explicit MoveToPoint_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->planning_time = 0.0;
    }
  }

  explicit MoveToPoint_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->planning_time = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _planning_time_type =
    double;
  _planning_time_type planning_time;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__planning_time(
    const double & _arg)
  {
    this->planning_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Response
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Response
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToPoint_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->planning_time != other.planning_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToPoint_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToPoint_Response_

// alias to use template instance with default allocator
using MoveToPoint_Response =
  ur5e_waypoint_mover::srv::MoveToPoint_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur5e_waypoint_mover


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Event __attribute__((deprecated))
#else
# define DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Event __declspec(deprecated)
#endif

namespace ur5e_waypoint_mover
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MoveToPoint_Event_
{
  using Type = MoveToPoint_Event_<ContainerAllocator>;

  explicit MoveToPoint_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit MoveToPoint_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur5e_waypoint_mover::srv::MoveToPoint_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur5e_waypoint_mover::srv::MoveToPoint_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Event
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur5e_waypoint_mover__srv__MoveToPoint_Event
    std::shared_ptr<ur5e_waypoint_mover::srv::MoveToPoint_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveToPoint_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveToPoint_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveToPoint_Event_

// alias to use template instance with default allocator
using MoveToPoint_Event =
  ur5e_waypoint_mover::srv::MoveToPoint_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace ur5e_waypoint_mover
{

namespace srv
{

struct MoveToPoint
{
  using Request = ur5e_waypoint_mover::srv::MoveToPoint_Request;
  using Response = ur5e_waypoint_mover::srv::MoveToPoint_Response;
  using Event = ur5e_waypoint_mover::srv::MoveToPoint_Event;
};

}  // namespace srv

}  // namespace ur5e_waypoint_mover

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__MOVE_TO_POINT__STRUCT_HPP_
