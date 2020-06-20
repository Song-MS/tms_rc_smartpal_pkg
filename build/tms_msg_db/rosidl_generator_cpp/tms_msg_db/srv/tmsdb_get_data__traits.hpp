// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tms_msg_db:srv/TmsdbGetData.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDB_GET_DATA__TRAITS_HPP_
#define TMS_MSG_DB__SRV__TMSDB_GET_DATA__TRAITS_HPP_

#include "tms_msg_db/srv/tmsdb_get_data__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'tmsdb'
#include "tms_msg_db/msg/tmsdb__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::TmsdbGetData_Request>()
{
  return "tms_msg_db::srv::TmsdbGetData_Request";
}

template<>
struct has_fixed_size<tms_msg_db::srv::TmsdbGetData_Request>
  : std::integral_constant<bool, has_fixed_size<tms_msg_db::msg::Tmsdb>::value> {};

template<>
struct has_bounded_size<tms_msg_db::srv::TmsdbGetData_Request>
  : std::integral_constant<bool, has_bounded_size<tms_msg_db::msg::Tmsdb>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::TmsdbGetData_Response>()
{
  return "tms_msg_db::srv::TmsdbGetData_Response";
}

template<>
struct has_fixed_size<tms_msg_db::srv::TmsdbGetData_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_msg_db::srv::TmsdbGetData_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::TmsdbGetData>()
{
  return "tms_msg_db::srv::TmsdbGetData";
}

template<>
struct has_fixed_size<tms_msg_db::srv::TmsdbGetData>
  : std::integral_constant<
    bool,
    has_fixed_size<tms_msg_db::srv::TmsdbGetData_Request>::value &&
    has_fixed_size<tms_msg_db::srv::TmsdbGetData_Response>::value
  >
{
};

template<>
struct has_bounded_size<tms_msg_db::srv::TmsdbGetData>
  : std::integral_constant<
    bool,
    has_bounded_size<tms_msg_db::srv::TmsdbGetData_Request>::value &&
    has_bounded_size<tms_msg_db::srv::TmsdbGetData_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TMS_MSG_DB__SRV__TMSDB_GET_DATA__TRAITS_HPP_
