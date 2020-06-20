// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetCartesianPath.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__GET_CARTESIAN_PATH__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__GET_CARTESIAN_PATH__TRAITS_HPP_

#include "moveit_msgs/srv/get_cartesian_path__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'start_state'
#include "moveit_msgs/msg/robot_state__traits.hpp"
// Member 'path_constraints'
#include "moveit_msgs/msg/constraints__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetCartesianPath_Request>()
{
  return "moveit_msgs::srv::GetCartesianPath_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetCartesianPath_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetCartesianPath_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'start_state'
// already included above
// #include "moveit_msgs/msg/robot_state__traits.hpp"
// Member 'solution'
#include "moveit_msgs/msg/robot_trajectory__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/move_it_error_codes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetCartesianPath_Response>()
{
  return "moveit_msgs::srv::GetCartesianPath_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetCartesianPath_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_fixed_size<moveit_msgs::msg::RobotState>::value && has_fixed_size<moveit_msgs::msg::RobotTrajectory>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetCartesianPath_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_bounded_size<moveit_msgs::msg::RobotState>::value && has_bounded_size<moveit_msgs::msg::RobotTrajectory>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetCartesianPath>()
{
  return "moveit_msgs::srv::GetCartesianPath";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetCartesianPath>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetCartesianPath_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetCartesianPath_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetCartesianPath>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetCartesianPath_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetCartesianPath_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__GET_CARTESIAN_PATH__TRAITS_HPP_
