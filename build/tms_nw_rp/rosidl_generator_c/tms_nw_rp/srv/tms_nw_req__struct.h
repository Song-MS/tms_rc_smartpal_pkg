// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_nw_rp:srv/TmsNwReq.idl
// generated code does not contain a copyright notice

#ifndef TMS_NW_RP__SRV__TMS_NW_REQ__STRUCT_H_
#define TMS_NW_RP__SRV__TMS_NW_REQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'url'
// Member 'service_name'
// Member 'service_type'
#include "rosidl_generator_c/string.h"

// Struct defined in srv/TmsNwReq in the package tms_nw_rp.
typedef struct tms_nw_rp__srv__TmsNwReq_Request
{
  rosidl_generator_c__String url;
  rosidl_generator_c__String service_name;
  rosidl_generator_c__String service_type;
  int32_t task_id;
  int32_t robot_id;
  int32_t object_id;
  int32_t user_id;
  int32_t place_id;
  int32_t priority;
} tms_nw_rp__srv__TmsNwReq_Request;

// Struct for a sequence of tms_nw_rp__srv__TmsNwReq_Request.
typedef struct tms_nw_rp__srv__TmsNwReq_Request__Sequence
{
  tms_nw_rp__srv__TmsNwReq_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_nw_rp__srv__TmsNwReq_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'val'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/TmsNwReq in the package tms_nw_rp.
typedef struct tms_nw_rp__srv__TmsNwReq_Response
{
  int32_t result;
  rosidl_generator_c__float__Sequence val;
} tms_nw_rp__srv__TmsNwReq_Response;

// Struct for a sequence of tms_nw_rp__srv__TmsNwReq_Response.
typedef struct tms_nw_rp__srv__TmsNwReq_Response__Sequence
{
  tms_nw_rp__srv__TmsNwReq_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_nw_rp__srv__TmsNwReq_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_NW_RP__SRV__TMS_NW_REQ__STRUCT_H_
