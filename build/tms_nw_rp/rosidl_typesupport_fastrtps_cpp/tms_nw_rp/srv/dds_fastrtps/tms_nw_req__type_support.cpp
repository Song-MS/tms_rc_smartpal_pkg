// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tms_nw_rp:srv/TmsNwReq.idl
// generated code does not contain a copyright notice
#include "tms_nw_rp/srv/tms_nw_req__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tms_nw_rp/srv/tms_nw_req__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tms_nw_rp
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_nw_rp
cdr_serialize(
  const tms_nw_rp::srv::TmsNwReq_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: url
  cdr << ros_message.url;
  // Member: service_name
  cdr << ros_message.service_name;
  // Member: service_type
  cdr << ros_message.service_type;
  // Member: task_id
  cdr << ros_message.task_id;
  // Member: robot_id
  cdr << ros_message.robot_id;
  // Member: object_id
  cdr << ros_message.object_id;
  // Member: user_id
  cdr << ros_message.user_id;
  // Member: place_id
  cdr << ros_message.place_id;
  // Member: priority
  cdr << ros_message.priority;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_nw_rp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_nw_rp::srv::TmsNwReq_Request & ros_message)
{
  // Member: url
  cdr >> ros_message.url;

  // Member: service_name
  cdr >> ros_message.service_name;

  // Member: service_type
  cdr >> ros_message.service_type;

  // Member: task_id
  cdr >> ros_message.task_id;

  // Member: robot_id
  cdr >> ros_message.robot_id;

  // Member: object_id
  cdr >> ros_message.object_id;

  // Member: user_id
  cdr >> ros_message.user_id;

  // Member: place_id
  cdr >> ros_message.place_id;

  // Member: priority
  cdr >> ros_message.priority;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_nw_rp
get_serialized_size(
  const tms_nw_rp::srv::TmsNwReq_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: url
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.url.size() + 1);
  // Member: service_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.service_name.size() + 1);
  // Member: service_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.service_type.size() + 1);
  // Member: task_id
  {
    size_t item_size = sizeof(ros_message.task_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robot_id
  {
    size_t item_size = sizeof(ros_message.robot_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: object_id
  {
    size_t item_size = sizeof(ros_message.object_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: user_id
  {
    size_t item_size = sizeof(ros_message.user_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: place_id
  {
    size_t item_size = sizeof(ros_message.place_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: priority
  {
    size_t item_size = sizeof(ros_message.priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_nw_rp
max_serialized_size_TmsNwReq_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: url
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: service_name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: service_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: task_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: robot_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: object_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: user_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: place_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _TmsNwReq_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_nw_rp::srv::TmsNwReq_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TmsNwReq_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_nw_rp::srv::TmsNwReq_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TmsNwReq_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_nw_rp::srv::TmsNwReq_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TmsNwReq_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TmsNwReq_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _TmsNwReq_Request__callbacks = {
  "tms_nw_rp::srv",
  "TmsNwReq_Request",
  _TmsNwReq_Request__cdr_serialize,
  _TmsNwReq_Request__cdr_deserialize,
  _TmsNwReq_Request__get_serialized_size,
  _TmsNwReq_Request__max_serialized_size
};

static rosidl_message_type_support_t _TmsNwReq_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TmsNwReq_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_nw_rp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_nw_rp
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_nw_rp::srv::TmsNwReq_Request>()
{
  return &tms_nw_rp::srv::typesupport_fastrtps_cpp::_TmsNwReq_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_nw_rp, srv, TmsNwReq_Request)() {
  return &tms_nw_rp::srv::typesupport_fastrtps_cpp::_TmsNwReq_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tms_nw_rp
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_nw_rp
cdr_serialize(
  const tms_nw_rp::srv::TmsNwReq_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result
  cdr << ros_message.result;
  // Member: val
  {
    cdr << ros_message.val;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_nw_rp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_nw_rp::srv::TmsNwReq_Response & ros_message)
{
  // Member: result
  cdr >> ros_message.result;

  // Member: val
  {
    cdr >> ros_message.val;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_nw_rp
get_serialized_size(
  const tms_nw_rp::srv::TmsNwReq_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result
  {
    size_t item_size = sizeof(ros_message.result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: val
  {
    size_t array_size = ros_message.val.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.val[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_nw_rp
max_serialized_size_TmsNwReq_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: val
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

static bool _TmsNwReq_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_nw_rp::srv::TmsNwReq_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TmsNwReq_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_nw_rp::srv::TmsNwReq_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TmsNwReq_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_nw_rp::srv::TmsNwReq_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TmsNwReq_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_TmsNwReq_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _TmsNwReq_Response__callbacks = {
  "tms_nw_rp::srv",
  "TmsNwReq_Response",
  _TmsNwReq_Response__cdr_serialize,
  _TmsNwReq_Response__cdr_deserialize,
  _TmsNwReq_Response__get_serialized_size,
  _TmsNwReq_Response__max_serialized_size
};

static rosidl_message_type_support_t _TmsNwReq_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TmsNwReq_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_nw_rp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_nw_rp
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_nw_rp::srv::TmsNwReq_Response>()
{
  return &tms_nw_rp::srv::typesupport_fastrtps_cpp::_TmsNwReq_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_nw_rp, srv, TmsNwReq_Response)() {
  return &tms_nw_rp::srv::typesupport_fastrtps_cpp::_TmsNwReq_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tms_nw_rp
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _TmsNwReq__callbacks = {
  "tms_nw_rp::srv",
  "TmsNwReq",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_nw_rp, srv, TmsNwReq_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_nw_rp, srv, TmsNwReq_Response)(),
};

static rosidl_service_type_support_t _TmsNwReq__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TmsNwReq__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_nw_rp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_nw_rp
const rosidl_service_type_support_t *
get_service_type_support_handle<tms_nw_rp::srv::TmsNwReq>()
{
  return &tms_nw_rp::srv::typesupport_fastrtps_cpp::_TmsNwReq__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_nw_rp, srv, TmsNwReq)() {
  return &tms_nw_rp::srv::typesupport_fastrtps_cpp::_TmsNwReq__handle;
}

#ifdef __cplusplus
}
#endif
