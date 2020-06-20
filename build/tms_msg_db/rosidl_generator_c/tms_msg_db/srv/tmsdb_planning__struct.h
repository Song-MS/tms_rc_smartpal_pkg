// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/TmsdbPlanning.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDB_PLANNING__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDB_PLANNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TmsdbPlanning in the package tms_msg_db.
typedef struct tms_msg_db__srv__TmsdbPlanning_Request
{
  uint32_t robotid;
  uint32_t objectid;
} tms_msg_db__srv__TmsdbPlanning_Request;

// Struct for a sequence of tms_msg_db__srv__TmsdbPlanning_Request.
typedef struct tms_msg_db__srv__TmsdbPlanning_Request__Sequence
{
  tms_msg_db__srv__TmsdbPlanning_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__TmsdbPlanning_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TmsdbPlanning in the package tms_msg_db.
typedef struct tms_msg_db__srv__TmsdbPlanning_Response
{
  float robot_x;
  float robot_y;
  float robot_z;
  float robot_th;
  float wagon_x;
  float wagon_y;
  float wagon_z;
  float wagon_th;
  float object_x;
  float object_y;
  float object_z;
  float object_th;
} tms_msg_db__srv__TmsdbPlanning_Response;

// Struct for a sequence of tms_msg_db__srv__TmsdbPlanning_Response.
typedef struct tms_msg_db__srv__TmsdbPlanning_Response__Sequence
{
  tms_msg_db__srv__TmsdbPlanning_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__TmsdbPlanning_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDB_PLANNING__STRUCT_H_
