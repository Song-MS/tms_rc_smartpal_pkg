// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_ur:srv/GSpeechSrv.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_UR__SRV__G_SPEECH_SRV__STRUCT_H_
#define TMS_MSG_UR__SRV__G_SPEECH_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GSpeechSrv in the package tms_msg_ur.
typedef struct tms_msg_ur__srv__GSpeechSrv_Request
{
  uint8_t structure_needs_at_least_one_member;
} tms_msg_ur__srv__GSpeechSrv_Request;

// Struct for a sequence of tms_msg_ur__srv__GSpeechSrv_Request.
typedef struct tms_msg_ur__srv__GSpeechSrv_Request__Sequence
{
  tms_msg_ur__srv__GSpeechSrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ur__srv__GSpeechSrv_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/GSpeechSrv in the package tms_msg_ur.
typedef struct tms_msg_ur__srv__GSpeechSrv_Response
{
  rosidl_generator_c__String data;
  float value;
} tms_msg_ur__srv__GSpeechSrv_Response;

// Struct for a sequence of tms_msg_ur__srv__GSpeechSrv_Response.
typedef struct tms_msg_ur__srv__GSpeechSrv_Response__Sequence
{
  tms_msg_ur__srv__GSpeechSrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ur__srv__GSpeechSrv_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_UR__SRV__G_SPEECH_SRV__STRUCT_H_
