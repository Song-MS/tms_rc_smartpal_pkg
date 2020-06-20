// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_recognition_msgs:msg/ObjectType.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/object_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `key`
// Member `db`
#include "rosidl_generator_c/string_functions.h"

bool
object_recognition_msgs__msg__ObjectType__init(object_recognition_msgs__msg__ObjectType * msg)
{
  if (!msg) {
    return false;
  }
  // key
  if (!rosidl_generator_c__String__init(&msg->key)) {
    object_recognition_msgs__msg__ObjectType__destroy(msg);
    return false;
  }
  // db
  if (!rosidl_generator_c__String__init(&msg->db)) {
    object_recognition_msgs__msg__ObjectType__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__msg__ObjectType__fini(object_recognition_msgs__msg__ObjectType * msg)
{
  if (!msg) {
    return;
  }
  // key
  rosidl_generator_c__String__fini(&msg->key);
  // db
  rosidl_generator_c__String__fini(&msg->db);
}

object_recognition_msgs__msg__ObjectType *
object_recognition_msgs__msg__ObjectType__create()
{
  object_recognition_msgs__msg__ObjectType * msg = (object_recognition_msgs__msg__ObjectType *)malloc(sizeof(object_recognition_msgs__msg__ObjectType));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__msg__ObjectType));
  bool success = object_recognition_msgs__msg__ObjectType__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__msg__ObjectType__destroy(object_recognition_msgs__msg__ObjectType * msg)
{
  if (msg) {
    object_recognition_msgs__msg__ObjectType__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__msg__ObjectType__Sequence__init(object_recognition_msgs__msg__ObjectType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__msg__ObjectType * data = NULL;
  if (size) {
    data = (object_recognition_msgs__msg__ObjectType *)calloc(size, sizeof(object_recognition_msgs__msg__ObjectType));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__msg__ObjectType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__msg__ObjectType__fini(&data[i - 1]);
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
object_recognition_msgs__msg__ObjectType__Sequence__fini(object_recognition_msgs__msg__ObjectType__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__msg__ObjectType__fini(&array->data[i]);
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

object_recognition_msgs__msg__ObjectType__Sequence *
object_recognition_msgs__msg__ObjectType__Sequence__create(size_t size)
{
  object_recognition_msgs__msg__ObjectType__Sequence * array = (object_recognition_msgs__msg__ObjectType__Sequence *)malloc(sizeof(object_recognition_msgs__msg__ObjectType__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__msg__ObjectType__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__msg__ObjectType__Sequence__destroy(object_recognition_msgs__msg__ObjectType__Sequence * array)
{
  if (array) {
    object_recognition_msgs__msg__ObjectType__Sequence__fini(array);
  }
  free(array);
}
