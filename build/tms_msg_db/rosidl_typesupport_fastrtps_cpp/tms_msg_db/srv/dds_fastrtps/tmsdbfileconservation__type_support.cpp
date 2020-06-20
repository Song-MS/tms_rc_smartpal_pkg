// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:srv/Tmsdbfileconservation.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbfileconservation__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tms_msg_db/srv/tmsdbfileconservation__struct.hpp"

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
namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::PointCloud2 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::PointCloud2 &);
size_t get_serialized_size(
  const sensor_msgs::msg::PointCloud2 &,
  size_t current_alignment);
size_t
max_serialized_size_PointCloud2(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs


namespace tms_msg_db
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_serialize(
  const tms_msg_db::srv::Tmsdbfileconservation_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rostime
  cdr << ros_message.rostime;
  // Member: id
  cdr << ros_message.id;
  // Member: filename
  cdr << ros_message.filename;
  // Member: get_x
  cdr << ros_message.get_x;
  // Member: get_y
  cdr << ros_message.get_y;
  // Member: get_z
  cdr << ros_message.get_z;
  // Member: get_theta
  cdr << ros_message.get_theta;
  // Member: get_place
  cdr << ros_message.get_place;
  // Member: cloud
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cloud,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbfileconservation_Request & ros_message)
{
  // Member: rostime
  cdr >> ros_message.rostime;

  // Member: id
  cdr >> ros_message.id;

  // Member: filename
  cdr >> ros_message.filename;

  // Member: get_x
  cdr >> ros_message.get_x;

  // Member: get_y
  cdr >> ros_message.get_y;

  // Member: get_z
  cdr >> ros_message.get_z;

  // Member: get_theta
  cdr >> ros_message.get_theta;

  // Member: get_place
  cdr >> ros_message.get_place;

  // Member: cloud
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cloud);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbfileconservation_Request & ros_message,
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
  // Member: id
  {
    size_t item_size = sizeof(ros_message.id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.filename.size() + 1);
  // Member: get_x
  {
    size_t item_size = sizeof(ros_message.get_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: get_y
  {
    size_t item_size = sizeof(ros_message.get_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: get_z
  {
    size_t item_size = sizeof(ros_message.get_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: get_theta
  {
    size_t item_size = sizeof(ros_message.get_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: get_place
  {
    size_t item_size = sizeof(ros_message.get_place);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cloud

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cloud, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbfileconservation_Request(
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

  // Member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: get_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: get_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: get_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: get_theta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: get_place
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cloud
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Tmsdbfileconservation_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbfileconservation_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tmsdbfileconservation_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::Tmsdbfileconservation_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tmsdbfileconservation_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbfileconservation_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tmsdbfileconservation_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tmsdbfileconservation_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Tmsdbfileconservation_Request__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbfileconservation_Request",
  _Tmsdbfileconservation_Request__cdr_serialize,
  _Tmsdbfileconservation_Request__cdr_deserialize,
  _Tmsdbfileconservation_Request__get_serialized_size,
  _Tmsdbfileconservation_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbfileconservation_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbfileconservation_Request__callbacks,
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
get_message_type_support_handle<tms_msg_db::srv::Tmsdbfileconservation_Request>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbfileconservation_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbfileconservation_Request)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbfileconservation_Request__handle;
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
  const tms_msg_db::srv::Tmsdbfileconservation_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << ros_message.success;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbfileconservation_Response & ros_message)
{
  // Member: success
  cdr >> ros_message.success;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbfileconservation_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbfileconservation_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: message
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _Tmsdbfileconservation_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbfileconservation_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tmsdbfileconservation_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::Tmsdbfileconservation_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tmsdbfileconservation_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbfileconservation_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tmsdbfileconservation_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tmsdbfileconservation_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Tmsdbfileconservation_Response__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbfileconservation_Response",
  _Tmsdbfileconservation_Response__cdr_serialize,
  _Tmsdbfileconservation_Response__cdr_deserialize,
  _Tmsdbfileconservation_Response__get_serialized_size,
  _Tmsdbfileconservation_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbfileconservation_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbfileconservation_Response__callbacks,
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
get_message_type_support_handle<tms_msg_db::srv::Tmsdbfileconservation_Response>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbfileconservation_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbfileconservation_Response)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbfileconservation_Response__handle;
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

static service_type_support_callbacks_t _Tmsdbfileconservation__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbfileconservation",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbfileconservation_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbfileconservation_Response)(),
};

static rosidl_service_type_support_t _Tmsdbfileconservation__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbfileconservation__callbacks,
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
get_service_type_support_handle<tms_msg_db::srv::Tmsdbfileconservation>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbfileconservation__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbfileconservation)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbfileconservation__handle;
}

#ifdef __cplusplus
}
#endif
