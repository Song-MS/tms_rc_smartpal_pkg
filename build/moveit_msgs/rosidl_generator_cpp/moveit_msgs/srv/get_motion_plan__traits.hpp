// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetMotionPlan.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__GET_MOTION_PLAN__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__GET_MOTION_PLAN__TRAITS_HPP_

#include "moveit_msgs/srv/get_motion_plan__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'motion_plan_request'
#include "moveit_msgs/msg/motion_plan_request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionPlan_Request>()
{
  return "moveit_msgs::srv::GetMotionPlan_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionPlan_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionPlanRequest>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionPlan_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionPlanRequest>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'motion_plan_response'
#include "moveit_msgs/msg/motion_plan_response__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionPlan_Response>()
{
  return "moveit_msgs::srv::GetMotionPlan_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionPlan_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MotionPlanResponse>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionPlan_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MotionPlanResponse>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetMotionPlan>()
{
  return "moveit_msgs::srv::GetMotionPlan";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetMotionPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetMotionPlan_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetMotionPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetMotionPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetMotionPlan_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetMotionPlan_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__GET_MOTION_PLAN__TRAITS_HPP_
