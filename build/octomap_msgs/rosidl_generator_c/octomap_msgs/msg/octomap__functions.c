// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from octomap_msgs:msg/Octomap.idl
// generated code does not contain a copyright notice
#include "octomap_msgs/msg/octomap__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `id`
#include "rosidl_generator_c/string_functions.h"
// Member `data`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
octomap_msgs__msg__Octomap__init(octomap_msgs__msg__Octomap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    octomap_msgs__msg__Octomap__destroy(msg);
    return false;
  }
  // binary
  // id
  if (!rosidl_generator_c__String__init(&msg->id)) {
    octomap_msgs__msg__Octomap__destroy(msg);
    return false;
  }
  // resolution
  // data
  if (!rosidl_generator_c__int8__Sequence__init(&msg->data, 0)) {
    octomap_msgs__msg__Octomap__destroy(msg);
    return false;
  }
  return true;
}

void
octomap_msgs__msg__Octomap__fini(octomap_msgs__msg__Octomap * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // binary
  // id
  rosidl_generator_c__String__fini(&msg->id);
  // resolution
  // data
  rosidl_generator_c__int8__Sequence__fini(&msg->data);
}

octomap_msgs__msg__Octomap *
octomap_msgs__msg__Octomap__create()
{
  octomap_msgs__msg__Octomap * msg = (octomap_msgs__msg__Octomap *)malloc(sizeof(octomap_msgs__msg__Octomap));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(octomap_msgs__msg__Octomap));
  bool success = octomap_msgs__msg__Octomap__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
octomap_msgs__msg__Octomap__destroy(octomap_msgs__msg__Octomap * msg)
{
  if (msg) {
    octomap_msgs__msg__Octomap__fini(msg);
  }
  free(msg);
}


bool
octomap_msgs__msg__Octomap__Sequence__init(octomap_msgs__msg__Octomap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  octomap_msgs__msg__Octomap * data = NULL;
  if (size) {
    data = (octomap_msgs__msg__Octomap *)calloc(size, sizeof(octomap_msgs__msg__Octomap));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = octomap_msgs__msg__Octomap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        octomap_msgs__msg__Octomap__fini(&data[i - 1]);
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
octomap_msgs__msg__Octomap__Sequence__fini(octomap_msgs__msg__Octomap__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      octomap_msgs__msg__Octomap__fini(&array->data[i]);
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

octomap_msgs__msg__Octomap__Sequence *
octomap_msgs__msg__Octomap__Sequence__create(size_t size)
{
  octomap_msgs__msg__Octomap__Sequence * array = (octomap_msgs__msg__Octomap__Sequence *)malloc(sizeof(octomap_msgs__msg__Octomap__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = octomap_msgs__msg__Octomap__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
octomap_msgs__msg__Octomap__Sequence__destroy(octomap_msgs__msg__Octomap__Sequence * array)
{
  if (array) {
    octomap_msgs__msg__Octomap__Sequence__fini(array);
  }
  free(array);
}
