// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/ApplyPlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__APPLY_PLANNING_SCENE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__APPLY_PLANNING_SCENE__TRAITS_HPP_

#include "moveit_msgs/srv/apply_planning_scene__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'scene'
#include "moveit_msgs/msg/planning_scene__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ApplyPlanningScene_Request>()
{
  return "moveit_msgs::srv::ApplyPlanningScene_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ApplyPlanningScene_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlanningScene>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ApplyPlanningScene_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlanningScene>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ApplyPlanningScene_Response>()
{
  return "moveit_msgs::srv::ApplyPlanningScene_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ApplyPlanningScene_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ApplyPlanningScene_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ApplyPlanningScene>()
{
  return "moveit_msgs::srv::ApplyPlanningScene";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ApplyPlanningScene>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::ApplyPlanningScene_Request>::value &&
    has_fixed_size<moveit_msgs::srv::ApplyPlanningScene_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::ApplyPlanningScene>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::ApplyPlanningScene_Request>::value &&
    has_bounded_size<moveit_msgs::srv::ApplyPlanningScene_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__APPLY_PLANNING_SCENE__TRAITS_HPP_
