// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_recognition_msgs:msg/RecognizedObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_recognition_msgs/msg/recognized_object__rosidl_typesupport_introspection_c.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_recognition_msgs/msg/recognized_object__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `type`
#include "object_recognition_msgs/msg/object_type.h"
// Member `type`
#include "object_recognition_msgs/msg/object_type__rosidl_typesupport_introspection_c.h"
// Member `point_clouds`
#include "sensor_msgs/msg/point_cloud2.h"
// Member `point_clouds`
#include "sensor_msgs/msg/point_cloud2__rosidl_typesupport_introspection_c.h"
// Member `bounding_mesh`
#include "shape_msgs/msg/mesh.h"
// Member `bounding_mesh`
#include "shape_msgs/msg/mesh__rosidl_typesupport_introspection_c.h"
// Member `bounding_contours`
#include "geometry_msgs/msg/point.h"
// Member `bounding_contours`
#include "geometry_msgs/msg/point__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance_stamped.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t RecognizedObject__rosidl_typesupport_introspection_c__size_function__PointCloud2__point_clouds(
  const void * untyped_member)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return member->size;
}

const void * RecognizedObject__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__point_clouds(
  const void * untyped_member, size_t index)
{
  const sensor_msgs__msg__PointCloud2__Sequence * member =
    (const sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RecognizedObject__rosidl_typesupport_introspection_c__get_function__PointCloud2__point_clouds(
  void * untyped_member, size_t index)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RecognizedObject__rosidl_typesupport_introspection_c__resize_function__PointCloud2__point_clouds(
  void * untyped_member, size_t size)
{
  sensor_msgs__msg__PointCloud2__Sequence * member =
    (sensor_msgs__msg__PointCloud2__Sequence *)(untyped_member);
  sensor_msgs__msg__PointCloud2__Sequence__fini(member);
  return sensor_msgs__msg__PointCloud2__Sequence__init(member, size);
}

size_t RecognizedObject__rosidl_typesupport_introspection_c__size_function__Point__bounding_contours(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * RecognizedObject__rosidl_typesupport_introspection_c__get_const_function__Point__bounding_contours(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * RecognizedObject__rosidl_typesupport_introspection_c__get_function__Point__bounding_contours(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

bool RecognizedObject__rosidl_typesupport_introspection_c__resize_function__Point__bounding_contours(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObject, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObject, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObject, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_clouds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObject, point_clouds),  // bytes offset in struct
    NULL,  // default value
    RecognizedObject__rosidl_typesupport_introspection_c__size_function__PointCloud2__point_clouds,  // size() function pointer
    RecognizedObject__rosidl_typesupport_introspection_c__get_const_function__PointCloud2__point_clouds,  // get_const(index) function pointer
    RecognizedObject__rosidl_typesupport_introspection_c__get_function__PointCloud2__point_clouds,  // get(index) function pointer
    RecognizedObject__rosidl_typesupport_introspection_c__resize_function__PointCloud2__point_clouds  // resize(index) function pointer
  },
  {
    "bounding_mesh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObject, bounding_mesh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_contours",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObject, bounding_contours),  // bytes offset in struct
    NULL,  // default value
    RecognizedObject__rosidl_typesupport_introspection_c__size_function__Point__bounding_contours,  // size() function pointer
    RecognizedObject__rosidl_typesupport_introspection_c__get_const_function__Point__bounding_contours,  // get_const(index) function pointer
    RecognizedObject__rosidl_typesupport_introspection_c__get_function__Point__bounding_contours,  // get(index) function pointer
    RecognizedObject__rosidl_typesupport_introspection_c__resize_function__Point__bounding_contours  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__msg__RecognizedObject, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_members = {
  "object_recognition_msgs__msg",  // message namespace
  "RecognizedObject",  // message name
  7,  // number of fields
  sizeof(object_recognition_msgs__msg__RecognizedObject),
  RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_type_support_handle = {
  0,
  &RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, RecognizedObject)() {
  RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, ObjectType)();
  RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, PointCloud2)();
  RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, shape_msgs, msg, Mesh)();
  RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovarianceStamped)();
  if (!RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_type_support_handle.typesupport_identifier) {
    RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RecognizedObject__rosidl_typesupport_introspection_c__RecognizedObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
