// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:msg/TmsDataStamped.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMS_DATA_STAMPED__STRUCT_H_
#define TMS_MSG_DB__MSG__TMS_DATA_STAMPED__STRUCT_H_

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
// Member 'tmsdata'
#include "tms_msg_db/msg/tms_data__struct.h"

// Struct defined in msg/TmsDataStamped in the package tms_msg_db.
typedef struct tms_msg_db__msg__TmsDataStamped
{
  std_msgs__msg__Header header;
  tms_msg_db__msg__TmsData__Sequence tmsdata;
} tms_msg_db__msg__TmsDataStamped;

// Struct for a sequence of tms_msg_db__msg__TmsDataStamped.
typedef struct tms_msg_db__msg__TmsDataStamped__Sequence
{
  tms_msg_db__msg__TmsDataStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__msg__TmsDataStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__MSG__TMS_DATA_STAMPED__STRUCT_H_
