// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:msg/TmsDataStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tms_msg_db/msg/tms_data_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tms_msg_db
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__TmsDataStamped__tmsdata(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tms_msg_db::msg::TmsData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TmsDataStamped__tmsdata(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tms_msg_db::msg::TmsData> *>(untyped_member);
  return &member[index];
}

void * get_function__TmsDataStamped__tmsdata(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tms_msg_db::msg::TmsData> *>(untyped_member);
  return &member[index];
}

void resize_function__TmsDataStamped__tmsdata(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tms_msg_db::msg::TmsData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TmsDataStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::msg::TmsDataStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tmsdata",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tms_msg_db::msg::TmsData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::msg::TmsDataStamped, tmsdata),  // bytes offset in struct
    nullptr,  // default value
    size_function__TmsDataStamped__tmsdata,  // size() function pointer
    get_const_function__TmsDataStamped__tmsdata,  // get_const(index) function pointer
    get_function__TmsDataStamped__tmsdata,  // get(index) function pointer
    resize_function__TmsDataStamped__tmsdata  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TmsDataStamped_message_members = {
  "tms_msg_db::msg",  // message namespace
  "TmsDataStamped",  // message name
  2,  // number of fields
  sizeof(tms_msg_db::msg::TmsDataStamped),
  TmsDataStamped_message_member_array  // message members
};

static const rosidl_message_type_support_t TmsDataStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TmsDataStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tms_msg_db


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_db::msg::TmsDataStamped>()
{
  return &::tms_msg_db::msg::rosidl_typesupport_introspection_cpp::TmsDataStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tms_msg_db, msg, TmsDataStamped)() {
  return &::tms_msg_db::msg::rosidl_typesupport_introspection_cpp::TmsDataStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
