// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_recognition_msgs:msg/TableArray.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__STRUCT_H_
#define OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__STRUCT_H_

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
// Member 'tables'
#include "object_recognition_msgs/msg/table__struct.h"

// Struct defined in msg/TableArray in the package object_recognition_msgs.
typedef struct object_recognition_msgs__msg__TableArray
{
  std_msgs__msg__Header header;
  object_recognition_msgs__msg__Table__Sequence tables;
} object_recognition_msgs__msg__TableArray;

// Struct for a sequence of object_recognition_msgs__msg__TableArray.
typedef struct object_recognition_msgs__msg__TableArray__Sequence
{
  object_recognition_msgs__msg__TableArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__msg__TableArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__STRUCT_H_
