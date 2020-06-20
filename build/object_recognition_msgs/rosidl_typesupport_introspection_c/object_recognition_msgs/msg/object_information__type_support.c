// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_recognition_msgs:msg/ObjectInformation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_recognition_msgs/msg/object_information__rosidl_typesupport_introspection_c.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_recognition_msgs/msg/object_information__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"
// Member `ground_truth_mesh`
#include "shape_msgs/msg/mesh.h"
// Member `ground_truth_mesh`
#include "shape_msgs/msg/mesh__rosidl_typesupport_introspection_c.h"
// Member `ground_truth_point_cloud`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `ground_truth_point_cloud`
#include "sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__ObjectInformation, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ground_truth_mesh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__ObjectInformation, ground_truth_mesh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ground_truth_point_cloud",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__ObjectInformation, ground_truth_point_cloud),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_members = {
  "object_recognition_msgs__msg",  // message namespace
  "ObjectInformation",  // message name
  3,  // number of fields
  sizeof(object_recognition_msgs__msg__ObjectInformation),
  ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_type_support_handle = {
  0,
  &ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, ObjectInformation)() {
  ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Mesh)();
  ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  if (!ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_type_support_handle.typesupport_identifier) {
    ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectInformation__rosidl_typesupport_introspection_c__ObjectInformation_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
