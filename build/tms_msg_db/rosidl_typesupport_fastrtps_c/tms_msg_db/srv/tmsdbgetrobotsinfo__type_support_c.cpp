// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_db:srv/Tmsdbgetrobotsinfo.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbgetrobotsinfo__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_db/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_db/srv/tmsdbgetrobotsinfo__struct.h"
#include "tms_msg_db/srv/tmsdbgetrobotsinfo__functions.h"
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


using _Tmsdbgetrobotsinfo_Request__ros_msg_type = tms_msg_db__srv__Tmsdbgetrobotsinfo_Request;

static bool _Tmsdbgetrobotsinfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tmsdbgetrobotsinfo_Request__ros_msg_type * ros_message = static_cast<const _Tmsdbgetrobotsinfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robots_id
  {
    cdr << ros_message->robots_id;
  }

  return true;
}

static bool _Tmsdbgetrobotsinfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tmsdbgetrobotsinfo_Request__ros_msg_type * ros_message = static_cast<_Tmsdbgetrobotsinfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robots_id
  {
    cdr >> ros_message->robots_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__Tmsdbgetrobotsinfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tmsdbgetrobotsinfo_Request__ros_msg_type * ros_message = static_cast<const _Tmsdbgetrobotsinfo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robots_id
  {
    size_t item_size = sizeof(ros_message->robots_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tmsdbgetrobotsinfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__Tmsdbgetrobotsinfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__Tmsdbgetrobotsinfo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robots_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Tmsdbgetrobotsinfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__Tmsdbgetrobotsinfo_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tmsdbgetrobotsinfo_Request = {
  "tms_msg_db::srv",
  "Tmsdbgetrobotsinfo_Request",
  _Tmsdbgetrobotsinfo_Request__cdr_serialize,
  _Tmsdbgetrobotsinfo_Request__cdr_deserialize,
  _Tmsdbgetrobotsinfo_Request__get_serialized_size,
  _Tmsdbgetrobotsinfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbgetrobotsinfo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tmsdbgetrobotsinfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotsinfo_Request)() {
  return &_Tmsdbgetrobotsinfo_Request__type_support;
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
// #include "tms_msg_db/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetrobotsinfo__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetrobotsinfo__functions.h"
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


using _Tmsdbgetrobotsinfo_Response__ros_msg_type = tms_msg_db__srv__Tmsdbgetrobotsinfo_Response;

static bool _Tmsdbgetrobotsinfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tmsdbgetrobotsinfo_Response__ros_msg_type * ros_message = static_cast<const _Tmsdbgetrobotsinfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: rostime
  {
    cdr << ros_message->rostime;
  }

  // Field name: robots_x
  {
    cdr << ros_message->robots_x;
  }

  // Field name: robots_y
  {
    cdr << ros_message->robots_y;
  }

  // Field name: robots_z
  {
    cdr << ros_message->robots_z;
  }

  // Field name: robots_theta
  {
    cdr << ros_message->robots_theta;
  }

  // Field name: robots_state
  {
    cdr << ros_message->robots_state;
  }

  // Field name: robots_place
  {
    cdr << ros_message->robots_place;
  }

  return true;
}

static bool _Tmsdbgetrobotsinfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tmsdbgetrobotsinfo_Response__ros_msg_type * ros_message = static_cast<_Tmsdbgetrobotsinfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: rostime
  {
    cdr >> ros_message->rostime;
  }

  // Field name: robots_x
  {
    cdr >> ros_message->robots_x;
  }

  // Field name: robots_y
  {
    cdr >> ros_message->robots_y;
  }

  // Field name: robots_z
  {
    cdr >> ros_message->robots_z;
  }

  // Field name: robots_theta
  {
    cdr >> ros_message->robots_theta;
  }

  // Field name: robots_state
  {
    cdr >> ros_message->robots_state;
  }

  // Field name: robots_place
  {
    cdr >> ros_message->robots_place;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__Tmsdbgetrobotsinfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tmsdbgetrobotsinfo_Response__ros_msg_type * ros_message = static_cast<const _Tmsdbgetrobotsinfo_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name robots_x
  {
    size_t item_size = sizeof(ros_message->robots_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robots_y
  {
    size_t item_size = sizeof(ros_message->robots_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robots_z
  {
    size_t item_size = sizeof(ros_message->robots_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robots_theta
  {
    size_t item_size = sizeof(ros_message->robots_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robots_state
  {
    size_t item_size = sizeof(ros_message->robots_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robots_place
  {
    size_t item_size = sizeof(ros_message->robots_place);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tmsdbgetrobotsinfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__Tmsdbgetrobotsinfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__Tmsdbgetrobotsinfo_Response(
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
  // member: robots_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robots_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robots_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robots_theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robots_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robots_place
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Tmsdbgetrobotsinfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__Tmsdbgetrobotsinfo_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tmsdbgetrobotsinfo_Response = {
  "tms_msg_db::srv",
  "Tmsdbgetrobotsinfo_Response",
  _Tmsdbgetrobotsinfo_Response__cdr_serialize,
  _Tmsdbgetrobotsinfo_Response__cdr_deserialize,
  _Tmsdbgetrobotsinfo_Response__get_serialized_size,
  _Tmsdbgetrobotsinfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbgetrobotsinfo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tmsdbgetrobotsinfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotsinfo_Response)() {
  return &_Tmsdbgetrobotsinfo_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_db/srv/tmsdbgetrobotsinfo.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Tmsdbgetrobotsinfo__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbgetrobotsinfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotsinfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotsinfo_Response)(),
};

static rosidl_service_type_support_t Tmsdbgetrobotsinfo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Tmsdbgetrobotsinfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotsinfo)() {
  return &Tmsdbgetrobotsinfo__handle;
}

#if defined(__cplusplus)
}
#endif
