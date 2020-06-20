// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__COLLISION_OBJECT__STRUCT_H_
#define MOVEIT_MSGS__MSG__COLLISION_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ADD'.
enum
{
  moveit_msgs__msg__CollisionObject__ADD = 0
};

/// Constant 'REMOVE'.
enum
{
  moveit_msgs__msg__CollisionObject__REMOVE = 1
};

/// Constant 'APPEND'.
enum
{
  moveit_msgs__msg__CollisionObject__APPEND = 2
};

/// Constant 'MOVE'.
enum
{
  moveit_msgs__msg__CollisionObject__MOVE = 3
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'id'
// Member 'subframe_names'
#include "rosidl_generator_c/string.h"
// Member 'type'
#include "object_recognition_msgs/msg/object_type__struct.h"
// Member 'primitives'
#include "shape_msgs/msg/solid_primitive__struct.h"
// Member 'primitive_poses'
// Member 'mesh_poses'
// Member 'plane_poses'
// Member 'subframe_poses'
#include "geometry_msgs/msg/pose__struct.h"
// Member 'meshes'
#include "shape_msgs/msg/mesh__struct.h"
// Member 'planes'
#include "shape_msgs/msg/plane__struct.h"

// Struct defined in msg/CollisionObject in the package moveit_msgs.
typedef struct moveit_msgs__msg__CollisionObject
{
  std_msgs__msg__Header header;
  rosidl_generator_c__String id;
  object_recognition_msgs__msg__ObjectType type;
  shape_msgs__msg__SolidPrimitive__Sequence primitives;
  geometry_msgs__msg__Pose__Sequence primitive_poses;
  shape_msgs__msg__Mesh__Sequence meshes;
  geometry_msgs__msg__Pose__Sequence mesh_poses;
  shape_msgs__msg__Plane__Sequence planes;
  geometry_msgs__msg__Pose__Sequence plane_poses;
  rosidl_generator_c__String__Sequence subframe_names;
  geometry_msgs__msg__Pose__Sequence subframe_poses;
  uint8_t operation;
} moveit_msgs__msg__CollisionObject;

// Struct for a sequence of moveit_msgs__msg__CollisionObject.
typedef struct moveit_msgs__msg__CollisionObject__Sequence
{
  moveit_msgs__msg__CollisionObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__CollisionObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__COLLISION_OBJECT__STRUCT_H_
