// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_ur:msg/JuliusMsg.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_UR__MSG__JULIUS_MSG__STRUCT_H_
#define TMS_MSG_UR__MSG__JULIUS_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/JuliusMsg in the package tms_msg_ur.
typedef struct tms_msg_ur__msg__JuliusMsg
{
  rosidl_generator_c__String data;
  float value;
} tms_msg_ur__msg__JuliusMsg;

// Struct for a sequence of tms_msg_ur__msg__JuliusMsg.
typedef struct tms_msg_ur__msg__JuliusMsg__Sequence
{
  tms_msg_ur__msg__JuliusMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ur__msg__JuliusMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_UR__MSG__JULIUS_MSG__STRUCT_H_
