// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_db:srv/Tmsdbgetrobotinfo.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbgetrobotinfo__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_db/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_db/srv/tmsdbgetrobotinfo__struct.h"
#include "tms_msg_db/srv/tmsdbgetrobotinfo__functions.h"
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

#include "rosidl_generator_c/primitives_sequence.h"  // id
#include "rosidl_generator_c/primitives_sequence_functions.h"  // id

// forward declare type support functions


using _Tmsdbgetrobotinfo_Request__ros_msg_type = tms_msg_db__srv__Tmsdbgetrobotinfo_Request;

static bool _Tmsdbgetrobotinfo_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tmsdbgetrobotinfo_Request__ros_msg_type * ros_message = static_cast<const _Tmsdbgetrobotinfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    size_t size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Tmsdbgetrobotinfo_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tmsdbgetrobotinfo_Request__ros_msg_type * ros_message = static_cast<_Tmsdbgetrobotinfo_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->id.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->id);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->id, size)) {
      return "failed to create array for field 'id'";
    }
    auto array_ptr = ros_message->id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__Tmsdbgetrobotinfo_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tmsdbgetrobotinfo_Request__ros_msg_type * ros_message = static_cast<const _Tmsdbgetrobotinfo_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id
  {
    size_t array_size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tmsdbgetrobotinfo_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__Tmsdbgetrobotinfo_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__Tmsdbgetrobotinfo_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
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

static size_t _Tmsdbgetrobotinfo_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__Tmsdbgetrobotinfo_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tmsdbgetrobotinfo_Request = {
  "tms_msg_db::srv",
  "Tmsdbgetrobotinfo_Request",
  _Tmsdbgetrobotinfo_Request__cdr_serialize,
  _Tmsdbgetrobotinfo_Request__cdr_deserialize,
  _Tmsdbgetrobotinfo_Request__get_serialized_size,
  _Tmsdbgetrobotinfo_Request__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbgetrobotinfo_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tmsdbgetrobotinfo_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotinfo_Request)() {
  return &_Tmsdbgetrobotinfo_Request__type_support;
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
// #include "tms_msg_db/srv/tmsdbgetrobotinfo__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetrobotinfo__functions.h"
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
// #include "rosidl_generator_c/primitives_sequence.h"  // id, joint_arm_left_1, joint_arm_left_2, joint_arm_left_3, joint_arm_left_4, joint_arm_left_5, joint_arm_left_6, joint_arm_left_7, joint_arm_left_g, joint_arm_right_1, joint_arm_right_2, joint_arm_right_3, joint_arm_right_4, joint_arm_right_5, joint_arm_right_6, joint_arm_right_7, joint_arm_right_g, joint_waist_high, joint_waist_low, place, rostime, state, theta, x, y, z
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"  // id, joint_arm_left_1, joint_arm_left_2, joint_arm_left_3, joint_arm_left_4, joint_arm_left_5, joint_arm_left_6, joint_arm_left_7, joint_arm_left_g, joint_arm_right_1, joint_arm_right_2, joint_arm_right_3, joint_arm_right_4, joint_arm_right_5, joint_arm_right_6, joint_arm_right_7, joint_arm_right_g, joint_waist_high, joint_waist_low, place, rostime, state, theta, x, y, z

// forward declare type support functions


using _Tmsdbgetrobotinfo_Response__ros_msg_type = tms_msg_db__srv__Tmsdbgetrobotinfo_Response;

static bool _Tmsdbgetrobotinfo_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tmsdbgetrobotinfo_Response__ros_msg_type * ros_message = static_cast<const _Tmsdbgetrobotinfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: rostime
  {
    size_t size = ros_message->rostime.size;
    auto array_ptr = ros_message->rostime.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: id
  {
    size_t size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: x
  {
    size_t size = ros_message->x.size;
    auto array_ptr = ros_message->x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y
  {
    size_t size = ros_message->y.size;
    auto array_ptr = ros_message->y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: z
  {
    size_t size = ros_message->z.size;
    auto array_ptr = ros_message->z.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: theta
  {
    size_t size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_waist_low
  {
    size_t size = ros_message->joint_waist_low.size;
    auto array_ptr = ros_message->joint_waist_low.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_waist_high
  {
    size_t size = ros_message->joint_waist_high.size;
    auto array_ptr = ros_message->joint_waist_high.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_1
  {
    size_t size = ros_message->joint_arm_right_1.size;
    auto array_ptr = ros_message->joint_arm_right_1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_2
  {
    size_t size = ros_message->joint_arm_right_2.size;
    auto array_ptr = ros_message->joint_arm_right_2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_3
  {
    size_t size = ros_message->joint_arm_right_3.size;
    auto array_ptr = ros_message->joint_arm_right_3.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_4
  {
    size_t size = ros_message->joint_arm_right_4.size;
    auto array_ptr = ros_message->joint_arm_right_4.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_5
  {
    size_t size = ros_message->joint_arm_right_5.size;
    auto array_ptr = ros_message->joint_arm_right_5.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_6
  {
    size_t size = ros_message->joint_arm_right_6.size;
    auto array_ptr = ros_message->joint_arm_right_6.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_7
  {
    size_t size = ros_message->joint_arm_right_7.size;
    auto array_ptr = ros_message->joint_arm_right_7.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_g
  {
    size_t size = ros_message->joint_arm_right_g.size;
    auto array_ptr = ros_message->joint_arm_right_g.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_1
  {
    size_t size = ros_message->joint_arm_left_1.size;
    auto array_ptr = ros_message->joint_arm_left_1.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_2
  {
    size_t size = ros_message->joint_arm_left_2.size;
    auto array_ptr = ros_message->joint_arm_left_2.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_3
  {
    size_t size = ros_message->joint_arm_left_3.size;
    auto array_ptr = ros_message->joint_arm_left_3.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_4
  {
    size_t size = ros_message->joint_arm_left_4.size;
    auto array_ptr = ros_message->joint_arm_left_4.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_5
  {
    size_t size = ros_message->joint_arm_left_5.size;
    auto array_ptr = ros_message->joint_arm_left_5.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_6
  {
    size_t size = ros_message->joint_arm_left_6.size;
    auto array_ptr = ros_message->joint_arm_left_6.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_7
  {
    size_t size = ros_message->joint_arm_left_7.size;
    auto array_ptr = ros_message->joint_arm_left_7.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_g
  {
    size_t size = ros_message->joint_arm_left_g.size;
    auto array_ptr = ros_message->joint_arm_left_g.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: state
  {
    size_t size = ros_message->state.size;
    auto array_ptr = ros_message->state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: place
  {
    size_t size = ros_message->place.size;
    auto array_ptr = ros_message->place.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Tmsdbgetrobotinfo_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tmsdbgetrobotinfo_Response__ros_msg_type * ros_message = static_cast<_Tmsdbgetrobotinfo_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: rostime
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->rostime.data) {
      rosidl_generator_c__uint64__Sequence__fini(&ros_message->rostime);
    }
    if (!rosidl_generator_c__uint64__Sequence__init(&ros_message->rostime, size)) {
      return "failed to create array for field 'rostime'";
    }
    auto array_ptr = ros_message->rostime.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: id
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->id.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->id);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->id, size)) {
      return "failed to create array for field 'id'";
    }
    auto array_ptr = ros_message->id.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->x);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->x, size)) {
      return "failed to create array for field 'x'";
    }
    auto array_ptr = ros_message->x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->y);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->y, size)) {
      return "failed to create array for field 'y'";
    }
    auto array_ptr = ros_message->y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: z
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->z.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->z);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->z, size)) {
      return "failed to create array for field 'z'";
    }
    auto array_ptr = ros_message->z.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: theta
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->theta.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->theta);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->theta, size)) {
      return "failed to create array for field 'theta'";
    }
    auto array_ptr = ros_message->theta.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_waist_low
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_waist_low.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_waist_low);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_waist_low, size)) {
      return "failed to create array for field 'joint_waist_low'";
    }
    auto array_ptr = ros_message->joint_waist_low.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_waist_high
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_waist_high.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_waist_high);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_waist_high, size)) {
      return "failed to create array for field 'joint_waist_high'";
    }
    auto array_ptr = ros_message->joint_waist_high.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_right_1.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_right_1);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_right_1, size)) {
      return "failed to create array for field 'joint_arm_right_1'";
    }
    auto array_ptr = ros_message->joint_arm_right_1.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_right_2.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_right_2);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_right_2, size)) {
      return "failed to create array for field 'joint_arm_right_2'";
    }
    auto array_ptr = ros_message->joint_arm_right_2.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_3
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_right_3.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_right_3);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_right_3, size)) {
      return "failed to create array for field 'joint_arm_right_3'";
    }
    auto array_ptr = ros_message->joint_arm_right_3.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_4
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_right_4.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_right_4);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_right_4, size)) {
      return "failed to create array for field 'joint_arm_right_4'";
    }
    auto array_ptr = ros_message->joint_arm_right_4.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_5
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_right_5.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_right_5);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_right_5, size)) {
      return "failed to create array for field 'joint_arm_right_5'";
    }
    auto array_ptr = ros_message->joint_arm_right_5.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_6
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_right_6.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_right_6);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_right_6, size)) {
      return "failed to create array for field 'joint_arm_right_6'";
    }
    auto array_ptr = ros_message->joint_arm_right_6.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_7
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_right_7.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_right_7);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_right_7, size)) {
      return "failed to create array for field 'joint_arm_right_7'";
    }
    auto array_ptr = ros_message->joint_arm_right_7.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_right_g
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_right_g.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_right_g);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_right_g, size)) {
      return "failed to create array for field 'joint_arm_right_g'";
    }
    auto array_ptr = ros_message->joint_arm_right_g.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_1
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_left_1.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_left_1);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_left_1, size)) {
      return "failed to create array for field 'joint_arm_left_1'";
    }
    auto array_ptr = ros_message->joint_arm_left_1.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_2
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_left_2.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_left_2);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_left_2, size)) {
      return "failed to create array for field 'joint_arm_left_2'";
    }
    auto array_ptr = ros_message->joint_arm_left_2.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_3
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_left_3.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_left_3);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_left_3, size)) {
      return "failed to create array for field 'joint_arm_left_3'";
    }
    auto array_ptr = ros_message->joint_arm_left_3.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_4
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_left_4.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_left_4);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_left_4, size)) {
      return "failed to create array for field 'joint_arm_left_4'";
    }
    auto array_ptr = ros_message->joint_arm_left_4.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_5
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_left_5.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_left_5);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_left_5, size)) {
      return "failed to create array for field 'joint_arm_left_5'";
    }
    auto array_ptr = ros_message->joint_arm_left_5.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_6
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_left_6.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_left_6);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_left_6, size)) {
      return "failed to create array for field 'joint_arm_left_6'";
    }
    auto array_ptr = ros_message->joint_arm_left_6.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_7
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_left_7.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_left_7);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_left_7, size)) {
      return "failed to create array for field 'joint_arm_left_7'";
    }
    auto array_ptr = ros_message->joint_arm_left_7.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: joint_arm_left_g
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_arm_left_g.data) {
      rosidl_generator_c__float__Sequence__fini(&ros_message->joint_arm_left_g);
    }
    if (!rosidl_generator_c__float__Sequence__init(&ros_message->joint_arm_left_g, size)) {
      return "failed to create array for field 'joint_arm_left_g'";
    }
    auto array_ptr = ros_message->joint_arm_left_g.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->state.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->state);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->state, size)) {
      return "failed to create array for field 'state'";
    }
    auto array_ptr = ros_message->state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: place
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->place.data) {
      rosidl_generator_c__uint32__Sequence__fini(&ros_message->place);
    }
    if (!rosidl_generator_c__uint32__Sequence__init(&ros_message->place, size)) {
      return "failed to create array for field 'place'";
    }
    auto array_ptr = ros_message->place.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__srv__Tmsdbgetrobotinfo_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tmsdbgetrobotinfo_Response__ros_msg_type * ros_message = static_cast<const _Tmsdbgetrobotinfo_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rostime
  {
    size_t array_size = ros_message->rostime.size;
    auto array_ptr = ros_message->rostime.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name id
  {
    size_t array_size = ros_message->id.size;
    auto array_ptr = ros_message->id.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t array_size = ros_message->x.size;
    auto array_ptr = ros_message->x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t array_size = ros_message->y.size;
    auto array_ptr = ros_message->y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t array_size = ros_message->z.size;
    auto array_ptr = ros_message->z.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta
  {
    size_t array_size = ros_message->theta.size;
    auto array_ptr = ros_message->theta.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_waist_low
  {
    size_t array_size = ros_message->joint_waist_low.size;
    auto array_ptr = ros_message->joint_waist_low.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_waist_high
  {
    size_t array_size = ros_message->joint_waist_high.size;
    auto array_ptr = ros_message->joint_waist_high.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_right_1
  {
    size_t array_size = ros_message->joint_arm_right_1.size;
    auto array_ptr = ros_message->joint_arm_right_1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_right_2
  {
    size_t array_size = ros_message->joint_arm_right_2.size;
    auto array_ptr = ros_message->joint_arm_right_2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_right_3
  {
    size_t array_size = ros_message->joint_arm_right_3.size;
    auto array_ptr = ros_message->joint_arm_right_3.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_right_4
  {
    size_t array_size = ros_message->joint_arm_right_4.size;
    auto array_ptr = ros_message->joint_arm_right_4.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_right_5
  {
    size_t array_size = ros_message->joint_arm_right_5.size;
    auto array_ptr = ros_message->joint_arm_right_5.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_right_6
  {
    size_t array_size = ros_message->joint_arm_right_6.size;
    auto array_ptr = ros_message->joint_arm_right_6.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_right_7
  {
    size_t array_size = ros_message->joint_arm_right_7.size;
    auto array_ptr = ros_message->joint_arm_right_7.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_right_g
  {
    size_t array_size = ros_message->joint_arm_right_g.size;
    auto array_ptr = ros_message->joint_arm_right_g.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_left_1
  {
    size_t array_size = ros_message->joint_arm_left_1.size;
    auto array_ptr = ros_message->joint_arm_left_1.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_left_2
  {
    size_t array_size = ros_message->joint_arm_left_2.size;
    auto array_ptr = ros_message->joint_arm_left_2.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_left_3
  {
    size_t array_size = ros_message->joint_arm_left_3.size;
    auto array_ptr = ros_message->joint_arm_left_3.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_left_4
  {
    size_t array_size = ros_message->joint_arm_left_4.size;
    auto array_ptr = ros_message->joint_arm_left_4.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_left_5
  {
    size_t array_size = ros_message->joint_arm_left_5.size;
    auto array_ptr = ros_message->joint_arm_left_5.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_left_6
  {
    size_t array_size = ros_message->joint_arm_left_6.size;
    auto array_ptr = ros_message->joint_arm_left_6.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_left_7
  {
    size_t array_size = ros_message->joint_arm_left_7.size;
    auto array_ptr = ros_message->joint_arm_left_7.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_arm_left_g
  {
    size_t array_size = ros_message->joint_arm_left_g.size;
    auto array_ptr = ros_message->joint_arm_left_g.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t array_size = ros_message->state.size;
    auto array_ptr = ros_message->state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name place
  {
    size_t array_size = ros_message->place.size;
    auto array_ptr = ros_message->place.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Tmsdbgetrobotinfo_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__srv__Tmsdbgetrobotinfo_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__srv__Tmsdbgetrobotinfo_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rostime
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: id
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: theta
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_waist_low
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_waist_high
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_right_1
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_right_2
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_right_3
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_right_4
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_right_5
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_right_6
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_right_7
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_right_g
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_left_1
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_left_2
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_left_3
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_left_4
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_left_5
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_left_6
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_left_7
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_arm_left_g
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: state
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: place
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

static size_t _Tmsdbgetrobotinfo_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__srv__Tmsdbgetrobotinfo_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tmsdbgetrobotinfo_Response = {
  "tms_msg_db::srv",
  "Tmsdbgetrobotinfo_Response",
  _Tmsdbgetrobotinfo_Response__cdr_serialize,
  _Tmsdbgetrobotinfo_Response__cdr_deserialize,
  _Tmsdbgetrobotinfo_Response__get_serialized_size,
  _Tmsdbgetrobotinfo_Response__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdbgetrobotinfo_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tmsdbgetrobotinfo_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotinfo_Response)() {
  return &_Tmsdbgetrobotinfo_Response__type_support;
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
#include "tms_msg_db/srv/tmsdbgetrobotinfo.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Tmsdbgetrobotinfo__callbacks = {
  "tms_msg_db::srv",
  "Tmsdbgetrobotinfo",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotinfo_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotinfo_Response)(),
};

static rosidl_service_type_support_t Tmsdbgetrobotinfo__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Tmsdbgetrobotinfo__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, srv, Tmsdbgetrobotinfo)() {
  return &Tmsdbgetrobotinfo__handle;
}

#if defined(__cplusplus)
}
#endif
