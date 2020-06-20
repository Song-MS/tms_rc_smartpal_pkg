// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_rc:srv/TurtlebotControl.idl
// generated code does not contain a copyright notice
#include "tms_msg_rc/srv/turtlebot_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_rc/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_rc/srv/turtlebot_control__struct.h"
#include "tms_msg_rc/srv/turtlebot_control__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // arg
#include "rosidl_generator_c/primitives_sequence_functions.h"  // arg

// forward declare type support functions


using _TurtlebotControl_Request__ros_msg_type = tms_msg_rc__srv__TurtlebotControl_Request;

static bool _TurtlebotControl_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TurtlebotControl_Request__ros_msg_type * ros_message = static_cast<const _TurtlebotControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: unit
  {
    cdr << ros_message->unit;
  }

  // Field name: cmd
  {
    cdr << ros_message->cmd;
  }

  // Field name: arg
  {
    size_t size = ros_message->arg.size;
    auto array_ptr = ros_message->arg.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _TurtlebotControl_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TurtlebotControl_Request__ros_msg_type * ros_message = static_cast<_TurtlebotControl_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: unit
  {
    cdr >> ros_message->unit;
  }

  // Field name: cmd
  {
    cdr >> ros_message->cmd;
  }

  // Field name: arg
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->arg.data) {
      rosidl_generator_c__double__Sequence__fini(&ros_message->arg);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->arg, size)) {
      return "failed to create array for field 'arg'";
    }
    auto array_ptr = ros_message->arg.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_rc
size_t get_serialized_size_tms_msg_rc__srv__TurtlebotControl_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurtlebotControl_Request__ros_msg_type * ros_message = static_cast<const _TurtlebotControl_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name unit
  {
    size_t item_size = sizeof(ros_message->unit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cmd
  {
    size_t item_size = sizeof(ros_message->cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arg
  {
    size_t array_size = ros_message->arg.size;
    auto array_ptr = ros_message->arg.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TurtlebotControl_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_rc__srv__TurtlebotControl_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_rc
size_t max_serialized_size_tms_msg_rc__srv__TurtlebotControl_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: unit
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cmd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arg
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TurtlebotControl_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_rc__srv__TurtlebotControl_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TurtlebotControl_Request = {
  "tms_msg_rc::srv",
  "TurtlebotControl_Request",
  _TurtlebotControl_Request__cdr_serialize,
  _TurtlebotControl_Request__cdr_deserialize,
  _TurtlebotControl_Request__get_serialized_size,
  _TurtlebotControl_Request__max_serialized_size
};

static rosidl_message_type_support_t _TurtlebotControl_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TurtlebotControl_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_rc, srv, TurtlebotControl_Request)() {
  return &_TurtlebotControl_Request__type_support;
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
// #include "tms_msg_rc/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tms_msg_rc/srv/turtlebot_control__struct.h"
// already included above
// #include "tms_msg_rc/srv/turtlebot_control__functions.h"
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

// already included above
// #include "rosidl_generator_c/primitives_sequence.h"  // val
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"  // val

// forward declare type support functions


using _TurtlebotControl_Response__ros_msg_type = tms_msg_rc__srv__TurtlebotControl_Response;

static bool _TurtlebotControl_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TurtlebotControl_Response__ros_msg_type * ros_message = static_cast<const _TurtlebotControl_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _TurtlebotControl_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TurtlebotControl_Response__ros_msg_type * ros_message = static_cast<_TurtlebotControl_Response__ros_msg_type *>(untyped_ros_message);
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
      rosidl_generator_c__double__Sequence__fini(&ros_message->val);
    }
    if (!rosidl_generator_c__double__Sequence__init(&ros_message->val, size)) {
      return "failed to create array for field 'val'";
    }
    auto array_ptr = ros_message->val.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_rc
size_t get_serialized_size_tms_msg_rc__srv__TurtlebotControl_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TurtlebotControl_Response__ros_msg_type * ros_message = static_cast<const _TurtlebotControl_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _TurtlebotControl_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_rc__srv__TurtlebotControl_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_rc
size_t max_serialized_size_tms_msg_rc__srv__TurtlebotControl_Response(
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

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: val
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TurtlebotControl_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_rc__srv__TurtlebotControl_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TurtlebotControl_Response = {
  "tms_msg_rc::srv",
  "TurtlebotControl_Response",
  _TurtlebotControl_Response__cdr_serialize,
  _TurtlebotControl_Response__cdr_deserialize,
  _TurtlebotControl_Response__get_serialized_size,
  _TurtlebotControl_Response__max_serialized_size
};

static rosidl_message_type_support_t _TurtlebotControl_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TurtlebotControl_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_rc, srv, TurtlebotControl_Response)() {
  return &_TurtlebotControl_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tms_msg_rc/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_rc/srv/turtlebot_control.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TurtlebotControl__callbacks = {
  "tms_msg_rc::srv",
  "TurtlebotControl",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_rc, srv, TurtlebotControl_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_rc, srv, TurtlebotControl_Response)(),
};

static rosidl_service_type_support_t TurtlebotControl__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TurtlebotControl__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_rc, srv, TurtlebotControl)() {
  return &TurtlebotControl__handle;
}

#if defined(__cplusplus)
}
#endif
