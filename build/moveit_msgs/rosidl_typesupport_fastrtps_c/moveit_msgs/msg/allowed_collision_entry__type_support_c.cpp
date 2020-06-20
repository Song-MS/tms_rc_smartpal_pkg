// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/allowed_collision_entry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/allowed_collision_entry__struct.h"
#include "moveit_msgs/msg/allowed_collision_entry__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // enabled
#include "rosidl_generator_c/primitives_sequence_functions.h"  // enabled

// forward declare type support functions


using _AllowedCollisionEntry__ros_msg_type = moveit_msgs__msg__AllowedCollisionEntry;

static bool _AllowedCollisionEntry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AllowedCollisionEntry__ros_msg_type * ros_message = static_cast<const _AllowedCollisionEntry__ros_msg_type *>(untyped_ros_message);
  // Field name: enabled
  {
    size_t size = ros_message->enabled.size;
    auto array_ptr = ros_message->enabled.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _AllowedCollisionEntry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AllowedCollisionEntry__ros_msg_type * ros_message = static_cast<_AllowedCollisionEntry__ros_msg_type *>(untyped_ros_message);
  // Field name: enabled
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->enabled.data) {
      rosidl_generator_c__boolean__Sequence__fini(&ros_message->enabled);
    }
    if (!rosidl_generator_c__boolean__Sequence__init(&ros_message->enabled, size)) {
      return "failed to create array for field 'enabled'";
    }
    auto array_ptr = ros_message->enabled.data;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__AllowedCollisionEntry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AllowedCollisionEntry__ros_msg_type * ros_message = static_cast<const _AllowedCollisionEntry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name enabled
  {
    size_t array_size = ros_message->enabled.size;
    auto array_ptr = ros_message->enabled.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AllowedCollisionEntry__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__AllowedCollisionEntry(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__AllowedCollisionEntry(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: enabled
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AllowedCollisionEntry__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__msg__AllowedCollisionEntry(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AllowedCollisionEntry = {
  "moveit_msgs::msg",
  "AllowedCollisionEntry",
  _AllowedCollisionEntry__cdr_serialize,
  _AllowedCollisionEntry__cdr_deserialize,
  _AllowedCollisionEntry__get_serialized_size,
  _AllowedCollisionEntry__max_serialized_size
};

static rosidl_message_type_support_t _AllowedCollisionEntry__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AllowedCollisionEntry,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, AllowedCollisionEntry)() {
  return &_AllowedCollisionEntry__type_support;
}

#if defined(__cplusplus)
}
#endif
