// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_db:msg/TmsData.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/msg/tms_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `time`
// Member `type`
// Member `name`
// Member `sensor`
// Member `place`
#include "rosidl_generator_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose__functions.h"
// Member `offset`
#include "geometry_msgs/msg/point__functions.h"

bool
tms_msg_db__msg__TmsData__init(tms_msg_db__msg__TmsData * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!rosidl_generator_c__String__init(&msg->time)) {
    tms_msg_db__msg__TmsData__destroy(msg);
    return false;
  }
  // type
  if (!rosidl_generator_c__String__init(&msg->type)) {
    tms_msg_db__msg__TmsData__destroy(msg);
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    tms_msg_db__msg__TmsData__destroy(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    tms_msg_db__msg__TmsData__destroy(msg);
    return false;
  }
  // offset
  if (!geometry_msgs__msg__Point__init(&msg->offset)) {
    tms_msg_db__msg__TmsData__destroy(msg);
    return false;
  }
  // sensor
  if (!rosidl_generator_c__String__init(&msg->sensor)) {
    tms_msg_db__msg__TmsData__destroy(msg);
    return false;
  }
  // place
  if (!rosidl_generator_c__String__init(&msg->place)) {
    tms_msg_db__msg__TmsData__destroy(msg);
    return false;
  }
  // state
  return true;
}

void
tms_msg_db__msg__TmsData__fini(tms_msg_db__msg__TmsData * msg)
{
  if (!msg) {
    return;
  }
  // time
  rosidl_generator_c__String__fini(&msg->time);
  // type
  rosidl_generator_c__String__fini(&msg->type);
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // offset
  geometry_msgs__msg__Point__fini(&msg->offset);
  // sensor
  rosidl_generator_c__String__fini(&msg->sensor);
  // place
  rosidl_generator_c__String__fini(&msg->place);
  // state
}

tms_msg_db__msg__TmsData *
tms_msg_db__msg__TmsData__create()
{
  tms_msg_db__msg__TmsData * msg = (tms_msg_db__msg__TmsData *)malloc(sizeof(tms_msg_db__msg__TmsData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__msg__TmsData));
  bool success = tms_msg_db__msg__TmsData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__msg__TmsData__destroy(tms_msg_db__msg__TmsData * msg)
{
  if (msg) {
    tms_msg_db__msg__TmsData__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__msg__TmsData__Sequence__init(tms_msg_db__msg__TmsData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__msg__TmsData * data = NULL;
  if (size) {
    data = (tms_msg_db__msg__TmsData *)calloc(size, sizeof(tms_msg_db__msg__TmsData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__msg__TmsData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__msg__TmsData__fini(&data[i - 1]);
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
tms_msg_db__msg__TmsData__Sequence__fini(tms_msg_db__msg__TmsData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__msg__TmsData__fini(&array->data[i]);
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

tms_msg_db__msg__TmsData__Sequence *
tms_msg_db__msg__TmsData__Sequence__create(size_t size)
{
  tms_msg_db__msg__TmsData__Sequence * array = (tms_msg_db__msg__TmsData__Sequence *)malloc(sizeof(tms_msg_db__msg__TmsData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__msg__TmsData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__msg__TmsData__Sequence__destroy(tms_msg_db__msg__TmsData__Sequence * array)
{
  if (array) {
    tms_msg_db__msg__TmsData__Sequence__fini(array);
  }
  free(array);
}
