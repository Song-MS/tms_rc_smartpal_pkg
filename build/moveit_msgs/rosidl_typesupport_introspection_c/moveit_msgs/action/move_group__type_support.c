// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:action/MoveGroup.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/action/move_group__struct.h"


// Include directives for member types
// Member `request`
#include "moveit_msgs/msg/motion_plan_request.h"
// Member `request`
#include "moveit_msgs/msg/motion_plan_request__rosidl_typesupport_introspection_c.h"
// Member `planning_options`
#include "moveit_msgs/msg/planning_options.h"
// Member `planning_options`
#include "moveit_msgs/msg/planning_options__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_member_array[2] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_Goal, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_Goal, planning_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroup_Goal",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroup_Goal),
  MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_type_support_handle = {
  0,
  &MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_Goal)() {
  MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MotionPlanRequest)();
  MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, PlanningOptions)();
  if (!MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_type_support_handle.typesupport_identifier) {
    MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroup_Goal__rosidl_typesupport_introspection_c__MoveGroup_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/move_group__struct.h"


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes.h"
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes__rosidl_typesupport_introspection_c.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/robot_state.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/robot_state__rosidl_typesupport_introspection_c.h"
// Member `planned_trajectory`
// Member `executed_trajectory`
#include "moveit_msgs/msg/robot_trajectory.h"
// Member `planned_trajectory`
// Member `executed_trajectory`
#include "moveit_msgs/msg/robot_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_member_array[5] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_Result, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_Result, trajectory_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planned_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_Result, planned_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "executed_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_Result, executed_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_Result, planning_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroup_Result",  // message name
  5,  // number of fields
  sizeof(moveit_msgs__action__MoveGroup_Result),
  MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_type_support_handle = {
  0,
  &MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_Result)() {
  MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, MoveItErrorCodes)();
  MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotState)();
  MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  if (!MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_type_support_handle.typesupport_identifier) {
    MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroup_Result__rosidl_typesupport_introspection_c__MoveGroup_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/move_group__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_generator_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MoveGroup_Feedback__rosidl_typesupport_introspection_c__MoveGroup_Feedback_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_Feedback, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroup_Feedback__rosidl_typesupport_introspection_c__MoveGroup_Feedback_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroup_Feedback",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__action__MoveGroup_Feedback),
  MoveGroup_Feedback__rosidl_typesupport_introspection_c__MoveGroup_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroup_Feedback__rosidl_typesupport_introspection_c__MoveGroup_Feedback_message_type_support_handle = {
  0,
  &MoveGroup_Feedback__rosidl_typesupport_introspection_c__MoveGroup_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_Feedback)() {
  if (!MoveGroup_Feedback__rosidl_typesupport_introspection_c__MoveGroup_Feedback_message_type_support_handle.typesupport_identifier) {
    MoveGroup_Feedback__rosidl_typesupport_introspection_c__MoveGroup_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroup_Feedback__rosidl_typesupport_introspection_c__MoveGroup_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/move_group__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "moveit_msgs/action/move_group.h"
// Member `goal`
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroup_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroup_SendGoal_Request),
  MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_type_support_handle = {
  0,
  &MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_SendGoal_Request)() {
  MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_Goal)();
  if (!MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroup_SendGoal_Request__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/move_group__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroup_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroup_SendGoal_Response),
  MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_type_support_handle = {
  0,
  &MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_SendGoal_Response)() {
  MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroup_SendGoal_Response__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_service_members = {
  "moveit_msgs__action",  // service namespace
  "MoveGroup_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_service_type_support_handle = {
  0,
  &moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_SendGoal)() {
  if (!moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_SendGoal_Response)()->data;
  }

  return &moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/move_group__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroup_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__action__MoveGroup_GetResult_Request),
  MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_type_support_handle = {
  0,
  &MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_GetResult_Request)() {
  MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroup_GetResult_Request__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/move_group__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "moveit_msgs/action/move_group.h"
// Member `result`
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroup_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroup_GetResult_Response),
  MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_type_support_handle = {
  0,
  &MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_GetResult_Response)() {
  MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_Result)();
  if (!MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroup_GetResult_Response__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_service_members = {
  "moveit_msgs__action",  // service namespace
  "MoveGroup_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_service_type_support_handle = {
  0,
  &moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_GetResult)() {
  if (!moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_service_type_support_handle.typesupport_identifier) {
    moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_GetResult_Response)()->data;
  }

  return &moveit_msgs__action__move_group__rosidl_typesupport_introspection_c__MoveGroup_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"
// already included above
// #include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "moveit_msgs/action/move_group__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/move_group.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/move_group__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__action__MoveGroup_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_members = {
  "moveit_msgs__action",  // message namespace
  "MoveGroup_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(moveit_msgs__action__MoveGroup_FeedbackMessage),
  MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_type_support_handle = {
  0,
  &MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_FeedbackMessage)() {
  MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, action, MoveGroup_Feedback)();
  if (!MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MoveGroup_FeedbackMessage__rosidl_typesupport_introspection_c__MoveGroup_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
