// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/TmsdbObjectsdata.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDB_OBJECTSDATA__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDB_OBJECTSDATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TmsdbObjectsdata in the package tms_msg_db.
typedef struct tms_msg_db__srv__TmsdbObjectsdata_Request
{
  uint64_t rostime;
  uint32_t id;
  float x;
  float y;
  float z;
  float theta;
  float weight;
  uint32_t state;
  uint32_t place;
} tms_msg_db__srv__TmsdbObjectsdata_Request;

// Struct for a sequence of tms_msg_db__srv__TmsdbObjectsdata_Request.
typedef struct tms_msg_db__srv__TmsdbObjectsdata_Request__Sequence
{
  tms_msg_db__srv__TmsdbObjectsdata_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__TmsdbObjectsdata_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/TmsdbObjectsdata in the package tms_msg_db.
typedef struct tms_msg_db__srv__TmsdbObjectsdata_Response
{
  uint32_t success;
  rosidl_generator_c__String message;
} tms_msg_db__srv__TmsdbObjectsdata_Response;

// Struct for a sequence of tms_msg_db__srv__TmsdbObjectsdata_Response.
typedef struct tms_msg_db__srv__TmsdbObjectsdata_Response__Sequence
{
  tms_msg_db__srv__TmsdbObjectsdata_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__TmsdbObjectsdata_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDB_OBJECTSDATA__STRUCT_H_
