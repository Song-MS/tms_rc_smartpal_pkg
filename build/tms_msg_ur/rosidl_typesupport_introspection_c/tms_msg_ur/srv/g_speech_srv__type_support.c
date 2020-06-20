// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_ur:srv/GSpeechSrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_ur/srv/g_speech_srv__rosidl_typesupport_introspection_c.h"
#include "tms_msg_ur/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_ur/srv/g_speech_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GSpeechSrv_Request__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_ur__srv__GSpeechSrv_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GSpeechSrv_Request__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_members = {
  "tms_msg_ur__srv",  // message namespace
  "GSpeechSrv_Request",  // message name
  1,  // number of fields
  sizeof(tms_msg_ur__srv__GSpeechSrv_Request),
  GSpeechSrv_Request__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GSpeechSrv_Request__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_type_support_handle = {
  0,
  &GSpeechSrv_Request__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_ur
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, GSpeechSrv_Request)() {
  if (!GSpeechSrv_Request__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_type_support_handle.typesupport_identifier) {
    GSpeechSrv_Request__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GSpeechSrv_Request__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_ur/srv/g_speech_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_ur/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_ur/srv/g_speech_srv__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GSpeechSrv_Response__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_member_array[2] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_ur__srv__GSpeechSrv_Response, data),  // bytes offset in struct
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
    offsetof(tms_msg_ur__srv__GSpeechSrv_Response, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GSpeechSrv_Response__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_members = {
  "tms_msg_ur__srv",  // message namespace
  "GSpeechSrv_Response",  // message name
  2,  // number of fields
  sizeof(tms_msg_ur__srv__GSpeechSrv_Response),
  GSpeechSrv_Response__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GSpeechSrv_Response__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_type_support_handle = {
  0,
  &GSpeechSrv_Response__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_ur
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, GSpeechSrv_Response)() {
  if (!GSpeechSrv_Response__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_type_support_handle.typesupport_identifier) {
    GSpeechSrv_Response__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GSpeechSrv_Response__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_ur/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_ur/srv/g_speech_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_service_members = {
  "tms_msg_ur__srv",  // service namespace
  "GSpeechSrv",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_service_type_support_handle = {
  0,
  &tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, GSpeechSrv_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, GSpeechSrv_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_ur
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, GSpeechSrv)() {
  if (!tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_service_type_support_handle.typesupport_identifier) {
    tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, GSpeechSrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_ur, srv, GSpeechSrv_Response)()->data;
  }

  return &tms_msg_ur__srv__g_speech_srv__rosidl_typesupport_introspection_c__GSpeechSrv_service_type_support_handle;
}
