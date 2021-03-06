// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__ROBOT_STATE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__ROBOT_STATE__TRAITS_HPP_

#include "moveit_msgs/msg/robot_state__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/joint_state__traits.hpp"
// Member 'multi_dof_joint_state'
#include "sensor_msgs/msg/multi_dof_joint_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::RobotState>()
{
  return "moveit_msgs::msg::RobotState";
}

template<>
struct has_fixed_size<moveit_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__ROBOT_STATE__TRAITS_HPP_
