// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/OrientationConstraint.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/orientation_constraint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion__functions.h"
// Member `link_name`
#include "rosidl_generator_c/string_functions.h"

bool
moveit_msgs__msg__OrientationConstraint__init(moveit_msgs__msg__OrientationConstraint * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    moveit_msgs__msg__OrientationConstraint__destroy(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    moveit_msgs__msg__OrientationConstraint__destroy(msg);
    return false;
  }
  // link_name
  if (!rosidl_generator_c__String__init(&msg->link_name)) {
    moveit_msgs__msg__OrientationConstraint__destroy(msg);
    return false;
  }
  // absolute_x_axis_tolerance
  // absolute_y_axis_tolerance
  // absolute_z_axis_tolerance
  // weight
  return true;
}

void
moveit_msgs__msg__OrientationConstraint__fini(moveit_msgs__msg__OrientationConstraint * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // link_name
  rosidl_generator_c__String__fini(&msg->link_name);
  // absolute_x_axis_tolerance
  // absolute_y_axis_tolerance
  // absolute_z_axis_tolerance
  // weight
}

moveit_msgs__msg__OrientationConstraint *
moveit_msgs__msg__OrientationConstraint__create()
{
  moveit_msgs__msg__OrientationConstraint * msg = (moveit_msgs__msg__OrientationConstraint *)malloc(sizeof(moveit_msgs__msg__OrientationConstraint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__OrientationConstraint));
  bool success = moveit_msgs__msg__OrientationConstraint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__OrientationConstraint__destroy(moveit_msgs__msg__OrientationConstraint * msg)
{
  if (msg) {
    moveit_msgs__msg__OrientationConstraint__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__OrientationConstraint__Sequence__init(moveit_msgs__msg__OrientationConstraint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__OrientationConstraint * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__OrientationConstraint *)calloc(size, sizeof(moveit_msgs__msg__OrientationConstraint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__OrientationConstraint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__OrientationConstraint__fini(&data[i - 1]);
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
moveit_msgs__msg__OrientationConstraint__Sequence__fini(moveit_msgs__msg__OrientationConstraint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__OrientationConstraint__fini(&array->data[i]);
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

moveit_msgs__msg__OrientationConstraint__Sequence *
moveit_msgs__msg__OrientationConstraint__Sequence__create(size_t size)
{
  moveit_msgs__msg__OrientationConstraint__Sequence * array = (moveit_msgs__msg__OrientationConstraint__Sequence *)malloc(sizeof(moveit_msgs__msg__OrientationConstraint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__OrientationConstraint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__OrientationConstraint__Sequence__destroy(moveit_msgs__msg__OrientationConstraint__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__OrientationConstraint__Sequence__fini(array);
  }
  free(array);
}
