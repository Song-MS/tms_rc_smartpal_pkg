// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_recognition_msgs:srv/GetObjectInformation.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__SRV__GET_OBJECT_INFORMATION__TRAITS_HPP_
#define OBJECT_RECOGNITION_MSGS__SRV__GET_OBJECT_INFORMATION__TRAITS_HPP_

#include "object_recognition_msgs/srv/get_object_information__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'type'
#include "object_recognition_msgs/msg/object_type__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::srv::GetObjectInformation_Request>()
{
  return "object_recognition_msgs::srv::GetObjectInformation_Request";
}

template<>
struct has_fixed_size<object_recognition_msgs::srv::GetObjectInformation_Request>
  : std::integral_constant<bool, has_fixed_size<object_recognition_msgs::msg::ObjectType>::value> {};

template<>
struct has_bounded_size<object_recognition_msgs::srv::GetObjectInformation_Request>
  : std::integral_constant<bool, has_bounded_size<object_recognition_msgs::msg::ObjectType>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'information'
#include "object_recognition_msgs/msg/object_information__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::srv::GetObjectInformation_Response>()
{
  return "object_recognition_msgs::srv::GetObjectInformation_Response";
}

template<>
struct has_fixed_size<object_recognition_msgs::srv::GetObjectInformation_Response>
  : std::integral_constant<bool, has_fixed_size<object_recognition_msgs::msg::ObjectInformation>::value> {};

template<>
struct has_bounded_size<object_recognition_msgs::srv::GetObjectInformation_Response>
  : std::integral_constant<bool, has_bounded_size<object_recognition_msgs::msg::ObjectInformation>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::srv::GetObjectInformation>()
{
  return "object_recognition_msgs::srv::GetObjectInformation";
}

template<>
struct has_fixed_size<object_recognition_msgs::srv::GetObjectInformation>
  : std::integral_constant<
    bool,
    has_fixed_size<object_recognition_msgs::srv::GetObjectInformation_Request>::value &&
    has_fixed_size<object_recognition_msgs::srv::GetObjectInformation_Response>::value
  >
{
};

template<>
struct has_bounded_size<object_recognition_msgs::srv::GetObjectInformation>
  : std::integral_constant<
    bool,
    has_bounded_size<object_recognition_msgs::srv::GetObjectInformation_Request>::value &&
    has_bounded_size<object_recognition_msgs::srv::GetObjectInformation_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_RECOGNITION_MSGS__SRV__GET_OBJECT_INFORMATION__TRAITS_HPP_
