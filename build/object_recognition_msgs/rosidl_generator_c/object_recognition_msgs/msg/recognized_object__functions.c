// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_recognition_msgs:msg/RecognizedObject.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/recognized_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `type`
#include "object_recognition_msgs/msg/object_type__functions.h"
// Member `point_clouds`
#include "sensor_msgs/msg/point_cloud2__functions.h"
// Member `bounding_mesh`
#include "shape_msgs/msg/mesh__functions.h"
// Member `bounding_contours`
#include "geometry_msgs/msg/point__functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance_stamped__functions.h"

bool
object_recognition_msgs__msg__RecognizedObject__init(object_recognition_msgs__msg__RecognizedObject * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_recognition_msgs__msg__RecognizedObject__destroy(msg);
    return false;
  }
  // type
  if (!object_recognition_msgs__msg__ObjectType__init(&msg->type)) {
    object_recognition_msgs__msg__RecognizedObject__destroy(msg);
    return false;
  }
  // confidence
  // point_clouds
  if (!sensor_msgs__msg__PointCloud2__Sequence__init(&msg->point_clouds, 0)) {
    object_recognition_msgs__msg__RecognizedObject__destroy(msg);
    return false;
  }
  // bounding_mesh
  if (!shape_msgs__msg__Mesh__init(&msg->bounding_mesh)) {
    object_recognition_msgs__msg__RecognizedObject__destroy(msg);
    return false;
  }
  // bounding_contours
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->bounding_contours, 0)) {
    object_recognition_msgs__msg__RecognizedObject__destroy(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovarianceStamped__init(&msg->pose)) {
    object_recognition_msgs__msg__RecognizedObject__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__msg__RecognizedObject__fini(object_recognition_msgs__msg__RecognizedObject * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // type
  object_recognition_msgs__msg__ObjectType__fini(&msg->type);
  // confidence
  // point_clouds
  sensor_msgs__msg__PointCloud2__Sequence__fini(&msg->point_clouds);
  // bounding_mesh
  shape_msgs__msg__Mesh__fini(&msg->bounding_mesh);
  // bounding_contours
  geometry_msgs__msg__Point__Sequence__fini(&msg->bounding_contours);
  // pose
  geometry_msgs__msg__PoseWithCovarianceStamped__fini(&msg->pose);
}

object_recognition_msgs__msg__RecognizedObject *
object_recognition_msgs__msg__RecognizedObject__create()
{
  object_recognition_msgs__msg__RecognizedObject * msg = (object_recognition_msgs__msg__RecognizedObject *)malloc(sizeof(object_recognition_msgs__msg__RecognizedObject));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__msg__RecognizedObject));
  bool success = object_recognition_msgs__msg__RecognizedObject__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__msg__RecognizedObject__destroy(object_recognition_msgs__msg__RecognizedObject * msg)
{
  if (msg) {
    object_recognition_msgs__msg__RecognizedObject__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__msg__RecognizedObject__Sequence__init(object_recognition_msgs__msg__RecognizedObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__msg__RecognizedObject * data = NULL;
  if (size) {
    data = (object_recognition_msgs__msg__RecognizedObject *)calloc(size, sizeof(object_recognition_msgs__msg__RecognizedObject));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__msg__RecognizedObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__msg__RecognizedObject__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
object_recognition_msgs__msg__RecognizedObject__Sequence__fini(object_recognition_msgs__msg__RecognizedObject__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__msg__RecognizedObject__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

object_recognition_msgs__msg__RecognizedObject__Sequence *
object_recognition_msgs__msg__RecognizedObject__Sequence__create(size_t size)
{
  object_recognition_msgs__msg__RecognizedObject__Sequence * array = (object_recognition_msgs__msg__RecognizedObject__Sequence *)malloc(sizeof(object_recognition_msgs__msg__RecognizedObject__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__msg__RecognizedObject__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__msg__RecognizedObject__Sequence__destroy(object_recognition_msgs__msg__RecognizedObject__Sequence * array)
{
  if (array) {
    object_recognition_msgs__msg__RecognizedObject__Sequence__fini(array);
  }
  free(array);
}
