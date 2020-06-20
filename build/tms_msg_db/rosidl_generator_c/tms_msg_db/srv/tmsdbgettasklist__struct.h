// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/Tmsdbgettasklist.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETTASKLIST__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDBGETTASKLIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Tmsdbgettasklist in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgettasklist_Request
{
  uint32_t task_id;
} tms_msg_db__srv__Tmsdbgettasklist_Request;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgettasklist_Request.
typedef struct tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence
{
  tms_msg_db__srv__Tmsdbgettasklist_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'task_name'
// Member 'sub_task'
// Member 'sensor'
// Member 'robot_func'
// Member 'sensor_func'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/Tmsdbgettasklist in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgettasklist_Response
{
  rosidl_generator_c__String task_name;
  uint32_t priority;
  uint64_t time;
  rosidl_generator_c__String sub_task;
  uint32_t robot_id;
  rosidl_generator_c__String sensor;
  rosidl_generator_c__String robot_func;
  rosidl_generator_c__String sensor_func;
} tms_msg_db__srv__Tmsdbgettasklist_Response;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgettasklist_Response.
typedef struct tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence
{
  tms_msg_db__srv__Tmsdbgettasklist_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDBGETTASKLIST__STRUCT_H_
