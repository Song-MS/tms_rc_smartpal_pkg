// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/TmsdbGetData.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDB_GET_DATA__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDB_GET_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tmsdb'
#include "tms_msg_db/msg/tmsdb__struct.h"

// Struct defined in srv/TmsdbGetData in the package tms_msg_db.
typedef struct tms_msg_db__srv__TmsdbGetData_Request
{
  tms_msg_db__msg__Tmsdb tmsdb;
} tms_msg_db__srv__TmsdbGetData_Request;

// Struct for a sequence of tms_msg_db__srv__TmsdbGetData_Request.
typedef struct tms_msg_db__srv__TmsdbGetData_Request__Sequence
{
  tms_msg_db__srv__TmsdbGetData_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__TmsdbGetData_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'tmsdb'
// already included above
// #include "tms_msg_db/msg/tmsdb__struct.h"

// Struct defined in srv/TmsdbGetData in the package tms_msg_db.
typedef struct tms_msg_db__srv__TmsdbGetData_Response
{
  tms_msg_db__msg__Tmsdb__Sequence tmsdb;
} tms_msg_db__srv__TmsdbGetData_Response;

// Struct for a sequence of tms_msg_db__srv__TmsdbGetData_Response.
typedef struct tms_msg_db__srv__TmsdbGetData_Response__Sequence
{
  tms_msg_db__srv__TmsdbGetData_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__TmsdbGetData_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDB_GET_DATA__STRUCT_H_
