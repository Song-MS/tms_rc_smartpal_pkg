// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_ts:msg/Arg.idl
// generated code does not contain a copyright notice
#include "tms_msg_ts/msg/arg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tms_msg_ts/msg/arg__struct.hpp"

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: arg
  {
    cdr << ros_message.arg;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ts
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_ts::msg::Arg & ros_message)
{
  // Member: arg
  {
    cdr >> ros_message.arg;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ts
get_serialized_size(
  const tms_msg_ts::msg::Arg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: arg
  {
    size_t array_size = ros_message.arg.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.arg[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_ts
max_serialized_size_Arg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: arg
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Arg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_ts::msg::Arg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Arg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_ts::msg::Arg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Arg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_ts::msg::Arg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Arg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Arg(full_bounded, 0);
}

static message_type_support_callbacks_t _Arg__callbacks = {
  "tms_msg_ts::msg",
  "Arg",
  _Arg__cdr_serialize,
  _Arg__cdr_deserialize,
  _Arg__get_serialized_size,
  _Arg__max_serialized_size
};

static rosidl_message_type_support_t _Arg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Arg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tms_msg_ts

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_ts
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_ts::msg::Arg>()
{
  return &tms_msg_ts::msg::typesupport_fastrtps_cpp::_Arg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_ts, msg, Arg)() {
  return &tms_msg_ts::msg::typesupport_fastrtps_cpp::_Arg__handle;
}

#ifdef __cplusplus
}
#endif
