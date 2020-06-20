// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetPositionIK.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__GET_POSITION_IK__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__GET_POSITION_IK__TRAITS_HPP_

#include "moveit_msgs/srv/get_position_ik__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'ik_request'
#include "moveit_msgs/msg/position_ik_request__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionIK_Request>()
{
  return "moveit_msgs::srv::GetPositionIK_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionIK_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PositionIKRequest>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionIK_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PositionIKRequest>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'solution'
#include "moveit_msgs/msg/robot_state__traits.hpp"
// Member 'error_code'
#include "moveit_msgs/msg/move_it_error_codes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionIK_Response>()
{
  return "moveit_msgs::srv::GetPositionIK_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionIK_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_fixed_size<moveit_msgs::msg::RobotState>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionIK_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::MoveItErrorCodes>::value && has_bounded_size<moveit_msgs::msg::RobotState>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPositionIK>()
{
  return "moveit_msgs::srv::GetPositionIK";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPositionIK>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetPositionIK_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetPositionIK_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPositionIK>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetPositionIK_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetPositionIK_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__GET_POSITION_IK__TRAITS_HPP_
