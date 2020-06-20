// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_rc:srv/TurtlebotControl.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_RC__SRV__TURTLEBOT_CONTROL__STRUCT_H_
#define TMS_MSG_RC__SRV__TURTLEBOT_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arg'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/TurtlebotControl in the package tms_msg_rc.
typedef struct tms_msg_rc__srv__TurtlebotControl_Request
{
  int8_t unit;
  int8_t cmd;
  rosidl_generator_c__double__Sequence arg;
} tms_msg_rc__srv__TurtlebotControl_Request;

// Struct for a sequence of tms_msg_rc__srv__TurtlebotControl_Request.
typedef struct tms_msg_rc__srv__TurtlebotControl_Request__Sequence
{
  tms_msg_rc__srv__TurtlebotControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_rc__srv__TurtlebotControl_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'val'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/TurtlebotControl in the package tms_msg_rc.
typedef struct tms_msg_rc__srv__TurtlebotControl_Response
{
  int8_t result;
  rosidl_generator_c__double__Sequence val;
} tms_msg_rc__srv__TurtlebotControl_Response;

// Struct for a sequence of tms_msg_rc__srv__TurtlebotControl_Response.
typedef struct tms_msg_rc__srv__TurtlebotControl_Response__Sequence
{
  tms_msg_rc__srv__TurtlebotControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_rc__srv__TurtlebotControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_RC__SRV__TURTLEBOT_CONTROL__STRUCT_H_
