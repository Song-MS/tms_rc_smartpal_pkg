// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from moveit_msgs:srv/ApplyPlanningScene.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/apply_planning_scene__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "moveit_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "moveit_msgs/srv/apply_planning_scene__struct.h"
#include "moveit_msgs/srv/apply_planning_scene__functions.h"
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

#include "moveit_msgs/msg/planning_scene__functions.h"  // scene

// forward declare type support functions
size_t get_serialized_size_moveit_msgs__msg__PlanningScene(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_moveit_msgs__msg__PlanningScene(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningScene)();


using _ApplyPlanningScene_Request__ros_msg_type = moveit_msgs__srv__ApplyPlanningScene_Request;

static bool _ApplyPlanningScene_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ApplyPlanningScene_Request__ros_msg_type * ros_message = static_cast<const _ApplyPlanningScene_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: scene
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningScene
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->scene, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ApplyPlanningScene_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ApplyPlanningScene_Request__ros_msg_type * ros_message = static_cast<_ApplyPlanningScene_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: scene
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, msg, PlanningScene
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->scene))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__ApplyPlanningScene_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ApplyPlanningScene_Request__ros_msg_type * ros_message = static_cast<const _ApplyPlanningScene_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name scene

  current_alignment += get_serialized_size_moveit_msgs__msg__PlanningScene(
    &(ros_message->scene), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ApplyPlanningScene_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__ApplyPlanningScene_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__ApplyPlanningScene_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: scene
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_moveit_msgs__msg__PlanningScene(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ApplyPlanningScene_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__srv__ApplyPlanningScene_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ApplyPlanningScene_Request = {
  "moveit_msgs::srv",
  "ApplyPlanningScene_Request",
  _ApplyPlanningScene_Request__cdr_serialize,
  _ApplyPlanningScene_Request__cdr_deserialize,
  _ApplyPlanningScene_Request__get_serialized_size,
  _ApplyPlanningScene_Request__max_serialized_size
};

static rosidl_message_type_support_t _ApplyPlanningScene_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ApplyPlanningScene_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ApplyPlanningScene_Request)() {
  return &_ApplyPlanningScene_Request__type_support;
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
// #include "moveit_msgs/srv/apply_planning_scene__struct.h"
// already included above
// #include "moveit_msgs/srv/apply_planning_scene__functions.h"
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


using _ApplyPlanningScene_Response__ros_msg_type = moveit_msgs__srv__ApplyPlanningScene_Response;

static bool _ApplyPlanningScene_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ApplyPlanningScene_Response__ros_msg_type * ros_message = static_cast<const _ApplyPlanningScene_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ApplyPlanningScene_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ApplyPlanningScene_Response__ros_msg_type * ros_message = static_cast<_ApplyPlanningScene_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t get_serialized_size_moveit_msgs__srv__ApplyPlanningScene_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ApplyPlanningScene_Response__ros_msg_type * ros_message = static_cast<const _ApplyPlanningScene_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ApplyPlanningScene_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_moveit_msgs__srv__ApplyPlanningScene_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_moveit_msgs
size_t max_serialized_size_moveit_msgs__srv__ApplyPlanningScene_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ApplyPlanningScene_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_moveit_msgs__srv__ApplyPlanningScene_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ApplyPlanningScene_Response = {
  "moveit_msgs::srv",
  "ApplyPlanningScene_Response",
  _ApplyPlanningScene_Response__cdr_serialize,
  _ApplyPlanningScene_Response__cdr_deserialize,
  _ApplyPlanningScene_Response__get_serialized_size,
  _ApplyPlanningScene_Response__max_serialized_size
};

static rosidl_message_type_support_t _ApplyPlanningScene_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ApplyPlanningScene_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ApplyPlanningScene_Response)() {
  return &_ApplyPlanningScene_Response__type_support;
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
#include "moveit_msgs/srv/apply_planning_scene.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ApplyPlanningScene__callbacks = {
  "moveit_msgs::srv",
  "ApplyPlanningScene",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ApplyPlanningScene_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ApplyPlanningScene_Response)(),
};

static rosidl_service_type_support_t ApplyPlanningScene__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ApplyPlanningScene__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, moveit_msgs, srv, ApplyPlanningScene)() {
  return &ApplyPlanningScene__handle;
}

#if defined(__cplusplus)
}
#endif
