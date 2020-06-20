// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_recognition_msgs:msg/TableArray.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__TRAITS_HPP_
#define OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__TRAITS_HPP_

#include "object_recognition_msgs/msg/table_array__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::msg::TableArray>()
{
  return "object_recognition_msgs::msg::TableArray";
}

template<>
struct has_fixed_size<object_recognition_msgs::msg::TableArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_recognition_msgs::msg::TableArray>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__TRAITS_HPP_
