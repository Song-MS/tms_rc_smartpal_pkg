// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:msg/MoveItErrorCodes.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/msg/move_it_error_codes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
moveit_msgs__msg__MoveItErrorCodes__init(moveit_msgs__msg__MoveItErrorCodes * msg)
{
  if (!msg) {
    return false;
  }
  // val
  return true;
}

void
moveit_msgs__msg__MoveItErrorCodes__fini(moveit_msgs__msg__MoveItErrorCodes * msg)
{
  if (!msg) {
    return;
  }
  // val
}

moveit_msgs__msg__MoveItErrorCodes *
moveit_msgs__msg__MoveItErrorCodes__create()
{
  moveit_msgs__msg__MoveItErrorCodes * msg = (moveit_msgs__msg__MoveItErrorCodes *)malloc(sizeof(moveit_msgs__msg__MoveItErrorCodes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__msg__MoveItErrorCodes));
  bool success = moveit_msgs__msg__MoveItErrorCodes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__msg__MoveItErrorCodes__destroy(moveit_msgs__msg__MoveItErrorCodes * msg)
{
  if (msg) {
    moveit_msgs__msg__MoveItErrorCodes__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__msg__MoveItErrorCodes__Sequence__init(moveit_msgs__msg__MoveItErrorCodes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__msg__MoveItErrorCodes * data = NULL;
  if (size) {
    data = (moveit_msgs__msg__MoveItErrorCodes *)calloc(size, sizeof(moveit_msgs__msg__MoveItErrorCodes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__msg__MoveItErrorCodes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__msg__MoveItErrorCodes__fini(&data[i - 1]);
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
moveit_msgs__msg__MoveItErrorCodes__Sequence__fini(moveit_msgs__msg__MoveItErrorCodes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__msg__MoveItErrorCodes__fini(&array->data[i]);
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

moveit_msgs__msg__MoveItErrorCodes__Sequence *
moveit_msgs__msg__MoveItErrorCodes__Sequence__create(size_t size)
{
  moveit_msgs__msg__MoveItErrorCodes__Sequence * array = (moveit_msgs__msg__MoveItErrorCodes__Sequence *)malloc(sizeof(moveit_msgs__msg__MoveItErrorCodes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__msg__MoveItErrorCodes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__msg__MoveItErrorCodes__Sequence__destroy(moveit_msgs__msg__MoveItErrorCodes__Sequence * array)
{
  if (array) {
    moveit_msgs__msg__MoveItErrorCodes__Sequence__fini(array);
  }
  free(array);
}
