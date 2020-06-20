// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_ts:srv/TsStateControl.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__SRV__TS_STATE_CONTROL__STRUCT_H_
#define TMS_MSG_TS__SRV__TS_STATE_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'error_msg'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/TsStateControl in the package tms_msg_ts.
typedef struct tms_msg_ts__srv__TsStateControl_Request
{
  uint64_t rostime;
  int32_t type;
  int32_t state;
  int32_t cc_subtasks;
  rosidl_generator_c__String error_msg;
} tms_msg_ts__srv__TsStateControl_Request;

// Struct for a sequence of tms_msg_ts__srv__TsStateControl_Request.
typedef struct tms_msg_ts__srv__TsStateControl_Request__Sequence
{
  tms_msg_ts__srv__TsStateControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ts__srv__TsStateControl_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TsStateControl in the package tms_msg_ts.
typedef struct tms_msg_ts__srv__TsStateControl_Response
{
  int32_t result;
} tms_msg_ts__srv__TsStateControl_Response;

// Struct for a sequence of tms_msg_ts__srv__TsStateControl_Response.
typedef struct tms_msg_ts__srv__TsStateControl_Response__Sequence
{
  tms_msg_ts__srv__TsStateControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ts__srv__TsStateControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_TS__SRV__TS_STATE_CONTROL__STRUCT_H_
