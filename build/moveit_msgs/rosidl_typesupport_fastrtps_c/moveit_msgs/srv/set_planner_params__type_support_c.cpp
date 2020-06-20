// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:srv/SetPlannerParams.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/set_planner_params__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/set_planner_params__struct.h"
#include "moveit_msgs/srv/set_planner_params__functions.h"
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

#include "moveit_msgs/msg/planner_params__functions.h"  // params
#include "rosidl_generator_c/string.h"  // group, planner_config
#include "rosidl_generator_c/string_functions.h"  // group, planner_config

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__PlannerParams(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__PlannerParams(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlannerParams)();


using _SetPlannerParams_Request__ros_msg_type = moveit_msgs__srv__SetPlannerParams_Request;

static bool _SetPlannerParams_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPlannerParams_Request__ros_msg_type * ros_message = static_cast<const _SetPlannerParams_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: planner_config
  {
    const rosidl_generator_c__String * str = &ros_message->planner_config;
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

  // Field name: group
  {
    const rosidl_generator_c__String * str = &ros_message->group;
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

  // Field name: params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlannerParams
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params, cdr))
    {
      return false;
    }
  }

  // Field name: replace
  {
    cdr << (ros_message->replace ? true : false);
  }

  return true;
}

static bool _SetPlannerParams_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPlannerParams_Request__ros_msg_type * ros_message = static_cast<_SetPlannerParams_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: planner_config
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->planner_config.data) {
      rosidl_generator_c__String__init(&ros_message->planner_config);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->planner_config,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'planner_config'\n");
      return false;
    }
  }

  // Field name: group
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->group.data) {
      rosidl_generator_c__String__init(&ros_message->group);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->group,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'group'\n");
      return false;
    }
  }

  // Field name: params
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlannerParams
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params))
    {
      return false;
    }
  }

  // Field name: replace
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->replace = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__SetPlannerParams_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPlannerParams_Request__ros_msg_type * ros_message = static_cast<const _SetPlannerParams_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name planner_config
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->planner_config.size + 1);
  // field.name group
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->group.size + 1);
  // field.name params

  current_alignment += get_serialized_size_moveit_msgs__msg__PlannerParams(
    &(ros_message->params), current_alignment);
  // field.name replace
  {
    size_t item_size = sizeof(ros_message->replace);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPlannerParams_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__SetPlannerParams_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__SetPlannerParams_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: planner_config
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: group
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: params
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_moveit_msgs__msg__PlannerParams(
        full_bounded, current_alignment);
    }
  }
  // member: replace
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPlannerParams_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__srv__SetPlannerParams_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetPlannerParams_Request = {
  "moveit_msgs::srv",
  "SetPlannerParams_Request",
  _SetPlannerParams_Request__cdr_serialize,
  _SetPlannerParams_Request__cdr_deserialize,
  _SetPlannerParams_Request__get_serialized_size,
  _SetPlannerParams_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPlannerParams_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPlannerParams_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, SetPlannerParams_Request)() {
  return &_SetPlannerParams_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/set_planner_params__struct.h"
// already included above
// #include "moveit_msgs/srv/set_planner_params__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _SetPlannerParams_Response__ros_msg_type = moveit_msgs__srv__SetPlannerParams_Response;

static bool _SetPlannerParams_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPlannerParams_Response__ros_msg_type * ros_message = static_cast<const _SetPlannerParams_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _SetPlannerParams_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPlannerParams_Response__ros_msg_type * ros_message = static_cast<_SetPlannerParams_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__SetPlannerParams_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPlannerParams_Response__ros_msg_type * ros_message = static_cast<const _SetPlannerParams_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPlannerParams_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__SetPlannerParams_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__SetPlannerParams_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPlannerParams_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__srv__SetPlannerParams_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SetPlannerParams_Response = {
  "moveit_msgs::srv",
  "SetPlannerParams_Response",
  _SetPlannerParams_Response__cdr_serialize,
  _SetPlannerParams_Response__cdr_deserialize,
  _SetPlannerParams_Response__get_serialized_size,
  _SetPlannerParams_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPlannerParams_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPlannerParams_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, SetPlannerParams_Response)() {
  return &_SetPlannerParams_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/set_planner_params.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetPlannerParams__callbacks = {
  "moveit_msgs::srv",
  "SetPlannerParams",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, SetPlannerParams_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, SetPlannerParams_Response)(),
};

static rosidl_service_type_support_t SetPlannerParams__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetPlannerParams__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, SetPlannerParams)() {
  return &SetPlannerParams__handle;
}

#if defined(__cplusplus)
}
#endif
