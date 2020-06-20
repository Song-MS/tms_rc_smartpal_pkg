// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_ts:srv/TmsSaFindObjects.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__STRUCT_H_
#define TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'search_furnitures_id'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/TmsSaFindObjects in the package tms_msg_ts.
typedef struct tms_msg_ts__srv__TmsSaFindObjects_Request
{
  rosidl_generator_c__uint32__Sequence search_furnitures_id;
} tms_msg_ts__srv__TmsSaFindObjects_Request;

// Struct for a sequence of tms_msg_ts__srv__TmsSaFindObjects_Request.
typedef struct tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence
{
  tms_msg_ts__srv__TmsSaFindObjects_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_generator_c/string.h"
// Member 'object_id'
// Member 'object_x'
// Member 'object_y'
// Member 'object_z'
// Member 'furnitures_id'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/TmsSaFindObjects in the package tms_msg_ts.
typedef struct tms_msg_ts__srv__TmsSaFindObjects_Response
{
  uint32_t success;
  rosidl_generator_c__String message;
  rosidl_generator_c__uint32__Sequence object_id;
  rosidl_generator_c__float__Sequence object_x;
  rosidl_generator_c__float__Sequence object_y;
  rosidl_generator_c__float__Sequence object_z;
  rosidl_generator_c__uint32__Sequence furnitures_id;
} tms_msg_ts__srv__TmsSaFindObjects_Response;

// Struct for a sequence of tms_msg_ts__srv__TmsSaFindObjects_Response.
typedef struct tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence
{
  tms_msg_ts__srv__TmsSaFindObjects_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__STRUCT_H_
