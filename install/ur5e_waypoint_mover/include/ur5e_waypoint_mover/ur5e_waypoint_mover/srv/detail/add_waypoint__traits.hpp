// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur5e_waypoint_mover:srv/AddWaypoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/add_waypoint.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__TRAITS_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur5e_waypoint_mover/srv/detail/add_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace ur5e_waypoint_mover
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddWaypoint_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: label
  {
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: use_rpy
  {
    out << "use_rpy: ";
    rosidl_generator_traits::value_to_yaml(msg.use_rpy, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: label
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "label: ";
    rosidl_generator_traits::value_to_yaml(msg.label, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: use_rpy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_rpy: ";
    rosidl_generator_traits::value_to_yaml(msg.use_rpy, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddWaypoint_Request & msg, bool use_flow_style = false)
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
  const ur5e_waypoint_mover::srv::AddWaypoint_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::AddWaypoint_Request & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::AddWaypoint_Request>()
{
  return "ur5e_waypoint_mover::srv::AddWaypoint_Request";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::AddWaypoint_Request>()
{
  return "ur5e_waypoint_mover/srv/AddWaypoint_Request";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::AddWaypoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::AddWaypoint_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::AddWaypoint_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur5e_waypoint_mover
{

namespace srv
{

inline void to_flow_style_yaml(
  const AddWaypoint_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AddWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AddWaypoint_Response & msg, bool use_flow_style = false)
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
  const ur5e_waypoint_mover::srv::AddWaypoint_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::AddWaypoint_Response & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::AddWaypoint_Response>()
{
  return "ur5e_waypoint_mover::srv::AddWaypoint_Response";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::AddWaypoint_Response>()
{
  return "ur5e_waypoint_mover/srv/AddWaypoint_Response";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::AddWaypoint_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::AddWaypoint_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::AddWaypoint_Response>
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
  const AddWaypoint_Event & msg,
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
  const AddWaypoint_Event & msg,
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

inline std::string to_yaml(const AddWaypoint_Event & msg, bool use_flow_style = false)
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
  const ur5e_waypoint_mover::srv::AddWaypoint_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::AddWaypoint_Event & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::AddWaypoint_Event>()
{
  return "ur5e_waypoint_mover::srv::AddWaypoint_Event";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::AddWaypoint_Event>()
{
  return "ur5e_waypoint_mover/srv/AddWaypoint_Event";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::AddWaypoint_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::AddWaypoint_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ur5e_waypoint_mover::srv::AddWaypoint_Request>::value && has_bounded_size<ur5e_waypoint_mover::srv::AddWaypoint_Response>::value> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::AddWaypoint_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::AddWaypoint>()
{
  return "ur5e_waypoint_mover::srv::AddWaypoint";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::AddWaypoint>()
{
  return "ur5e_waypoint_mover/srv/AddWaypoint";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::AddWaypoint>
  : std::integral_constant<
    bool,
    has_fixed_size<ur5e_waypoint_mover::srv::AddWaypoint_Request>::value &&
    has_fixed_size<ur5e_waypoint_mover::srv::AddWaypoint_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::AddWaypoint>
  : std::integral_constant<
    bool,
    has_bounded_size<ur5e_waypoint_mover::srv::AddWaypoint_Request>::value &&
    has_bounded_size<ur5e_waypoint_mover::srv::AddWaypoint_Response>::value
  >
{
};

template<>
struct is_service<ur5e_waypoint_mover::srv::AddWaypoint>
  : std::true_type
{
};

template<>
struct is_service_request<ur5e_waypoint_mover::srv::AddWaypoint_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur5e_waypoint_mover::srv::AddWaypoint_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__ADD_WAYPOINT__TRAITS_HPP_
