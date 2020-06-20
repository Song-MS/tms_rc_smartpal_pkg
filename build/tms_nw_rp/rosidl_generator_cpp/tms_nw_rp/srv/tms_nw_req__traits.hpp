// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tms_nw_rp:srv/TmsNwReq.idl
// generated code does not contain a copyright notice

#ifndef TMS_NW_RP__SRV__TMS_NW_REQ__TRAITS_HPP_
#define TMS_NW_RP__SRV__TMS_NW_REQ__TRAITS_HPP_

#include "tms_nw_rp/srv/tms_nw_req__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_nw_rp::srv::TmsNwReq_Request>()
{
  return "tms_nw_rp::srv::TmsNwReq_Request";
}

template<>
struct has_fixed_size<tms_nw_rp::srv::TmsNwReq_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_nw_rp::srv::TmsNwReq_Request>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_nw_rp::srv::TmsNwReq_Response>()
{
  return "tms_nw_rp::srv::TmsNwReq_Response";
}

template<>
struct has_fixed_size<tms_nw_rp::srv::TmsNwReq_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tms_nw_rp::srv::TmsNwReq_Response>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tms_nw_rp::srv::TmsNwReq>()
{
  return "tms_nw_rp::srv::TmsNwReq";
}

template<>
struct has_fixed_size<tms_nw_rp::srv::TmsNwReq>
  : std::integral_constant<
    bool,
    has_fixed_size<tms_nw_rp::srv::TmsNwReq_Request>::value &&
    has_fixed_size<tms_nw_rp::srv::TmsNwReq_Response>::value
  >
{
};

template<>
struct has_bounded_size<tms_nw_rp::srv::TmsNwReq>
  : std::integral_constant<
    bool,
    has_bounded_size<tms_nw_rp::srv::TmsNwReq_Request>::value &&
    has_bounded_size<tms_nw_rp::srv::TmsNwReq_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

#endif  // TMS_NW_RP__SRV__TMS_NW_REQ__TRAITS_HPP_
