// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_db:srv/TmsdbPlanning.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_db/srv/tmsdb_planning__rosidl_typesupport_introspection_c.h"
#include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_db/srv/tmsdb_planning__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember TmsdbPlanning_Request__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_member_array[2] = {
  {
    "robotid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Request, robotid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objectid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Request, objectid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TmsdbPlanning_Request__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_members = {
  "tms_msg_db__srv",  // message namespace
  "TmsdbPlanning_Request",  // message name
  2,  // number of fields
  sizeof(tms_msg_db__srv__TmsdbPlanning_Request),
  TmsdbPlanning_Request__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TmsdbPlanning_Request__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_type_support_handle = {
  0,
  &TmsdbPlanning_Request__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbPlanning_Request)() {
  if (!TmsdbPlanning_Request__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_type_support_handle.typesupport_identifier) {
    TmsdbPlanning_Request__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TmsdbPlanning_Request__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_db/srv/tmsdb_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_planning__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember TmsdbPlanning_Response__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_member_array[12] = {
  {
    "robot_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, robot_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, robot_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, robot_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_th",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, robot_th),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wagon_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, wagon_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wagon_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, wagon_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wagon_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, wagon_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wagon_th",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, wagon_th),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, object_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, object_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, object_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_th",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbPlanning_Response, object_th),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TmsdbPlanning_Response__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_members = {
  "tms_msg_db__srv",  // message namespace
  "TmsdbPlanning_Response",  // message name
  12,  // number of fields
  sizeof(tms_msg_db__srv__TmsdbPlanning_Response),
  TmsdbPlanning_Response__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TmsdbPlanning_Response__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_type_support_handle = {
  0,
  &TmsdbPlanning_Response__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbPlanning_Response)() {
  if (!TmsdbPlanning_Response__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_type_support_handle.typesupport_identifier) {
    TmsdbPlanning_Response__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TmsdbPlanning_Response__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_planning__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_service_members = {
  "tms_msg_db__srv",  // service namespace
  "TmsdbPlanning",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_service_type_support_handle = {
  0,
  &tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbPlanning_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbPlanning_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbPlanning)() {
  if (!tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_service_type_support_handle.typesupport_identifier) {
    tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbPlanning_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbPlanning_Response)()->data;
  }

  return &tms_msg_db__srv__tmsdb_planning__rosidl_typesupport_introspection_c__TmsdbPlanning_service_type_support_handle;
}