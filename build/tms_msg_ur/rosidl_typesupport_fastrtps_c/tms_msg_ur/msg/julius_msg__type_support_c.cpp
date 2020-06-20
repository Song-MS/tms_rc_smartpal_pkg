// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_ur:msg/JuliusMsg.idl
// generated code does not contain a copyright notice
#include "tms_msg_ur/msg/julius_msg__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_ur/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_ur/msg/julius_msg__struct.h"
#include "tms_msg_ur/msg/julius_msg__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_generator_c/string.h"  // data
#include "rosidl_generator_c/string_functions.h"  // data

// forward declare type support functions


using _JuliusMsg__ros_msg_type = tms_msg_ur__msg__JuliusMsg;

static bool _JuliusMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JuliusMsg__ros_msg_type * ros_message = static_cast<const _JuliusMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    const rosidl_generator_c__String * str = &ros_message->data;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: value
  {
    cdr << ros_message->value;
  }

  return true;
}

static bool _JuliusMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JuliusMsg__ros_msg_type * ros_message = static_cast<_JuliusMsg__ros_msg_type *>(untyped_ros_message);
  // Field name: data
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->data.data) {
      rosidl_generator_c__String__init(&ros_message->data);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->data,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'data'\n");
      return false;
    }
  }

  // Field name: value
  {
    cdr >> ros_message->value;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ur
size_t get_serialized_size_tms_msg_ur__msg__JuliusMsg(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JuliusMsg__ros_msg_type * ros_message = static_cast<const _JuliusMsg__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name data
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->data.size + 1);
  // field.name value
  {
    size_t item_size = sizeof(ros_message->value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JuliusMsg__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_ur__msg__JuliusMsg(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ur
size_t max_serialized_size_tms_msg_ur__msg__JuliusMsg(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: data
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _JuliusMsg__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_ur__msg__JuliusMsg(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JuliusMsg = {
  "tms_msg_ur::msg",
  "JuliusMsg",
  _JuliusMsg__cdr_serialize,
  _JuliusMsg__cdr_deserialize,
  _JuliusMsg__get_serialized_size,
  _JuliusMsg__max_serialized_size
};

static rosidl_message_type_support_t _JuliusMsg__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JuliusMsg,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ur, msg, JuliusMsg)() {
  return &_JuliusMsg__type_support;
}

#if defined(__cplusplus)
}
#endif
