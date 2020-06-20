// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_ss:msg/ViconData.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_SS__MSG__VICON_DATA__STRUCT_H_
#define TMS_MSG_SS__MSG__VICON_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'measuredtime'
// Member 'subjectname'
// Member 'segmentname'
#include "rosidl_generator_c/string.h"
// Member 'translation'
#include "geometry_msgs/msg/point__struct.h"
// Member 'rotation'
#include "geometry_msgs/msg/quaternion__struct.h"

// Struct defined in msg/ViconData in the package tms_msg_ss.
typedef struct tms_msg_ss__msg__ViconData
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String measuredtime;
  rosidl_generator_c__String subjectname;
  rosidl_generator_c__String segmentname;
  geometry_msgs__msg__Point translation;
  geometry_msgs__msg__Quaternion rotation;
  double eulerxyz[3];
} tms_msg_ss__msg__ViconData;

// Struct for a sequence of tms_msg_ss__msg__ViconData.
typedef struct tms_msg_ss__msg__ViconData__Sequence
{
  tms_msg_ss__msg__ViconData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ss__msg__ViconData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_SS__MSG__VICON_DATA__STRUCT_H_
