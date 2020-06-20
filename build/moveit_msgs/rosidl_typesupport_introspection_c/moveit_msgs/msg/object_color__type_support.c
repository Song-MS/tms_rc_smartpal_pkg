// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/ObjectColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/object_color__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/object_color__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_generator_c/string_functions.h"
// Member `color`
#include "std_msgs/msg/color_rgba.h"
// Member `color`
#include "std_msgs/msg/color_rgba__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__ObjectColor, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__ObjectColor, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_members = {
  "moveit_msgs__msg",  // message namespace
  "ObjectColor",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__msg__ObjectColor),
  ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_type_support_handle = {
  0,
  &ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, ObjectColor)() {
  ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  if (!ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_type_support_handle.typesupport_identifier) {
    ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectColor__rosidl_typesupport_introspection_c__ObjectColor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
