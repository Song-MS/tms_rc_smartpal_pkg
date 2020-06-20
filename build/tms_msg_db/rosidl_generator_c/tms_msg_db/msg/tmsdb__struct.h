// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:msg/Tmsdb.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMSDB__STRUCT_H_
#define TMS_MSG_DB__MSG__TMSDB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time'
// Member 'type'
// Member 'name'
// Member 'joint'
// Member 'rfid'
// Member 'etcdata'
// Member 'extfile'
// Member 'task'
// Member 'note'
// Member 'tag'
// Member 'announce'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/Tmsdb in the package tms_msg_db.
typedef struct tms_msg_db__msg__Tmsdb
{
  rosidl_generator_c__String time;
  rosidl_generator_c__String type;
  int32_t id;
  rosidl_generator_c__String name;
  double x;
  double y;
  double z;
  double rr;
  double rp;
  double ry;
  double offset_x;
  double offset_y;
  double offset_z;
  rosidl_generator_c__String joint;
  double weight;
  rosidl_generator_c__String rfid;
  rosidl_generator_c__String etcdata;
  int32_t place;
  rosidl_generator_c__String extfile;
  int32_t sensor;
  double probability;
  int32_t state;
  rosidl_generator_c__String task;
  rosidl_generator_c__String note;
  rosidl_generator_c__String tag;
  rosidl_generator_c__String announce;
} tms_msg_db__msg__Tmsdb;

// Struct for a sequence of tms_msg_db__msg__Tmsdb.
typedef struct tms_msg_db__msg__Tmsdb__Sequence
{
  tms_msg_db__msg__Tmsdb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__msg__Tmsdb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__MSG__TMSDB__STRUCT_H_
