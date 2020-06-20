// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/PositionConstraint.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__POSITION_CONSTRAINT__STRUCT_H_
#define MOVEIT_MSGS__MSG__POSITION_CONSTRAINT__STRUCT_H_

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
// Member 'link_name'
#include "rosidl_generator_c/string.h"
// Member 'target_point_offset'
#include "geometry_msgs/msg/vector3__struct.h"
// Member 'constraint_region'
#include "moveit_msgs/msg/bounding_volume__struct.h"

// Struct defined in msg/PositionConstraint in the package moveit_msgs.
typedef struct moveit_msgs__msg__PositionConstraint
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String link_name;
  geometry_msgs__msg__Vector3 target_point_offset;
  moveit_msgs__msg__BoundingVolume constraint_region;
  double weight;
} moveit_msgs__msg__PositionConstraint;

// Struct for a sequence of moveit_msgs__msg__PositionConstraint.
typedef struct moveit_msgs__msg__PositionConstraint__Sequence
{
  moveit_msgs__msg__PositionConstraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__PositionConstraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__POSITION_CONSTRAINT__STRUCT_H_
