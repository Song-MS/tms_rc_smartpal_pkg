// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/GetPlannerParams.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__GET_PLANNER_PARAMS__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__GET_PLANNER_PARAMS__TRAITS_HPP_

#include "moveit_msgs/srv/get_planner_params__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams_Request>()
{
  return "moveit_msgs::srv::GetPlannerParams_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'params'
#include "moveit_msgs/msg/planner_params__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams_Response>()
{
  return "moveit_msgs::srv::GetPlannerParams_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::msg::PlannerParams>::value> {};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::msg::PlannerParams>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::GetPlannerParams>()
{
  return "moveit_msgs::srv::GetPlannerParams";
}

template<>
struct has_fixed_size<moveit_msgs::srv::GetPlannerParams>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::GetPlannerParams_Request>::value &&
    has_fixed_size<moveit_msgs::srv::GetPlannerParams_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::GetPlannerParams>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::GetPlannerParams_Request>::value &&
    has_bounded_size<moveit_msgs::srv::GetPlannerParams_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__GET_PLANNER_PARAMS__TRAITS_HPP_
