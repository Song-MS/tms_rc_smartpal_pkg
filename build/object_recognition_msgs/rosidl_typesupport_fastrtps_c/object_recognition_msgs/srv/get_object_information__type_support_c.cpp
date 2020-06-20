// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from object_recognition_msgs:srv/GetObjectInformation.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/srv/get_object_information__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "object_recognition_msgs/srv/get_object_information__struct.h"
#include "object_recognition_msgs/srv/get_object_information__functions.h"
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

#include "object_recognition_msgs/msg/object_type__functions.h"  // type

// forward declare type support functions
size_t get_serialized_size_object_recognition_msgs__msg__ObjectType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_object_recognition_msgs__msg__ObjectType(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, ObjectType)();


using _GetObjectInformation_Request__ros_msg_type = object_recognition_msgs__srv__GetObjectInformation_Request;

static bool _GetObjectInformation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetObjectInformation_Request__ros_msg_type * ros_message = static_cast<const _GetObjectInformation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, ObjectType
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->type, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetObjectInformation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetObjectInformation_Request__ros_msg_type * ros_message = static_cast<_GetObjectInformation_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: type
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, ObjectType
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->type))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_recognition_msgs
size_t get_serialized_size_object_recognition_msgs__srv__GetObjectInformation_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetObjectInformation_Request__ros_msg_type * ros_message = static_cast<const _GetObjectInformation_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name type

  current_alignment += get_serialized_size_object_recognition_msgs__msg__ObjectType(
    &(ros_message->type), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetObjectInformation_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_object_recognition_msgs__srv__GetObjectInformation_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_recognition_msgs
size_t max_serialized_size_object_recognition_msgs__srv__GetObjectInformation_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: type
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_object_recognition_msgs__msg__ObjectType(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetObjectInformation_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_object_recognition_msgs__srv__GetObjectInformation_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetObjectInformation_Request = {
  "object_recognition_msgs::srv",
  "GetObjectInformation_Request",
  _GetObjectInformation_Request__cdr_serialize,
  _GetObjectInformation_Request__cdr_deserialize,
  _GetObjectInformation_Request__get_serialized_size,
  _GetObjectInformation_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetObjectInformation_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetObjectInformation_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, srv, GetObjectInformation_Request)() {
  return &_GetObjectInformation_Request__type_support;
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
// #include "object_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "object_recognition_msgs/srv/get_object_information__struct.h"
// already included above
// #include "object_recognition_msgs/srv/get_object_information__functions.h"
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

#include "object_recognition_msgs/msg/object_information__functions.h"  // information

// forward declare type support functions
size_t get_serialized_size_object_recognition_msgs__msg__ObjectInformation(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_object_recognition_msgs__msg__ObjectInformation(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, ObjectInformation)();


using _GetObjectInformation_Response__ros_msg_type = object_recognition_msgs__srv__GetObjectInformation_Response;

static bool _GetObjectInformation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetObjectInformation_Response__ros_msg_type * ros_message = static_cast<const _GetObjectInformation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: information
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, ObjectInformation
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->information, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GetObjectInformation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetObjectInformation_Response__ros_msg_type * ros_message = static_cast<_GetObjectInformation_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: information
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, msg, ObjectInformation
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->information))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_recognition_msgs
size_t get_serialized_size_object_recognition_msgs__srv__GetObjectInformation_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetObjectInformation_Response__ros_msg_type * ros_message = static_cast<const _GetObjectInformation_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name information

  current_alignment += get_serialized_size_object_recognition_msgs__msg__ObjectInformation(
    &(ros_message->information), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GetObjectInformation_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_object_recognition_msgs__srv__GetObjectInformation_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_object_recognition_msgs
size_t max_serialized_size_object_recognition_msgs__srv__GetObjectInformation_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: information
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_object_recognition_msgs__msg__ObjectInformation(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetObjectInformation_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_object_recognition_msgs__srv__GetObjectInformation_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetObjectInformation_Response = {
  "object_recognition_msgs::srv",
  "GetObjectInformation_Response",
  _GetObjectInformation_Response__cdr_serialize,
  _GetObjectInformation_Response__cdr_deserialize,
  _GetObjectInformation_Response__get_serialized_size,
  _GetObjectInformation_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetObjectInformation_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetObjectInformation_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, srv, GetObjectInformation_Response)() {
  return &_GetObjectInformation_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "object_recognition_msgs/srv/get_object_information.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetObjectInformation__callbacks = {
  "object_recognition_msgs::srv",
  "GetObjectInformation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, srv, GetObjectInformation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, srv, GetObjectInformation_Response)(),
};

static rosidl_service_type_support_t GetObjectInformation__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetObjectInformation__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, object_recognition_msgs, srv, GetObjectInformation)() {
  return &GetObjectInformation__handle;
}

#if defined(__cplusplus)
}
#endif
