// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from octomap_msgs:srv/BoundingBoxQuery.idl
// generated code does not contain a copyright notice

#ifndef OCTOMAP_MSGS__SRV__BOUNDING_BOX_QUERY__STRUCT_H_
#define OCTOMAP_MSGS__SRV__BOUNDING_BOX_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'min'
// Member 'max'
#include "geometry_msgs/msg/point__struct.h"

// Struct defined in srv/BoundingBoxQuery in the package octomap_msgs.
typedef struct octomap_msgs__srv__BoundingBoxQuery_Request
{
  geometry_msgs__msg__Point min;
  geometry_msgs__msg__Point max;
} octomap_msgs__srv__BoundingBoxQuery_Request;

// Struct for a sequence of octomap_msgs__srv__BoundingBoxQuery_Request.
typedef struct octomap_msgs__srv__BoundingBoxQuery_Request__Sequence
{
  octomap_msgs__srv__BoundingBoxQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_msgs__srv__BoundingBoxQuery_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/BoundingBoxQuery in the package octomap_msgs.
typedef struct octomap_msgs__srv__BoundingBoxQuery_Response
{
  uint8_t structure_needs_at_least_one_member;
} octomap_msgs__srv__BoundingBoxQuery_Response;

// Struct for a sequence of octomap_msgs__srv__BoundingBoxQuery_Response.
typedef struct octomap_msgs__srv__BoundingBoxQuery_Response__Sequence
{
  octomap_msgs__srv__BoundingBoxQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} octomap_msgs__srv__BoundingBoxQuery_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCTOMAP_MSGS__SRV__BOUNDING_BOX_QUERY__STRUCT_H_
