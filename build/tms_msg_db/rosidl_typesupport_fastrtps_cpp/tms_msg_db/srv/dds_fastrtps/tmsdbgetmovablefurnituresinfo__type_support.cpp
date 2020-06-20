// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:srv/Tmsdbgetmovablefurnituresinfo.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__struct.hpp"

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
  const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: furnitures_id
  cdr << ros_message.furnitures_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request & ros_message)
{
  // Member: furnitures_id
  cdr >> ros_message.furnitures_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: furnitures_id
  {
    size_t item_size = sizeof(ros_message.furnitures_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbgetmovablefurnituresinfo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: furnitures_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Tmsdbgetmovablefurnituresinfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tmsdbgetmovablefurnituresinfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tmsdbgetmovablefurnituresinfo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tmsdbgetmovablefurnituresinfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tmsdbgetmovablefurnituresinfo_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Tmsdbgetmovablefurnituresinfo_Request__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbgetmovablefurnituresinfo_Request",
  _Tmsdbgetmovablefurnituresinfo_Request__cdr_serialize,
  _Tmsdbgetmovablefurnituresinfo_Request__cdr_deserialize,
  _Tmsdbgetmovablefurnituresinfo_Request__get_serialized_size,
  _Tmsdbgetmovablefurnituresinfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbgetmovablefurnituresinfo_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbgetmovablefurnituresinfo_Request__callbacks,
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
get_message_type_support_handle<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetmovablefurnituresinfo_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Request)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetmovablefurnituresinfo_Request__handle;
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
  const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rostime
  cdr << ros_message.rostime;
  // Member: furniture_x
  cdr << ros_message.furniture_x;
  // Member: furniture_y
  cdr << ros_message.furniture_y;
  // Member: furniture_z
  cdr << ros_message.furniture_z;
  // Member: furnitures_theta
  cdr << ros_message.furnitures_theta;
  // Member: furnitures_width
  cdr << ros_message.furnitures_width;
  // Member: furnitures_depth
  cdr << ros_message.furnitures_depth;
  // Member: furnitures_height
  cdr << ros_message.furnitures_height;
  // Member: furnitures_state
  cdr << ros_message.furnitures_state;
  // Member: furnitures_place
  cdr << ros_message.furnitures_place;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response & ros_message)
{
  // Member: rostime
  cdr >> ros_message.rostime;

  // Member: furniture_x
  cdr >> ros_message.furniture_x;

  // Member: furniture_y
  cdr >> ros_message.furniture_y;

  // Member: furniture_z
  cdr >> ros_message.furniture_z;

  // Member: furnitures_theta
  cdr >> ros_message.furnitures_theta;

  // Member: furnitures_width
  cdr >> ros_message.furnitures_width;

  // Member: furnitures_depth
  cdr >> ros_message.furnitures_depth;

  // Member: furnitures_height
  cdr >> ros_message.furnitures_height;

  // Member: furnitures_state
  cdr >> ros_message.furnitures_state;

  // Member: furnitures_place
  cdr >> ros_message.furnitures_place;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rostime
  {
    size_t item_size = sizeof(ros_message.rostime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furniture_x
  {
    size_t item_size = sizeof(ros_message.furniture_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furniture_y
  {
    size_t item_size = sizeof(ros_message.furniture_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furniture_z
  {
    size_t item_size = sizeof(ros_message.furniture_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furnitures_theta
  {
    size_t item_size = sizeof(ros_message.furnitures_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furnitures_width
  {
    size_t item_size = sizeof(ros_message.furnitures_width);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furnitures_depth
  {
    size_t item_size = sizeof(ros_message.furnitures_depth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furnitures_height
  {
    size_t item_size = sizeof(ros_message.furnitures_height);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furnitures_state
  {
    size_t item_size = sizeof(ros_message.furnitures_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: furnitures_place
  {
    size_t item_size = sizeof(ros_message.furnitures_place);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbgetmovablefurnituresinfo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: rostime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: furniture_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: furniture_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: furniture_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: furnitures_theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: furnitures_width
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: furnitures_depth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: furnitures_height
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: furnitures_state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: furnitures_place
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Tmsdbgetmovablefurnituresinfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tmsdbgetmovablefurnituresinfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tmsdbgetmovablefurnituresinfo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tmsdbgetmovablefurnituresinfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tmsdbgetmovablefurnituresinfo_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Tmsdbgetmovablefurnituresinfo_Response__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbgetmovablefurnituresinfo_Response",
  _Tmsdbgetmovablefurnituresinfo_Response__cdr_serialize,
  _Tmsdbgetmovablefurnituresinfo_Response__cdr_deserialize,
  _Tmsdbgetmovablefurnituresinfo_Response__get_serialized_size,
  _Tmsdbgetmovablefurnituresinfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbgetmovablefurnituresinfo_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbgetmovablefurnituresinfo_Response__callbacks,
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
get_message_type_support_handle<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetmovablefurnituresinfo_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Response)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetmovablefurnituresinfo_Response__handle;
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

static service_type_support_callbacks_t _Tmsdbgetmovablefurnituresinfo__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbgetmovablefurnituresinfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Response)(),
};

static rosidl_service_type_support_t _Tmsdbgetmovablefurnituresinfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbgetmovablefurnituresinfo__callbacks,
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
get_service_type_support_handle<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetmovablefurnituresinfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetmovablefurnituresinfo__handle;
}

#ifdef __cplusplus
}
#endif
