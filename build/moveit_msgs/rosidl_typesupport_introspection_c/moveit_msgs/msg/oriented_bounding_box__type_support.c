// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/OrientedBoundingBox.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/oriented_bounding_box__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/oriented_bounding_box__struct.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"
// Member `extents`
#include "geometry_msgs/msg/point32.h"
// Member `extents`
#include "geometry_msgs/msg/point32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_member_array[2] = {
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__OrientedBoundingBox, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extents",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__OrientedBoundingBox, extents),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_members = {
  "moveit_msgs__msg",  // message namespace
  "OrientedBoundingBox",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__msg__OrientedBoundingBox),
  OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_type_support_handle = {
  0,
  &OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, OrientedBoundingBox)() {
  OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point32)();
  if (!OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_type_support_handle.typesupport_identifier) {
    OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OrientedBoundingBox__rosidl_typesupport_introspection_c__OrientedBoundingBox_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
