// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:msg/ConstraintEvalResult.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__CONSTRAINT_EVAL_RESULT__TRAITS_HPP_
#define MOVEIT_MSGS__MSG__CONSTRAINT_EVAL_RESULT__TRAITS_HPP_

#include "moveit_msgs/msg/constraint_eval_result__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::msg::ConstraintEvalResult>()
{
  return "moveit_msgs::msg::ConstraintEvalResult";
}

template<>
struct has_fixed_size<moveit_msgs::msg::ConstraintEvalResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<moveit_msgs::msg::ConstraintEvalResult>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__MSG__CONSTRAINT_EVAL_RESULT__TRAITS_HPP_
