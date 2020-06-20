// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/WorkspaceParameters.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__WORKSPACE_PARAMETERS__STRUCT_H_
#define MOVEIT_MSGS__MSG__WORKSPACE_PARAMETERS__STRUCT_H_

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
// Member 'min_corner'
// Member 'max_corner'
#include "geometry_msgs/msg/vector3__struct.h"

// Struct defined in msg/WorkspaceParameters in the package moveit_msgs.
typedef struct moveit_msgs__msg__WorkspaceParameters
{
  std_msgs__msg__Header header;
  geometry_msgs__msg__Vector3 min_corner;
  geometry_msgs__msg__Vector3 max_corner;
} moveit_msgs__msg__WorkspaceParameters;

// Struct for a sequence of moveit_msgs__msg__WorkspaceParameters.
typedef struct moveit_msgs__msg__WorkspaceParameters__Sequence
{
  moveit_msgs__msg__WorkspaceParameters * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__WorkspaceParameters__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__WORKSPACE_PARAMETERS__STRUCT_H_
