// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_ur:msg/JuliusMsg.idl
// generated code does not contain a copyright notice
#include "tms_msg_ur/msg/julius_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `data`
#include "rosidl_generator_c/string_functions.h"

bool
tms_msg_ur__msg__JuliusMsg__init(tms_msg_ur__msg__JuliusMsg * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_generator_c__String__init(&msg->data)) {
    tms_msg_ur__msg__JuliusMsg__destroy(msg);
    return false;
  }
  // value
  return true;
}

void
tms_msg_ur__msg__JuliusMsg__fini(tms_msg_ur__msg__JuliusMsg * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_generator_c__String__fini(&msg->data);
  // value
}

tms_msg_ur__msg__JuliusMsg *
tms_msg_ur__msg__JuliusMsg__create()
{
  tms_msg_ur__msg__JuliusMsg * msg = (tms_msg_ur__msg__JuliusMsg *)malloc(sizeof(tms_msg_ur__msg__JuliusMsg));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_ur__msg__JuliusMsg));
  bool success = tms_msg_ur__msg__JuliusMsg__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_ur__msg__JuliusMsg__destroy(tms_msg_ur__msg__JuliusMsg * msg)
{
  if (msg) {
    tms_msg_ur__msg__JuliusMsg__fini(msg);
  }
  free(msg);
}


bool
tms_msg_ur__msg__JuliusMsg__Sequence__init(tms_msg_ur__msg__JuliusMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_ur__msg__JuliusMsg * data = NULL;
  if (size) {
    data = (tms_msg_ur__msg__JuliusMsg *)calloc(size, sizeof(tms_msg_ur__msg__JuliusMsg));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_ur__msg__JuliusMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_ur__msg__JuliusMsg__fini(&data[i - 1]);
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
tms_msg_ur__msg__JuliusMsg__Sequence__fini(tms_msg_ur__msg__JuliusMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_ur__msg__JuliusMsg__fini(&array->data[i]);
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

tms_msg_ur__msg__JuliusMsg__Sequence *
tms_msg_ur__msg__JuliusMsg__Sequence__create(size_t size)
{
  tms_msg_ur__msg__JuliusMsg__Sequence * array = (tms_msg_ur__msg__JuliusMsg__Sequence *)malloc(sizeof(tms_msg_ur__msg__JuliusMsg__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_ur__msg__JuliusMsg__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_ur__msg__JuliusMsg__Sequence__destroy(tms_msg_ur__msg__JuliusMsg__Sequence * array)
{
  if (array) {
    tms_msg_ur__msg__JuliusMsg__Sequence__fini(array);
  }
  free(array);
}
