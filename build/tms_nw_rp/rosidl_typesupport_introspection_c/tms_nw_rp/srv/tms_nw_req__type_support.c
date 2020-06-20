// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_nw_rp:srv/TmsNwReq.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_nw_rp/srv/tms_nw_req__rosidl_typesupport_introspection_c.h"
#include "tms_nw_rp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_nw_rp/srv/tms_nw_req__struct.h"


// Include directives for member types
// Member `url`
// Member `service_name`
// Member `service_type`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember TmsNwReq_Request__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_member_array[9] = {
  {
    "url",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, url),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "service_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, service_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "service_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, service_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "user_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, user_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, place_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Request, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TmsNwReq_Request__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_members = {
  "tms_nw_rp__srv",  // message namespace
  "TmsNwReq_Request",  // message name
  9,  // number of fields
  sizeof(tms_nw_rp__srv__TmsNwReq_Request),
  TmsNwReq_Request__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TmsNwReq_Request__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_type_support_handle = {
  0,
  &TmsNwReq_Request__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_nw_rp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_nw_rp, srv, TmsNwReq_Request)() {
  if (!TmsNwReq_Request__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_type_support_handle.typesupport_identifier) {
    TmsNwReq_Request__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TmsNwReq_Request__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_nw_rp/srv/tms_nw_req__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_nw_rp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_nw_rp/srv/tms_nw_req__struct.h"


// Include directives for member types
// Member `val`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember TmsNwReq_Response__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_member_array[2] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "val",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_nw_rp__srv__TmsNwReq_Response, val),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TmsNwReq_Response__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_members = {
  "tms_nw_rp__srv",  // message namespace
  "TmsNwReq_Response",  // message name
  2,  // number of fields
  sizeof(tms_nw_rp__srv__TmsNwReq_Response),
  TmsNwReq_Response__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TmsNwReq_Response__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_type_support_handle = {
  0,
  &TmsNwReq_Response__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_nw_rp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_nw_rp, srv, TmsNwReq_Response)() {
  if (!TmsNwReq_Response__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_type_support_handle.typesupport_identifier) {
    TmsNwReq_Response__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TmsNwReq_Response__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_nw_rp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_nw_rp/srv/tms_nw_req__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_service_members = {
  "tms_nw_rp__srv",  // service namespace
  "TmsNwReq",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_Request_message_type_support_handle,
  NULL  // response message
  // tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_service_type_support_handle = {
  0,
  &tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_nw_rp, srv, TmsNwReq_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_nw_rp, srv, TmsNwReq_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_nw_rp
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_nw_rp, srv, TmsNwReq)() {
  if (!tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_service_type_support_handle.typesupport_identifier) {
    tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_nw_rp, srv, TmsNwReq_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_nw_rp, srv, TmsNwReq_Response)()->data;
  }

  return &tms_nw_rp__srv__tms_nw_req__rosidl_typesupport_introspection_c__TmsNwReq_service_type_support_handle;
}
