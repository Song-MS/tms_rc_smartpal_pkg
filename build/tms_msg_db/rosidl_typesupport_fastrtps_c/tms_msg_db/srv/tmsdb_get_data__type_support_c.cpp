// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_db:srv/TmsdbGetData.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdb_get_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_db/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_db/srv/tmsdb_get_data__struct.h"
#include "tms_msg_db/srv/tmsdb_get_data__functions.h"
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

#include "tms_msg_db/msg/tmsdb__functions.h"  // tmsdb

// forward declare type support functions
size_t get_serialized_size_tms_msg_db__msg__Tmsdb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tms_msg_db__msg__Tmsdb(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, msg, Tmsdb)();


using _TmsdbGetData_Request__ros_msg_type = tms_msg_db__srv__TmsdbGetData_Request;

static bool _TmsdbGetData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TmsdbGetData_Request__ros_msg_type * ros_message = static_cast<const _TmsdbGetData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tmsdb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, msg, Tmsdb
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tmsdb, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _TmsdbGetData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TmsdbGetData_Request__ros_msg_type * ros_message = static_cast<_TmsdbGetData_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: tmsdb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, msg, Tmsdb
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tmsdb))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__TmsdbGetData_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TmsdbGetData_Request__ros_msg_type * ros_message = static_cast<const _TmsdbGetData_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tmsdb

  current_alignment += get_serialized_size_tms_msg_db__msg__Tmsdb(
    &(ros_message->tmsdb), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _TmsdbGetData_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__TmsdbGetData_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__TmsdbGetData_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tmsdb
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tms_msg_db__msg__Tmsdb(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TmsdbGetData_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__TmsdbGetData_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TmsdbGetData_Request = {
  "tms_msg_db::srv",
  "TmsdbGetData_Request",
  _TmsdbGetData_Request__cdr_serialize,
  _TmsdbGetData_Request__cdr_deserialize,
  _TmsdbGetData_Request__get_serialized_size,
  _TmsdbGetData_Request__max_serialized_size
};

static rosidl_message_type_support_t _TmsdbGetData_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TmsdbGetData_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbGetData_Request)() {
  return &_TmsdbGetData_Request__type_support;
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
// #include "tms_msg_db/srv/tmsdb_get_data__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_get_data__functions.h"
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
// #include "tms_msg_db/msg/tmsdb__functions.h"  // tmsdb

// forward declare type support functions
size_t get_serialized_size_tms_msg_db__msg__Tmsdb(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tms_msg_db__msg__Tmsdb(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, msg, Tmsdb)();


using _TmsdbGetData_Response__ros_msg_type = tms_msg_db__srv__TmsdbGetData_Response;

static bool _TmsdbGetData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TmsdbGetData_Response__ros_msg_type * ros_message = static_cast<const _TmsdbGetData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tmsdb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, msg, Tmsdb
      )()->data);
    size_t size = ros_message->tmsdb.size;
    auto array_ptr = ros_message->tmsdb.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _TmsdbGetData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TmsdbGetData_Response__ros_msg_type * ros_message = static_cast<_TmsdbGetData_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: tmsdb
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, msg, Tmsdb
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->tmsdb.data) {
      tms_msg_db__msg__Tmsdb__Sequence__fini(&ros_message->tmsdb);
    }
    if (!tms_msg_db__msg__Tmsdb__Sequence__init(&ros_message->tmsdb, size)) {
      return "failed to create array for field 'tmsdb'";
    }
    auto array_ptr = ros_message->tmsdb.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__TmsdbGetData_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TmsdbGetData_Response__ros_msg_type * ros_message = static_cast<const _TmsdbGetData_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tmsdb
  {
    size_t array_size = ros_message->tmsdb.size;
    auto array_ptr = ros_message->tmsdb.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_tms_msg_db__msg__Tmsdb(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TmsdbGetData_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__TmsdbGetData_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__TmsdbGetData_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: tmsdb
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_tms_msg_db__msg__Tmsdb(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _TmsdbGetData_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__TmsdbGetData_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TmsdbGetData_Response = {
  "tms_msg_db::srv",
  "TmsdbGetData_Response",
  _TmsdbGetData_Response__cdr_serialize,
  _TmsdbGetData_Response__cdr_deserialize,
  _TmsdbGetData_Response__get_serialized_size,
  _TmsdbGetData_Response__max_serialized_size
};

static rosidl_message_type_support_t _TmsdbGetData_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TmsdbGetData_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbGetData_Response)() {
  return &_TmsdbGetData_Response__type_support;
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
#include "tms_msg_db/srv/tmsdb_get_data.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TmsdbGetData__callbacks = {
  "tms_msg_db::srv",
  "TmsdbGetData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbGetData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbGetData_Response)(),
};

static rosidl_service_type_support_t TmsdbGetData__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TmsdbGetData__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, TmsdbGetData)() {
  return &TmsdbGetData__handle;
}

#if defined(__cplusplus)
}
#endif
