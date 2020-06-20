// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_recognition_msgs:msg/Table.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/table__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose__functions.h"
// Member `convex_hull`
#include "geometry_msgs/msg/point__functions.h"

bool
object_recognition_msgs__msg__Table__init(object_recognition_msgs__msg__Table * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_recognition_msgs__msg__Table__destroy(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    object_recognition_msgs__msg__Table__destroy(msg);
    return false;
  }
  // convex_hull
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->convex_hull, 0)) {
    object_recognition_msgs__msg__Table__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__msg__Table__fini(object_recognition_msgs__msg__Table * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // convex_hull
  geometry_msgs__msg__Point__Sequence__fini(&msg->convex_hull);
}

object_recognition_msgs__msg__Table *
object_recognition_msgs__msg__Table__create()
{
  object_recognition_msgs__msg__Table * msg = (object_recognition_msgs__msg__Table *)malloc(sizeof(object_recognition_msgs__msg__Table));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__msg__Table));
  bool success = object_recognition_msgs__msg__Table__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__msg__Table__destroy(object_recognition_msgs__msg__Table * msg)
{
  if (msg) {
    object_recognition_msgs__msg__Table__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__msg__Table__Sequence__init(object_recognition_msgs__msg__Table__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__msg__Table * data = NULL;
  if (size) {
    data = (object_recognition_msgs__msg__Table *)calloc(size, sizeof(object_recognition_msgs__msg__Table));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__msg__Table__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__msg__Table__fini(&data[i - 1]);
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
object_recognition_msgs__msg__Table__Sequence__fini(object_recognition_msgs__msg__Table__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__msg__Table__fini(&array->data[i]);
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

object_recognition_msgs__msg__Table__Sequence *
object_recognition_msgs__msg__Table__Sequence__create(size_t size)
{
  object_recognition_msgs__msg__Table__Sequence * array = (object_recognition_msgs__msg__Table__Sequence *)malloc(sizeof(object_recognition_msgs__msg__Table__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__msg__Table__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__msg__Table__Sequence__destroy(object_recognition_msgs__msg__Table__Sequence * array)
{
  if (array) {
    object_recognition_msgs__msg__Table__Sequence__fini(array);
  }
  free(array);
}
