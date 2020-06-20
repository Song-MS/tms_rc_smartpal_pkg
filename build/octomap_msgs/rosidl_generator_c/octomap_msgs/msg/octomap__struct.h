// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from octomap_msgs:msg/Octomap.idl
// generated code does not contain a copyright notice

#ifndef OCTOMAP_MSGS__MSG__OCTOMAP__STRUCT_H_
#define OCTOMAP_MSGS__MSG__OCTOMAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'id'
#include "rosidl_generator_c/string.h"
// Member 'data'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in msg/Octomap in the package octomap_msgs.
typedef struct octomap_msgs__msg__Octomap
{
  std_msgs__msg__Header header;
  bool binary;
  rosidl_generator_c__String id;
  double resolution;
  rosidl_generator_c__int8__Sequence data;
} octomap_msgs__msg__Octomap;

// Struct for a sequence of octomap_msgs__msg__Octomap.
typedef struct octomap_msgs__msg__Octomap__Sequence
{
  octomap_msgs__msg__Octomap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_msgs__msg__Octomap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCTOMAP_MSGS__MSG__OCTOMAP__STRUCT_H_
