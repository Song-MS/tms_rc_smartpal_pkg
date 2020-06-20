// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetpcdinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETPCDINFO__TRAITS_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETPCDINFO__TRAITS_HPP_

#include "tms_msg_db/srv/tmsdbgetpcdinfo__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::Tmsdbgetpcdinfo_Request>()
{
  return "tms_msg_db::srv::Tmsdbgetpcdinfo_Request";
}

template<>
struct has_fixed_size<tms_msg_db::srv::Tmsdbgetpcdinfo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tms_msg_db::srv::Tmsdbgetpcdinfo_Request>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'cloud'
#include "sensor_msgs/msg/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::Tmsdbgetpcdinfo_Response>()
{
  return "tms_msg_db::srv::Tmsdbgetpcdinfo_Response";
}

template<>
struct has_fixed_size<tms_msg_db::srv::Tmsdbgetpcdinfo_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_msg_db::srv::Tmsdbgetpcdinfo_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_msg_db::srv::Tmsdbgetpcdinfo>()
{
  return "tms_msg_db::srv::Tmsdbgetpcdinfo";
}

template<>
struct has_fixed_size<tms_msg_db::srv::Tmsdbgetpcdinfo>
  : std::integral_constant<
    bool,
    has_fixed_size<tms_msg_db::srv::Tmsdbgetpcdinfo_Request>::value &&
    has_fixed_size<tms_msg_db::srv::Tmsdbgetpcdinfo_Response>::value
  >
{
};

template<>
struct has_bounded_size<tms_msg_db::srv::Tmsdbgetpcdinfo>
  : std::integral_constant<
    bool,
    has_bounded_size<tms_msg_db::srv::Tmsdbgetpcdinfo_Request>::value &&
    has_bounded_size<tms_msg_db::srv::Tmsdbgetpcdinfo_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TMS_MSG_DB__SRV__TMSDBGETPCDINFO__TRAITS_HPP_
