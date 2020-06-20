// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_ts:msg/Arg.idl
// generated code does not contain a copyright notice
#include "tms_msg_ts/msg/arg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `arg`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tms_msg_ts__msg__Arg__init(tms_msg_ts__msg__Arg * msg)
{
  if (!msg) {
    return false;
  }
  // arg
  if (!rosidl_generator_c__float__Sequence__init(&msg->arg, 0)) {
    tms_msg_ts__msg__Arg__destroy(msg);
    return false;
  }
  return true;
}

void
tms_msg_ts__msg__Arg__fini(tms_msg_ts__msg__Arg * msg)
{
  if (!msg) {
    return;
  }
  // arg
  rosidl_generator_c__float__Sequence__fini(&msg->arg);
}

tms_msg_ts__msg__Arg *
tms_msg_ts__msg__Arg__create()
{
  tms_msg_ts__msg__Arg * msg = (tms_msg_ts__msg__Arg *)malloc(sizeof(tms_msg_ts__msg__Arg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_ts__msg__Arg));
  bool success = tms_msg_ts__msg__Arg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_ts__msg__Arg__destroy(tms_msg_ts__msg__Arg * msg)
{
  if (msg) {
    tms_msg_ts__msg__Arg__fini(msg);
  }
  free(msg);
}


bool
tms_msg_ts__msg__Arg__Sequence__init(tms_msg_ts__msg__Arg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_ts__msg__Arg * data = NULL;
  if (size) {
    data = (tms_msg_ts__msg__Arg *)calloc(size, sizeof(tms_msg_ts__msg__Arg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_ts__msg__Arg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_ts__msg__Arg__fini(&data[i - 1]);
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
tms_msg_ts__msg__Arg__Sequence__fini(tms_msg_ts__msg__Arg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_ts__msg__Arg__fini(&array->data[i]);
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

tms_msg_ts__msg__Arg__Sequence *
tms_msg_ts__msg__Arg__Sequence__create(size_t size)
{
  tms_msg_ts__msg__Arg__Sequence * array = (tms_msg_ts__msg__Arg__Sequence *)malloc(sizeof(tms_msg_ts__msg__Arg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_ts__msg__Arg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_ts__msg__Arg__Sequence__destroy(tms_msg_ts__msg__Arg__Sequence * array)
{
  if (array) {
    tms_msg_ts__msg__Arg__Sequence__fini(array);
  }
  free(array);
}
