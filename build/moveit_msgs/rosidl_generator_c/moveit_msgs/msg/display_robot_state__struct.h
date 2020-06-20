// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from moveit_msgs:msg/DisplayRobotState.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__DISPLAY_ROBOT_STATE__STRUCT_H_
#define MOVEIT_MSGS__MSG__DISPLAY_ROBOT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "moveit_msgs/msg/robot_state__struct.h"
// Member 'highlight_links'
#include "moveit_msgs/msg/object_color__struct.h"

// Struct defined in msg/DisplayRobotState in the package moveit_msgs.
typedef struct moveit_msgs__msg__DisplayRobotState
{
  moveit_msgs__msg__RobotState state;
  moveit_msgs__msg__ObjectColor__Sequence highlight_links;
  bool hide;
} moveit_msgs__msg__DisplayRobotState;

// Struct for a sequence of moveit_msgs__msg__DisplayRobotState.
typedef struct moveit_msgs__msg__DisplayRobotState__Sequence
{
  moveit_msgs__msg__DisplayRobotState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} moveit_msgs__msg__DisplayRobotState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOVEIT_MSGS__MSG__DISPLAY_ROBOT_STATE__STRUCT_H_
