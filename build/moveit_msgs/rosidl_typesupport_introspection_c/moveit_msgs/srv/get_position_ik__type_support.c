// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/GetPositionIK.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/get_position_ik__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/get_position_ik__struct.h"


// Include directives for member types
// Member `ik_request`
#include "moveit_msgs/msg/position_ik_request.h"
// Member `ik_request`
#include "moveit_msgs/msg/position_ik_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_member_array[1] = {
  {
    "ik_request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionIK_Request, ik_request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GetPositionIK_Request",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__srv__GetPositionIK_Request),
  GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_type_support_handle = {
  0,
  &GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionIK_Request)() {
  GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PositionIKRequest)();
  if (!GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_type_support_handle.typesupport_identifier) {
    GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPositionIK_Request__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/get_position_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/get_position_ik__struct.h"


// Include directives for member types
// Member `solution`
#include "moveit_msgs/msg/robot_state.h"
// Member `solution`
#include "moveit_msgs/msg/robot_state__rosidl_typesupport_introspection_c.h"
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes.h"
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_member_array[2] = {
  {
    "solution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionIK_Response, solution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetPositionIK_Response, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GetPositionIK_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__srv__GetPositionIK_Response),
  GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_type_support_handle = {
  0,
  &GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionIK_Response)() {
  GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MoveItErrorCodes)();
  if (!GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_type_support_handle.typesupport_identifier) {
    GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetPositionIK_Response__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/get_position_ik__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_service_members = {
  "moveit_msgs__srv",  // service namespace
  "GetPositionIK",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_service_type_support_handle = {
  0,
  &moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionIK_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionIK_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionIK)() {
  if (!moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionIK_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetPositionIK_Response)()->data;
  }

  return &moveit_msgs__srv__get_position_ik__rosidl_typesupport_introspection_c__GetPositionIK_service_type_support_handle;
}
