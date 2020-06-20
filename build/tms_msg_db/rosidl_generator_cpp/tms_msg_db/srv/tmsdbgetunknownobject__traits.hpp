// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetunknownobject.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETUNKNOWNOBJECT__TRAITS_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETUNKNOWNOBJECT__TRAITS_HPP_

#include "tms_msg_db/srv/tmsdbgetunknownobject__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::Tmsdbgetunknownobject_Request>()
{
  return "tms_msg_db::srv::Tmsdbgetunknownobject_Request";
}

template<>
struct has_fixed_size<tms_msg_db::srv::Tmsdbgetunknownobject_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tms_msg_db::srv::Tmsdbgetunknownobject_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::Tmsdbgetunknownobject_Response>()
{
  return "tms_msg_db::srv::Tmsdbgetunknownobject_Response";
}

template<>
struct has_fixed_size<tms_msg_db::srv::Tmsdbgetunknownobject_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tms_msg_db::srv::Tmsdbgetunknownobject_Response>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::Tmsdbgetunknownobject>()
{
  return "tms_msg_db::srv::Tmsdbgetunknownobject";
}

template<>
struct has_fixed_size<tms_msg_db::srv::Tmsdbgetunknownobject>
  : std::integral_constant<
    bool,
    has_fixed_size<tms_msg_db::srv::Tmsdbgetunknownobject_Request>::value &&
    has_fixed_size<tms_msg_db::srv::Tmsdbgetunknownobject_Response>::value
  >
{
};

template<>
struct has_bounded_size<tms_msg_db::srv::Tmsdbgetunknownobject>
  : std::integral_constant<
    bool,
    has_bounded_size<tms_msg_db::srv::Tmsdbgetunknownobject_Request>::value &&
    has_bounded_size<tms_msg_db::srv::Tmsdbgetunknownobject_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TMS_MSG_DB__SRV__TMSDBGETUNKNOWNOBJECT__TRAITS_HPP_
