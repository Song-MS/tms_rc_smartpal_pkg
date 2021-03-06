// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/MotionPlanRequest.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__MOTION_PLAN_REQUEST__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__MOTION_PLAN_REQUEST__TRAITS_HPP_

#include "moveit_msgs/msg/motion_plan_request__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'workspace_parameters'
#include "moveit_msgs/msg/workspace_parameters__traits.hpp"
// Member 'start_state'
#include "moveit_msgs/msg/robot_state__traits.hpp"
// Member 'path_constraints'
#include "moveit_msgs/msg/constraints__traits.hpp"
// Member 'trajectory_constraints'
#include "moveit_msgs/msg/trajectory_constraints__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::MotionPlanRequest>()
{
  return "moveit_msgs::msg::MotionPlanRequest";
}

template<>
struct has_fixed_size<moveit_msgs::msg::MotionPlanRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::MotionPlanRequest>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__MOTION_PLAN_REQUEST__TRAITS_HPP_
