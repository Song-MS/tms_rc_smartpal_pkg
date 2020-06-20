// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_db:srv/TmsdbPlanning.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdb_planning__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_db/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_db/srv/tmsdb_planning__struct.h"
#include "tms_msg_db/srv/tmsdb_planning__functions.h"
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


using _TmsdbPlanning_Request__ros_msg_type = tms_msg_db__srv__TmsdbPlanning_Request;

static bool _TmsdbPlanning_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TmsdbPlanning_Request__ros_msg_type * ros_message = static_cast<const _TmsdbPlanning_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robotid
  {
    cdr << ros_message->robotid;
  }

  // Field name: objectid
  {
    cdr << ros_message->objectid;
  }

  return true;
}

static bool _TmsdbPlanning_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TmsdbPlanning_Request__ros_msg_type * ros_message = static_cast<_TmsdbPlanning_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: robotid
  {
    cdr >> ros_message->robotid;
  }

  // Field name: objectid
  {
    cdr >> ros_message->objectid;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__TmsdbPlanning_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TmsdbPlanning_Request__ros_msg_type * ros_message = static_cast<const _TmsdbPlanning_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robotid
  {
    size_t item_size = sizeof(ros_message->robotid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name objectid
  {
    size_t item_size = sizeof(ros_message->objectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TmsdbPlanning_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__TmsdbPlanning_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__TmsdbPlanning_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robotid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: objectid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TmsdbPlanning_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__TmsdbPlanning_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TmsdbPlanning_Request = {
  "tms_msg_db::srv",
  "TmsdbPlanning_Request",
  _TmsdbPlanning_Request__cdr_serialize,
  _TmsdbPlanning_Request__cdr_deserialize,
  _TmsdbPlanning_Request__get_serialized_size,
  _TmsdbPlanning_Request__max_serialized_size
};

static rosidl_message_type_support_t _TmsdbPlanning_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TmsdbPlanning_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbPlanning_Request)() {
  return &_TmsdbPlanning_Request__type_support;
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
// #include "tms_msg_db/srv/tmsdb_planning__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_planning__functions.h"
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


using _TmsdbPlanning_Response__ros_msg_type = tms_msg_db__srv__TmsdbPlanning_Response;

static bool _TmsdbPlanning_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TmsdbPlanning_Response__ros_msg_type * ros_message = static_cast<const _TmsdbPlanning_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_x
  {
    cdr << ros_message->robot_x;
  }

  // Field name: robot_y
  {
    cdr << ros_message->robot_y;
  }

  // Field name: robot_z
  {
    cdr << ros_message->robot_z;
  }

  // Field name: robot_th
  {
    cdr << ros_message->robot_th;
  }

  // Field name: wagon_x
  {
    cdr << ros_message->wagon_x;
  }

  // Field name: wagon_y
  {
    cdr << ros_message->wagon_y;
  }

  // Field name: wagon_z
  {
    cdr << ros_message->wagon_z;
  }

  // Field name: wagon_th
  {
    cdr << ros_message->wagon_th;
  }

  // Field name: object_x
  {
    cdr << ros_message->object_x;
  }

  // Field name: object_y
  {
    cdr << ros_message->object_y;
  }

  // Field name: object_z
  {
    cdr << ros_message->object_z;
  }

  // Field name: object_th
  {
    cdr << ros_message->object_th;
  }

  return true;
}

static bool _TmsdbPlanning_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TmsdbPlanning_Response__ros_msg_type * ros_message = static_cast<_TmsdbPlanning_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: robot_x
  {
    cdr >> ros_message->robot_x;
  }

  // Field name: robot_y
  {
    cdr >> ros_message->robot_y;
  }

  // Field name: robot_z
  {
    cdr >> ros_message->robot_z;
  }

  // Field name: robot_th
  {
    cdr >> ros_message->robot_th;
  }

  // Field name: wagon_x
  {
    cdr >> ros_message->wagon_x;
  }

  // Field name: wagon_y
  {
    cdr >> ros_message->wagon_y;
  }

  // Field name: wagon_z
  {
    cdr >> ros_message->wagon_z;
  }

  // Field name: wagon_th
  {
    cdr >> ros_message->wagon_th;
  }

  // Field name: object_x
  {
    cdr >> ros_message->object_x;
  }

  // Field name: object_y
  {
    cdr >> ros_message->object_y;
  }

  // Field name: object_z
  {
    cdr >> ros_message->object_z;
  }

  // Field name: object_th
  {
    cdr >> ros_message->object_th;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__TmsdbPlanning_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TmsdbPlanning_Response__ros_msg_type * ros_message = static_cast<const _TmsdbPlanning_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name robot_x
  {
    size_t item_size = sizeof(ros_message->robot_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_y
  {
    size_t item_size = sizeof(ros_message->robot_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_z
  {
    size_t item_size = sizeof(ros_message->robot_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_th
  {
    size_t item_size = sizeof(ros_message->robot_th);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wagon_x
  {
    size_t item_size = sizeof(ros_message->wagon_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wagon_y
  {
    size_t item_size = sizeof(ros_message->wagon_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wagon_z
  {
    size_t item_size = sizeof(ros_message->wagon_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wagon_th
  {
    size_t item_size = sizeof(ros_message->wagon_th);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_x
  {
    size_t item_size = sizeof(ros_message->object_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_y
  {
    size_t item_size = sizeof(ros_message->object_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_z
  {
    size_t item_size = sizeof(ros_message->object_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_th
  {
    size_t item_size = sizeof(ros_message->object_th);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TmsdbPlanning_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__TmsdbPlanning_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__TmsdbPlanning_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: robot_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: robot_th
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wagon_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wagon_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wagon_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wagon_th
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_th
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _TmsdbPlanning_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__TmsdbPlanning_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TmsdbPlanning_Response = {
  "tms_msg_db::srv",
  "TmsdbPlanning_Response",
  _TmsdbPlanning_Response__cdr_serialize,
  _TmsdbPlanning_Response__cdr_deserialize,
  _TmsdbPlanning_Response__get_serialized_size,
  _TmsdbPlanning_Response__max_serialized_size
};

static rosidl_message_type_support_t _TmsdbPlanning_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TmsdbPlanning_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbPlanning_Response)() {
  return &_TmsdbPlanning_Response__type_support;
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
#include "tms_msg_db/srv/tmsdb_planning.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TmsdbPlanning__callbacks = {
  "tms_msg_db::srv",
  "TmsdbPlanning",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbPlanning_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbPlanning_Response)(),
};

static rosidl_service_type_support_t TmsdbPlanning__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TmsdbPlanning__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbPlanning)() {
  return &TmsdbPlanning__handle;
}

#if defined(__cplusplus)
}
#endif
