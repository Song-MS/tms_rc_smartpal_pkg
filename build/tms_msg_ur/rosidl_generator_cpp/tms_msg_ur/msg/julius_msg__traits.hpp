// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tms_msg_ur:msg/JuliusMsg.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_UR__MSG__JULIUS_MSG__TRAITS_HPP_
#define TMS_MSG_UR__MSG__JULIUS_MSG__TRAITS_HPP_

#include "tms_msg_ur/msg/julius_msg__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_ur::msg::JuliusMsg>()
{
  return "tms_msg_ur::msg::JuliusMsg";
}

template<>
struct has_fixed_size<tms_msg_ur::msg::JuliusMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_msg_ur::msg::JuliusMsg>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // TMS_MSG_UR__MSG__JULIUS_MSG__TRAITS_HPP_
