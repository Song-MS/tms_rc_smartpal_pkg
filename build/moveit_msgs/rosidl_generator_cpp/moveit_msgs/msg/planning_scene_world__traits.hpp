// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlanningSceneWorld.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__PLANNING_SCENE_WORLD__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__PLANNING_SCENE_WORLD__TRAITS_HPP_

#include "moveit_msgs/msg/planning_scene_world__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'octomap'
#include "octomap_msgs/msg/octomap_with_pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::PlanningSceneWorld>()
{
  return "moveit_msgs::msg::PlanningSceneWorld";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlanningSceneWorld>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlanningSceneWorld>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__PLANNING_SCENE_WORLD__TRAITS_HPP_
