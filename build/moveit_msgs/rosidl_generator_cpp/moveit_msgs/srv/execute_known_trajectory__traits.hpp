// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/ExecuteKnownTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__EXECUTE_KNOWN_TRAJECTORY__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__EXECUTE_KNOWN_TRAJECTORY__TRAITS_HPP_

#include "moveit_msgs/srv/execute_known_trajectory__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/robot_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ExecuteKnownTrajectory_Request>()
{
  return "moveit_msgs::srv::ExecuteKnownTrajectory_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ExecuteKnownTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ExecuteKnownTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::RobotTrajectory>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/move_it_error_codes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ExecuteKnownTrajectory_Response>()
{
  return "moveit_msgs::srv::ExecuteKnownTrajectory_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ExecuteKnownTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ExecuteKnownTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ExecuteKnownTrajectory>()
{
  return "moveit_msgs::srv::ExecuteKnownTrajectory";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ExecuteKnownTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::ExecuteKnownTrajectory_Request>::value &&
    has_fixed_size<moveit_msgs::srv::ExecuteKnownTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::ExecuteKnownTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::ExecuteKnownTrajectory_Request>::value &&
    has_bounded_size<moveit_msgs::srv::ExecuteKnownTrajectory_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__EXECUTE_KNOWN_TRAJECTORY__TRAITS_HPP_
