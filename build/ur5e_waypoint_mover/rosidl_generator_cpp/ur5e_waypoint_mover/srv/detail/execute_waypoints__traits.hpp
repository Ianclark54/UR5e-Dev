// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur5e_waypoint_mover:srv/ExecuteWaypoints.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ur5e_waypoint_mover/srv/execute_waypoints.hpp"


#ifndef UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__TRAITS_HPP_
#define UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur5e_waypoint_mover/srv/detail/execute_waypoints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ur5e_waypoint_mover
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteWaypoints_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: loop
  {
    out << "loop: ";
    rosidl_generator_traits::value_to_yaml(msg.loop, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: loop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop: ";
    rosidl_generator_traits::value_to_yaml(msg.loop, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteWaypoints_Request & msg, bool use_flow_style = false)
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
  const ur5e_waypoint_mover::srv::ExecuteWaypoints_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::ExecuteWaypoints_Request & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>()
{
  return "ur5e_waypoint_mover::srv::ExecuteWaypoints_Request";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>()
{
  return "ur5e_waypoint_mover/srv/ExecuteWaypoints_Request";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ur5e_waypoint_mover
{

namespace srv
{

inline void to_flow_style_yaml(
  const ExecuteWaypoints_Response & msg,
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
    out << ", ";
  }

  // member: waypoints_executed
  {
    out << "waypoints_executed: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoints_executed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteWaypoints_Response & msg,
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

  // member: waypoints_executed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoints_executed: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoints_executed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteWaypoints_Response & msg, bool use_flow_style = false)
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
  const ur5e_waypoint_mover::srv::ExecuteWaypoints_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::ExecuteWaypoints_Response & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>()
{
  return "ur5e_waypoint_mover::srv::ExecuteWaypoints_Response";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>()
{
  return "ur5e_waypoint_mover/srv/ExecuteWaypoints_Response";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>
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
  const ExecuteWaypoints_Event & msg,
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
  const ExecuteWaypoints_Event & msg,
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

inline std::string to_yaml(const ExecuteWaypoints_Event & msg, bool use_flow_style = false)
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
  const ur5e_waypoint_mover::srv::ExecuteWaypoints_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur5e_waypoint_mover::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur5e_waypoint_mover::srv::to_yaml() instead")]]
inline std::string to_yaml(const ur5e_waypoint_mover::srv::ExecuteWaypoints_Event & msg)
{
  return ur5e_waypoint_mover::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::ExecuteWaypoints_Event>()
{
  return "ur5e_waypoint_mover::srv::ExecuteWaypoints_Event";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::ExecuteWaypoints_Event>()
{
  return "ur5e_waypoint_mover/srv/ExecuteWaypoints_Event";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>::value && has_bounded_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>::value> {};

template<>
struct is_message<ur5e_waypoint_mover::srv::ExecuteWaypoints_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ur5e_waypoint_mover::srv::ExecuteWaypoints>()
{
  return "ur5e_waypoint_mover::srv::ExecuteWaypoints";
}

template<>
inline const char * name<ur5e_waypoint_mover::srv::ExecuteWaypoints>()
{
  return "ur5e_waypoint_mover/srv/ExecuteWaypoints";
}

template<>
struct has_fixed_size<ur5e_waypoint_mover::srv::ExecuteWaypoints>
  : std::integral_constant<
    bool,
    has_fixed_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>::value &&
    has_fixed_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>::value
  >
{
};

template<>
struct has_bounded_size<ur5e_waypoint_mover::srv::ExecuteWaypoints>
  : std::integral_constant<
    bool,
    has_bounded_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>::value &&
    has_bounded_size<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>::value
  >
{
};

template<>
struct is_service<ur5e_waypoint_mover::srv::ExecuteWaypoints>
  : std::true_type
{
};

template<>
struct is_service_request<ur5e_waypoint_mover::srv::ExecuteWaypoints_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ur5e_waypoint_mover::srv::ExecuteWaypoints_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UR5E_WAYPOINT_MOVER__SRV__DETAIL__EXECUTE_WAYPOINTS__TRAITS_HPP_
