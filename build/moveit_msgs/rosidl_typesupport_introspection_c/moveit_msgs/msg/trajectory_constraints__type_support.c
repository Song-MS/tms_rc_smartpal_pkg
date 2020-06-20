// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from moveit_msgs:msg/TrajectoryConstraints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "moveit_msgs/msg/trajectory_constraints__rosidl_typesupport_introspection_c.h"
#include "moveit_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "moveit_msgs/msg/trajectory_constraints__struct.h"


// Include directives for member types
// Member `constraints`
#include "moveit_msgs/msg/constraints.h"
// Member `constraints`
#include "moveit_msgs/msg/constraints__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t TrajectoryConstraints__rosidl_typesupport_introspection_c__size_function__Constraints__constraints(
  const void * untyped_member)
{
  const moveit_msgs__msg__Constraints__Sequence * member =
    (const moveit_msgs__msg__Constraints__Sequence *)(untyped_member);
  return member->size;
}

const void * TrajectoryConstraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__constraints(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__Constraints__Sequence * member =
    (const moveit_msgs__msg__Constraints__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TrajectoryConstraints__rosidl_typesupport_introspection_c__get_function__Constraints__constraints(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__Constraints__Sequence * member =
    (moveit_msgs__msg__Constraints__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TrajectoryConstraints__rosidl_typesupport_introspection_c__resize_function__Constraints__constraints(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__Constraints__Sequence * member =
    (moveit_msgs__msg__Constraints__Sequence *)(untyped_member);
  moveit_msgs__msg__Constraints__Sequence__fini(member);
  return moveit_msgs__msg__Constraints__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_member_array[1] = {
  {
    "constraints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(moveit_msgs__msg__TrajectoryConstraints, constraints),  // bytes offset in struct
    NULL,  // default value
    TrajectoryConstraints__rosidl_typesupport_introspection_c__size_function__Constraints__constraints,  // size() function pointer
    TrajectoryConstraints__rosidl_typesupport_introspection_c__get_const_function__Constraints__constraints,  // get_const(index) function pointer
    TrajectoryConstraints__rosidl_typesupport_introspection_c__get_function__Constraints__constraints,  // get(index) function pointer
    TrajectoryConstraints__rosidl_typesupport_introspection_c__resize_function__Constraints__constraints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_members = {
  "moveit_msgs__msg",  // message namespace
  "TrajectoryConstraints",  // message name
  1,  // number of fields
  sizeof(moveit_msgs__msg__TrajectoryConstraints),
  TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_type_support_handle = {
  0,
  &TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_moveit_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, TrajectoryConstraints)() {
  TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, Constraints)();
  if (!TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_type_support_handle.typesupport_identifier) {
    TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TrajectoryConstraints__rosidl_typesupport_introspection_c__TrajectoryConstraints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
