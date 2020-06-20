// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_recognition_msgs:msg/Table.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__TABLE__STRUCT_H_
#define OBJECT_RECOGNITION_MSGS__MSG__TABLE__STRUCT_H_

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
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'convex_hull'
#include "geometry_msgs/msg/point__struct.h"

// Struct defined in msg/Table in the package object_recognition_msgs.
typedef struct object_recognition_msgs__msg__Table
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Point__Sequence convex_hull;
} object_recognition_msgs__msg__Table;

// Struct for a sequence of object_recognition_msgs__msg__Table.
typedef struct object_recognition_msgs__msg__Table__Sequence
{
  object_recognition_msgs__msg__Table * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__msg__Table__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_RECOGNITION_MSGS__MSG__TABLE__STRUCT_H_
