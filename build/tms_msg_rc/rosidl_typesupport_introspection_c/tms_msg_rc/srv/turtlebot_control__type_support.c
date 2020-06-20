// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_rc:srv/TurtlebotControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_rc/srv/turtlebot_control__rosidl_typesupport_introspection_c.h"
#include "tms_msg_rc/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_rc/srv/turtlebot_control__struct.h"


// Include directives for member types
// Member `arg`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember TurtlebotControl_Request__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_member_array[3] = {
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_rc__srv__TurtlebotControl_Request, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_rc__srv__TurtlebotControl_Request, cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_rc__srv__TurtlebotControl_Request, arg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtlebotControl_Request__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_members = {
  "tms_msg_rc__srv",  // message namespace
  "TurtlebotControl_Request",  // message name
  3,  // number of fields
  sizeof(tms_msg_rc__srv__TurtlebotControl_Request),
  TurtlebotControl_Request__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtlebotControl_Request__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_type_support_handle = {
  0,
  &TurtlebotControl_Request__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_rc
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_rc, srv, TurtlebotControl_Request)() {
  if (!TurtlebotControl_Request__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_type_support_handle.typesupport_identifier) {
    TurtlebotControl_Request__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtlebotControl_Request__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_rc/srv/turtlebot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_rc/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_rc/srv/turtlebot_control__struct.h"


// Include directives for member types
// Member `val`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember TurtlebotControl_Response__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_rc__srv__TurtlebotControl_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "val",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_rc__srv__TurtlebotControl_Response, val),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TurtlebotControl_Response__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_members = {
  "tms_msg_rc__srv",  // message namespace
  "TurtlebotControl_Response",  // message name
  2,  // number of fields
  sizeof(tms_msg_rc__srv__TurtlebotControl_Response),
  TurtlebotControl_Response__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TurtlebotControl_Response__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_type_support_handle = {
  0,
  &TurtlebotControl_Response__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_rc
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_rc, srv, TurtlebotControl_Response)() {
  if (!TurtlebotControl_Response__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_type_support_handle.typesupport_identifier) {
    TurtlebotControl_Response__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TurtlebotControl_Response__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_rc/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_rc/srv/turtlebot_control__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_service_members = {
  "tms_msg_rc__srv",  // service namespace
  "TurtlebotControl",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_service_type_support_handle = {
  0,
  &tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_rc, srv, TurtlebotControl_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_rc, srv, TurtlebotControl_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_rc
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_rc, srv, TurtlebotControl)() {
  if (!tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_service_type_support_handle.typesupport_identifier) {
    tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_rc, srv, TurtlebotControl_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_rc, srv, TurtlebotControl_Response)()->data;
  }

  return &tms_msg_rc__srv__turtlebot_control__rosidl_typesupport_introspection_c__TurtlebotControl_service_type_support_handle;
}
