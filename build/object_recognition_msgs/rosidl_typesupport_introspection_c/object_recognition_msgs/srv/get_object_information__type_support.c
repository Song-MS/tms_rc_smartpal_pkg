// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_recognition_msgs:srv/GetObjectInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_recognition_msgs/srv/get_object_information__rosidl_typesupport_introspection_c.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_recognition_msgs/srv/get_object_information__struct.h"


// Include directives for member types
// Member `type`
#include "object_recognition_msgs/msg/object_type.h"
// Member `type`
#include "object_recognition_msgs/msg/object_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_member_array[1] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__srv__GetObjectInformation_Request, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_members = {
  "object_recognition_msgs__srv",  // message namespace
  "GetObjectInformation_Request",  // message name
  1,  // number of fields
  sizeof(object_recognition_msgs__srv__GetObjectInformation_Request),
  GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_type_support_handle = {
  0,
  &GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, srv, GetObjectInformation_Request)() {
  GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, ObjectType)();
  if (!GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_type_support_handle.typesupport_identifier) {
    GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetObjectInformation_Request__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "object_recognition_msgs/srv/get_object_information__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_recognition_msgs/srv/get_object_information__struct.h"


// Include directives for member types
// Member `information`
#include "object_recognition_msgs/msg/object_information.h"
// Member `information`
#include "object_recognition_msgs/msg/object_information__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_member_array[1] = {
  {
    "information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__srv__GetObjectInformation_Response, information),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_members = {
  "object_recognition_msgs__srv",  // message namespace
  "GetObjectInformation_Response",  // message name
  1,  // number of fields
  sizeof(object_recognition_msgs__srv__GetObjectInformation_Response),
  GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_type_support_handle = {
  0,
  &GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, srv, GetObjectInformation_Response)() {
  GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, ObjectInformation)();
  if (!GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_type_support_handle.typesupport_identifier) {
    GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetObjectInformation_Response__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "object_recognition_msgs/srv/get_object_information__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_service_members = {
  "object_recognition_msgs__srv",  // service namespace
  "GetObjectInformation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_Request_message_type_support_handle,
  NULL  // response message
  // object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_Response_message_type_support_handle
};

static rosidl_service_type_support_t object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_service_type_support_handle = {
  0,
  &object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, srv, GetObjectInformation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, srv, GetObjectInformation_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, srv, GetObjectInformation)() {
  if (!object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_service_type_support_handle.typesupport_identifier) {
    object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, srv, GetObjectInformation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, srv, GetObjectInformation_Response)()->data;
  }

  return &object_recognition_msgs__srv__get_object_information__rosidl_typesupport_introspection_c__GetObjectInformation_service_type_support_handle;
}
