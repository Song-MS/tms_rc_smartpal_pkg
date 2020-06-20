// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/CostSource.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__COST_SOURCE__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__COST_SOURCE__TRAITS_HPP_

#include "moveit_msgs/msg/cost_source__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'aabb_min'
// Member 'aabb_max'
#include "geometry_msgs/msg/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::CostSource>()
{
  return "moveit_msgs::msg::CostSource";
}

template<>
struct has_fixed_size<moveit_msgs::msg::CostSource>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::CostSource>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__COST_SOURCE__TRAITS_HPP_
