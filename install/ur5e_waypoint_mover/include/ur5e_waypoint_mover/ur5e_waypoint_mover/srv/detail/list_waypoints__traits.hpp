// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur5e_waypoint_mover:srv/ListWaypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/list_waypoints.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__TRAITS_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur5e_waypoint_mover/srv/detail/list_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ur5e_waypoint_mover
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListWaypoints_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListWaypoints_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace rosidl_generator_traits
{

[[deprecated("use ur5e_waypoint_mover::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur5e_waypoint_mover::srv::ListWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::ListWaypoints_Request & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::ListWaypoints_Request>()
{
  return "ur5e_waypoint_mover::srv::ListWaypoints_Request";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::ListWaypoints_Request>()
{
  return "ur5e_waypoint_mover/srv/ListWaypoints_Request";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::ListWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::ListWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::ListWaypoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace ur5e_waypoint_mover
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListWaypoints_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: labels
  {
    if (msg.labels.size() == 0) {
      out << "labels: []";
    } else {
      out << "labels: [";
      size_t pending_items = msg.labels.size();
      for (auto item : msg.labels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: labels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.labels.size() == 0) {
      out << "labels: []\n";
    } else {
      out << "labels:\n";
      for (auto item : msg.labels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListWaypoints_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace rosidl_generator_traits
{

[[deprecated("use ur5e_waypoint_mover::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur5e_waypoint_mover::srv::ListWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::ListWaypoints_Response & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::ListWaypoints_Response>()
{
  return "ur5e_waypoint_mover::srv::ListWaypoints_Response";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::ListWaypoints_Response>()
{
  return "ur5e_waypoint_mover/srv/ListWaypoints_Response";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::ListWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::ListWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::ListWaypoints_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace ur5e_waypoint_mover
{

namespace srv
{

inline void to_flow_style_yaml(
  const ListWaypoints_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ListWaypoints_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ListWaypoints_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ur5e_waypoint_mover

namespace rosidl_generator_traits
{

[[deprecated("use ur5e_waypoint_mover::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur5e_waypoint_mover::srv::ListWaypoints_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::ListWaypoints_Event & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::ListWaypoints_Event>()
{
  return "ur5e_waypoint_mover::srv::ListWaypoints_Event";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::ListWaypoints_Event>()
{
  return "ur5e_waypoint_mover/srv/ListWaypoints_Event";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::ListWaypoints_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::ListWaypoints_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ur5e_waypoint_mover::srv::ListWaypoints_Request>::value && has_bounded_size<ur5e_waypoint_mover::srv::ListWaypoints_Response>::value> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::ListWaypoints_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::ListWaypoints>()
{
  return "ur5e_waypoint_mover::srv::ListWaypoints";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::ListWaypoints>()
{
  return "ur5e_waypoint_mover/srv/ListWaypoints";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::ListWaypoints>
  : std::integral_constant<
    bool,
    has_fixed_size<ur5e_waypoint_mover::srv::ListWaypoints_Request>::value &&
    has_fixed_size<ur5e_waypoint_mover::srv::ListWaypoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::ListWaypoints>
  : std::integral_constant<
    bool,
    has_bounded_size<ur5e_waypoint_mover::srv::ListWaypoints_Request>::value &&
    has_bounded_size<ur5e_waypoint_mover::srv::ListWaypoints_Response>::value
  >
{
};

template<>
struct is_service<ur5e_waypoint_mover::srv::ListWaypoints>
  : std::true_type
{
};

template<>
struct is_service_request<ur5e_waypoint_mover::srv::ListWaypoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur5e_waypoint_mover::srv::ListWaypoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__LIST_WAYPOINTS__TRAITS_HPP_
