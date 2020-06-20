// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_db:srv/Tmsdbgetunknownobject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_db/srv/tmsdbgetunknownobject__rosidl_typesupport_introspection_c.h"
#include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_db/srv/tmsdbgetunknownobject__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tmsdbgetunknownobject_Request__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_member_array[1] = {
  {
    "unknown_object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetunknownobject_Request, unknown_object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tmsdbgetunknownobject_Request__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_members = {
  "tms_msg_db__srv",  // message namespace
  "Tmsdbgetunknownobject_Request",  // message name
  1,  // number of fields
  sizeof(tms_msg_db__srv__Tmsdbgetunknownobject_Request),
  Tmsdbgetunknownobject_Request__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tmsdbgetunknownobject_Request__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_type_support_handle = {
  0,
  &Tmsdbgetunknownobject_Request__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetunknownobject_Request)() {
  if (!Tmsdbgetunknownobject_Request__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_type_support_handle.typesupport_identifier) {
    Tmsdbgetunknownobject_Request__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tmsdbgetunknownobject_Request__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_db/srv/tmsdbgetunknownobject__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetunknownobject__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tmsdbgetunknownobject_Response__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_member_array[3] = {
  {
    "unknown_object_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetunknownobject_Response, unknown_object_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unknown_object_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetunknownobject_Response, unknown_object_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unknown_object_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetunknownobject_Response, unknown_object_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tmsdbgetunknownobject_Response__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_members = {
  "tms_msg_db__srv",  // message namespace
  "Tmsdbgetunknownobject_Response",  // message name
  3,  // number of fields
  sizeof(tms_msg_db__srv__Tmsdbgetunknownobject_Response),
  Tmsdbgetunknownobject_Response__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tmsdbgetunknownobject_Response__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_type_support_handle = {
  0,
  &Tmsdbgetunknownobject_Response__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetunknownobject_Response)() {
  if (!Tmsdbgetunknownobject_Response__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_type_support_handle.typesupport_identifier) {
    Tmsdbgetunknownobject_Response__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tmsdbgetunknownobject_Response__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetunknownobject__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_service_members = {
  "tms_msg_db__srv",  // service namespace
  "Tmsdbgetunknownobject",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_service_type_support_handle = {
  0,
  &tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetunknownobject_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetunknownobject_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetunknownobject)() {
  if (!tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_service_type_support_handle.typesupport_identifier) {
    tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetunknownobject_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetunknownobject_Response)()->data;
  }

  return &tms_msg_db__srv__tmsdbgetunknownobject__rosidl_typesupport_introspection_c__Tmsdbgetunknownobject_service_type_support_handle;
}
