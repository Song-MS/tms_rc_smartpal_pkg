// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_ts:srv/TsDoTask.idl
// generated code does not contain a copyright notice
#include "tms_msg_ts/srv/ts_do_task__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_ts/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_ts/srv/ts_do_task__struct.h"
#include "tms_msg_ts/srv/ts_do_task__functions.h"
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


// forward declare type support functions


using _TsDoTask_Request__ros_msg_type = tms_msg_ts__srv__TsDoTask_Request;

static bool _TsDoTask_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TsDoTask_Request__ros_msg_type * ros_message = static_cast<const _TsDoTask_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _TsDoTask_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TsDoTask_Request__ros_msg_type * ros_message = static_cast<_TsDoTask_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t get_serialized_size_tms_msg_ts__srv__TsDoTask_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TsDoTask_Request__ros_msg_type * ros_message = static_cast<const _TsDoTask_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _TsDoTask_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_ts__srv__TsDoTask_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t max_serialized_size_tms_msg_ts__srv__TsDoTask_Request(
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

static size_t _TsDoTask_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_ts__srv__TsDoTask_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TsDoTask_Request = {
  "tms_msg_ts::srv",
  "TsDoTask_Request",
  _TsDoTask_Request__cdr_serialize,
  _TsDoTask_Request__cdr_deserialize,
  _TsDoTask_Request__get_serialized_size,
  _TsDoTask_Request__max_serialized_size
};

static rosidl_message_type_support_t _TsDoTask_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TsDoTask_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsDoTask_Request)() {
  return &_TsDoTask_Request__type_support;
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
// #include "tms_msg_ts/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tms_msg_ts/srv/ts_do_task__struct.h"
// already included above
// #include "tms_msg_ts/srv/ts_do_task__functions.h"
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

#include "rosidl_generator_c/string.h"  // message
#include "rosidl_generator_c/string_functions.h"  // message

// forward declare type support functions


using _TsDoTask_Response__ros_msg_type = tms_msg_ts__srv__TsDoTask_Response;

static bool _TsDoTask_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TsDoTask_Response__ros_msg_type * ros_message = static_cast<const _TsDoTask_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: message
  {
    const rosidl_generator_c__String * str = &ros_message->message;
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

static bool _TsDoTask_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TsDoTask_Response__ros_msg_type * ros_message = static_cast<_TsDoTask_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_generator_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t get_serialized_size_tms_msg_ts__srv__TsDoTask_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TsDoTask_Response__ros_msg_type * ros_message = static_cast<const _TsDoTask_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _TsDoTask_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_ts__srv__TsDoTask_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t max_serialized_size_tms_msg_ts__srv__TsDoTask_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: message
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

static size_t _TsDoTask_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_ts__srv__TsDoTask_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TsDoTask_Response = {
  "tms_msg_ts::srv",
  "TsDoTask_Response",
  _TsDoTask_Response__cdr_serialize,
  _TsDoTask_Response__cdr_deserialize,
  _TsDoTask_Response__get_serialized_size,
  _TsDoTask_Response__max_serialized_size
};

static rosidl_message_type_support_t _TsDoTask_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TsDoTask_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsDoTask_Response)() {
  return &_TsDoTask_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tms_msg_ts/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_ts/srv/ts_do_task.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TsDoTask__callbacks = {
  "tms_msg_ts::srv",
  "TsDoTask",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsDoTask_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsDoTask_Response)(),
};

static rosidl_service_type_support_t TsDoTask__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TsDoTask__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsDoTask)() {
  return &TsDoTask__handle;
}

#if defined(__cplusplus)
}
#endif
