// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_db:msg/TmsdbStamped.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/msg/tmsdb_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `tmsdb`
#include "tms_msg_db/msg/tmsdb__functions.h"

bool
tms_msg_db__msg__TmsdbStamped__init(tms_msg_db__msg__TmsdbStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tms_msg_db__msg__TmsdbStamped__destroy(msg);
    return false;
  }
  // tmsdb
  if (!tms_msg_db__msg__Tmsdb__Sequence__init(&msg->tmsdb, 0)) {
    tms_msg_db__msg__TmsdbStamped__destroy(msg);
    return false;
  }
  return true;
}

void
tms_msg_db__msg__TmsdbStamped__fini(tms_msg_db__msg__TmsdbStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tmsdb
  tms_msg_db__msg__Tmsdb__Sequence__fini(&msg->tmsdb);
}

tms_msg_db__msg__TmsdbStamped *
tms_msg_db__msg__TmsdbStamped__create()
{
  tms_msg_db__msg__TmsdbStamped * msg = (tms_msg_db__msg__TmsdbStamped *)malloc(sizeof(tms_msg_db__msg__TmsdbStamped));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__msg__TmsdbStamped));
  bool success = tms_msg_db__msg__TmsdbStamped__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__msg__TmsdbStamped__destroy(tms_msg_db__msg__TmsdbStamped * msg)
{
  if (msg) {
    tms_msg_db__msg__TmsdbStamped__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__msg__TmsdbStamped__Sequence__init(tms_msg_db__msg__TmsdbStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__msg__TmsdbStamped * data = NULL;
  if (size) {
    data = (tms_msg_db__msg__TmsdbStamped *)calloc(size, sizeof(tms_msg_db__msg__TmsdbStamped));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__msg__TmsdbStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__msg__TmsdbStamped__fini(&data[i - 1]);
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
tms_msg_db__msg__TmsdbStamped__Sequence__fini(tms_msg_db__msg__TmsdbStamped__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__msg__TmsdbStamped__fini(&array->data[i]);
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

tms_msg_db__msg__TmsdbStamped__Sequence *
tms_msg_db__msg__TmsdbStamped__Sequence__create(size_t size)
{
  tms_msg_db__msg__TmsdbStamped__Sequence * array = (tms_msg_db__msg__TmsdbStamped__Sequence *)malloc(sizeof(tms_msg_db__msg__TmsdbStamped__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__msg__TmsdbStamped__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__msg__TmsdbStamped__Sequence__destroy(tms_msg_db__msg__TmsdbStamped__Sequence * array)
{
  if (array) {
    tms_msg_db__msg__TmsdbStamped__Sequence__fini(array);
  }
  free(array);
}
