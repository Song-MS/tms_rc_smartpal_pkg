// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from object_recognition_msgs:msg/TableArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "object_recognition_msgs/msg/table_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace object_recognition_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__TableArray__tables(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<object_recognition_msgs::msg::Table> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TableArray__tables(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<object_recognition_msgs::msg::Table> *>(untyped_member);
  return &member[index];
}

void * get_function__TableArray__tables(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<object_recognition_msgs::msg::Table> *>(untyped_member);
  return &member[index];
}

void resize_function__TableArray__tables(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<object_recognition_msgs::msg::Table> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TableArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs::msg::TableArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tables",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<object_recognition_msgs::msg::Table>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs::msg::TableArray, tables),  // bytes offset in struct
    nullptr,  // default value
    size_function__TableArray__tables,  // size() function pointer
    get_const_function__TableArray__tables,  // get_const(index) function pointer
    get_function__TableArray__tables,  // get(index) function pointer
    resize_function__TableArray__tables  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TableArray_message_members = {
  "object_recognition_msgs::msg",  // message namespace
  "TableArray",  // message name
  2,  // number of fields
  sizeof(object_recognition_msgs::msg::TableArray),
  TableArray_message_member_array  // message members
};

static const rosidl_message_type_support_t TableArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TableArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace object_recognition_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<object_recognition_msgs::msg::TableArray>()
{
  return &::object_recognition_msgs::msg::rosidl_typesupport_introspection_cpp::TableArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, object_recognition_msgs, msg, TableArray)() {
  return &::object_recognition_msgs::msg::rosidl_typesupport_introspection_cpp::TableArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
