// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:srv/TmsdbGetData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tms_msg_db/srv/tmsdb_get_data__struct.hpp"
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

static const ::rosidl_typesupport_introspection_cpp::MessageMember TmsdbGetData_Request_message_member_array[1] = {
  {
    "tmsdb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tms_msg_db::msg::Tmsdb>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::TmsdbGetData_Request, tmsdb),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TmsdbGetData_Request_message_members = {
  "tms_msg_db::srv",  // message namespace
  "TmsdbGetData_Request",  // message name
  1,  // number of fields
  sizeof(tms_msg_db::srv::TmsdbGetData_Request),
  TmsdbGetData_Request_message_member_array  // message members
};

static const rosidl_message_type_support_t TmsdbGetData_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TmsdbGetData_Request_message_members,
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
get_message_type_support_handle<tms_msg_db::srv::TmsdbGetData_Request>()
{
  return &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::TmsdbGetData_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tms_msg_db, srv, TmsdbGetData_Request)() {
  return &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::TmsdbGetData_Request_message_type_support_handle;
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
// #include "tms_msg_db/srv/tmsdb_get_data__struct.hpp"
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

size_t size_function__TmsdbGetData_Response__tmsdb(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<tms_msg_db::msg::Tmsdb> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TmsdbGetData_Response__tmsdb(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<tms_msg_db::msg::Tmsdb> *>(untyped_member);
  return &member[index];
}

void * get_function__TmsdbGetData_Response__tmsdb(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<tms_msg_db::msg::Tmsdb> *>(untyped_member);
  return &member[index];
}

void resize_function__TmsdbGetData_Response__tmsdb(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<tms_msg_db::msg::Tmsdb> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TmsdbGetData_Response_message_member_array[1] = {
  {
    "tmsdb",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<tms_msg_db::msg::Tmsdb>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db::srv::TmsdbGetData_Response, tmsdb),  // bytes offset in struct
    nullptr,  // default value
    size_function__TmsdbGetData_Response__tmsdb,  // size() function pointer
    get_const_function__TmsdbGetData_Response__tmsdb,  // get_const(index) function pointer
    get_function__TmsdbGetData_Response__tmsdb,  // get(index) function pointer
    resize_function__TmsdbGetData_Response__tmsdb  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TmsdbGetData_Response_message_members = {
  "tms_msg_db::srv",  // message namespace
  "TmsdbGetData_Response",  // message name
  1,  // number of fields
  sizeof(tms_msg_db::srv::TmsdbGetData_Response),
  TmsdbGetData_Response_message_member_array  // message members
};

static const rosidl_message_type_support_t TmsdbGetData_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TmsdbGetData_Response_message_members,
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
get_message_type_support_handle<tms_msg_db::srv::TmsdbGetData_Response>()
{
  return &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::TmsdbGetData_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tms_msg_db, srv, TmsdbGetData_Response)() {
  return &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::TmsdbGetData_Response_message_type_support_handle;
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
// #include "tms_msg_db/srv/tmsdb_get_data__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers TmsdbGetData_service_members = {
  "tms_msg_db::srv",  // service namespace
  "TmsdbGetData",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<tms_msg_db::srv::TmsdbGetData>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t TmsdbGetData_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TmsdbGetData_service_members,
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
get_service_type_support_handle<tms_msg_db::srv::TmsdbGetData>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::tms_msg_db::srv::rosidl_typesupport_introspection_cpp::TmsdbGetData_service_type_support_handle;
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
        ::tms_msg_db::srv::TmsdbGetData_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::tms_msg_db::srv::TmsdbGetData_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tms_msg_db, srv, TmsdbGetData)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<tms_msg_db::srv::TmsdbGetData>();
}

#ifdef __cplusplus
}
#endif
