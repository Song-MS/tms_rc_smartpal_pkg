// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_recognition_msgs:msg/ObjectInformation.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/object_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `name`
#include "rosidl_generator_c/string_functions.h"
// Member `ground_truth_mesh`
#include "shape_msgs/msg/mesh__functions.h"
// Member `ground_truth_point_cloud`
#include "sensor_msgs/msg/point_cloud2__functions.h"

bool
object_recognition_msgs__msg__ObjectInformation__init(object_recognition_msgs__msg__ObjectInformation * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    object_recognition_msgs__msg__ObjectInformation__destroy(msg);
    return false;
  }
  // ground_truth_mesh
  if (!shape_msgs__msg__Mesh__init(&msg->ground_truth_mesh)) {
    object_recognition_msgs__msg__ObjectInformation__destroy(msg);
    return false;
  }
  // ground_truth_point_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->ground_truth_point_cloud)) {
    object_recognition_msgs__msg__ObjectInformation__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__msg__ObjectInformation__fini(object_recognition_msgs__msg__ObjectInformation * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // ground_truth_mesh
  shape_msgs__msg__Mesh__fini(&msg->ground_truth_mesh);
  // ground_truth_point_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->ground_truth_point_cloud);
}

object_recognition_msgs__msg__ObjectInformation *
object_recognition_msgs__msg__ObjectInformation__create()
{
  object_recognition_msgs__msg__ObjectInformation * msg = (object_recognition_msgs__msg__ObjectInformation *)malloc(sizeof(object_recognition_msgs__msg__ObjectInformation));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__msg__ObjectInformation));
  bool success = object_recognition_msgs__msg__ObjectInformation__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__msg__ObjectInformation__destroy(object_recognition_msgs__msg__ObjectInformation * msg)
{
  if (msg) {
    object_recognition_msgs__msg__ObjectInformation__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__msg__ObjectInformation__Sequence__init(object_recognition_msgs__msg__ObjectInformation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__msg__ObjectInformation * data = NULL;
  if (size) {
    data = (object_recognition_msgs__msg__ObjectInformation *)calloc(size, sizeof(object_recognition_msgs__msg__ObjectInformation));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__msg__ObjectInformation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__msg__ObjectInformation__fini(&data[i - 1]);
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
object_recognition_msgs__msg__ObjectInformation__Sequence__fini(object_recognition_msgs__msg__ObjectInformation__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__msg__ObjectInformation__fini(&array->data[i]);
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

object_recognition_msgs__msg__ObjectInformation__Sequence *
object_recognition_msgs__msg__ObjectInformation__Sequence__create(size_t size)
{
  object_recognition_msgs__msg__ObjectInformation__Sequence * array = (object_recognition_msgs__msg__ObjectInformation__Sequence *)malloc(sizeof(object_recognition_msgs__msg__ObjectInformation__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__msg__ObjectInformation__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__msg__ObjectInformation__Sequence__destroy(object_recognition_msgs__msg__ObjectInformation__Sequence * array)
{
  if (array) {
    object_recognition_msgs__msg__ObjectInformation__Sequence__fini(array);
  }
  free(array);
}
