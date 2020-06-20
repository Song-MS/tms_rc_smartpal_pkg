// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_recognition_msgs:msg/RecognizedObject.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__STRUCT_H_
#define OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/header__struct.h"
// Member 'type'
#include "object_recognition_msgs/msg/object_type__struct.h"
// Member 'point_clouds'
#include "sensor_msgs/msg/point_cloud2__struct.h"
// Member 'bounding_mesh'
#include "shape_msgs/msg/mesh__struct.h"
// Member 'bounding_contours'
#include "geometry_msgs/msg/point__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/pose_with_covariance_stamped__struct.h"

// Struct defined in msg/RecognizedObject in the package object_recognition_msgs.
typedef struct object_recognition_msgs__msg__RecognizedObject
{
  std_msgs__msg__Header header;
  object_recognition_msgs__msg__ObjectType type;
  float confidence;
  sensor_msgs__msg__PointCloud2__Sequence point_clouds;
  shape_msgs__msg__Mesh bounding_mesh;
  geometry_msgs__msg__Point__Sequence bounding_contours;
  geometry_msgs__msg__PoseWithCovarianceStamped pose;
} object_recognition_msgs__msg__RecognizedObject;

// Struct for a sequence of object_recognition_msgs__msg__RecognizedObject.
typedef struct object_recognition_msgs__msg__RecognizedObject__Sequence
{
  object_recognition_msgs__msg__RecognizedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__msg__RecognizedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__STRUCT_H_
