// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tms_msg_db:srv/Tmsdbgetpersoninfo.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbgetpersoninfo__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tms_msg_db/srv/tmsdbgetpersoninfo__struct.hpp"

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
  const tms_msg_db::srv::Tmsdbgetpersoninfo_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rostime
  {
    cdr << ros_message.rostime;
  }
  // Member: id
  {
    cdr << ros_message.id;
  }
  // Member: x
  {
    cdr << ros_message.x;
  }
  // Member: y
  {
    cdr << ros_message.y;
  }
  // Member: z
  {
    cdr << ros_message.z;
  }
  // Member: theta
  {
    cdr << ros_message.theta;
  }
  // Member: state
  {
    cdr << ros_message.state;
  }
  // Member: place
  {
    cdr << ros_message.place;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbgetpersoninfo_Request & ros_message)
{
  // Member: rostime
  {
    cdr >> ros_message.rostime;
  }

  // Member: id
  {
    cdr >> ros_message.id;
  }

  // Member: x
  {
    cdr >> ros_message.x;
  }

  // Member: y
  {
    cdr >> ros_message.y;
  }

  // Member: z
  {
    cdr >> ros_message.z;
  }

  // Member: theta
  {
    cdr >> ros_message.theta;
  }

  // Member: state
  {
    cdr >> ros_message.state;
  }

  // Member: place
  {
    cdr >> ros_message.place;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbgetpersoninfo_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rostime
  {
    size_t array_size = ros_message.rostime.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rostime[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id
  {
    size_t array_size = ros_message.id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x
  {
    size_t array_size = ros_message.x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t array_size = ros_message.y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z
  {
    size_t array_size = ros_message.z.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.z[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta
  {
    size_t array_size = ros_message.theta.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.theta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t array_size = ros_message.state.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: place
  {
    size_t array_size = ros_message.place.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.place[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbgetpersoninfo_Request(
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
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: theta
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: place
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

static bool _Tmsdbgetpersoninfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbgetpersoninfo_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tmsdbgetpersoninfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::Tmsdbgetpersoninfo_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tmsdbgetpersoninfo_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbgetpersoninfo_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tmsdbgetpersoninfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tmsdbgetpersoninfo_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Tmsdbgetpersoninfo_Request__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbgetpersoninfo_Request",
  _Tmsdbgetpersoninfo_Request__cdr_serialize,
  _Tmsdbgetpersoninfo_Request__cdr_deserialize,
  _Tmsdbgetpersoninfo_Request__get_serialized_size,
  _Tmsdbgetpersoninfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbgetpersoninfo_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbgetpersoninfo_Request__callbacks,
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
get_message_type_support_handle<tms_msg_db::srv::Tmsdbgetpersoninfo_Request>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetpersoninfo_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetpersoninfo_Request)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetpersoninfo_Request__handle;
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
  const tms_msg_db::srv::Tmsdbgetpersoninfo_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rostime
  {
    cdr << ros_message.rostime;
  }
  // Member: id
  {
    cdr << ros_message.id;
  }
  // Member: x
  {
    cdr << ros_message.x;
  }
  // Member: y
  {
    cdr << ros_message.y;
  }
  // Member: z
  {
    cdr << ros_message.z;
  }
  // Member: theta
  {
    cdr << ros_message.theta;
  }
  // Member: state
  {
    cdr << ros_message.state;
  }
  // Member: place
  {
    cdr << ros_message.place;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tms_msg_db::srv::Tmsdbgetpersoninfo_Response & ros_message)
{
  // Member: rostime
  {
    cdr >> ros_message.rostime;
  }

  // Member: id
  {
    cdr >> ros_message.id;
  }

  // Member: x
  {
    cdr >> ros_message.x;
  }

  // Member: y
  {
    cdr >> ros_message.y;
  }

  // Member: z
  {
    cdr >> ros_message.z;
  }

  // Member: theta
  {
    cdr >> ros_message.theta;
  }

  // Member: state
  {
    cdr >> ros_message.state;
  }

  // Member: place
  {
    cdr >> ros_message.place;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
get_serialized_size(
  const tms_msg_db::srv::Tmsdbgetpersoninfo_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rostime
  {
    size_t array_size = ros_message.rostime.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.rostime[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: id
  {
    size_t array_size = ros_message.id.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x
  {
    size_t array_size = ros_message.x.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.x[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y
  {
    size_t array_size = ros_message.y.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.y[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z
  {
    size_t array_size = ros_message.z.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.z[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta
  {
    size_t array_size = ros_message.theta.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.theta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t array_size = ros_message.state.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.state[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: place
  {
    size_t array_size = ros_message.place.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.place[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tms_msg_db
max_serialized_size_Tmsdbgetpersoninfo_Response(
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
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: theta
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: place
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

static bool _Tmsdbgetpersoninfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbgetpersoninfo_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Tmsdbgetpersoninfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tms_msg_db::srv::Tmsdbgetpersoninfo_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Tmsdbgetpersoninfo_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tms_msg_db::srv::Tmsdbgetpersoninfo_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Tmsdbgetpersoninfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Tmsdbgetpersoninfo_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Tmsdbgetpersoninfo_Response__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbgetpersoninfo_Response",
  _Tmsdbgetpersoninfo_Response__cdr_serialize,
  _Tmsdbgetpersoninfo_Response__cdr_deserialize,
  _Tmsdbgetpersoninfo_Response__get_serialized_size,
  _Tmsdbgetpersoninfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbgetpersoninfo_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbgetpersoninfo_Response__callbacks,
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
get_message_type_support_handle<tms_msg_db::srv::Tmsdbgetpersoninfo_Response>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetpersoninfo_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetpersoninfo_Response)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetpersoninfo_Response__handle;
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

static service_type_support_callbacks_t _Tmsdbgetpersoninfo__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbgetpersoninfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetpersoninfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetpersoninfo_Response)(),
};

static rosidl_service_type_support_t _Tmsdbgetpersoninfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Tmsdbgetpersoninfo__callbacks,
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
get_service_type_support_handle<tms_msg_db::srv::Tmsdbgetpersoninfo>()
{
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetpersoninfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tms_msg_db, srv, Tmsdbgetpersoninfo)() {
  return &tms_msg_db::srv::typesupport_fastrtps_cpp::_Tmsdbgetpersoninfo__handle;
}

#ifdef __cplusplus
}
#endif