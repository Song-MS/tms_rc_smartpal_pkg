// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_ts:msg/Arg.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__MSG__ARG__STRUCT_H_
#define TMS_MSG_TS__MSG__ARG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arg'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/Arg in the package tms_msg_ts.
typedef struct tms_msg_ts__msg__Arg
{
  rosidl_generator_c__float__Sequence arg;
} tms_msg_ts__msg__Arg;

// Struct for a sequence of tms_msg_ts__msg__Arg.
typedef struct tms_msg_ts__msg__Arg__Sequence
{
  tms_msg_ts__msg__Arg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ts__msg__Arg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_TS__MSG__ARG__STRUCT_H_
