// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_ts:srv/TsReq.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__SRV__TS_REQ__STRUCT_H_
#define TMS_MSG_TS__SRV__TS_REQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TsReq in the package tms_msg_ts.
typedef struct tms_msg_ts__srv__TsReq_Request
{
  uint64_t rostime;
  int32_t task_id;
  int32_t robot_id;
  int32_t object_id;
  int32_t user_id;
  int32_t place_id;
  int32_t priority;
} tms_msg_ts__srv__TsReq_Request;

// Struct for a sequence of tms_msg_ts__srv__TsReq_Request.
typedef struct tms_msg_ts__srv__TsReq_Request__Sequence
{
  tms_msg_ts__srv__TsReq_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ts__srv__TsReq_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'val'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/TsReq in the package tms_msg_ts.
typedef struct tms_msg_ts__srv__TsReq_Response
{
  int32_t result;
  rosidl_generator_c__float__Sequence val;
} tms_msg_ts__srv__TsReq_Response;

// Struct for a sequence of tms_msg_ts__srv__TsReq_Response.
typedef struct tms_msg_ts__srv__TsReq_Response__Sequence
{
  tms_msg_ts__srv__TsReq_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ts__srv__TsReq_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_TS__SRV__TS_REQ__STRUCT_H_
