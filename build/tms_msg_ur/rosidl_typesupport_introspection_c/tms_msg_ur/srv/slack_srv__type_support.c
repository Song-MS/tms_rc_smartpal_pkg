// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_ur:srv/SlackSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_ur/srv/slack_srv__rosidl_typesupport_introspection_c.h"
#include "tms_msg_ur/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_ur/srv/slack_srv__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SlackSrv_Request__rosidl_typesupport_introspection_c__SlackSrv_Request_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_ur__srv__SlackSrv_Request, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SlackSrv_Request__rosidl_typesupport_introspection_c__SlackSrv_Request_message_members = {
  "tms_msg_ur__srv",  // message namespace
  "SlackSrv_Request",  // message name
  1,  // number of fields
  sizeof(tms_msg_ur__srv__SlackSrv_Request),
  SlackSrv_Request__rosidl_typesupport_introspection_c__SlackSrv_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SlackSrv_Request__rosidl_typesupport_introspection_c__SlackSrv_Request_message_type_support_handle = {
  0,
  &SlackSrv_Request__rosidl_typesupport_introspection_c__SlackSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_ur
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, SlackSrv_Request)() {
  if (!SlackSrv_Request__rosidl_typesupport_introspection_c__SlackSrv_Request_message_type_support_handle.typesupport_identifier) {
    SlackSrv_Request__rosidl_typesupport_introspection_c__SlackSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SlackSrv_Request__rosidl_typesupport_introspection_c__SlackSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_ur/srv/slack_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_ur/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_ur/srv/slack_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SlackSrv_Response__rosidl_typesupport_introspection_c__SlackSrv_Response_message_member_array[1] = {
  {
    "sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_ur__srv__SlackSrv_Response, sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SlackSrv_Response__rosidl_typesupport_introspection_c__SlackSrv_Response_message_members = {
  "tms_msg_ur__srv",  // message namespace
  "SlackSrv_Response",  // message name
  1,  // number of fields
  sizeof(tms_msg_ur__srv__SlackSrv_Response),
  SlackSrv_Response__rosidl_typesupport_introspection_c__SlackSrv_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SlackSrv_Response__rosidl_typesupport_introspection_c__SlackSrv_Response_message_type_support_handle = {
  0,
  &SlackSrv_Response__rosidl_typesupport_introspection_c__SlackSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_ur
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, SlackSrv_Response)() {
  if (!SlackSrv_Response__rosidl_typesupport_introspection_c__SlackSrv_Response_message_type_support_handle.typesupport_identifier) {
    SlackSrv_Response__rosidl_typesupport_introspection_c__SlackSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SlackSrv_Response__rosidl_typesupport_introspection_c__SlackSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_ur/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_ur/srv/slack_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_service_members = {
  "tms_msg_ur__srv",  // service namespace
  "SlackSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_service_type_support_handle = {
  0,
  &tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, SlackSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, SlackSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_ur
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, SlackSrv)() {
  if (!tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_service_type_support_handle.typesupport_identifier) {
    tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, SlackSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, SlackSrv_Response)()->data;
  }

  return &tms_msg_ur__srv__slack_srv__rosidl_typesupport_introspection_c__SlackSrv_service_type_support_handle;
}
