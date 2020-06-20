// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tms_msg_db:srv/Tmsdbfileconservation.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBFILECONSERVATION__STRUCT_H_
#define TMS_MSG_DB__SRV__TMSDBFILECONSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filename'
#include "rosidl_generator_c/string.h"
// Member 'cloud'
#include "sensor_msgs/msg/point_cloud2__struct.h"

// Struct defined in srv/Tmsdbfileconservation in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbfileconservation_Request
{
  uint64_t rostime;
  uint32_t id;
  rosidl_generator_c__String filename;
  float get_x;
  float get_y;
  float get_z;
  float get_theta;
  uint32_t get_place;
  sensor_msgs__msg__PointCloud2 cloud;
} tms_msg_db__srv__Tmsdbfileconservation_Request;

// Struct for a sequence of tms_msg_db__srv__Tmsdbfileconservation_Request.
typedef struct tms_msg_db__srv__Tmsdbfileconservation_Request__Sequence
{
  tms_msg_db__srv__Tmsdbfileconservation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbfileconservation_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_generator_c/string.h"

// Struct defined in srv/Tmsdbfileconservation in the package tms_msg_db.
typedef struct tms_msg_db__srv__Tmsdbfileconservation_Response
{
  uint32_t success;
  rosidl_generator_c__String message;
} tms_msg_db__srv__Tmsdbfileconservation_Response;

// Struct for a sequence of tms_msg_db__srv__Tmsdbfileconservation_Response.
typedef struct tms_msg_db__srv__Tmsdbfileconservation_Response__Sequence
{
  tms_msg_db__srv__Tmsdbfileconservation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tms_msg_db__srv__Tmsdbfileconservation_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TMS_MSG_DB__SRV__TMSDBFILECONSERVATION__STRUCT_H_
