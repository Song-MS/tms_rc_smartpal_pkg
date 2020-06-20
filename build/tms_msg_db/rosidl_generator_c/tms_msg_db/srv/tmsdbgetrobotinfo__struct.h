// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/Tmsdbgetrobotinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETROBOTINFO__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDBGETROBOTINFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/Tmsdbgetrobotinfo in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgetrobotinfo_Request
{
  rosidl_generator_c__uint32__Sequence id;
} tms_msg_db__srv__Tmsdbgetrobotinfo_Request;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgetrobotinfo_Request.
typedef struct tms_msg_db__srv__Tmsdbgetrobotinfo_Request__Sequence
{
  tms_msg_db__srv__Tmsdbgetrobotinfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgetrobotinfo_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'rostime'
// Member 'id'
// Member 'x'
// Member 'y'
// Member 'z'
// Member 'theta'
// Member 'joint_waist_low'
// Member 'joint_waist_high'
// Member 'joint_arm_right_1'
// Member 'joint_arm_right_2'
// Member 'joint_arm_right_3'
// Member 'joint_arm_right_4'
// Member 'joint_arm_right_5'
// Member 'joint_arm_right_6'
// Member 'joint_arm_right_7'
// Member 'joint_arm_right_g'
// Member 'joint_arm_left_1'
// Member 'joint_arm_left_2'
// Member 'joint_arm_left_3'
// Member 'joint_arm_left_4'
// Member 'joint_arm_left_5'
// Member 'joint_arm_left_6'
// Member 'joint_arm_left_7'
// Member 'joint_arm_left_g'
// Member 'state'
// Member 'place'
// already included above
// #include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in srv/Tmsdbgetrobotinfo in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgetrobotinfo_Response
{
  rosidl_generator_c__uint64__Sequence rostime;
  rosidl_generator_c__uint32__Sequence id;
  rosidl_generator_c__float__Sequence x;
  rosidl_generator_c__float__Sequence y;
  rosidl_generator_c__float__Sequence z;
  rosidl_generator_c__float__Sequence theta;
  rosidl_generator_c__float__Sequence joint_waist_low;
  rosidl_generator_c__float__Sequence joint_waist_high;
  rosidl_generator_c__float__Sequence joint_arm_right_1;
  rosidl_generator_c__float__Sequence joint_arm_right_2;
  rosidl_generator_c__float__Sequence joint_arm_right_3;
  rosidl_generator_c__float__Sequence joint_arm_right_4;
  rosidl_generator_c__float__Sequence joint_arm_right_5;
  rosidl_generator_c__float__Sequence joint_arm_right_6;
  rosidl_generator_c__float__Sequence joint_arm_right_7;
  rosidl_generator_c__float__Sequence joint_arm_right_g;
  rosidl_generator_c__float__Sequence joint_arm_left_1;
  rosidl_generator_c__float__Sequence joint_arm_left_2;
  rosidl_generator_c__float__Sequence joint_arm_left_3;
  rosidl_generator_c__float__Sequence joint_arm_left_4;
  rosidl_generator_c__float__Sequence joint_arm_left_5;
  rosidl_generator_c__float__Sequence joint_arm_left_6;
  rosidl_generator_c__float__Sequence joint_arm_left_7;
  rosidl_generator_c__float__Sequence joint_arm_left_g;
  rosidl_generator_c__uint32__Sequence state;
  rosidl_generator_c__uint32__Sequence place;
} tms_msg_db__srv__Tmsdbgetrobotinfo_Response;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgetrobotinfo_Response.
typedef struct tms_msg_db__srv__Tmsdbgetrobotinfo_Response__Sequence
{
  tms_msg_db__srv__Tmsdbgetrobotinfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgetrobotinfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDBGETROBOTINFO__STRUCT_H_
