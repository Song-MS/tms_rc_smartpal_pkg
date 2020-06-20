// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/AttachedCollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_

#include "moveit_msgs/msg/attached_collision_object__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'object'
#include "moveit_msgs/msg/collision_object__traits.hpp"
// Member 'detach_posture'
#include "trajectory_msgs/msg/joint_trajectory__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::AttachedCollisionObject>()
{
  return "moveit_msgs::msg::AttachedCollisionObject";
}

template<>
struct has_fixed_size<moveit_msgs::msg::AttachedCollisionObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::msg::AttachedCollisionObject>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__ATTACHED_COLLISION_OBJECT__TRAITS_HPP_
