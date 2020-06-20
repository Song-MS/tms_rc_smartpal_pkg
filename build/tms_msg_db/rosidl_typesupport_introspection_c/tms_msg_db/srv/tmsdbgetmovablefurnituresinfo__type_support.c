// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_db:srv/Tmsdbgetmovablefurnituresinfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c.h"
#include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tmsdbgetmovablefurnituresinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_member_array[1] = {
  {
    "furnitures_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request, furnitures_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tmsdbgetmovablefurnituresinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_members = {
  "tms_msg_db__srv",  // message namespace
  "Tmsdbgetmovablefurnituresinfo_Request",  // message name
  1,  // number of fields
  sizeof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request),
  Tmsdbgetmovablefurnituresinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tmsdbgetmovablefurnituresinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_type_support_handle = {
  0,
  &Tmsdbgetmovablefurnituresinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Request)() {
  if (!Tmsdbgetmovablefurnituresinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_type_support_handle.typesupport_identifier) {
    Tmsdbgetmovablefurnituresinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tmsdbgetmovablefurnituresinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tmsdbgetmovablefurnituresinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_member_array[10] = {
  {
    "rostime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, rostime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furniture_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furniture_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furniture_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furniture_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furniture_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furniture_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furnitures_theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furnitures_theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furnitures_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furnitures_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furnitures_depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furnitures_depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furnitures_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furnitures_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furnitures_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furnitures_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "furnitures_place",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response, furnitures_place),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tmsdbgetmovablefurnituresinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_members = {
  "tms_msg_db__srv",  // message namespace
  "Tmsdbgetmovablefurnituresinfo_Response",  // message name
  10,  // number of fields
  sizeof(tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response),
  Tmsdbgetmovablefurnituresinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tmsdbgetmovablefurnituresinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_type_support_handle = {
  0,
  &Tmsdbgetmovablefurnituresinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Response)() {
  if (!Tmsdbgetmovablefurnituresinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_type_support_handle.typesupport_identifier) {
    Tmsdbgetmovablefurnituresinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tmsdbgetmovablefurnituresinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_service_members = {
  "tms_msg_db__srv",  // service namespace
  "Tmsdbgetmovablefurnituresinfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_service_type_support_handle = {
  0,
  &tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo)() {
  if (!tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_service_type_support_handle.typesupport_identifier) {
    tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetmovablefurnituresinfo_Response)()->data;
  }

  return &tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__rosidl_typesupport_introspection_c__Tmsdbgetmovablefurnituresinfo_service_type_support_handle;
}
