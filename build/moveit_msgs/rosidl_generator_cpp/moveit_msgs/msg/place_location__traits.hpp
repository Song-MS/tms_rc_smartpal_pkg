// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/PlaceLocation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__PLACE_LOCATION__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__PLACE_LOCATION__TRAITS_HPP_

#include "moveit_msgs/msg/place_location__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'post_place_posture'
#include "trajectory_msgs/msg/joint_trajectory__traits.hpp"
// Member 'place_pose'
#include "geometry_msgs/msg/pose_stamped__traits.hpp"
// Member 'pre_place_approach'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/gripper_translation__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::PlaceLocation>()
{
  return "moveit_msgs::msg::PlaceLocation";
}

template<>
struct has_fixed_size<moveit_msgs::msg::PlaceLocation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::PlaceLocation>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__PLACE_LOCATION__TRAITS_HPP_
