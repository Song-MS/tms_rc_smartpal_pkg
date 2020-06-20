// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_ts:srv/TmsSaFindObjects.idl
// generated code does not contain a copyright notice
#include "tms_msg_ts/srv/tms_sa_find_objects__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_ts/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_ts/srv/tms_sa_find_objects__struct.h"
#include "tms_msg_ts/srv/tms_sa_find_objects__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // search_furnitures_id
#include "rosidl_generator_c/primitives_sequence_functions.h"  // search_furnitures_id

// forward declare type support functions


using _TmsSaFindObjects_Request__ros_msg_type = tms_msg_ts__srv__TmsSaFindObjects_Request;

static bool _TmsSaFindObjects_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TmsSaFindObjects_Request__ros_msg_type * ros_message = static_cast<const _TmsSaFindObjects_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: search_furnitures_id
  {
    size_t size = ros_message->search_furnitures_id.size;
    auto array_ptr = ros_message->search_furnitures_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _TmsSaFindObjects_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TmsSaFindObjects_Request__ros_msg_type * ros_message = static_cast<_TmsSaFindObjects_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: search_furnitures_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->search_furnitures_id.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->search_furnitures_id);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->search_furnitures_id, size)) {
      return "failed to create array for field 'search_furnitures_id'";
    }
    auto array_ptr = ros_message->search_furnitures_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t get_serialized_size_tms_msg_ts__srv__TmsSaFindObjects_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TmsSaFindObjects_Request__ros_msg_type * ros_message = static_cast<const _TmsSaFindObjects_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name search_furnitures_id
  {
    size_t array_size = ros_message->search_furnitures_id.size;
    auto array_ptr = ros_message->search_furnitures_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TmsSaFindObjects_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_ts__srv__TmsSaFindObjects_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t max_serialized_size_tms_msg_ts__srv__TmsSaFindObjects_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: search_furnitures_id
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

static size_t _TmsSaFindObjects_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_ts__srv__TmsSaFindObjects_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TmsSaFindObjects_Request = {
  "tms_msg_ts::srv",
  "TmsSaFindObjects_Request",
  _TmsSaFindObjects_Request__cdr_serialize,
  _TmsSaFindObjects_Request__cdr_deserialize,
  _TmsSaFindObjects_Request__get_serialized_size,
  _TmsSaFindObjects_Request__max_serialized_size
};

static rosidl_message_type_support_t _TmsSaFindObjects_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TmsSaFindObjects_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TmsSaFindObjects_Request)() {
  return &_TmsSaFindObjects_Request__type_support;
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
// #include "tms_msg_ts/srv/tms_sa_find_objects__struct.h"
// already included above
// #include "tms_msg_ts/srv/tms_sa_find_objects__functions.h"
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
// #include "rosidl_generator_c/primitives_sequence.h"  // furnitures_id, object_id, object_x, object_y, object_z
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"  // furnitures_id, object_id, object_x, object_y, object_z
#include "rosidl_generator_c/string.h"  // message
#include "rosidl_generator_c/string_functions.h"  // message

// forward declare type support functions


using _TmsSaFindObjects_Response__ros_msg_type = tms_msg_ts__srv__TmsSaFindObjects_Response;

static bool _TmsSaFindObjects_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TmsSaFindObjects_Response__ros_msg_type * ros_message = static_cast<const _TmsSaFindObjects_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << ros_message->success;
  }

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

  // Field name: object_id
  {
    size_t size = ros_message->object_id.size;
    auto array_ptr = ros_message->object_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_x
  {
    size_t size = ros_message->object_x.size;
    auto array_ptr = ros_message->object_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_y
  {
    size_t size = ros_message->object_y.size;
    auto array_ptr = ros_message->object_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: object_z
  {
    size_t size = ros_message->object_z.size;
    auto array_ptr = ros_message->object_z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: furnitures_id
  {
    size_t size = ros_message->furnitures_id.size;
    auto array_ptr = ros_message->furnitures_id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _TmsSaFindObjects_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TmsSaFindObjects_Response__ros_msg_type * ros_message = static_cast<_TmsSaFindObjects_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr >> ros_message->success;
  }

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

  // Field name: object_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_id.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->object_id);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->object_id, size)) {
      return "failed to create array for field 'object_id'";
    }
    auto array_ptr = ros_message->object_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_x.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->object_x);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->object_x, size)) {
      return "failed to create array for field 'object_x'";
    }
    auto array_ptr = ros_message->object_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_y.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->object_y);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->object_y, size)) {
      return "failed to create array for field 'object_y'";
    }
    auto array_ptr = ros_message->object_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: object_z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->object_z.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->object_z);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->object_z, size)) {
      return "failed to create array for field 'object_z'";
    }
    auto array_ptr = ros_message->object_z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: furnitures_id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->furnitures_id.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->furnitures_id);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->furnitures_id, size)) {
      return "failed to create array for field 'furnitures_id'";
    }
    auto array_ptr = ros_message->furnitures_id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t get_serialized_size_tms_msg_ts__srv__TmsSaFindObjects_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TmsSaFindObjects_Response__ros_msg_type * ros_message = static_cast<const _TmsSaFindObjects_Response__ros_msg_type *>(untyped_ros_message);
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
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);
  // field.name object_id
  {
    size_t array_size = ros_message->object_id.size;
    auto array_ptr = ros_message->object_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_x
  {
    size_t array_size = ros_message->object_x.size;
    auto array_ptr = ros_message->object_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_y
  {
    size_t array_size = ros_message->object_y.size;
    auto array_ptr = ros_message->object_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name object_z
  {
    size_t array_size = ros_message->object_z.size;
    auto array_ptr = ros_message->object_z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name furnitures_id
  {
    size_t array_size = ros_message->furnitures_id.size;
    auto array_ptr = ros_message->furnitures_id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TmsSaFindObjects_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_ts__srv__TmsSaFindObjects_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_ts
size_t max_serialized_size_tms_msg_ts__srv__TmsSaFindObjects_Response(
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

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
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
  // member: object_id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: object_z
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: furnitures_id
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

static size_t _TmsSaFindObjects_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_ts__srv__TmsSaFindObjects_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_TmsSaFindObjects_Response = {
  "tms_msg_ts::srv",
  "TmsSaFindObjects_Response",
  _TmsSaFindObjects_Response__cdr_serialize,
  _TmsSaFindObjects_Response__cdr_deserialize,
  _TmsSaFindObjects_Response__get_serialized_size,
  _TmsSaFindObjects_Response__max_serialized_size
};

static rosidl_message_type_support_t _TmsSaFindObjects_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TmsSaFindObjects_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TmsSaFindObjects_Response)() {
  return &_TmsSaFindObjects_Response__type_support;
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
#include "tms_msg_ts/srv/tms_sa_find_objects.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TmsSaFindObjects__callbacks = {
  "tms_msg_ts::srv",
  "TmsSaFindObjects",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TmsSaFindObjects_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TmsSaFindObjects_Response)(),
};

static rosidl_service_type_support_t TmsSaFindObjects__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TmsSaFindObjects__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_ts, srv, TmsSaFindObjects)() {
  return &TmsSaFindObjects__handle;
}

#if defined(__cplusplus)
}
#endif
