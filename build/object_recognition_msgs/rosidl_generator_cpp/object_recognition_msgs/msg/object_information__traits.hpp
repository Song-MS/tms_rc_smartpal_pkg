// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_recognition_msgs:msg/ObjectInformation.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__OBJECT_INFORMATION__TRAITS_HPP_
#define OBJECT_RECOGNITION_MSGS__MSG__OBJECT_INFORMATION__TRAITS_HPP_

#include "object_recognition_msgs/msg/object_information__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'ground_truth_mesh'
#include "shape_msgs/msg/mesh__traits.hpp"
// Member 'ground_truth_point_cloud'
#include "sensor_msgs/msg/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::msg::ObjectInformation>()
{
  return "object_recognition_msgs::msg::ObjectInformation";
}

template<>
struct has_fixed_size<object_recognition_msgs::msg::ObjectInformation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_recognition_msgs::msg::ObjectInformation>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_RECOGNITION_MSGS__MSG__OBJECT_INFORMATION__TRAITS_HPP_
