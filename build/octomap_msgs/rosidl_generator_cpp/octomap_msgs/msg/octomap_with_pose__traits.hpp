// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from octomap_msgs:msg/OctomapWithPose.idl
// generated code does not contain a copyright notice

#ifndef OCTOMAP_MSGS__MSG__OCTOMAP_WITH_POSE__TRAITS_HPP_
#define OCTOMAP_MSGS__MSG__OCTOMAP_WITH_POSE__TRAITS_HPP_

#include "octomap_msgs/msg/octomap_with_pose__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/pose__traits.hpp"
// Member 'octomap'
#include "octomap_msgs/msg/octomap__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_msgs::msg::OctomapWithPose>()
{
  return "octomap_msgs::msg::OctomapWithPose";
}

template<>
struct has_fixed_size<octomap_msgs::msg::OctomapWithPose>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<octomap_msgs::msg::Octomap>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<octomap_msgs::msg::OctomapWithPose>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<octomap_msgs::msg::Octomap>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

}  // namespace rosidl_generator_traits

#endif  // OCTOMAP_MSGS__MSG__OCTOMAP_WITH_POSE__TRAITS_HPP_
