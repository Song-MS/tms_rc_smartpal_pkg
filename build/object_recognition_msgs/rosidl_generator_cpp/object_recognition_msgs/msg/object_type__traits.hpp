// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_recognition_msgs:msg/ObjectType.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__OBJECT_TYPE__TRAITS_HPP_
#define OBJECT_RECOGNITION_MSGS__MSG__OBJECT_TYPE__TRAITS_HPP_

#include "object_recognition_msgs/msg/object_type__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::msg::ObjectType>()
{
  return "object_recognition_msgs::msg::ObjectType";
}

template<>
struct has_fixed_size<object_recognition_msgs::msg::ObjectType>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_recognition_msgs::msg::ObjectType>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_RECOGNITION_MSGS__MSG__OBJECT_TYPE__TRAITS_HPP_
