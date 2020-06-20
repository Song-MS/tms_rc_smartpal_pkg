// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tms_msg_db:msg/TmsDataStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tms_msg_db/msg/tms_data_stamped__rosidl_typesupport_introspection_c.h"
#include "tms_msg_db/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tms_msg_db/msg/tms_data_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `tmsdata`
#include "tms_msg_db/msg/tms_data.h"
// Member `tmsdata`
#include "tms_msg_db/msg/tms_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t TmsDataStamped__rosidl_typesupport_introspection_c__size_function__TmsData__tmsdata(
  const void * untyped_member)
{
  const tms_msg_db__msg__TmsData__Sequence * member =
    (const tms_msg_db__msg__TmsData__Sequence *)(untyped_member);
  return member->size;
}

const void * TmsDataStamped__rosidl_typesupport_introspection_c__get_const_function__TmsData__tmsdata(
  const void * untyped_member, size_t index)
{
  const tms_msg_db__msg__TmsData__Sequence * member =
    (const tms_msg_db__msg__TmsData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * TmsDataStamped__rosidl_typesupport_introspection_c__get_function__TmsData__tmsdata(
  void * untyped_member, size_t index)
{
  tms_msg_db__msg__TmsData__Sequence * member =
    (tms_msg_db__msg__TmsData__Sequence *)(untyped_member);
  return &member->data[index];
}

bool TmsDataStamped__rosidl_typesupport_introspection_c__resize_function__TmsData__tmsdata(
  void * untyped_member, size_t size)
{
  tms_msg_db__msg__TmsData__Sequence * member =
    (tms_msg_db__msg__TmsData__Sequence *)(untyped_member);
  tms_msg_db__msg__TmsData__Sequence__fini(member);
  return tms_msg_db__msg__TmsData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__msg__TmsDataStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tmsdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tms_msg_db__msg__TmsDataStamped, tmsdata),  // bytes offset in struct
    NULL,  // default value
    TmsDataStamped__rosidl_typesupport_introspection_c__size_function__TmsData__tmsdata,  // size() function pointer
    TmsDataStamped__rosidl_typesupport_introspection_c__get_const_function__TmsData__tmsdata,  // get_const(index) function pointer
    TmsDataStamped__rosidl_typesupport_introspection_c__get_function__TmsData__tmsdata,  // get(index) function pointer
    TmsDataStamped__rosidl_typesupport_introspection_c__resize_function__TmsData__tmsdata  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_members = {
  "tms_msg_db__msg",  // message namespace
  "TmsDataStamped",  // message name
  2,  // number of fields
  sizeof(tms_msg_db__msg__TmsDataStamped),
  TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_type_support_handle = {
  0,
  &TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tms_msg_db
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, msg, TmsDataStamped)() {
  TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tms_msg_db, msg, TmsData)();
  if (!TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_type_support_handle.typesupport_identifier) {
    TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &TmsDataStamped__rosidl_typesupport_introspection_c__TmsDataStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
