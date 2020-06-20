// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/LinkScale.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/link_scale__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/link_scale__struct.h"
#include "moveit_msgs/msg/link_scale__functions.h"
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

#include "rosidl_generator_c/string.h"  // link_name
#include "rosidl_generator_c/string_functions.h"  // link_name

// forward declare type support functions


using _LinkScale__ros_msg_type = moveit_msgs__msg__LinkScale;

static bool _LinkScale__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LinkScale__ros_msg_type * ros_message = static_cast<const _LinkScale__ros_msg_type *>(untyped_ros_message);
  // Field name: link_name
  {
    const rosidl_generator_c__String * str = &ros_message->link_name;
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

  // Field name: scale
  {
    cdr << ros_message->scale;
  }

  return true;
}

static bool _LinkScale__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LinkScale__ros_msg_type * ros_message = static_cast<_LinkScale__ros_msg_type *>(untyped_ros_message);
  // Field name: link_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link_name.data) {
      rosidl_generator_c__String__init(&ros_message->link_name);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->link_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link_name'\n");
      return false;
    }
  }

  // Field name: scale
  {
    cdr >> ros_message->scale;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__LinkScale(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LinkScale__ros_msg_type * ros_message = static_cast<const _LinkScale__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name link_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link_name.size + 1);
  // field.name scale
  {
    size_t item_size = sizeof(ros_message->scale);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LinkScale__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__LinkScale(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__LinkScale(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: link_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: scale
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _LinkScale__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__msg__LinkScale(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_LinkScale = {
  "moveit_msgs::msg",
  "LinkScale",
  _LinkScale__cdr_serialize,
  _LinkScale__cdr_deserialize,
  _LinkScale__get_serialized_size,
  _LinkScale__max_serialized_size
};

static rosidl_message_type_support_t _LinkScale__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LinkScale,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, LinkScale)() {
  return &_LinkScale__type_support;
}

#if defined(__cplusplus)
}
#endif
