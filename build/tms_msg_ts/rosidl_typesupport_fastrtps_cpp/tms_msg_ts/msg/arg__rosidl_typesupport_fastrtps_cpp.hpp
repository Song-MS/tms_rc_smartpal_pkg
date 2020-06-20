// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tms_msg_ts:msg/Arg.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__MSG__ARG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TMS_MSG_TS__MSG__ARG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tms_msg_ts/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tms_msg_ts/msg/arg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace tms_msg_ts
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ts
cdr_serialize(
  const tms_msg_ts::msg::Arg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ts
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_ts::msg::Arg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ts
get_serialized_size(
  const tms_msg_ts::msg::Arg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ts
max_serialized_size_Arg(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tms_msg_ts

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ts
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_ts, msg, Arg)();

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_TS__MSG__ARG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
