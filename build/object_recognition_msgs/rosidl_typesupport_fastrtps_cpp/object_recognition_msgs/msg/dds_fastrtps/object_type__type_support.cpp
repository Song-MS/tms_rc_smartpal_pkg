// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from object_recognition_msgs:msg/ObjectType.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/object_type__rosidl_typesupport_fastrtps_cpp.hpp"
#include "object_recognition_msgs/msg/object_type__struct.hpp"

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

namespace object_recognition_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_recognition_msgs
cdr_serialize(
  const object_recognition_msgs::msg::ObjectType & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: key
  cdr << ros_message.key;
  // Member: db
  cdr << ros_message.db;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_recognition_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  object_recognition_msgs::msg::ObjectType & ros_message)
{
  // Member: key
  cdr >> ros_message.key;

  // Member: db
  cdr >> ros_message.db;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_recognition_msgs
get_serialized_size(
  const object_recognition_msgs::msg::ObjectType & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.key.size() + 1);
  // Member: db
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.db.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_object_recognition_msgs
max_serialized_size_ObjectType(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: key
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: db
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

static bool _ObjectType__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const object_recognition_msgs::msg::ObjectType *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ObjectType__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<object_recognition_msgs::msg::ObjectType *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ObjectType__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const object_recognition_msgs::msg::ObjectType *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ObjectType__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ObjectType(full_bounded, 0);
}

static message_type_support_callbacks_t _ObjectType__callbacks = {
  "object_recognition_msgs::msg",
  "ObjectType",
  _ObjectType__cdr_serialize,
  _ObjectType__cdr_deserialize,
  _ObjectType__get_serialized_size,
  _ObjectType__max_serialized_size
};

static rosidl_message_type_support_t _ObjectType__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ObjectType__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace object_recognition_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<object_recognition_msgs::msg::ObjectType>()
{
  return &object_recognition_msgs::msg::typesupport_fastrtps_cpp::_ObjectType__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, object_recognition_msgs, msg, ObjectType)() {
  return &object_recognition_msgs::msg::typesupport_fastrtps_cpp::_ObjectType__handle;
}

#ifdef __cplusplus
}
#endif
