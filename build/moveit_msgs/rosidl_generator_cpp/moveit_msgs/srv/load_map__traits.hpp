// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__LOAD_MAP__TRAITS_HPP_
#define MOVEIT_MSGS__SRV__LOAD_MAP__TRAITS_HPP_

#include "moveit_msgs/srv/load_map__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::LoadMap_Request>()
{
  return "moveit_msgs::srv::LoadMap_Request";
}

template<>
struct has_fixed_size<moveit_msgs::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::LoadMap_Response>()
{
  return "moveit_msgs::srv::LoadMap_Response";
}

template<>
struct has_fixed_size<moveit_msgs::srv::LoadMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::srv::LoadMap_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::srv::LoadMap>()
{
  return "moveit_msgs::srv::LoadMap";
}

template<>
struct has_fixed_size<moveit_msgs::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::srv::LoadMap_Request>::value &&
    has_fixed_size<moveit_msgs::srv::LoadMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::srv::LoadMap_Request>::value &&
    has_bounded_size<moveit_msgs::srv::LoadMap_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__SRV__LOAD_MAP__TRAITS_HPP_
