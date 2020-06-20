// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from object_recognition_msgs:msg/RecognizedObjectArray.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/recognized_object_array__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "object_recognition_msgs/msg/recognized_object_array__struct.h"
#include "object_recognition_msgs/msg/recognized_object_array__functions.h"
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

#include "object_recognition_msgs/msg/recognized_object__functions.h"  // objects
#include "rosidl_generator_c/primitives_sequence.h"  // cooccurrence
#include "rosidl_generator_c/primitives_sequence_functions.h"  // cooccurrence
#include "std_msgs/msg/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_object_recognition_msgs__msg__RecognizedObject(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_object_recognition_msgs__msg__RecognizedObject(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, RecognizedObject)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_object_recognition_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_object_recognition_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_object_recognition_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _RecognizedObjectArray__ros_msg_type = object_recognition_msgs__msg__RecognizedObjectArray;

static bool _RecognizedObjectArray__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RecognizedObjectArray__ros_msg_type * ros_message = static_cast<const _RecognizedObjectArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, RecognizedObject
      )()->data);
    size_t size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: cooccurrence
  {
    size_t size = ros_message->cooccurrence.size;
    auto array_ptr = ros_message->cooccurrence.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _RecognizedObjectArray__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RecognizedObjectArray__ros_msg_type * ros_message = static_cast<_RecognizedObjectArray__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: objects
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, RecognizedObject
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objects.data) {
      object_recognition_msgs__msg__RecognizedObject__Sequence__fini(&ros_message->objects);
    }
    if (!object_recognition_msgs__msg__RecognizedObject__Sequence__init(&ros_message->objects, size)) {
      return "failed to create array for field 'objects'";
    }
    auto array_ptr = ros_message->objects.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: cooccurrence
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cooccurrence.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->cooccurrence);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->cooccurrence, size)) {
      return "failed to create array for field 'cooccurrence'";
    }
    auto array_ptr = ros_message->cooccurrence.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_recognition_msgs
size_t get_serialized_size_object_recognition_msgs__msg__RecognizedObjectArray(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RecognizedObjectArray__ros_msg_type * ros_message = static_cast<const _RecognizedObjectArray__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name objects
  {
    size_t array_size = ros_message->objects.size;
    auto array_ptr = ros_message->objects.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_object_recognition_msgs__msg__RecognizedObject(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name cooccurrence
  {
    size_t array_size = ros_message->cooccurrence.size;
    auto array_ptr = ros_message->cooccurrence.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RecognizedObjectArray__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_object_recognition_msgs__msg__RecognizedObjectArray(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_recognition_msgs
size_t max_serialized_size_object_recognition_msgs__msg__RecognizedObjectArray(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        full_bounded, current_alignment);
    }
  }
  // member: objects
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_object_recognition_msgs__msg__RecognizedObject(
        full_bounded, current_alignment);
    }
  }
  // member: cooccurrence
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

static size_t _RecognizedObjectArray__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_object_recognition_msgs__msg__RecognizedObjectArray(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RecognizedObjectArray = {
  "object_recognition_msgs::msg",
  "RecognizedObjectArray",
  _RecognizedObjectArray__cdr_serialize,
  _RecognizedObjectArray__cdr_deserialize,
  _RecognizedObjectArray__get_serialized_size,
  _RecognizedObjectArray__max_serialized_size
};

static rosidl_message_type_support_t _RecognizedObjectArray__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RecognizedObjectArray,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, RecognizedObjectArray)() {
  return &_RecognizedObjectArray__type_support;
}

#if defined(__cplusplus)
}
#endif
