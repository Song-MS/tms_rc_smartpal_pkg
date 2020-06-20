// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/ConstraintEvalResult.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__CONSTRAINT_EVAL_RESULT__STRUCT_H_
#define MOVEIT_MSGS__MSG__CONSTRAINT_EVAL_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/ConstraintEvalResult in the package moveit_msgs.
typedef struct moveit_msgs__msg__ConstraintEvalResult
{
  bool result;
  double distance;
} moveit_msgs__msg__ConstraintEvalResult;

// Struct for a sequence of moveit_msgs__msg__ConstraintEvalResult.
typedef struct moveit_msgs__msg__ConstraintEvalResult__Sequence
{
  moveit_msgs__msg__ConstraintEvalResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__ConstraintEvalResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__CONSTRAINT_EVAL_RESULT__STRUCT_H_
