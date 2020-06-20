// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/Tmsdbgetpersoninfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rostime'
// Member 'id'
// Member 'x'
// Member 'y'
// Member 'z'
// Member 'theta'
// Member 'state'
// Member 'place'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/Tmsdbgetpersoninfo in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgetpersoninfo_Request
{
  rosidl_generator_c__uint64__Sequence rostime;
  rosidl_generator_c__uint32__Sequence id;
  rosidl_generator_c__float__Sequence x;
  rosidl_generator_c__float__Sequence y;
  rosidl_generator_c__float__Sequence z;
  rosidl_generator_c__float__Sequence theta;
  rosidl_generator_c__uint32__Sequence state;
  rosidl_generator_c__uint32__Sequence place;
} tms_msg_db__srv__Tmsdbgetpersoninfo_Request;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgetpersoninfo_Request.
typedef struct tms_msg_db__srv__Tmsdbgetpersoninfo_Request__Sequence
{
  tms_msg_db__srv__Tmsdbgetpersoninfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgetpersoninfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'rostime'
// Member 'id'
// Member 'x'
// Member 'y'
// Member 'z'
// Member 'theta'
// Member 'state'
// Member 'place'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/Tmsdbgetpersoninfo in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgetpersoninfo_Response
{
  rosidl_generator_c__uint64__Sequence rostime;
  rosidl_generator_c__uint32__Sequence id;
  rosidl_generator_c__float__Sequence x;
  rosidl_generator_c__float__Sequence y;
  rosidl_generator_c__float__Sequence z;
  rosidl_generator_c__float__Sequence theta;
  rosidl_generator_c__uint32__Sequence state;
  rosidl_generator_c__uint32__Sequence place;
} tms_msg_db__srv__Tmsdbgetpersoninfo_Response;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgetpersoninfo_Response.
typedef struct tms_msg_db__srv__Tmsdbgetpersoninfo_Response__Sequence
{
  tms_msg_db__srv__Tmsdbgetpersoninfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgetpersoninfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__STRUCT_H_
