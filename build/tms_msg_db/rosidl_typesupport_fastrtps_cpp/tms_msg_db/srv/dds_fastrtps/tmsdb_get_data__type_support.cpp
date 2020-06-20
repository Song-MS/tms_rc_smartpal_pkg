// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:srv/TmsdbGetData.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdb_get_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tms_msg_db/srv/tmsdb_get_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace tms_msg_db
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tms_msg_db::msg::Tmsdb &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tms_msg_db::msg::Tmsdb &);
size_t get_serialized_size(
  const tms_msg_db::msg::Tmsdb &,
  size_t current_alignment);
size_t
max_serialized_size_Tmsdb(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tms_msg_db


namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_serialize(
  const tms_msg_db::srv::TmsdbGetData_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tmsdb
  tms_msg_db::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tmsdb,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::TmsdbGetData_Request & ros_message)
{
  // Member: tmsdb
  tms_msg_db::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tmsdb);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::TmsdbGetData_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tmsdb

  current_alignment +=
    tms_msg_db::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tmsdb, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_TmsdbGetData_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: tmsdb
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tms_msg_db::msg::typesupport_fastrtps_cpp::max_serialized_size_Tmsdb(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TmsdbGetData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::TmsdbGetData_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TmsdbGetData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::TmsdbGetData_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TmsdbGetData_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::TmsdbGetData_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TmsdbGetData_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TmsdbGetData_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TmsdbGetData_Request__callbacks = {
  "tms_msg_db::srv",
  "TmsdbGetData_Request",
  _TmsdbGetData_Request__cdr_serialize,
  _TmsdbGetData_Request__cdr_deserialize,
  _TmsdbGetData_Request__get_serialized_size,
  _TmsdbGetData_Request__max_serialized_size
};

static rosidl_message_type_support_t _TmsdbGetData_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TmsdbGetData_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_db

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_db::srv::TmsdbGetData_Request>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_TmsdbGetData_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, TmsdbGetData_Request)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_TmsdbGetData_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace tms_msg_db
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const tms_msg_db::msg::Tmsdb &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  tms_msg_db::msg::Tmsdb &);
size_t get_serialized_size(
  const tms_msg_db::msg::Tmsdb &,
  size_t current_alignment);
size_t
max_serialized_size_Tmsdb(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace tms_msg_db


namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_serialize(
  const tms_msg_db::srv::TmsdbGetData_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tmsdb
  {
    size_t size = ros_message.tmsdb.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      tms_msg_db::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.tmsdb[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::TmsdbGetData_Response & ros_message)
{
  // Member: tmsdb
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.tmsdb.resize(size);
    for (size_t i = 0; i < size; i++) {
      tms_msg_db::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.tmsdb[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::TmsdbGetData_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tmsdb
  {
    size_t array_size = ros_message.tmsdb.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tms_msg_db::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.tmsdb[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_TmsdbGetData_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: tmsdb
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        tms_msg_db::msg::typesupport_fastrtps_cpp::max_serialized_size_Tmsdb(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _TmsdbGetData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::TmsdbGetData_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TmsdbGetData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::TmsdbGetData_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TmsdbGetData_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::TmsdbGetData_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TmsdbGetData_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TmsdbGetData_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TmsdbGetData_Response__callbacks = {
  "tms_msg_db::srv",
  "TmsdbGetData_Response",
  _TmsdbGetData_Response__cdr_serialize,
  _TmsdbGetData_Response__cdr_deserialize,
  _TmsdbGetData_Response__get_serialized_size,
  _TmsdbGetData_Response__max_serialized_size
};

static rosidl_message_type_support_t _TmsdbGetData_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TmsdbGetData_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_db

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_db::srv::TmsdbGetData_Response>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_TmsdbGetData_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, TmsdbGetData_Response)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_TmsdbGetData_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TmsdbGetData__callbacks = {
  "tms_msg_db::srv",
  "TmsdbGetData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, TmsdbGetData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, TmsdbGetData_Response)(),
};

static rosidl_service_type_support_t _TmsdbGetData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TmsdbGetData__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_db

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_db
const rosidl_service_type_support_t *
get_service_type_support_handle<tms_msg_db::srv::TmsdbGetData>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_TmsdbGetData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, TmsdbGetData)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_TmsdbGetData__handle;
}

#ifdef __cplusplus
}
#endif
