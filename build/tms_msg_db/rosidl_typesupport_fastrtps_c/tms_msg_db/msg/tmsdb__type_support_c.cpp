// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tms_msg_db:msg/Tmsdb.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/msg/tmsdb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tms_msg_db/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tms_msg_db/msg/tmsdb__struct.h"
#include "tms_msg_db/msg/tmsdb__functions.h"
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

#include "rosidl_generator_c/string.h"  // announce, etcdata, extfile, joint, name, note, rfid, tag, task, time, type
#include "rosidl_generator_c/string_functions.h"  // announce, etcdata, extfile, joint, name, note, rfid, tag, task, time, type

// forward declare type support functions


using _Tmsdb__ros_msg_type = tms_msg_db__msg__Tmsdb;

static bool _Tmsdb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Tmsdb__ros_msg_type * ros_message = static_cast<const _Tmsdb__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    const rosidl_generator_c__String * str = &ros_message->time;
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

  // Field name: type
  {
    const rosidl_generator_c__String * str = &ros_message->type;
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

  // Field name: id
  {
    cdr << ros_message->id;
  }

  // Field name: name
  {
    const rosidl_generator_c__String * str = &ros_message->name;
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

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: rr
  {
    cdr << ros_message->rr;
  }

  // Field name: rp
  {
    cdr << ros_message->rp;
  }

  // Field name: ry
  {
    cdr << ros_message->ry;
  }

  // Field name: offset_x
  {
    cdr << ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr << ros_message->offset_y;
  }

  // Field name: offset_z
  {
    cdr << ros_message->offset_z;
  }

  // Field name: joint
  {
    const rosidl_generator_c__String * str = &ros_message->joint;
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

  // Field name: weight
  {
    cdr << ros_message->weight;
  }

  // Field name: rfid
  {
    const rosidl_generator_c__String * str = &ros_message->rfid;
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

  // Field name: etcdata
  {
    const rosidl_generator_c__String * str = &ros_message->etcdata;
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

  // Field name: place
  {
    cdr << ros_message->place;
  }

  // Field name: extfile
  {
    const rosidl_generator_c__String * str = &ros_message->extfile;
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

  // Field name: sensor
  {
    cdr << ros_message->sensor;
  }

  // Field name: probability
  {
    cdr << ros_message->probability;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: task
  {
    const rosidl_generator_c__String * str = &ros_message->task;
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

  // Field name: note
  {
    const rosidl_generator_c__String * str = &ros_message->note;
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

  // Field name: tag
  {
    const rosidl_generator_c__String * str = &ros_message->tag;
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

  // Field name: announce
  {
    const rosidl_generator_c__String * str = &ros_message->announce;
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

  return true;
}

static bool _Tmsdb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Tmsdb__ros_msg_type * ros_message = static_cast<_Tmsdb__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->time.data) {
      rosidl_generator_c__String__init(&ros_message->time);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->time,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'time'\n");
      return false;
    }
  }

  // Field name: type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->type.data) {
      rosidl_generator_c__String__init(&ros_message->type);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'type'\n");
      return false;
    }
  }

  // Field name: id
  {
    cdr >> ros_message->id;
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_generator_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: rr
  {
    cdr >> ros_message->rr;
  }

  // Field name: rp
  {
    cdr >> ros_message->rp;
  }

  // Field name: ry
  {
    cdr >> ros_message->ry;
  }

  // Field name: offset_x
  {
    cdr >> ros_message->offset_x;
  }

  // Field name: offset_y
  {
    cdr >> ros_message->offset_y;
  }

  // Field name: offset_z
  {
    cdr >> ros_message->offset_z;
  }

  // Field name: joint
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->joint.data) {
      rosidl_generator_c__String__init(&ros_message->joint);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->joint,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'joint'\n");
      return false;
    }
  }

  // Field name: weight
  {
    cdr >> ros_message->weight;
  }

  // Field name: rfid
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rfid.data) {
      rosidl_generator_c__String__init(&ros_message->rfid);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->rfid,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rfid'\n");
      return false;
    }
  }

  // Field name: etcdata
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->etcdata.data) {
      rosidl_generator_c__String__init(&ros_message->etcdata);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->etcdata,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'etcdata'\n");
      return false;
    }
  }

  // Field name: place
  {
    cdr >> ros_message->place;
  }

  // Field name: extfile
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->extfile.data) {
      rosidl_generator_c__String__init(&ros_message->extfile);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->extfile,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'extfile'\n");
      return false;
    }
  }

  // Field name: sensor
  {
    cdr >> ros_message->sensor;
  }

  // Field name: probability
  {
    cdr >> ros_message->probability;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: task
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->task.data) {
      rosidl_generator_c__String__init(&ros_message->task);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->task,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'task'\n");
      return false;
    }
  }

  // Field name: note
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->note.data) {
      rosidl_generator_c__String__init(&ros_message->note);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->note,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'note'\n");
      return false;
    }
  }

  // Field name: tag
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tag.data) {
      rosidl_generator_c__String__init(&ros_message->tag);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->tag,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tag'\n");
      return false;
    }
  }

  // Field name: announce
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->announce.data) {
      rosidl_generator_c__String__init(&ros_message->announce);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->announce,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'announce'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t get_serialized_size_tms_msg_db__msg__Tmsdb(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Tmsdb__ros_msg_type * ros_message = static_cast<const _Tmsdb__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->time.size + 1);
  // field.name type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->type.size + 1);
  // field.name id
  {
    size_t item_size = sizeof(ros_message->id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr
  {
    size_t item_size = sizeof(ros_message->rr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rp
  {
    size_t item_size = sizeof(ros_message->rp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ry
  {
    size_t item_size = sizeof(ros_message->ry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_x
  {
    size_t item_size = sizeof(ros_message->offset_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_y
  {
    size_t item_size = sizeof(ros_message->offset_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset_z
  {
    size_t item_size = sizeof(ros_message->offset_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->joint.size + 1);
  // field.name weight
  {
    size_t item_size = sizeof(ros_message->weight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rfid
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rfid.size + 1);
  // field.name etcdata
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->etcdata.size + 1);
  // field.name place
  {
    size_t item_size = sizeof(ros_message->place);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extfile
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->extfile.size + 1);
  // field.name sensor
  {
    size_t item_size = sizeof(ros_message->sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name probability
  {
    size_t item_size = sizeof(ros_message->probability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name task
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->task.size + 1);
  // field.name note
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->note.size + 1);
  // field.name tag
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tag.size + 1);
  // field.name announce
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->announce.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Tmsdb__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tms_msg_db__msg__Tmsdb(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tms_msg_db
size_t max_serialized_size_tms_msg_db__msg__Tmsdb(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: time
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ry
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: offset_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: joint
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: weight
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rfid
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: etcdata
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: place
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: extfile
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sensor
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: probability
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: state
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: task
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: note
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: tag
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: announce
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

static size_t _Tmsdb__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tms_msg_db__msg__Tmsdb(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Tmsdb = {
  "tms_msg_db::msg",
  "Tmsdb",
  _Tmsdb__cdr_serialize,
  _Tmsdb__cdr_deserialize,
  _Tmsdb__get_serialized_size,
  _Tmsdb__max_serialized_size
};

static rosidl_message_type_support_t _Tmsdb__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Tmsdb,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tms_msg_db, msg, Tmsdb)() {
  return &_Tmsdb__type_support;
}

#if defined(__cplusplus)
}
#endif
