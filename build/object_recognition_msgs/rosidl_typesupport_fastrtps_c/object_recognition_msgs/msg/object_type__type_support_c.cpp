// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from object_recognition_msgs:msg/ObjectType.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/object_type__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "object_recognition_msgs/msg/object_type__struct.h"
#include "object_recognition_msgs/msg/object_type__functions.h"
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

#include "rosidl_generator_c/string.h"  // db, key
#include "rosidl_generator_c/string_functions.h"  // db, key

// forward declare type support functions


using _ObjectType__ros_msg_type = object_recognition_msgs__msg__ObjectType;

static bool _ObjectType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectType__ros_msg_type * ros_message = static_cast<const _ObjectType__ros_msg_type *>(untyped_ros_message);
  // Field name: key
  {
    const rosidl_generator_c__String * str = &ros_message->key;
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

  // Field name: db
  {
    const rosidl_generator_c__String * str = &ros_message->db;
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

  return true;
}

static bool _ObjectType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectType__ros_msg_type * ros_message = static_cast<_ObjectType__ros_msg_type *>(untyped_ros_message);
  // Field name: key
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->key.data) {
      rosidl_generator_c__String__init(&ros_message->key);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->key,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'key'\n");
      return false;
    }
  }

  // Field name: db
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->db.data) {
      rosidl_generator_c__String__init(&ros_message->db);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->db,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'db'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_recognition_msgs
size_t get_serialized_size_object_recognition_msgs__msg__ObjectType(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectType__ros_msg_type * ros_message = static_cast<const _ObjectType__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->key.size + 1);
  // field.name db
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->db.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectType__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_object_recognition_msgs__msg__ObjectType(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_recognition_msgs
size_t max_serialized_size_object_recognition_msgs__msg__ObjectType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: key
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: db
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

static size_t _ObjectType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_object_recognition_msgs__msg__ObjectType(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObjectType = {
  "object_recognition_msgs::msg",
  "ObjectType",
  _ObjectType__cdr_serialize,
  _ObjectType__cdr_deserialize,
  _ObjectType__get_serialized_size,
  _ObjectType__max_serialized_size
};

static rosidl_message_type_support_t _ObjectType__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectType,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, ObjectType)() {
  return &_ObjectType__type_support;
}

#if defined(__cplusplus)
}
#endif
