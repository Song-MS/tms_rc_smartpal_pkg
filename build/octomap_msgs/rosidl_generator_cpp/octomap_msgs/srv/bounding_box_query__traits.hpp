// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from octomap_msgs:srv/BoundingBoxQuery.idl
// generated code does not contain a copyright notice

#ifndef OCTOMAP_MSGS__SRV__BOUNDING_BOX_QUERY__TRAITS_HPP_
#define OCTOMAP_MSGS__SRV__BOUNDING_BOX_QUERY__TRAITS_HPP_

#include "octomap_msgs/srv/bounding_box_query__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'min'
// Member 'max'
#include "geometry_msgs/msg/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_msgs::srv::BoundingBoxQuery_Request>()
{
  return "octomap_msgs::srv::BoundingBoxQuery_Request";
}

template<>
struct has_fixed_size<octomap_msgs::srv::BoundingBoxQuery_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<octomap_msgs::srv::BoundingBoxQuery_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_msgs::srv::BoundingBoxQuery_Response>()
{
  return "octomap_msgs::srv::BoundingBoxQuery_Response";
}

template<>
struct has_fixed_size<octomap_msgs::srv::BoundingBoxQuery_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<octomap_msgs::srv::BoundingBoxQuery_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<octomap_msgs::srv::BoundingBoxQuery>()
{
  return "octomap_msgs::srv::BoundingBoxQuery";
}

template<>
struct has_fixed_size<octomap_msgs::srv::BoundingBoxQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<octomap_msgs::srv::BoundingBoxQuery_Request>::value &&
    has_fixed_size<octomap_msgs::srv::BoundingBoxQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<octomap_msgs::srv::BoundingBoxQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<octomap_msgs::srv::BoundingBoxQuery_Request>::value &&
    has_bounded_size<octomap_msgs::srv::BoundingBoxQuery_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // OCTOMAP_MSGS__SRV__BOUNDING_BOX_QUERY__TRAITS_HPP_
