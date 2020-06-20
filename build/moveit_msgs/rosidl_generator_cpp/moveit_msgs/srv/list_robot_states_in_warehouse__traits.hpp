// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/ListRobotStatesInWarehouse.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_

#include "moveit_msgs/srv/list_robot_states_in_warehouse__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::ListRobotStatesInWarehouse>()
{
  return "moveit_msgs::srv::ListRobotStatesInWarehouse";
}

template<>
struct has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>::value &&
    has_fixed_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Request>::value &&
    has_bounded_size<moveit_msgs::srv::ListRobotStatesInWarehouse_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__LIST_ROBOT_STATES_IN_WAREHOUSE__TRAITS_HPP_
