// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_recognition_msgs:msg/RecognizedObjectArray.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/msg/recognized_object_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `objects`
#include "object_recognition_msgs/msg/recognized_object__functions.h"
// Member `cooccurrence`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
object_recognition_msgs__msg__RecognizedObjectArray__init(object_recognition_msgs__msg__RecognizedObjectArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    object_recognition_msgs__msg__RecognizedObjectArray__destroy(msg);
    return false;
  }
  // objects
  if (!object_recognition_msgs__msg__RecognizedObject__Sequence__init(&msg->objects, 0)) {
    object_recognition_msgs__msg__RecognizedObjectArray__destroy(msg);
    return false;
  }
  // cooccurrence
  if (!rosidl_generator_c__float__Sequence__init(&msg->cooccurrence, 0)) {
    object_recognition_msgs__msg__RecognizedObjectArray__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__msg__RecognizedObjectArray__fini(object_recognition_msgs__msg__RecognizedObjectArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  object_recognition_msgs__msg__RecognizedObject__Sequence__fini(&msg->objects);
  // cooccurrence
  rosidl_generator_c__float__Sequence__fini(&msg->cooccurrence);
}

object_recognition_msgs__msg__RecognizedObjectArray *
object_recognition_msgs__msg__RecognizedObjectArray__create()
{
  object_recognition_msgs__msg__RecognizedObjectArray * msg = (object_recognition_msgs__msg__RecognizedObjectArray *)malloc(sizeof(object_recognition_msgs__msg__RecognizedObjectArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__msg__RecognizedObjectArray));
  bool success = object_recognition_msgs__msg__RecognizedObjectArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__msg__RecognizedObjectArray__destroy(object_recognition_msgs__msg__RecognizedObjectArray * msg)
{
  if (msg) {
    object_recognition_msgs__msg__RecognizedObjectArray__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__msg__RecognizedObjectArray__Sequence__init(object_recognition_msgs__msg__RecognizedObjectArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__msg__RecognizedObjectArray * data = NULL;
  if (size) {
    data = (object_recognition_msgs__msg__RecognizedObjectArray *)calloc(size, sizeof(object_recognition_msgs__msg__RecognizedObjectArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__msg__RecognizedObjectArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__msg__RecognizedObjectArray__fini(&data[i - 1]);
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
object_recognition_msgs__msg__RecognizedObjectArray__Sequence__fini(object_recognition_msgs__msg__RecognizedObjectArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__msg__RecognizedObjectArray__fini(&array->data[i]);
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

object_recognition_msgs__msg__RecognizedObjectArray__Sequence *
object_recognition_msgs__msg__RecognizedObjectArray__Sequence__create(size_t size)
{
  object_recognition_msgs__msg__RecognizedObjectArray__Sequence * array = (object_recognition_msgs__msg__RecognizedObjectArray__Sequence *)malloc(sizeof(object_recognition_msgs__msg__RecognizedObjectArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__msg__RecognizedObjectArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__msg__RecognizedObjectArray__Sequence__destroy(object_recognition_msgs__msg__RecognizedObjectArray__Sequence * array)
{
  if (array) {
    object_recognition_msgs__msg__RecognizedObjectArray__Sequence__fini(array);
  }
  free(array);
}
