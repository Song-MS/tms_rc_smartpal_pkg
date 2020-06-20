// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_ts:srv/TsReq.idl
// generated code does not contain a copyright notice
#include "tms_msg_ts/srv/ts_req__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_ts/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_ts/srv/ts_req__struct.h"
#include "tms_msg_ts/srv/ts_req__functions.h"
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


using _TsReq_Request__ros_msg_type = tms_msg_ts__srv__TsReq_Request;

static bool _TsReq_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TsReq_Request__ros_msg_type * ros_message = static_cast<const _TsReq_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: rostime
  {
    cdr << ros_message->rostime;
  }

  // Field name: task_id
  {
    cdr << ros_message->task_id;
  }

  // Field name: robot_id
  {
    cdr << ros_message->robot_id;
  }

  // Field name: object_id
  {
    cdr << ros_message->object_id;
  }

  // Field name: user_id
  {
    cdr << ros_message->user_id;
  }

  // Field name: place_id
  {
    cdr << ros_message->place_id;
  }

  // Field name: priority
  {
    cdr << ros_message->priority;
  }

  return true;
}

static bool _TsReq_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TsReq_Request__ros_msg_type * ros_message = static_cast<_TsReq_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: rostime
  {
    cdr >> ros_message->rostime;
  }

  // Field name: task_id
  {
    cdr >> ros_message->task_id;
  }

  // Field name: robot_id
  {
    cdr >> ros_message->robot_id;
  }

  // Field name: object_id
  {
    cdr >> ros_message->object_id;
  }

  // Field name: user_id
  {
    cdr >> ros_message->user_id;
  }

  // Field name: place_id
  {
    cdr >> ros_message->place_id;
  }

  // Field name: priority
  {
    cdr >> ros_message->priority;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t get_serialized_size_tms_msg_ts__srv__TsReq_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TsReq_Request__ros_msg_type * ros_message = static_cast<const _TsReq_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rostime
  {
    size_t item_size = sizeof(ros_message->rostime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task_id
  {
    size_t item_size = sizeof(ros_message->task_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_id
  {
    size_t item_size = sizeof(ros_message->robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_id
  {
    size_t item_size = sizeof(ros_message->object_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name user_id
  {
    size_t item_size = sizeof(ros_message->user_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name place_id
  {
    size_t item_size = sizeof(ros_message->place_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name priority
  {
    size_t item_size = sizeof(ros_message->priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TsReq_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_ts__srv__TsReq_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t max_serialized_size_tms_msg_ts__srv__TsReq_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rostime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: task_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: user_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: place_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TsReq_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_ts__srv__TsReq_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TsReq_Request = {
  "tms_msg_ts::srv",
  "TsReq_Request",
  _TsReq_Request__cdr_serialize,
  _TsReq_Request__cdr_deserialize,
  _TsReq_Request__get_serialized_size,
  _TsReq_Request__max_serialized_size
};

static rosidl_message_type_support_t _TsReq_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TsReq_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsReq_Request)() {
  return &_TsReq_Request__type_support;
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
// #include "tms_msg_ts/srv/ts_req__struct.h"
// already included above
// #include "tms_msg_ts/srv/ts_req__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // val
#include "rosidl_generator_c/primitives_sequence_functions.h"  // val

// forward declare type support functions


using _TsReq_Response__ros_msg_type = tms_msg_ts__srv__TsReq_Response;

static bool _TsReq_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TsReq_Response__ros_msg_type * ros_message = static_cast<const _TsReq_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << ros_message->result;
  }

  // Field name: val
  {
    size_t size = ros_message->val.size;
    auto array_ptr = ros_message->val.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _TsReq_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TsReq_Response__ros_msg_type * ros_message = static_cast<_TsReq_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr >> ros_message->result;
  }

  // Field name: val
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->val.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->val);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->val, size)) {
      return "failed to create array for field 'val'";
    }
    auto array_ptr = ros_message->val.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t get_serialized_size_tms_msg_ts__srv__TsReq_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TsReq_Response__ros_msg_type * ros_message = static_cast<const _TsReq_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name val
  {
    size_t array_size = ros_message->val.size;
    auto array_ptr = ros_message->val.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TsReq_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_ts__srv__TsReq_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t max_serialized_size_tms_msg_ts__srv__TsReq_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: val
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

static size_t _TsReq_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_ts__srv__TsReq_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TsReq_Response = {
  "tms_msg_ts::srv",
  "TsReq_Response",
  _TsReq_Response__cdr_serialize,
  _TsReq_Response__cdr_deserialize,
  _TsReq_Response__get_serialized_size,
  _TsReq_Response__max_serialized_size
};

static rosidl_message_type_support_t _TsReq_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TsReq_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsReq_Response)() {
  return &_TsReq_Response__type_support;
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
#include "tms_msg_ts/srv/ts_req.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TsReq__callbacks = {
  "tms_msg_ts::srv",
  "TsReq",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsReq_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsReq_Response)(),
};

static rosidl_service_type_support_t TsReq__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TsReq__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TsReq)() {
  return &TsReq__handle;
}

#if defined(__cplusplus)
}
#endif
