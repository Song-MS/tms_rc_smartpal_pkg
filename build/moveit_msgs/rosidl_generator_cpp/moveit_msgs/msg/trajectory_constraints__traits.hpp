// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/TrajectoryConstraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_

#include "moveit_msgs/msg/trajectory_constraints__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::TrajectoryConstraints>()
{
  return "moveit_msgs::msg::TrajectoryConstraints";
}

template<>
struct has_fixed_size<moveit_msgs::msg::TrajectoryConstraints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::TrajectoryConstraints>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__TRAJECTORY_CONSTRAINTS__TRAITS_HPP_
