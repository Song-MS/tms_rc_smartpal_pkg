// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__CARTESIAN_POINT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__CARTESIAN_POINT__TRAITS_HPP_

#include "moveit_msgs/msg/cartesian_point__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/twist__traits.hpp"
// Member 'acceleration'
#include "geometry_msgs/msg/accel__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::CartesianPoint>()
{
  return "moveit_msgs::msg::CartesianPoint";
}

template<>
struct has_fixed_size<moveit_msgs::msg::CartesianPoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Accel>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Twist>::value> {};

template<>
struct has_bounded_size<moveit_msgs::msg::CartesianPoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Accel>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Twist>::value> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__CARTESIAN_POINT__TRAITS_HPP_
