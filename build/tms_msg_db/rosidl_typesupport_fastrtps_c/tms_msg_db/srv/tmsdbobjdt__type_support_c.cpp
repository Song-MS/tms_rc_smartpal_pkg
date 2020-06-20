// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_db:srv/Tmsdbobjdt.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbobjdt__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_db/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_db/srv/tmsdbobjdt__struct.h"
#include "tms_msg_db/srv/tmsdbobjdt__functions.h"
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


using _Tmsdbobjdt_Request__ros_msg_type = tms_msg_db__srv__Tmsdbobjdt_Request;

static bool _Tmsdbobjdt_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tmsdbobjdt_Request__ros_msg_type * ros_message = static_cast<const _Tmsdbobjdt_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: furniture_id
  {
    cdr << ros_message->furniture_id;
  }

  return true;
}

static bool _Tmsdbobjdt_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tmsdbobjdt_Request__ros_msg_type * ros_message = static_cast<_Tmsdbobjdt_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: furniture_id
  {
    cdr >> ros_message->furniture_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__Tmsdbobjdt_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tmsdbobjdt_Request__ros_msg_type * ros_message = static_cast<const _Tmsdbobjdt_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name furniture_id
  {
    size_t item_size = sizeof(ros_message->furniture_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tmsdbobjdt_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__Tmsdbobjdt_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__Tmsdbobjdt_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: furniture_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Tmsdbobjdt_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__Tmsdbobjdt_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tmsdbobjdt_Request = {
  "tms_msg_db::srv",
  "Tmsdbobjdt_Request",
  _Tmsdbobjdt_Request__cdr_serialize,
  _Tmsdbobjdt_Request__cdr_deserialize,
  _Tmsdbobjdt_Request__get_serialized_size,
  _Tmsdbobjdt_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbobjdt_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tmsdbobjdt_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbobjdt_Request)() {
  return &_Tmsdbobjdt_Request__type_support;
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
// #include "tms_msg_db/srv/tmsdbobjdt__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdbobjdt__functions.h"
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


using _Tmsdbobjdt_Response__ros_msg_type = tms_msg_db__srv__Tmsdbobjdt_Response;

static bool _Tmsdbobjdt_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tmsdbobjdt_Response__ros_msg_type * ros_message = static_cast<const _Tmsdbobjdt_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: furniture_x
  {
    cdr << ros_message->furniture_x;
  }

  // Field name: furniture_y
  {
    cdr << ros_message->furniture_y;
  }

  return true;
}

static bool _Tmsdbobjdt_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tmsdbobjdt_Response__ros_msg_type * ros_message = static_cast<_Tmsdbobjdt_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: furniture_x
  {
    cdr >> ros_message->furniture_x;
  }

  // Field name: furniture_y
  {
    cdr >> ros_message->furniture_y;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__Tmsdbobjdt_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tmsdbobjdt_Response__ros_msg_type * ros_message = static_cast<const _Tmsdbobjdt_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name furniture_x
  {
    size_t item_size = sizeof(ros_message->furniture_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name furniture_y
  {
    size_t item_size = sizeof(ros_message->furniture_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tmsdbobjdt_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__Tmsdbobjdt_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__Tmsdbobjdt_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: furniture_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: furniture_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Tmsdbobjdt_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__Tmsdbobjdt_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tmsdbobjdt_Response = {
  "tms_msg_db::srv",
  "Tmsdbobjdt_Response",
  _Tmsdbobjdt_Response__cdr_serialize,
  _Tmsdbobjdt_Response__cdr_deserialize,
  _Tmsdbobjdt_Response__get_serialized_size,
  _Tmsdbobjdt_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbobjdt_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tmsdbobjdt_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbobjdt_Response)() {
  return &_Tmsdbobjdt_Response__type_support;
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
#include "tms_msg_db/srv/tmsdbobjdt.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Tmsdbobjdt__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbobjdt",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbobjdt_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbobjdt_Response)(),
};

static rosidl_service_type_support_t Tmsdbobjdt__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Tmsdbobjdt__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbobjdt)() {
  return &Tmsdbobjdt__handle;
}

#if defined(__cplusplus)
}
#endif
