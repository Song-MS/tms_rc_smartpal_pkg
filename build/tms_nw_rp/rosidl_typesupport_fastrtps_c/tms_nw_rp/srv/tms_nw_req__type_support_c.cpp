// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_nw_rp:srv/TmsNwReq.idl
// generated code does not contain a copyright notice
#include "tms_nw_rp/srv/tms_nw_req__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_nw_rp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_nw_rp/srv/tms_nw_req__struct.h"
#include "tms_nw_rp/srv/tms_nw_req__functions.h"
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

#include "rosidl_generator_c/string.h"  // service_name, service_type, url
#include "rosidl_generator_c/string_functions.h"  // service_name, service_type, url

// forward declare type support functions


using _TmsNwReq_Request__ros_msg_type = tms_nw_rp__srv__TmsNwReq_Request;

static bool _TmsNwReq_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TmsNwReq_Request__ros_msg_type * ros_message = static_cast<const _TmsNwReq_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: url
  {
    const rosidl_generator_c__String * str = &ros_message->url;
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

  // Field name: service_name
  {
    const rosidl_generator_c__String * str = &ros_message->service_name;
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

  // Field name: service_type
  {
    const rosidl_generator_c__String * str = &ros_message->service_type;
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

static bool _TmsNwReq_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TmsNwReq_Request__ros_msg_type * ros_message = static_cast<_TmsNwReq_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: url
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->url.data) {
      rosidl_generator_c__String__init(&ros_message->url);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->url,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'url'\n");
      return false;
    }
  }

  // Field name: service_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->service_name.data) {
      rosidl_generator_c__String__init(&ros_message->service_name);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->service_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'service_name'\n");
      return false;
    }
  }

  // Field name: service_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->service_type.data) {
      rosidl_generator_c__String__init(&ros_message->service_type);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->service_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'service_type'\n");
      return false;
    }
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_nw_rp
size_t get_serialized_size_tms_nw_rp__srv__TmsNwReq_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TmsNwReq_Request__ros_msg_type * ros_message = static_cast<const _TmsNwReq_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name url
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->url.size + 1);
  // field.name service_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->service_name.size + 1);
  // field.name service_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->service_type.size + 1);
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

static uint32_t _TmsNwReq_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_nw_rp__srv__TmsNwReq_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_nw_rp
size_t max_serialized_size_tms_nw_rp__srv__TmsNwReq_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: url
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: service_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: service_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
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

static size_t _TmsNwReq_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_nw_rp__srv__TmsNwReq_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TmsNwReq_Request = {
  "tms_nw_rp::srv",
  "TmsNwReq_Request",
  _TmsNwReq_Request__cdr_serialize,
  _TmsNwReq_Request__cdr_deserialize,
  _TmsNwReq_Request__get_serialized_size,
  _TmsNwReq_Request__max_serialized_size
};

static rosidl_message_type_support_t _TmsNwReq_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TmsNwReq_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_nw_rp, srv, TmsNwReq_Request)() {
  return &_TmsNwReq_Request__type_support;
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
// #include "tms_nw_rp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tms_nw_rp/srv/tms_nw_req__struct.h"
// already included above
// #include "tms_nw_rp/srv/tms_nw_req__functions.h"
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


using _TmsNwReq_Response__ros_msg_type = tms_nw_rp__srv__TmsNwReq_Response;

static bool _TmsNwReq_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TmsNwReq_Response__ros_msg_type * ros_message = static_cast<const _TmsNwReq_Response__ros_msg_type *>(untyped_ros_message);
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

static bool _TmsNwReq_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TmsNwReq_Response__ros_msg_type * ros_message = static_cast<_TmsNwReq_Response__ros_msg_type *>(untyped_ros_message);
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_nw_rp
size_t get_serialized_size_tms_nw_rp__srv__TmsNwReq_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TmsNwReq_Response__ros_msg_type * ros_message = static_cast<const _TmsNwReq_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _TmsNwReq_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_nw_rp__srv__TmsNwReq_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_nw_rp
size_t max_serialized_size_tms_nw_rp__srv__TmsNwReq_Response(
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

static size_t _TmsNwReq_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_nw_rp__srv__TmsNwReq_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TmsNwReq_Response = {
  "tms_nw_rp::srv",
  "TmsNwReq_Response",
  _TmsNwReq_Response__cdr_serialize,
  _TmsNwReq_Response__cdr_deserialize,
  _TmsNwReq_Response__get_serialized_size,
  _TmsNwReq_Response__max_serialized_size
};

static rosidl_message_type_support_t _TmsNwReq_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TmsNwReq_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_nw_rp, srv, TmsNwReq_Response)() {
  return &_TmsNwReq_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tms_nw_rp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_nw_rp/srv/tms_nw_req.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TmsNwReq__callbacks = {
  "tms_nw_rp::srv",
  "TmsNwReq",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_nw_rp, srv, TmsNwReq_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_nw_rp, srv, TmsNwReq_Response)(),
};

static rosidl_service_type_support_t TmsNwReq__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TmsNwReq__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_nw_rp, srv, TmsNwReq)() {
  return &TmsNwReq__handle;
}

#if defined(__cplusplus)
}
#endif
