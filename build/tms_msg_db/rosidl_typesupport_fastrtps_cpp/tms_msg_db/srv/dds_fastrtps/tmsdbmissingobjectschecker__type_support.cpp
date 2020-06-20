// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:srv/Tmsdbmissingobjectschecker.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbmissingobjectschecker__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tms_msg_db/srv/tmsdbmissingobjectschecker__struct.hpp"

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

namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_serialize(
  const tms_msg_db::srv::Tmsdbmissingobjectschecker_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: objects_id
  {
    cdr << ros_message.objects_id;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbmissingobjectschecker_Request & ros_message)
{
  // Member: objects_id
  {
    cdr >> ros_message.objects_id;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbmissingobjectschecker_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: objects_id
  {
    size_t array_size = ros_message.objects_id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.objects_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbmissingobjectschecker_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: objects_id
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

static bool _Tmsdbmissingobjectschecker_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbmissingobjectschecker_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tmsdbmissingobjectschecker_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tmsdbmissingobjectschecker_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbmissingobjectschecker_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tmsdbmissingobjectschecker_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tmsdbmissingobjectschecker_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Tmsdbmissingobjectschecker_Request__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbmissingobjectschecker_Request",
  _Tmsdbmissingobjectschecker_Request__cdr_serialize,
  _Tmsdbmissingobjectschecker_Request__cdr_deserialize,
  _Tmsdbmissingobjectschecker_Request__get_serialized_size,
  _Tmsdbmissingobjectschecker_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbmissingobjectschecker_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbmissingobjectschecker_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_db

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbmissingobjectschecker_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbmissingobjectschecker_Request)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbmissingobjectschecker_Request__handle;
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

namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_serialize(
  const tms_msg_db::srv::Tmsdbmissingobjectschecker_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: missing_objects_id
  {
    cdr << ros_message.missing_objects_id;
  }
  // Member: missing_objects_time
  {
    cdr << ros_message.missing_objects_time;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbmissingobjectschecker_Response & ros_message)
{
  // Member: missing_objects_id
  {
    cdr >> ros_message.missing_objects_id;
  }

  // Member: missing_objects_time
  {
    cdr >> ros_message.missing_objects_time;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbmissingobjectschecker_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: missing_objects_id
  {
    size_t array_size = ros_message.missing_objects_id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.missing_objects_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: missing_objects_time
  {
    size_t array_size = ros_message.missing_objects_time.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.missing_objects_time[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbmissingobjectschecker_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: missing_objects_id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: missing_objects_time
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

static bool _Tmsdbmissingobjectschecker_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbmissingobjectschecker_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tmsdbmissingobjectschecker_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tmsdbmissingobjectschecker_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbmissingobjectschecker_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tmsdbmissingobjectschecker_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tmsdbmissingobjectschecker_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Tmsdbmissingobjectschecker_Response__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbmissingobjectschecker_Response",
  _Tmsdbmissingobjectschecker_Response__cdr_serialize,
  _Tmsdbmissingobjectschecker_Response__cdr_deserialize,
  _Tmsdbmissingobjectschecker_Response__get_serialized_size,
  _Tmsdbmissingobjectschecker_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbmissingobjectschecker_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbmissingobjectschecker_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_db

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
get_message_type_support_handle<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbmissingobjectschecker_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbmissingobjectschecker_Response)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbmissingobjectschecker_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Tmsdbmissingobjectschecker__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbmissingobjectschecker",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbmissingobjectschecker_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbmissingobjectschecker_Response)(),
};

static rosidl_service_type_support_t _Tmsdbmissingobjectschecker__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbmissingobjectschecker__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tms_msg_db

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tms_msg_db
const rosidl_service_type_support_t *
get_service_type_support_handle<tms_msg_db::srv::Tmsdbmissingobjectschecker>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbmissingobjectschecker__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbmissingobjectschecker)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbmissingobjectschecker__handle;
}

#ifdef __cplusplus
}
#endif
