// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from octomap_msgs:msg/OctomapWithPose.idl
// generated code does not contain a copyright notice
#include "octomap_msgs/msg/octomap_with_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `origin`
#include "geometry_msgs/msg/pose__functions.h"
// Member `octomap`
#include "octomap_msgs/msg/octomap__functions.h"

bool
octomap_msgs__msg__OctomapWithPose__init(octomap_msgs__msg__OctomapWithPose * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    octomap_msgs__msg__OctomapWithPose__destroy(msg);
    return false;
  }
  // origin
  if (!geometry_msgs__msg__Pose__init(&msg->origin)) {
    octomap_msgs__msg__OctomapWithPose__destroy(msg);
    return false;
  }
  // octomap
  if (!octomap_msgs__msg__Octomap__init(&msg->octomap)) {
    octomap_msgs__msg__OctomapWithPose__destroy(msg);
    return false;
  }
  return true;
}

void
octomap_msgs__msg__OctomapWithPose__fini(octomap_msgs__msg__OctomapWithPose * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // origin
  geometry_msgs__msg__Pose__fini(&msg->origin);
  // octomap
  octomap_msgs__msg__Octomap__fini(&msg->octomap);
}

octomap_msgs__msg__OctomapWithPose *
octomap_msgs__msg__OctomapWithPose__create()
{
  octomap_msgs__msg__OctomapWithPose * msg = (octomap_msgs__msg__OctomapWithPose *)malloc(sizeof(octomap_msgs__msg__OctomapWithPose));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(octomap_msgs__msg__OctomapWithPose));
  bool success = octomap_msgs__msg__OctomapWithPose__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
octomap_msgs__msg__OctomapWithPose__destroy(octomap_msgs__msg__OctomapWithPose * msg)
{
  if (msg) {
    octomap_msgs__msg__OctomapWithPose__fini(msg);
  }
  free(msg);
}


bool
octomap_msgs__msg__OctomapWithPose__Sequence__init(octomap_msgs__msg__OctomapWithPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  octomap_msgs__msg__OctomapWithPose * data = NULL;
  if (size) {
    data = (octomap_msgs__msg__OctomapWithPose *)calloc(size, sizeof(octomap_msgs__msg__OctomapWithPose));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = octomap_msgs__msg__OctomapWithPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        octomap_msgs__msg__OctomapWithPose__fini(&data[i - 1]);
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
octomap_msgs__msg__OctomapWithPose__Sequence__fini(octomap_msgs__msg__OctomapWithPose__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      octomap_msgs__msg__OctomapWithPose__fini(&array->data[i]);
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

octomap_msgs__msg__OctomapWithPose__Sequence *
octomap_msgs__msg__OctomapWithPose__Sequence__create(size_t size)
{
  octomap_msgs__msg__OctomapWithPose__Sequence * array = (octomap_msgs__msg__OctomapWithPose__Sequence *)malloc(sizeof(octomap_msgs__msg__OctomapWithPose__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = octomap_msgs__msg__OctomapWithPose__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
octomap_msgs__msg__OctomapWithPose__Sequence__destroy(octomap_msgs__msg__OctomapWithPose__Sequence * array)
{
  if (array) {
    octomap_msgs__msg__OctomapWithPose__Sequence__fini(array);
  }
  free(array);
}
