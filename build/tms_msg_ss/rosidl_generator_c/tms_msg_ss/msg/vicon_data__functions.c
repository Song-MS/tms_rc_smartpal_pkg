// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_ss:msg/ViconData.idl
// generated code does not contain a copyright notice
#include "tms_msg_ss/msg/vicon_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header__functions.h"
// Member `measuredtime`
// Member `subjectname`
// Member `segmentname`
#include "rosidl_generator_c/string_functions.h"
// Member `translation`
#include "geometry_msgs/msg/point__functions.h"
// Member `rotation`
#include "geometry_msgs/msg/quaternion__functions.h"

bool
tms_msg_ss__msg__ViconData__init(tms_msg_ss__msg__ViconData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tms_msg_ss__msg__ViconData__destroy(msg);
    return false;
  }
  // measuredtime
  if (!rosidl_generator_c__String__init(&msg->measuredtime)) {
    tms_msg_ss__msg__ViconData__destroy(msg);
    return false;
  }
  // subjectname
  if (!rosidl_generator_c__String__init(&msg->subjectname)) {
    tms_msg_ss__msg__ViconData__destroy(msg);
    return false;
  }
  // segmentname
  if (!rosidl_generator_c__String__init(&msg->segmentname)) {
    tms_msg_ss__msg__ViconData__destroy(msg);
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Point__init(&msg->translation)) {
    tms_msg_ss__msg__ViconData__destroy(msg);
    return false;
  }
  // rotation
  if (!geometry_msgs__msg__Quaternion__init(&msg->rotation)) {
    tms_msg_ss__msg__ViconData__destroy(msg);
    return false;
  }
  // eulerxyz
  return true;
}

void
tms_msg_ss__msg__ViconData__fini(tms_msg_ss__msg__ViconData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // measuredtime
  rosidl_generator_c__String__fini(&msg->measuredtime);
  // subjectname
  rosidl_generator_c__String__fini(&msg->subjectname);
  // segmentname
  rosidl_generator_c__String__fini(&msg->segmentname);
  // translation
  geometry_msgs__msg__Point__fini(&msg->translation);
  // rotation
  geometry_msgs__msg__Quaternion__fini(&msg->rotation);
  // eulerxyz
}

tms_msg_ss__msg__ViconData *
tms_msg_ss__msg__ViconData__create()
{
  tms_msg_ss__msg__ViconData * msg = (tms_msg_ss__msg__ViconData *)malloc(sizeof(tms_msg_ss__msg__ViconData));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_ss__msg__ViconData));
  bool success = tms_msg_ss__msg__ViconData__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_ss__msg__ViconData__destroy(tms_msg_ss__msg__ViconData * msg)
{
  if (msg) {
    tms_msg_ss__msg__ViconData__fini(msg);
  }
  free(msg);
}


bool
tms_msg_ss__msg__ViconData__Sequence__init(tms_msg_ss__msg__ViconData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_ss__msg__ViconData * data = NULL;
  if (size) {
    data = (tms_msg_ss__msg__ViconData *)calloc(size, sizeof(tms_msg_ss__msg__ViconData));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_ss__msg__ViconData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_ss__msg__ViconData__fini(&data[i - 1]);
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
tms_msg_ss__msg__ViconData__Sequence__fini(tms_msg_ss__msg__ViconData__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_ss__msg__ViconData__fini(&array->data[i]);
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

tms_msg_ss__msg__ViconData__Sequence *
tms_msg_ss__msg__ViconData__Sequence__create(size_t size)
{
  tms_msg_ss__msg__ViconData__Sequence * array = (tms_msg_ss__msg__ViconData__Sequence *)malloc(sizeof(tms_msg_ss__msg__ViconData__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_ss__msg__ViconData__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_ss__msg__ViconData__Sequence__destroy(tms_msg_ss__msg__ViconData__Sequence * array)
{
  if (array) {
    tms_msg_ss__msg__ViconData__Sequence__fini(array);
  }
  free(array);
}
