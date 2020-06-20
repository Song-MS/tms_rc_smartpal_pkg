// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tms_msg_db:msg/TmsDataStamped.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMS_DATA_STAMPED__TRAITS_HPP_
#define TMS_MSG_DB__MSG__TMS_DATA_STAMPED__TRAITS_HPP_

#include "tms_msg_db/msg/tms_data_stamped__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::msg::TmsDataStamped>()
{
  return "tms_msg_db::msg::TmsDataStamped";
}

template<>
struct has_fixed_size<tms_msg_db::msg::TmsDataStamped>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_msg_db::msg::TmsDataStamped>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // TMS_MSG_DB__MSG__TMS_DATA_STAMPED__TRAITS_HPP_
