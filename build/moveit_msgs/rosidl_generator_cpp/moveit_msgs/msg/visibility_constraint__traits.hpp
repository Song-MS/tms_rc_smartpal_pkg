// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/VisibilityConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__VISIBILITY_CONSTRAINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__VISIBILITY_CONSTRAINT__TRAITS_HPP_

#include "moveit_msgs/msg/visibility_constraint__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'target_pose'
// Member 'sensor_pose'
#include "geometry_msgs/msg/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::VisibilityConstraint>()
{
  return "moveit_msgs::msg::VisibilityConstraint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::VisibilityConstraint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::VisibilityConstraint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__VISIBILITY_CONSTRAINT__TRAITS_HPP_
