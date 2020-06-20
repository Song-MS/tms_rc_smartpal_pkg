// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:msg/TmsdbStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tms_msg_db/msg/tmsdb_stamped__struct.hpp"
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

size_t size_function__TmsdbStamped__tmsdb(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tms_msg_db::msg::Tmsdb> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TmsdbStamped__tmsdb(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tms_msg_db::msg::Tmsdb> *>(untyped_member);
  return &member[index];
}

void * get_function__TmsdbStamped__tmsdb(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tms_msg_db::msg::Tmsdb> *>(untyped_member);
  return &member[index];
}

void resize_function__TmsdbStamped__tmsdb(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tms_msg_db::msg::Tmsdb> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TmsdbStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::msg::TmsdbStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tmsdb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tms_msg_db::msg::Tmsdb>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::msg::TmsdbStamped, tmsdb),  // bytes offset in struct
    nullptr,  // default value
    size_function__TmsdbStamped__tmsdb,  // size() function pointer
    get_const_function__TmsdbStamped__tmsdb,  // get_const(index) function pointer
    get_function__TmsdbStamped__tmsdb,  // get(index) function pointer
    resize_function__TmsdbStamped__tmsdb  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TmsdbStamped_message_members = {
  "tms_msg_db::msg",  // message namespace
  "TmsdbStamped",  // message name
  2,  // number of fields
  sizeof(tms_msg_db::msg::TmsdbStamped),
  TmsdbStamped_message_member_array  // message members
};

static const rosidl_message_type_support_t TmsdbStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TmsdbStamped_message_members,
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
get_message_type_support_handle<tms_msg_db::msg::TmsdbStamped>()
{
  return &::tms_msg_db::msg::rosidl_typesupport_introspection_cpp::TmsdbStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tms_msg_db, msg, TmsdbStamped)() {
  return &::tms_msg_db::msg::rosidl_typesupport_introspection_cpp::TmsdbStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
