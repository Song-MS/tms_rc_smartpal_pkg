// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_recognition_msgs:msg/TableArray.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/table_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `tables`
#include "object_recognition_msgs/msg/table__functions.h"

bool
object_recognition_msgs__msg__TableArray__init(object_recognition_msgs__msg__TableArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_recognition_msgs__msg__TableArray__destroy(msg);
    return false;
  }
  // tables
  if (!object_recognition_msgs__msg__Table__Sequence__init(&msg->tables, 0)) {
    object_recognition_msgs__msg__TableArray__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__msg__TableArray__fini(object_recognition_msgs__msg__TableArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tables
  object_recognition_msgs__msg__Table__Sequence__fini(&msg->tables);
}

object_recognition_msgs__msg__TableArray *
object_recognition_msgs__msg__TableArray__create()
{
  object_recognition_msgs__msg__TableArray * msg = (object_recognition_msgs__msg__TableArray *)malloc(sizeof(object_recognition_msgs__msg__TableArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__msg__TableArray));
  bool success = object_recognition_msgs__msg__TableArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__msg__TableArray__destroy(object_recognition_msgs__msg__TableArray * msg)
{
  if (msg) {
    object_recognition_msgs__msg__TableArray__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__msg__TableArray__Sequence__init(object_recognition_msgs__msg__TableArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__msg__TableArray * data = NULL;
  if (size) {
    data = (object_recognition_msgs__msg__TableArray *)calloc(size, sizeof(object_recognition_msgs__msg__TableArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__msg__TableArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__msg__TableArray__fini(&data[i - 1]);
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
object_recognition_msgs__msg__TableArray__Sequence__fini(object_recognition_msgs__msg__TableArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__msg__TableArray__fini(&array->data[i]);
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

object_recognition_msgs__msg__TableArray__Sequence *
object_recognition_msgs__msg__TableArray__Sequence__create(size_t size)
{
  object_recognition_msgs__msg__TableArray__Sequence * array = (object_recognition_msgs__msg__TableArray__Sequence *)malloc(sizeof(object_recognition_msgs__msg__TableArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__msg__TableArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__msg__TableArray__Sequence__destroy(object_recognition_msgs__msg__TableArray__Sequence * array)
{
  if (array) {
    object_recognition_msgs__msg__TableArray__Sequence__fini(array);
  }
  free(array);
}
