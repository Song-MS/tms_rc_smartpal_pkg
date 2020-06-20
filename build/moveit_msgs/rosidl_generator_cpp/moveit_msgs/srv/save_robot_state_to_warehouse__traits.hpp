// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/SaveRobotStateToWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__SAVE_ROBOT_STATE_TO_WAREHOUSE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__SAVE_ROBOT_STATE_TO_WAREHOUSE__TRAITS_HPP_

#include "moveit_msgs/srv/save_robot_state_to_warehouse__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'state'
#include "moveit_msgs/msg/robot_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::SaveRobotStateToWarehouse_Request>()
{
  return "moveit_msgs::srv::SaveRobotStateToWarehouse_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::SaveRobotStateToWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::SaveRobotStateToWarehouse_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::SaveRobotStateToWarehouse_Response>()
{
  return "moveit_msgs::srv::SaveRobotStateToWarehouse_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::SaveRobotStateToWarehouse_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::SaveRobotStateToWarehouse_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::SaveRobotStateToWarehouse>()
{
  return "moveit_msgs::srv::SaveRobotStateToWarehouse";
}

template<>
struct has_fixed_size<moveit_msgs::srv::SaveRobotStateToWarehouse>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::SaveRobotStateToWarehouse_Request>::value &&
    has_fixed_size<moveit_msgs::srv::SaveRobotStateToWarehouse_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::SaveRobotStateToWarehouse>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::SaveRobotStateToWarehouse_Request>::value &&
    has_bounded_size<moveit_msgs::srv::SaveRobotStateToWarehouse_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__SAVE_ROBOT_STATE_TO_WAREHOUSE__TRAITS_HPP_
