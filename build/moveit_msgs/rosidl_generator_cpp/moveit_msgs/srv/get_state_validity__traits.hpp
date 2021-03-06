// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__GET_STATE_VALIDITY__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__GET_STATE_VALIDITY__TRAITS_HPP_

#include "moveit_msgs/srv/get_state_validity__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'robot_state'
#include "moveit_msgs/msg/robot_state__traits.hpp"
// Member 'constraints'
#include "moveit_msgs/msg/constraints__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetStateValidity_Request>()
{
  return "moveit_msgs::srv::GetStateValidity_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetStateValidity_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetStateValidity_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetStateValidity_Response>()
{
  return "moveit_msgs::srv::GetStateValidity_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetStateValidity_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetStateValidity_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetStateValidity>()
{
  return "moveit_msgs::srv::GetStateValidity";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetStateValidity>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetStateValidity_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetStateValidity_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetStateValidity>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetStateValidity_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetStateValidity_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__GET_STATE_VALIDITY__TRAITS_HPP_
