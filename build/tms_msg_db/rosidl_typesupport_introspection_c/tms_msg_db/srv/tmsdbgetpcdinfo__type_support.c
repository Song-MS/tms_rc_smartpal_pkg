// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_db:srv/Tmsdbgetpcdinfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_db/srv/tmsdbgetpcdinfo__rosidl_typesupport_introspection_c.h"
#include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_db/srv/tmsdbgetpcdinfo__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tmsdbgetpcdinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_member_array[1] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetpcdinfo_Request, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tmsdbgetpcdinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_members = {
  "tms_msg_db__srv",  // message namespace
  "Tmsdbgetpcdinfo_Request",  // message name
  1,  // number of fields
  sizeof(tms_msg_db__srv__Tmsdbgetpcdinfo_Request),
  Tmsdbgetpcdinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tmsdbgetpcdinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_type_support_handle = {
  0,
  &Tmsdbgetpcdinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetpcdinfo_Request)() {
  if (!Tmsdbgetpcdinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_type_support_handle.typesupport_identifier) {
    Tmsdbgetpcdinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tmsdbgetpcdinfo_Request__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_db/srv/tmsdbgetpcdinfo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetpcdinfo__struct.h"


// Include directives for member types
// Member `pcd_file`
#include "rosidl_generator_c/string_functions.h"
// Member `cloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `cloud`
#include "sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_member_array[7] = {
  {
    "rostime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetpcdinfo_Response, rostime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pcd_file",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetpcdinfo_Response, pcd_file),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetpcdinfo_Response, cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "get_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetpcdinfo_Response, get_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "get_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetpcdinfo_Response, get_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "get_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetpcdinfo_Response, get_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "get_theta",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__Tmsdbgetpcdinfo_Response, get_theta),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_members = {
  "tms_msg_db__srv",  // message namespace
  "Tmsdbgetpcdinfo_Response",  // message name
  7,  // number of fields
  sizeof(tms_msg_db__srv__Tmsdbgetpcdinfo_Response),
  Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_type_support_handle = {
  0,
  &Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetpcdinfo_Response)() {
  Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_type_support_handle.typesupport_identifier) {
    Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Tmsdbgetpcdinfo_Response__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetpcdinfo__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_service_members = {
  "tms_msg_db__srv",  // service namespace
  "Tmsdbgetpcdinfo",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_service_type_support_handle = {
  0,
  &tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetpcdinfo_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetpcdinfo_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetpcdinfo)() {
  if (!tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_service_type_support_handle.typesupport_identifier) {
    tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetpcdinfo_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, Tmsdbgetpcdinfo_Response)()->data;
  }

  return &tms_msg_db__srv__tmsdbgetpcdinfo__rosidl_typesupport_introspection_c__Tmsdbgetpcdinfo_service_type_support_handle;
}
