// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ur5e_waypoint_mover:srv/ListWaypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/list_waypoints.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__STRUCT_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Request __attribute__((deprecated))
#else
# define DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Request __declspec(deprecated)
#endif

namespace ur5e_waypoint_mover
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListWaypoints_Request_
{
  using Type = ListWaypoints_Request_<ContainerAllocator>;

  explicit ListWaypoints_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ListWaypoints_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Request
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Request
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListWaypoints_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListWaypoints_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListWaypoints_Request_

// alias to use template instance with default allocator
using ListWaypoints_Request =
  ur5e_waypoint_mover::srv::ListWaypoints_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur5e_waypoint_mover


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Response __attribute__((deprecated))
#else
# define DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Response __declspec(deprecated)
#endif

namespace ur5e_waypoint_mover
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListWaypoints_Response_
{
  using Type = ListWaypoints_Response_<ContainerAllocator>;

  explicit ListWaypoints_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ListWaypoints_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _labels_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _labels_type labels;
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _poses_type poses;

  // setters for named parameter idiom
  Type & set__labels(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->labels = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Response
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Response
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListWaypoints_Response_ & other) const
  {
    if (this->labels != other.labels) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    return true;
  }
  bool operator!=(const ListWaypoints_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListWaypoints_Response_

// alias to use template instance with default allocator
using ListWaypoints_Response =
  ur5e_waypoint_mover::srv::ListWaypoints_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur5e_waypoint_mover


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Event __attribute__((deprecated))
#else
# define DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Event __declspec(deprecated)
#endif

namespace ur5e_waypoint_mover
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ListWaypoints_Event_
{
  using Type = ListWaypoints_Event_<ContainerAllocator>;

  explicit ListWaypoints_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ListWaypoints_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur5e_waypoint_mover::srv::ListWaypoints_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ur5e_waypoint_mover::srv::ListWaypoints_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Event
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ur5e_waypoint_mover__srv__ListWaypoints_Event
    std::shared_ptr<ur5e_waypoint_mover::srv::ListWaypoints_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ListWaypoints_Event_ & other) const
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
  bool operator!=(const ListWaypoints_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ListWaypoints_Event_

// alias to use template instance with default allocator
using ListWaypoints_Event =
  ur5e_waypoint_mover::srv::ListWaypoints_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace ur5e_waypoint_mover
{

namespace srv
{

struct ListWaypoints
{
  using Request = ur5e_waypoint_mover::srv::ListWaypoints_Request;
  using Response = ur5e_waypoint_mover::srv::ListWaypoints_Response;
  using Event = ur5e_waypoint_mover::srv::ListWaypoints_Event;
};

}  // namespace srv

}  // namespace ur5e_waypoint_mover

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__STRUCT_HPP_
