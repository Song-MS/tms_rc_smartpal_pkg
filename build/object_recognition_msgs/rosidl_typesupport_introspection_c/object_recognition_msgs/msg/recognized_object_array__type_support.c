// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_recognition_msgs:msg/RecognizedObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_recognition_msgs/msg/recognized_object_array__rosidl_typesupport_introspection_c.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_recognition_msgs/msg/recognized_object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "object_recognition_msgs/msg/recognized_object.h"
// Member `objects`
#include "object_recognition_msgs/msg/recognized_object__rosidl_typesupport_introspection_c.h"
// Member `cooccurrence`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t RecognizedObjectArray__rosidl_typesupport_introspection_c__size_function__RecognizedObject__objects(
  const void * untyped_member)
{
  const object_recognition_msgs__msg__RecognizedObject__Sequence * member =
    (const object_recognition_msgs__msg__RecognizedObject__Sequence *)(untyped_member);
  return member->size;
}

const void * RecognizedObjectArray__rosidl_typesupport_introspection_c__get_const_function__RecognizedObject__objects(
  const void * untyped_member, size_t index)
{
  const object_recognition_msgs__msg__RecognizedObject__Sequence * member =
    (const object_recognition_msgs__msg__RecognizedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RecognizedObjectArray__rosidl_typesupport_introspection_c__get_function__RecognizedObject__objects(
  void * untyped_member, size_t index)
{
  object_recognition_msgs__msg__RecognizedObject__Sequence * member =
    (object_recognition_msgs__msg__RecognizedObject__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RecognizedObjectArray__rosidl_typesupport_introspection_c__resize_function__RecognizedObject__objects(
  void * untyped_member, size_t size)
{
  object_recognition_msgs__msg__RecognizedObject__Sequence * member =
    (object_recognition_msgs__msg__RecognizedObject__Sequence *)(untyped_member);
  object_recognition_msgs__msg__RecognizedObject__Sequence__fini(member);
  return object_recognition_msgs__msg__RecognizedObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObjectArray, objects),  // bytes offset in struct
    NULL,  // default value
    RecognizedObjectArray__rosidl_typesupport_introspection_c__size_function__RecognizedObject__objects,  // size() function pointer
    RecognizedObjectArray__rosidl_typesupport_introspection_c__get_const_function__RecognizedObject__objects,  // get_const(index) function pointer
    RecognizedObjectArray__rosidl_typesupport_introspection_c__get_function__RecognizedObject__objects,  // get(index) function pointer
    RecognizedObjectArray__rosidl_typesupport_introspection_c__resize_function__RecognizedObject__objects  // resize(index) function pointer
  },
  {
    "cooccurrence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObjectArray, cooccurrence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_members = {
  "object_recognition_msgs__msg",  // message namespace
  "RecognizedObjectArray",  // message name
  3,  // number of fields
  sizeof(object_recognition_msgs__msg__RecognizedObjectArray),
  RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_type_support_handle = {
  0,
  &RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, RecognizedObjectArray)() {
  RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, RecognizedObject)();
  if (!RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_type_support_handle.typesupport_identifier) {
    RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RecognizedObjectArray__rosidl_typesupport_introspection_c__RecognizedObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
