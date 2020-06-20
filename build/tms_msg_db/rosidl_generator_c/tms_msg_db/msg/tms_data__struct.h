// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:msg/TmsData.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMS_DATA__STRUCT_H_
#define TMS_MSG_DB__MSG__TMS_DATA__STRUCT_H_

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
// Member 'sensor'
// Member 'place'
#include "rosidl_generator_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'offset'
#include "geometry_msgs/msg/point__struct.h"

// Struct defined in msg/TmsData in the package tms_msg_db.
typedef struct tms_msg_db__msg__TmsData
{
  rosidl_generator_c__String time;
  rosidl_generator_c__String type;
  rosidl_generator_c__String name;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Point offset;
  rosidl_generator_c__String sensor;
  rosidl_generator_c__String place;
  uint8_t state;
} tms_msg_db__msg__TmsData;

// Struct for a sequence of tms_msg_db__msg__TmsData.
typedef struct tms_msg_db__msg__TmsData__Sequence
{
  tms_msg_db__msg__TmsData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__msg__TmsData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__MSG__TMS_DATA__STRUCT_H_
