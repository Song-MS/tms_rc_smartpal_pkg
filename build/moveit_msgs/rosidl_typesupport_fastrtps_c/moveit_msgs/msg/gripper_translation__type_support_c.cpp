// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:msg/GripperTranslation.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/gripper_translation__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/msg/gripper_translation__struct.h"
#include "moveit_msgs/msg/gripper_translation__functions.h"
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

#include "geometry_msgs/msg/vector3_stamped__functions.h"  // direction

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_msgs
size_t get_serialized_size_geometry_msgs__msg__Vector3Stamped(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_msgs
size_t max_serialized_size_geometry_msgs__msg__Vector3Stamped(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_moveit_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3Stamped)();


using _GripperTranslation__ros_msg_type = moveit_msgs__msg__GripperTranslation;

static bool _GripperTranslation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GripperTranslation__ros_msg_type * ros_message = static_cast<const _GripperTranslation__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3Stamped
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->direction, cdr))
    {
      return false;
    }
  }

  // Field name: desired_distance
  {
    cdr << ros_message->desired_distance;
  }

  // Field name: min_distance
  {
    cdr << ros_message->min_distance;
  }

  return true;
}

static bool _GripperTranslation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GripperTranslation__ros_msg_type * ros_message = static_cast<_GripperTranslation__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3Stamped
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->direction))
    {
      return false;
    }
  }

  // Field name: desired_distance
  {
    cdr >> ros_message->desired_distance;
  }

  // Field name: min_distance
  {
    cdr >> ros_message->min_distance;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__msg__GripperTranslation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GripperTranslation__ros_msg_type * ros_message = static_cast<const _GripperTranslation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name direction

  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3Stamped(
    &(ros_message->direction), current_alignment);
  // field.name desired_distance
  {
    size_t item_size = sizeof(ros_message->desired_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_distance
  {
    size_t item_size = sizeof(ros_message->min_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GripperTranslation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__msg__GripperTranslation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__msg__GripperTranslation(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: direction
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Vector3Stamped(
        full_bounded, current_alignment);
    }
  }
  // member: desired_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: min_distance
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GripperTranslation__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__msg__GripperTranslation(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GripperTranslation = {
  "moveit_msgs::msg",
  "GripperTranslation",
  _GripperTranslation__cdr_serialize,
  _GripperTranslation__cdr_deserialize,
  _GripperTranslation__get_serialized_size,
  _GripperTranslation__max_serialized_size
};

static rosidl_message_type_support_t _GripperTranslation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GripperTranslation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, GripperTranslation)() {
  return &_GripperTranslation__type_support;
}

#if defined(__cplusplus)
}
#endif
