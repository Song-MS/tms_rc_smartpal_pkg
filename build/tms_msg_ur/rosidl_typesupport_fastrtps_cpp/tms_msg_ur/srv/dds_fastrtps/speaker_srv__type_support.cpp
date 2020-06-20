// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_ur:srv/SpeakerSrv.idl
// generated code does not contain a copyright notice
#include "tms_msg_ur/srv/speaker_srv__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tms_msg_ur/srv/speaker_srv__struct.hpp"

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

namespace tms_msg_ur
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ur
cdr_serialize(
  const tms_msg_ur::srv::SpeakerSrv_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: data
  cdr << ros_message.data;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ur
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_ur::srv::SpeakerSrv_Request & ros_message)
{
  // Member: data
  cdr >> ros_message.data;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ur
get_serialized_size(
  const tms_msg_ur::srv::SpeakerSrv_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.data.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ur
max_serialized_size_SpeakerSrv_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SpeakerSrv_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_ur::srv::SpeakerSrv_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpeakerSrv_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_ur::srv::SpeakerSrv_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpeakerSrv_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_ur::srv::SpeakerSrv_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpeakerSrv_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SpeakerSrv_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _SpeakerSrv_Request__callbacks = {
  "tms_msg_ur::srv",
  "SpeakerSrv_Request",
  _SpeakerSrv_Request__cdr_serialize,
  _SpeakerSrv_Request__cdr_deserialize,
  _SpeakerSrv_Request__get_serialized_size,
  _SpeakerSrv_Request__max_serialized_size
};

static rosidl_message_type_support_t _SpeakerSrv_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpeakerSrv_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_ur

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_ur
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_ur::srv::SpeakerSrv_Request>()
{
  return &tms_msg_ur::srv::typesupport_fastrtps_cpp::_SpeakerSrv_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_ur, srv, SpeakerSrv_Request)() {
  return &tms_msg_ur::srv::typesupport_fastrtps_cpp::_SpeakerSrv_Request__handle;
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

namespace tms_msg_ur
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ur
cdr_serialize(
  const tms_msg_ur::srv::SpeakerSrv_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: sec
  cdr << ros_message.sec;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ur
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_ur::srv::SpeakerSrv_Response & ros_message)
{
  // Member: sec
  cdr >> ros_message.sec;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ur
get_serialized_size(
  const tms_msg_ur::srv::SpeakerSrv_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: sec
  {
    size_t item_size = sizeof(ros_message.sec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ur
max_serialized_size_SpeakerSrv_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: sec
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SpeakerSrv_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_ur::srv::SpeakerSrv_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpeakerSrv_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_ur::srv::SpeakerSrv_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpeakerSrv_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_ur::srv::SpeakerSrv_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpeakerSrv_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SpeakerSrv_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _SpeakerSrv_Response__callbacks = {
  "tms_msg_ur::srv",
  "SpeakerSrv_Response",
  _SpeakerSrv_Response__cdr_serialize,
  _SpeakerSrv_Response__cdr_deserialize,
  _SpeakerSrv_Response__get_serialized_size,
  _SpeakerSrv_Response__max_serialized_size
};

static rosidl_message_type_support_t _SpeakerSrv_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpeakerSrv_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_ur

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_ur
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_ur::srv::SpeakerSrv_Response>()
{
  return &tms_msg_ur::srv::typesupport_fastrtps_cpp::_SpeakerSrv_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_ur, srv, SpeakerSrv_Response)() {
  return &tms_msg_ur::srv::typesupport_fastrtps_cpp::_SpeakerSrv_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tms_msg_ur
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SpeakerSrv__callbacks = {
  "tms_msg_ur::srv",
  "SpeakerSrv",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_ur, srv, SpeakerSrv_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_ur, srv, SpeakerSrv_Response)(),
};

static rosidl_service_type_support_t _SpeakerSrv__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpeakerSrv__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_ur

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_ur
const rosidl_service_type_support_t *
get_service_type_support_handle<tms_msg_ur::srv::SpeakerSrv>()
{
  return &tms_msg_ur::srv::typesupport_fastrtps_cpp::_SpeakerSrv__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_ur, srv, SpeakerSrv)() {
  return &tms_msg_ur::srv::typesupport_fastrtps_cpp::_SpeakerSrv__handle;
}

#ifdef __cplusplus
}
#endif
