// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:srv/Tmsdbgetrobotinfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tms_msg_db/srv/tmsdbgetrobotinfo__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tms_msg_db
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__Tmsdbgetrobotinfo_Request__id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Request__id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Request__id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Request__id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Tmsdbgetrobotinfo_Request_message_member_array[1] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Request, id),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Request__id,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Request__id,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Request__id,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Request__id  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Tmsdbgetrobotinfo_Request_message_members = {
  "tms_msg_db::srv",  // message namespace
  "Tmsdbgetrobotinfo_Request",  // message name
  1,  // number of fields
  sizeof(tms_msg_db::srv::Tmsdbgetrobotinfo_Request),
  Tmsdbgetrobotinfo_Request_message_member_array  // message members
};

static const rosidl_message_type_support_t Tmsdbgetrobotinfo_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Tmsdbgetrobotinfo_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tms_msg_db


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_db::srv::Tmsdbgetrobotinfo_Request>()
{
  return &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::Tmsdbgetrobotinfo_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tms_msg_db, srv, Tmsdbgetrobotinfo_Request)() {
  return &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::Tmsdbgetrobotinfo_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_generator_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetrobotinfo__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tms_msg_db
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__Tmsdbgetrobotinfo_Response__rostime(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__rostime(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__rostime(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__rostime(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__z(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__z(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__theta(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__theta(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_waist_low(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_waist_low(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_waist_low(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_waist_low(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_waist_high(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_waist_high(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_waist_high(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_waist_high(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_1(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_1(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_2(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_2(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_3(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_3(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_3(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_3(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_4(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_4(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_4(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_4(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_5(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_5(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_5(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_5(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_6(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_6(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_6(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_6(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_7(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_7(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_7(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_7(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_g(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_g(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_g(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_g(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_1(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_1(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_2(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_2(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_3(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_3(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_3(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_3(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_4(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_4(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_4(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_4(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_5(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_5(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_5(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_5(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_6(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_6(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_6(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_6(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_7(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_7(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_7(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_7(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_g(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_g(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_g(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_g(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__state(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__state(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__state(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__state(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Tmsdbgetrobotinfo_Response__place(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Tmsdbgetrobotinfo_Response__place(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__Tmsdbgetrobotinfo_Response__place(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void resize_function__Tmsdbgetrobotinfo_Response__place(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Tmsdbgetrobotinfo_Response_message_member_array[26] = {
  {
    "rostime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, rostime),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__rostime,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__rostime,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__rostime,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__rostime  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, id),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__id,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__id,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__id,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__id  // resize(index) function pointer
  },
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, x),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__x,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__x,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__x,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__x  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, y),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__y,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__y,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__y,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__y  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, z),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__z,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__z,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__z,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__z  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__theta,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__theta,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__theta,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__theta  // resize(index) function pointer
  },
  {
    "joint_waist_low",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_waist_low),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_waist_low,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_waist_low,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_waist_low,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_waist_low  // resize(index) function pointer
  },
  {
    "joint_waist_high",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_waist_high),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_waist_high,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_waist_high,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_waist_high,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_waist_high  // resize(index) function pointer
  },
  {
    "joint_arm_right_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_right_1),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_1,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_1,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_1,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_1  // resize(index) function pointer
  },
  {
    "joint_arm_right_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_right_2),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_2,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_2,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_2,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_2  // resize(index) function pointer
  },
  {
    "joint_arm_right_3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_right_3),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_3,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_3,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_3,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_3  // resize(index) function pointer
  },
  {
    "joint_arm_right_4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_right_4),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_4,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_4,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_4,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_4  // resize(index) function pointer
  },
  {
    "joint_arm_right_5",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_right_5),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_5,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_5,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_5,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_5  // resize(index) function pointer
  },
  {
    "joint_arm_right_6",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_right_6),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_6,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_6,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_6,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_6  // resize(index) function pointer
  },
  {
    "joint_arm_right_7",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_right_7),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_7,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_7,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_7,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_7  // resize(index) function pointer
  },
  {
    "joint_arm_right_g",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_right_g),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_right_g,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_right_g,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_right_g,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_right_g  // resize(index) function pointer
  },
  {
    "joint_arm_left_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_left_1),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_1,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_1,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_1,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_1  // resize(index) function pointer
  },
  {
    "joint_arm_left_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_left_2),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_2,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_2,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_2,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_2  // resize(index) function pointer
  },
  {
    "joint_arm_left_3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_left_3),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_3,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_3,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_3,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_3  // resize(index) function pointer
  },
  {
    "joint_arm_left_4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_left_4),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_4,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_4,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_4,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_4  // resize(index) function pointer
  },
  {
    "joint_arm_left_5",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_left_5),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_5,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_5,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_5,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_5  // resize(index) function pointer
  },
  {
    "joint_arm_left_6",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_left_6),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_6,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_6,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_6,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_6  // resize(index) function pointer
  },
  {
    "joint_arm_left_7",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_left_7),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_7,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_7,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_7,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_7  // resize(index) function pointer
  },
  {
    "joint_arm_left_g",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, joint_arm_left_g),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__joint_arm_left_g,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__joint_arm_left_g,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__joint_arm_left_g,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__joint_arm_left_g  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, state),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__state,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__state,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__state,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__state  // resize(index) function pointer
  },
  {
    "place",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response, place),  // bytes offset in struct
    nullptr,  // default value
    size_function__Tmsdbgetrobotinfo_Response__place,  // size() function pointer
    get_const_function__Tmsdbgetrobotinfo_Response__place,  // get_const(index) function pointer
    get_function__Tmsdbgetrobotinfo_Response__place,  // get(index) function pointer
    resize_function__Tmsdbgetrobotinfo_Response__place  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Tmsdbgetrobotinfo_Response_message_members = {
  "tms_msg_db::srv",  // message namespace
  "Tmsdbgetrobotinfo_Response",  // message name
  26,  // number of fields
  sizeof(tms_msg_db::srv::Tmsdbgetrobotinfo_Response),
  Tmsdbgetrobotinfo_Response_message_member_array  // message members
};

static const rosidl_message_type_support_t Tmsdbgetrobotinfo_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Tmsdbgetrobotinfo_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tms_msg_db


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_db::srv::Tmsdbgetrobotinfo_Response>()
{
  return &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::Tmsdbgetrobotinfo_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tms_msg_db, srv, Tmsdbgetrobotinfo_Response)() {
  return &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::Tmsdbgetrobotinfo_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetrobotinfo__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace tms_msg_db
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers Tmsdbgetrobotinfo_service_members = {
  "tms_msg_db::srv",  // service namespace
  "Tmsdbgetrobotinfo",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tms_msg_db::srv::Tmsdbgetrobotinfo>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t Tmsdbgetrobotinfo_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Tmsdbgetrobotinfo_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace tms_msg_db


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<tms_msg_db::srv::Tmsdbgetrobotinfo>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::Tmsdbgetrobotinfo_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tms_msg_db::srv::Tmsdbgetrobotinfo_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tms_msg_db::srv::Tmsdbgetrobotinfo_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tms_msg_db, srv, Tmsdbgetrobotinfo)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tms_msg_db::srv::Tmsdbgetrobotinfo>();
}

#ifdef __cplusplus
}
#endif
