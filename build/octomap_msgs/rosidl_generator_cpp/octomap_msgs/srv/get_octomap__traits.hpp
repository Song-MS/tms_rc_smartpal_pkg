// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from octomap_msgs:srv/GetOctomap.idl
// generated code does not contain a copyright notice

#ifndef OCTOMAP_MSGS__SRV__GET_OCTOMAP__TRAITS_HPP_
#define OCTOMAP_MSGS__SRV__GET_OCTOMAP__TRAITS_HPP_

#include "octomap_msgs/srv/get_octomap__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_msgs::srv::GetOctomap_Request>()
{
  return "octomap_msgs::srv::GetOctomap_Request";
}

template<>
struct has_fixed_size<octomap_msgs::srv::GetOctomap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<octomap_msgs::srv::GetOctomap_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "octomap_msgs/msg/octomap__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_msgs::srv::GetOctomap_Response>()
{
  return "octomap_msgs::srv::GetOctomap_Response";
}

template<>
struct has_fixed_size<octomap_msgs::srv::GetOctomap_Response>
  : std::integral_constant<bool, has_fixed_size<octomap_msgs::msg::Octomap>::value> {};

template<>
struct has_bounded_size<octomap_msgs::srv::GetOctomap_Response>
  : std::integral_constant<bool, has_bounded_size<octomap_msgs::msg::Octomap>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_msgs::srv::GetOctomap>()
{
  return "octomap_msgs::srv::GetOctomap";
}

template<>
struct has_fixed_size<octomap_msgs::srv::GetOctomap>
  : std::integral_constant<
    bool,
    has_fixed_size<octomap_msgs::srv::GetOctomap_Request>::value &&
    has_fixed_size<octomap_msgs::srv::GetOctomap_Response>::value
  >
{
};

template<>
struct has_bounded_size<octomap_msgs::srv::GetOctomap>
  : std::integral_constant<
    bool,
    has_bounded_size<octomap_msgs::srv::GetOctomap_Request>::value &&
    has_bounded_size<octomap_msgs::srv::GetOctomap_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // OCTOMAP_MSGS__SRV__GET_OCTOMAP__TRAITS_HPP_
