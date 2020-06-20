// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/Tmsdbgetmovablefurnituresinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETMOVABLEFURNITURESINFO__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDBGETMOVABLEFURNITURESINFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Tmsdbgetmovablefurnituresinfo in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request
{
  uint32_t furnitures_id;
} tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request.
typedef struct tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request__Sequence
{
  tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Tmsdbgetmovablefurnituresinfo in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response
{
  uint64_t rostime;
  float furniture_x;
  float furniture_y;
  float furniture_z;
  float furnitures_theta;
  float furnitures_width;
  float furnitures_depth;
  float furnitures_height;
  uint32_t furnitures_state;
  uint32_t furnitures_place;
} tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response;

// Struct for a sequence of tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response.
typedef struct tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response__Sequence
{
  tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDBGETMOVABLEFURNITURESINFO__STRUCT_H_
