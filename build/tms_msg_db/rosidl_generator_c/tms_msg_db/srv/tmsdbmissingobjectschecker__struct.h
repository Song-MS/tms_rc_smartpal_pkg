// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/Tmsdbmissingobjectschecker.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBMISSINGOBJECTSCHECKER__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDBMISSINGOBJECTSCHECKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects_id'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/Tmsdbmissingobjectschecker in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbmissingobjectschecker_Request
{
  rosidl_generator_c__uint32__Sequence objects_id;
} tms_msg_db__srv__Tmsdbmissingobjectschecker_Request;

// Struct for a sequence of tms_msg_db__srv__Tmsdbmissingobjectschecker_Request.
typedef struct tms_msg_db__srv__Tmsdbmissingobjectschecker_Request__Sequence
{
  tms_msg_db__srv__Tmsdbmissingobjectschecker_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbmissingobjectschecker_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'missing_objects_id'
// Member 'missing_objects_time'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/Tmsdbmissingobjectschecker in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbmissingobjectschecker_Response
{
  rosidl_generator_c__uint32__Sequence missing_objects_id;
  rosidl_generator_c__uint64__Sequence missing_objects_time;
} tms_msg_db__srv__Tmsdbmissingobjectschecker_Response;

// Struct for a sequence of tms_msg_db__srv__Tmsdbmissingobjectschecker_Response.
typedef struct tms_msg_db__srv__Tmsdbmissingobjectschecker_Response__Sequence
{
  tms_msg_db__srv__Tmsdbmissingobjectschecker_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbmissingobjectschecker_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDBMISSINGOBJECTSCHECKER__STRUCT_H_
