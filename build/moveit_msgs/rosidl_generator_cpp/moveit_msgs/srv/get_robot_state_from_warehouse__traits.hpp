// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetRobotStateFromWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__GET_ROBOT_STATE_FROM_WAREHOUSE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__GET_ROBOT_STATE_FROM_WAREHOUSE__TRAITS_HPP_

#include "moveit_msgs/srv/get_robot_state_from_warehouse__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>()
{
  return "moveit_msgs::srv::GetRobotStateFromWarehouse_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'state'
#include "moveit_msgs/msg/robot_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>()
{
  return "moveit_msgs::srv::GetRobotStateFromWarehouse_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::RobotState>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::RobotState>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetRobotStateFromWarehouse>()
{
  return "moveit_msgs::srv::GetRobotStateFromWarehouse";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetRobotStateFromWarehouse_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__GET_ROBOT_STATE_FROM_WAREHOUSE__TRAITS_HPP_
