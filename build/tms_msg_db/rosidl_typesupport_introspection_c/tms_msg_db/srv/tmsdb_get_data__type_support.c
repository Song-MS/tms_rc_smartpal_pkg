// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_db:srv/TmsdbGetData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_db/srv/tmsdb_get_data__rosidl_typesupport_introspection_c.h"
#include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_db/srv/tmsdb_get_data__struct.h"


// Include directives for member types
// Member `tmsdb`
#include "tms_msg_db/msg/tmsdb.h"
// Member `tmsdb`
#include "tms_msg_db/msg/tmsdb__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_member_array[1] = {
  {
    "tmsdb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbGetData_Request, tmsdb),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_members = {
  "tms_msg_db__srv",  // message namespace
  "TmsdbGetData_Request",  // message name
  1,  // number of fields
  sizeof(tms_msg_db__srv__TmsdbGetData_Request),
  TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_type_support_handle = {
  0,
  &TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbGetData_Request)() {
  TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, msg, Tmsdb)();
  if (!TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_type_support_handle.typesupport_identifier) {
    TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TmsdbGetData_Request__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tms_msg_db/srv/tmsdb_get_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_get_data__struct.h"


// Include directives for member types
// Member `tmsdb`
// already included above
// #include "tms_msg_db/msg/tmsdb.h"
// Member `tmsdb`
// already included above
// #include "tms_msg_db/msg/tmsdb__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t TmsdbGetData_Response__rosidl_typesupport_introspection_c__size_function__Tmsdb__tmsdb(
  const void * untyped_member)
{
  const tms_msg_db__msg__Tmsdb__Sequence * member =
    (const tms_msg_db__msg__Tmsdb__Sequence *)(untyped_member);
  return member->size;
}

const void * TmsdbGetData_Response__rosidl_typesupport_introspection_c__get_const_function__Tmsdb__tmsdb(
  const void * untyped_member, size_t index)
{
  const tms_msg_db__msg__Tmsdb__Sequence * member =
    (const tms_msg_db__msg__Tmsdb__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TmsdbGetData_Response__rosidl_typesupport_introspection_c__get_function__Tmsdb__tmsdb(
  void * untyped_member, size_t index)
{
  tms_msg_db__msg__Tmsdb__Sequence * member =
    (tms_msg_db__msg__Tmsdb__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TmsdbGetData_Response__rosidl_typesupport_introspection_c__resize_function__Tmsdb__tmsdb(
  void * untyped_member, size_t size)
{
  tms_msg_db__msg__Tmsdb__Sequence * member =
    (tms_msg_db__msg__Tmsdb__Sequence *)(untyped_member);
  tms_msg_db__msg__Tmsdb__Sequence__fini(member);
  return tms_msg_db__msg__Tmsdb__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_member_array[1] = {
  {
    "tmsdb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__srv__TmsdbGetData_Response, tmsdb),  // bytes offset in struct
    NULL,  // default value
    TmsdbGetData_Response__rosidl_typesupport_introspection_c__size_function__Tmsdb__tmsdb,  // size() function pointer
    TmsdbGetData_Response__rosidl_typesupport_introspection_c__get_const_function__Tmsdb__tmsdb,  // get_const(index) function pointer
    TmsdbGetData_Response__rosidl_typesupport_introspection_c__get_function__Tmsdb__tmsdb,  // get(index) function pointer
    TmsdbGetData_Response__rosidl_typesupport_introspection_c__resize_function__Tmsdb__tmsdb  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_members = {
  "tms_msg_db__srv",  // message namespace
  "TmsdbGetData_Response",  // message name
  1,  // number of fields
  sizeof(tms_msg_db__srv__TmsdbGetData_Response),
  TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_type_support_handle = {
  0,
  &TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbGetData_Response)() {
  TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, msg, Tmsdb)();
  if (!TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_type_support_handle.typesupport_identifier) {
    TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TmsdbGetData_Response__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_get_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_service_members = {
  "tms_msg_db__srv",  // service namespace
  "TmsdbGetData",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_Request_message_type_support_handle,
  NULL  // response message
  // tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_Response_message_type_support_handle
};

static rosidl_service_type_support_t tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_service_type_support_handle = {
  0,
  &tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbGetData_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbGetData_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbGetData)() {
  if (!tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_service_type_support_handle.typesupport_identifier) {
    tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbGetData_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, srv, TmsdbGetData_Response)()->data;
  }

  return &tms_msg_db__srv__tmsdb_get_data__rosidl_typesupport_introspection_c__TmsdbGetData_service_type_support_handle;
}
