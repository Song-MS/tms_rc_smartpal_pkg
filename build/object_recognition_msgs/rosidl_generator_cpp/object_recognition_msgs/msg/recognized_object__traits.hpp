// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_recognition_msgs:msg/RecognizedObject.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__TRAITS_HPP_
#define OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__TRAITS_HPP_

#include "object_recognition_msgs/msg/recognized_object__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"
// Member 'type'
#include "object_recognition_msgs/msg/object_type__traits.hpp"
// Member 'bounding_mesh'
#include "shape_msgs/msg/mesh__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/pose_with_covariance_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::msg::RecognizedObject>()
{
  return "object_recognition_msgs::msg::RecognizedObject";
}

template<>
struct has_fixed_size<object_recognition_msgs::msg::RecognizedObject>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_recognition_msgs::msg::RecognizedObject>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__TRAITS_HPP_
