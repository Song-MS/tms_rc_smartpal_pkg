// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/AllowedCollisionMatrix.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/allowed_collision_matrix__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/msg/allowed_collision_matrix__struct.hpp"

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
namespace moveit_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const moveit_msgs::msg::AllowedCollisionEntry &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::msg::AllowedCollisionEntry &);
size_t get_serialized_size(
  const moveit_msgs::msg::AllowedCollisionEntry &,
  size_t current_alignment);
size_t
max_serialized_size_AllowedCollisionEntry(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace moveit_msgs


namespace moveit_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_serialize(
  const moveit_msgs::msg::AllowedCollisionMatrix & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: entry_names
  {
    cdr << ros_message.entry_names;
  }
  // Member: entry_values
  {
    size_t size = ros_message.entry_values.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.entry_values[i],
        cdr);
    }
  }
  // Member: default_entry_names
  {
    cdr << ros_message.default_entry_names;
  }
  // Member: default_entry_values
  {
    cdr << ros_message.default_entry_values;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::msg::AllowedCollisionMatrix & ros_message)
{
  // Member: entry_names
  {
    cdr >> ros_message.entry_names;
  }

  // Member: entry_values
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.entry_values.resize(size);
    for (size_t i = 0; i < size; i++) {
      moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.entry_values[i]);
    }
  }

  // Member: default_entry_names
  {
    cdr >> ros_message.default_entry_names;
  }

  // Member: default_entry_values
  {
    cdr >> ros_message.default_entry_values;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::msg::AllowedCollisionMatrix & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: entry_names
  {
    size_t array_size = ros_message.entry_names.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.entry_names[index].size() + 1);
    }
  }
  // Member: entry_values
  {
    size_t array_size = ros_message.entry_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.entry_values[index], current_alignment);
    }
  }
  // Member: default_entry_names
  {
    size_t array_size = ros_message.default_entry_names.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (ros_message.default_entry_names[index].size() + 1);
    }
  }
  // Member: default_entry_values
  {
    size_t array_size = ros_message.default_entry_values.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.default_entry_values[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_AllowedCollisionMatrix(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: entry_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: entry_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AllowedCollisionEntry(
        full_bounded, current_alignment);
    }
  }

  // Member: default_entry_names
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: default_entry_values
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AllowedCollisionMatrix__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::AllowedCollisionMatrix *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AllowedCollisionMatrix__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::msg::AllowedCollisionMatrix *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AllowedCollisionMatrix__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::AllowedCollisionMatrix *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AllowedCollisionMatrix__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AllowedCollisionMatrix(full_bounded, 0);
}

static message_type_support_callbacks_t _AllowedCollisionMatrix__callbacks = {
  "moveit_msgs::msg",
  "AllowedCollisionMatrix",
  _AllowedCollisionMatrix__cdr_serialize,
  _AllowedCollisionMatrix__cdr_deserialize,
  _AllowedCollisionMatrix__get_serialized_size,
  _AllowedCollisionMatrix__max_serialized_size
};

static rosidl_message_type_support_t _AllowedCollisionMatrix__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AllowedCollisionMatrix__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace moveit_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<moveit_msgs::msg::AllowedCollisionMatrix>()
{
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_AllowedCollisionMatrix__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, msg, AllowedCollisionMatrix)() {
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_AllowedCollisionMatrix__handle;
}

#ifdef __cplusplus
}
#endif
