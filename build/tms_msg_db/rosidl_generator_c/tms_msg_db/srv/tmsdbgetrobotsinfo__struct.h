// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/Tmsdbgetrobotsinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETROBOTSINFO__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDBGETROBOTSINFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Tmsdbgetrobotsinfo in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgetrobotsinfo_Request
{
  uint32_t robots_id;
} tms_msg_db__srv__Tmsdbgetrobotsinfo_Request;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgetrobotsinfo_Request.
typedef struct tms_msg_db__srv__Tmsdbgetrobotsinfo_Request__Sequence
{
  tms_msg_db__srv__Tmsdbgetrobotsinfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgetrobotsinfo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Tmsdbgetrobotsinfo in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgetrobotsinfo_Response
{
  uint64_t rostime;
  float robots_x;
  float robots_y;
  float robots_z;
  float robots_theta;
  uint32_t robots_state;
  uint32_t robots_place;
} tms_msg_db__srv__Tmsdbgetrobotsinfo_Response;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgetrobotsinfo_Response.
typedef struct tms_msg_db__srv__Tmsdbgetrobotsinfo_Response__Sequence
{
  tms_msg_db__srv__Tmsdbgetrobotsinfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgetrobotsinfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDBGETROBOTSINFO__STRUCT_H_
