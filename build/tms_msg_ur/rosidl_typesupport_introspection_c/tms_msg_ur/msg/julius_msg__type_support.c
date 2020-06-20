// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_ur:msg/JuliusMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_ur/msg/julius_msg__rosidl_typesupport_introspection_c.h"
#include "tms_msg_ur/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_ur/msg/julius_msg__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember JuliusMsg__rosidl_typesupport_introspection_c__JuliusMsg_message_member_array[2] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_ur__msg__JuliusMsg, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_ur__msg__JuliusMsg, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers JuliusMsg__rosidl_typesupport_introspection_c__JuliusMsg_message_members = {
  "tms_msg_ur__msg",  // message namespace
  "JuliusMsg",  // message name
  2,  // number of fields
  sizeof(tms_msg_ur__msg__JuliusMsg),
  JuliusMsg__rosidl_typesupport_introspection_c__JuliusMsg_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t JuliusMsg__rosidl_typesupport_introspection_c__JuliusMsg_message_type_support_handle = {
  0,
  &JuliusMsg__rosidl_typesupport_introspection_c__JuliusMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_ur
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, msg, JuliusMsg)() {
  if (!JuliusMsg__rosidl_typesupport_introspection_c__JuliusMsg_message_type_support_handle.typesupport_identifier) {
    JuliusMsg__rosidl_typesupport_introspection_c__JuliusMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &JuliusMsg__rosidl_typesupport_introspection_c__JuliusMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
