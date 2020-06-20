// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/Constraints.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__CONSTRAINTS__STRUCT_H_
#define MOVEIT_MSGS__MSG__CONSTRAINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_generator_c/string.h"
// Member 'joint_constraints'
#include "moveit_msgs/msg/joint_constraint__struct.h"
// Member 'position_constraints'
#include "moveit_msgs/msg/position_constraint__struct.h"
// Member 'orientation_constraints'
#include "moveit_msgs/msg/orientation_constraint__struct.h"
// Member 'visibility_constraints'
#include "moveit_msgs/msg/visibility_constraint__struct.h"

// Struct defined in msg/Constraints in the package moveit_msgs.
typedef struct moveit_msgs__msg__Constraints
{
  rosidl_generator_c__String name;
  moveit_msgs__msg__JointConstraint__Sequence joint_constraints;
  moveit_msgs__msg__PositionConstraint__Sequence position_constraints;
  moveit_msgs__msg__OrientationConstraint__Sequence orientation_constraints;
  moveit_msgs__msg__VisibilityConstraint__Sequence visibility_constraints;
} moveit_msgs__msg__Constraints;

// Struct for a sequence of moveit_msgs__msg__Constraints.
typedef struct moveit_msgs__msg__Constraints__Sequence
{
  moveit_msgs__msg__Constraints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__Constraints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__CONSTRAINTS__STRUCT_H_
