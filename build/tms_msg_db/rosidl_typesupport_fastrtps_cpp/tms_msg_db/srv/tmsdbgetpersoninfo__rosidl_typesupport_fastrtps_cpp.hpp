// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetpersoninfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tms_msg_db/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tms_msg_db/srv/tmsdbgetpersoninfo__struct.hpp"

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

namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_serialize(
  const tms_msg_db::srv::Tmsdbgetpersoninfo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbgetpersoninfo_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbgetpersoninfo_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbgetpersoninfo_Request(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_db

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetpersoninfo_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetpersoninfo__struct.hpp"

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

// already included above
// #include "fastcdr/Cdr.h"

namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_serialize(
  const tms_msg_db::srv::Tmsdbgetpersoninfo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbgetpersoninfo_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbgetpersoninfo_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbgetpersoninfo_Response(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_db

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetpersoninfo_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetpersoninfo)();

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
