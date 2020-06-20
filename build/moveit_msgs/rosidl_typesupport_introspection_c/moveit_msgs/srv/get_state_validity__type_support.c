// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:srv/GetStateValidity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/srv/get_state_validity__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/srv/get_state_validity__struct.h"


// Include directives for member types
// Member `robot_state`
#include "moveit_msgs/msg/robot_state.h"
// Member `robot_state`
#include "moveit_msgs/msg/robot_state__rosidl_typesupport_introspection_c.h"
// Member `group_name`
#include "rosidl_generator_c/string_functions.h"
// Member `constraints`
#include "moveit_msgs/msg/constraints.h"
// Member `constraints`
#include "moveit_msgs/msg/constraints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_member_array[3] = {
  {
    "robot_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetStateValidity_Request, robot_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetStateValidity_Request, group_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetStateValidity_Request, constraints),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GetStateValidity_Request",  // message name
  3,  // number of fields
  sizeof(moveit_msgs__srv__GetStateValidity_Request),
  GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_type_support_handle = {
  0,
  &GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetStateValidity_Request)() {
  GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Constraints)();
  if (!GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_type_support_handle.typesupport_identifier) {
    GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetStateValidity_Request__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/srv/get_state_validity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/srv/get_state_validity__struct.h"


// Include directives for member types
// Member `contacts`
#include "moveit_msgs/msg/contact_information.h"
// Member `contacts`
#include "moveit_msgs/msg/contact_information__rosidl_typesupport_introspection_c.h"
// Member `cost_sources`
#include "moveit_msgs/msg/cost_source.h"
// Member `cost_sources`
#include "moveit_msgs/msg/cost_source__rosidl_typesupport_introspection_c.h"
// Member `constraint_result`
#include "moveit_msgs/msg/constraint_eval_result.h"
// Member `constraint_result`
#include "moveit_msgs/msg/constraint_eval_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t GetStateValidity_Response__rosidl_typesupport_introspection_c__size_function__ContactInformation__contacts(
  const void * untyped_member)
{
  const moveit_msgs__msg__ContactInformation__Sequence * member =
    (const moveit_msgs__msg__ContactInformation__Sequence *)(untyped_member);
  return member->size;
}

const void * GetStateValidity_Response__rosidl_typesupport_introspection_c__get_const_function__ContactInformation__contacts(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__ContactInformation__Sequence * member =
    (const moveit_msgs__msg__ContactInformation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetStateValidity_Response__rosidl_typesupport_introspection_c__get_function__ContactInformation__contacts(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__ContactInformation__Sequence * member =
    (moveit_msgs__msg__ContactInformation__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetStateValidity_Response__rosidl_typesupport_introspection_c__resize_function__ContactInformation__contacts(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__ContactInformation__Sequence * member =
    (moveit_msgs__msg__ContactInformation__Sequence *)(untyped_member);
  moveit_msgs__msg__ContactInformation__Sequence__fini(member);
  return moveit_msgs__msg__ContactInformation__Sequence__init(member, size);
}

size_t GetStateValidity_Response__rosidl_typesupport_introspection_c__size_function__CostSource__cost_sources(
  const void * untyped_member)
{
  const moveit_msgs__msg__CostSource__Sequence * member =
    (const moveit_msgs__msg__CostSource__Sequence *)(untyped_member);
  return member->size;
}

const void * GetStateValidity_Response__rosidl_typesupport_introspection_c__get_const_function__CostSource__cost_sources(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__CostSource__Sequence * member =
    (const moveit_msgs__msg__CostSource__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetStateValidity_Response__rosidl_typesupport_introspection_c__get_function__CostSource__cost_sources(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__CostSource__Sequence * member =
    (moveit_msgs__msg__CostSource__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetStateValidity_Response__rosidl_typesupport_introspection_c__resize_function__CostSource__cost_sources(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__CostSource__Sequence * member =
    (moveit_msgs__msg__CostSource__Sequence *)(untyped_member);
  moveit_msgs__msg__CostSource__Sequence__fini(member);
  return moveit_msgs__msg__CostSource__Sequence__init(member, size);
}

size_t GetStateValidity_Response__rosidl_typesupport_introspection_c__size_function__ConstraintEvalResult__constraint_result(
  const void * untyped_member)
{
  const moveit_msgs__msg__ConstraintEvalResult__Sequence * member =
    (const moveit_msgs__msg__ConstraintEvalResult__Sequence *)(untyped_member);
  return member->size;
}

const void * GetStateValidity_Response__rosidl_typesupport_introspection_c__get_const_function__ConstraintEvalResult__constraint_result(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__ConstraintEvalResult__Sequence * member =
    (const moveit_msgs__msg__ConstraintEvalResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * GetStateValidity_Response__rosidl_typesupport_introspection_c__get_function__ConstraintEvalResult__constraint_result(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__ConstraintEvalResult__Sequence * member =
    (moveit_msgs__msg__ConstraintEvalResult__Sequence *)(untyped_member);
  return &member->data[index];
}

bool GetStateValidity_Response__rosidl_typesupport_introspection_c__resize_function__ConstraintEvalResult__constraint_result(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__ConstraintEvalResult__Sequence * member =
    (moveit_msgs__msg__ConstraintEvalResult__Sequence *)(untyped_member);
  moveit_msgs__msg__ConstraintEvalResult__Sequence__fini(member);
  return moveit_msgs__msg__ConstraintEvalResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_member_array[4] = {
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetStateValidity_Response, valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contacts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetStateValidity_Response, contacts),  // bytes offset in struct
    NULL,  // default value
    GetStateValidity_Response__rosidl_typesupport_introspection_c__size_function__ContactInformation__contacts,  // size() function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__get_const_function__ContactInformation__contacts,  // get_const(index) function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__get_function__ContactInformation__contacts,  // get(index) function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__resize_function__ContactInformation__contacts  // resize(index) function pointer
  },
  {
    "cost_sources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetStateValidity_Response, cost_sources),  // bytes offset in struct
    NULL,  // default value
    GetStateValidity_Response__rosidl_typesupport_introspection_c__size_function__CostSource__cost_sources,  // size() function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__get_const_function__CostSource__cost_sources,  // get_const(index) function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__get_function__CostSource__cost_sources,  // get(index) function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__resize_function__CostSource__cost_sources  // resize(index) function pointer
  },
  {
    "constraint_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__srv__GetStateValidity_Response, constraint_result),  // bytes offset in struct
    NULL,  // default value
    GetStateValidity_Response__rosidl_typesupport_introspection_c__size_function__ConstraintEvalResult__constraint_result,  // size() function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__get_const_function__ConstraintEvalResult__constraint_result,  // get_const(index) function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__get_function__ConstraintEvalResult__constraint_result,  // get(index) function pointer
    GetStateValidity_Response__rosidl_typesupport_introspection_c__resize_function__ConstraintEvalResult__constraint_result  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_members = {
  "moveit_msgs__srv",  // message namespace
  "GetStateValidity_Response",  // message name
  4,  // number of fields
  sizeof(moveit_msgs__srv__GetStateValidity_Response),
  GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_type_support_handle = {
  0,
  &GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetStateValidity_Response)() {
  GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, ContactInformation)();
  GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, CostSource)();
  GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, ConstraintEvalResult)();
  if (!GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_type_support_handle.typesupport_identifier) {
    GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetStateValidity_Response__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/srv/get_state_validity__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_service_members = {
  "moveit_msgs__srv",  // service namespace
  "GetStateValidity",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_service_type_support_handle = {
  0,
  &moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetStateValidity_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetStateValidity_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetStateValidity)() {
  if (!moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetStateValidity_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, srv, GetStateValidity_Response)()->data;
  }

  return &moveit_msgs__srv__get_state_validity__rosidl_typesupport_introspection_c__GetStateValidity_service_type_support_handle;
}
