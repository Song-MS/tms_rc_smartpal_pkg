// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_db:srv/Tmsdbgetobjectsinfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_db/srv/tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c.h"
#include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_db/srv/tmsdbgetobjectsinfo__struct.h"


// Include directives for member types
// Member `rostime`
// Member `id`
// Member `x`
// Member `y`
// Member `z`
// Member `weight`
// Member `state`
// Member `place`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tmsdbgetobjectsinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_member_array[8] = {
  {
    "rostime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request, rostime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request, place),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tmsdbgetobjectsinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_members = {
  "tms_msg_db__srv",  // message namespace
  "Tmsdbgetobjectsinfo_Request",  // message name
  8,  // number of fields
  sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request),
  Tmsdbgetobjectsinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tmsdbgetobjectsinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_type_support_handle = {
  0,
  &Tmsdbgetobjectsinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetobjectsinfo_Request)() {
  if (!Tmsdbgetobjectsinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_type_support_handle.typesupport_identifier) {
    Tmsdbgetobjectsinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tmsdbgetobjectsinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_db/srv/tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetobjectsinfo__struct.h"


// Include directives for member types
// Member `rostime`
// Member `id`
// Member `x`
// Member `y`
// Member `z`
// Member `rr`
// Member `rp`
// Member `ry`
// Member `weight`
// Member `state`
// Member `place`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tmsdbgetobjectsinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_member_array[11] = {
  {
    "rostime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, rostime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, rr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, rp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, ry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "place",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response, place),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tmsdbgetobjectsinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_members = {
  "tms_msg_db__srv",  // message namespace
  "Tmsdbgetobjectsinfo_Response",  // message name
  11,  // number of fields
  sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response),
  Tmsdbgetobjectsinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tmsdbgetobjectsinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_type_support_handle = {
  0,
  &Tmsdbgetobjectsinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetobjectsinfo_Response)() {
  if (!Tmsdbgetobjectsinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_type_support_handle.typesupport_identifier) {
    Tmsdbgetobjectsinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tmsdbgetobjectsinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_service_members = {
  "tms_msg_db__srv",  // service namespace
  "Tmsdbgetobjectsinfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_service_type_support_handle = {
  0,
  &tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetobjectsinfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetobjectsinfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetobjectsinfo)() {
  if (!tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_service_type_support_handle.typesupport_identifier) {
    tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetobjectsinfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetobjectsinfo_Response)()->data;
  }

  return &tms_msg_db__srv__tmsdbgetobjectsinfo__rosidl_typesupport_introspection_c__Tmsdbgetobjectsinfo_service_type_support_handle;
}
