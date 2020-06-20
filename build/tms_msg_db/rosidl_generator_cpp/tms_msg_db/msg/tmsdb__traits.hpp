// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tms_msg_db:msg/Tmsdb.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMSDB__TRAITS_HPP_
#define TMS_MSG_DB__MSG__TMSDB__TRAITS_HPP_

#include "tms_msg_db/msg/tmsdb__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::msg::Tmsdb>()
{
  return "tms_msg_db::msg::Tmsdb";
}

template<>
struct has_fixed_size<tms_msg_db::msg::Tmsdb>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_msg_db::msg::Tmsdb>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // TMS_MSG_DB__MSG__TMSDB__TRAITS_HPP_
