// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_recognition_msgs:msg/ObjectType.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__OBJECT_TYPE__STRUCT_H_
#define OBJECT_RECOGNITION_MSGS__MSG__OBJECT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'db'
#include "rosidl_generator_c/string.h"

// Struct defined in msg/ObjectType in the package object_recognition_msgs.
typedef struct object_recognition_msgs__msg__ObjectType
{
  rosidl_generator_c__String key;
  rosidl_generator_c__String db;
} object_recognition_msgs__msg__ObjectType;

// Struct for a sequence of object_recognition_msgs__msg__ObjectType.
typedef struct object_recognition_msgs__msg__ObjectType__Sequence
{
  object_recognition_msgs__msg__ObjectType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__msg__ObjectType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_RECOGNITION_MSGS__MSG__OBJECT_TYPE__STRUCT_H_
