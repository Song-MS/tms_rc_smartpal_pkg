// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tms_msg_ts:srv/TmsSaFindObjects.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__TRAITS_HPP_
#define TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__TRAITS_HPP_

#include "tms_msg_ts/srv/tms_sa_find_objects__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_ts::srv::TmsSaFindObjects_Request>()
{
  return "tms_msg_ts::srv::TmsSaFindObjects_Request";
}

template<>
struct has_fixed_size<tms_msg_ts::srv::TmsSaFindObjects_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_msg_ts::srv::TmsSaFindObjects_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_ts::srv::TmsSaFindObjects_Response>()
{
  return "tms_msg_ts::srv::TmsSaFindObjects_Response";
}

template<>
struct has_fixed_size<tms_msg_ts::srv::TmsSaFindObjects_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_msg_ts::srv::TmsSaFindObjects_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_ts::srv::TmsSaFindObjects>()
{
  return "tms_msg_ts::srv::TmsSaFindObjects";
}

template<>
struct has_fixed_size<tms_msg_ts::srv::TmsSaFindObjects>
  : std::integral_constant<
    bool,
    has_fixed_size<tms_msg_ts::srv::TmsSaFindObjects_Request>::value &&
    has_fixed_size<tms_msg_ts::srv::TmsSaFindObjects_Response>::value
  >
{
};

template<>
struct has_bounded_size<tms_msg_ts::srv::TmsSaFindObjects>
  : std::integral_constant<
    bool,
    has_bounded_size<tms_msg_ts::srv::TmsSaFindObjects_Request>::value &&
    has_bounded_size<tms_msg_ts::srv::TmsSaFindObjects_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__TRAITS_HPP_
