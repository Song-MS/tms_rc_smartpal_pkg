// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from octomap_msgs:msg/OctomapWithPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "octomap_msgs/msg/octomap_with_pose__rosidl_typesupport_introspection_c.h"
#include "octomap_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "octomap_msgs/msg/octomap_with_pose__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `origin`
#include "geometry_msgs/msg/pose.h"
// Member `origin`
#include "geometry_msgs/msg/pose__rosidl_typesupport_introspection_c.h"
// Member `octomap`
#include "octomap_msgs/msg/octomap.h"
// Member `octomap`
#include "octomap_msgs/msg/octomap__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(octomap_msgs__msg__OctomapWithPose, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(octomap_msgs__msg__OctomapWithPose, origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "octomap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(octomap_msgs__msg__OctomapWithPose, octomap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_members = {
  "octomap_msgs__msg",  // message namespace
  "OctomapWithPose",  // message name
  3,  // number of fields
  sizeof(octomap_msgs__msg__OctomapWithPose),
  OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_type_support_handle = {
  0,
  &OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_octomap_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_msgs, msg, OctomapWithPose)() {
  OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, octomap_msgs, msg, Octomap)();
  if (!OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_type_support_handle.typesupport_identifier) {
    OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &OctomapWithPose__rosidl_typesupport_introspection_c__OctomapWithPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
