// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_recognition_msgs:msg/TableArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_recognition_msgs/msg/table_array__rosidl_typesupport_introspection_c.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_recognition_msgs/msg/table_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `tables`
#include "object_recognition_msgs/msg/table.h"
// Member `tables`
#include "object_recognition_msgs/msg/table__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t TableArray__rosidl_typesupport_introspection_c__size_function__Table__tables(
  const void * untyped_member)
{
  const object_recognition_msgs__msg__Table__Sequence * member =
    (const object_recognition_msgs__msg__Table__Sequence *)(untyped_member);
  return member->size;
}

const void * TableArray__rosidl_typesupport_introspection_c__get_const_function__Table__tables(
  const void * untyped_member, size_t index)
{
  const object_recognition_msgs__msg__Table__Sequence * member =
    (const object_recognition_msgs__msg__Table__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TableArray__rosidl_typesupport_introspection_c__get_function__Table__tables(
  void * untyped_member, size_t index)
{
  object_recognition_msgs__msg__Table__Sequence * member =
    (object_recognition_msgs__msg__Table__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TableArray__rosidl_typesupport_introspection_c__resize_function__Table__tables(
  void * untyped_member, size_t size)
{
  object_recognition_msgs__msg__Table__Sequence * member =
    (object_recognition_msgs__msg__Table__Sequence *)(untyped_member);
  object_recognition_msgs__msg__Table__Sequence__fini(member);
  return object_recognition_msgs__msg__Table__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TableArray__rosidl_typesupport_introspection_c__TableArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__TableArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tables",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__TableArray, tables),  // bytes offset in struct
    NULL,  // default value
    TableArray__rosidl_typesupport_introspection_c__size_function__Table__tables,  // size() function pointer
    TableArray__rosidl_typesupport_introspection_c__get_const_function__Table__tables,  // get_const(index) function pointer
    TableArray__rosidl_typesupport_introspection_c__get_function__Table__tables,  // get(index) function pointer
    TableArray__rosidl_typesupport_introspection_c__resize_function__Table__tables  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TableArray__rosidl_typesupport_introspection_c__TableArray_message_members = {
  "object_recognition_msgs__msg",  // message namespace
  "TableArray",  // message name
  2,  // number of fields
  sizeof(object_recognition_msgs__msg__TableArray),
  TableArray__rosidl_typesupport_introspection_c__TableArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TableArray__rosidl_typesupport_introspection_c__TableArray_message_type_support_handle = {
  0,
  &TableArray__rosidl_typesupport_introspection_c__TableArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, TableArray)() {
  TableArray__rosidl_typesupport_introspection_c__TableArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TableArray__rosidl_typesupport_introspection_c__TableArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, Table)();
  if (!TableArray__rosidl_typesupport_introspection_c__TableArray_message_type_support_handle.typesupport_identifier) {
    TableArray__rosidl_typesupport_introspection_c__TableArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TableArray__rosidl_typesupport_introspection_c__TableArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
