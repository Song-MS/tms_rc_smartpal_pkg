// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__GET_PLANNING_SCENE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__GET_PLANNING_SCENE__TRAITS_HPP_

#include "moveit_msgs/srv/get_planning_scene__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'components'
#include "moveit_msgs/msg/planning_scene_components__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPlanningScene_Request>()
{
  return "moveit_msgs::srv::GetPlanningScene_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlanningScene_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlanningSceneComponents>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlanningScene_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlanningSceneComponents>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'scene'
#include "moveit_msgs/msg/planning_scene__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPlanningScene_Response>()
{
  return "moveit_msgs::srv::GetPlanningScene_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlanningScene_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlanningScene>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlanningScene_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlanningScene>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPlanningScene>()
{
  return "moveit_msgs::srv::GetPlanningScene";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlanningScene>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetPlanningScene_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetPlanningScene_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlanningScene>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetPlanningScene_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetPlanningScene_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__GET_PLANNING_SCENE__TRAITS_HPP_
