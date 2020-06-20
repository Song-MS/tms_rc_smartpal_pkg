// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from moveit_msgs:msg/PlanningOptions.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/planning_options__rosidl_typesupport_fastrtps_cpp.hpp"
#include "moveit_msgs/msg/planning_options__struct.hpp"

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
  const moveit_msgs::msg::PlanningScene &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  moveit_msgs::msg::PlanningScene &);
size_t get_serialized_size(
  const moveit_msgs::msg::PlanningScene &,
  size_t current_alignment);
size_t
max_serialized_size_PlanningScene(
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
  const moveit_msgs::msg::PlanningOptions & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: planning_scene_diff
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.planning_scene_diff,
    cdr);
  // Member: plan_only
  cdr << (ros_message.plan_only ? true : false);
  // Member: look_around
  cdr << (ros_message.look_around ? true : false);
  // Member: look_around_attempts
  cdr << ros_message.look_around_attempts;
  // Member: max_safe_execution_cost
  cdr << ros_message.max_safe_execution_cost;
  // Member: replan
  cdr << (ros_message.replan ? true : false);
  // Member: replan_attempts
  cdr << ros_message.replan_attempts;
  // Member: replan_delay
  cdr << ros_message.replan_delay;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  moveit_msgs::msg::PlanningOptions & ros_message)
{
  // Member: planning_scene_diff
  moveit_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.planning_scene_diff);

  // Member: plan_only
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.plan_only = tmp ? true : false;
  }

  // Member: look_around
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.look_around = tmp ? true : false;
  }

  // Member: look_around_attempts
  cdr >> ros_message.look_around_attempts;

  // Member: max_safe_execution_cost
  cdr >> ros_message.max_safe_execution_cost;

  // Member: replan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.replan = tmp ? true : false;
  }

  // Member: replan_attempts
  cdr >> ros_message.replan_attempts;

  // Member: replan_delay
  cdr >> ros_message.replan_delay;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
get_serialized_size(
  const moveit_msgs::msg::PlanningOptions & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: planning_scene_diff

  current_alignment +=
    moveit_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.planning_scene_diff, current_alignment);
  // Member: plan_only
  {
    size_t item_size = sizeof(ros_message.plan_only);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: look_around
  {
    size_t item_size = sizeof(ros_message.look_around);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: look_around_attempts
  {
    size_t item_size = sizeof(ros_message.look_around_attempts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_safe_execution_cost
  {
    size_t item_size = sizeof(ros_message.max_safe_execution_cost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replan
  {
    size_t item_size = sizeof(ros_message.replan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replan_attempts
  {
    size_t item_size = sizeof(ros_message.replan_attempts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replan_delay
  {
    size_t item_size = sizeof(ros_message.replan_delay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_moveit_msgs
max_serialized_size_PlanningOptions(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: planning_scene_diff
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        moveit_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PlanningScene(
        full_bounded, current_alignment);
    }
  }

  // Member: plan_only
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: look_around
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: look_around_attempts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_safe_execution_cost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: replan
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: replan_attempts
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: replan_delay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _PlanningOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::PlanningOptions *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanningOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<moveit_msgs::msg::PlanningOptions *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanningOptions__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const moveit_msgs::msg::PlanningOptions *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanningOptions__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PlanningOptions(full_bounded, 0);
}

static message_type_support_callbacks_t _PlanningOptions__callbacks = {
  "moveit_msgs::msg",
  "PlanningOptions",
  _PlanningOptions__cdr_serialize,
  _PlanningOptions__cdr_deserialize,
  _PlanningOptions__get_serialized_size,
  _PlanningOptions__max_serialized_size
};

static rosidl_message_type_support_t _PlanningOptions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanningOptions__callbacks,
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
get_message_type_support_handle<moveit_msgs::msg::PlanningOptions>()
{
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_PlanningOptions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, moveit_msgs, msg, PlanningOptions)() {
  return &moveit_msgs::msg::typesupport_fastrtps_cpp::_PlanningOptions__handle;
}

#ifdef __cplusplus
}
#endif
