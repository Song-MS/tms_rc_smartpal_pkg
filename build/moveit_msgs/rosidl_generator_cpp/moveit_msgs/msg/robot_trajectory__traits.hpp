// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/RobotTrajectory.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__ROBOT_TRAJECTORY__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__ROBOT_TRAJECTORY__TRAITS_HPP_

#include "moveit_msgs/msg/robot_trajectory__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'joint_trajectory'
#include "trajectory_msgs/msg/joint_trajectory__traits.hpp"
// Member 'multi_dof_joint_trajectory'
#include "trajectory_msgs/msg/multi_dof_joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::RobotTrajectory>()
{
  return "moveit_msgs::msg::RobotTrajectory";
}

template<>
struct has_fixed_size<moveit_msgs::msg::RobotTrajectory>
  : std::integral_constant<bool, has_fixed_size<trajectory_msgs::msg::JointTrajectory>::value && has_fixed_size<trajectory_msgs::msg::MultiDOFJointTrajectory>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::RobotTrajectory>
  : std::integral_constant<bool, has_bounded_size<trajectory_msgs::msg::JointTrajectory>::value && has_bounded_size<trajectory_msgs::msg::MultiDOFJointTrajectory>::value> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__ROBOT_TRAJECTORY__TRAITS_HPP_
