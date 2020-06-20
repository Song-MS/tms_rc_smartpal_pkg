// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_db:msg/Tmsdb.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/msg/tmsdb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `time`
// Member `type`
// Member `name`
// Member `joint`
// Member `rfid`
// Member `etcdata`
// Member `extfile`
// Member `task`
// Member `note`
// Member `tag`
// Member `announce`
#include "rosidl_generator_c/string_functions.h"

bool
tms_msg_db__msg__Tmsdb__init(tms_msg_db__msg__Tmsdb * msg)
{
  if (!msg) {
    return false;
  }
  // time
  if (!rosidl_generator_c__String__init(&msg->time)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // type
  if (!rosidl_generator_c__String__init(&msg->type)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // id
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // x
  // y
  // z
  // rr
  // rp
  // ry
  // offset_x
  // offset_y
  // offset_z
  // joint
  if (!rosidl_generator_c__String__init(&msg->joint)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // weight
  // rfid
  if (!rosidl_generator_c__String__init(&msg->rfid)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // etcdata
  if (!rosidl_generator_c__String__init(&msg->etcdata)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // place
  // extfile
  if (!rosidl_generator_c__String__init(&msg->extfile)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // sensor
  // probability
  // state
  // task
  if (!rosidl_generator_c__String__init(&msg->task)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // note
  if (!rosidl_generator_c__String__init(&msg->note)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // tag
  if (!rosidl_generator_c__String__init(&msg->tag)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  // announce
  if (!rosidl_generator_c__String__init(&msg->announce)) {
    tms_msg_db__msg__Tmsdb__destroy(msg);
    return false;
  }
  return true;
}

void
tms_msg_db__msg__Tmsdb__fini(tms_msg_db__msg__Tmsdb * msg)
{
  if (!msg) {
    return;
  }
  // time
  rosidl_generator_c__String__fini(&msg->time);
  // type
  rosidl_generator_c__String__fini(&msg->type);
  // id
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // x
  // y
  // z
  // rr
  // rp
  // ry
  // offset_x
  // offset_y
  // offset_z
  // joint
  rosidl_generator_c__String__fini(&msg->joint);
  // weight
  // rfid
  rosidl_generator_c__String__fini(&msg->rfid);
  // etcdata
  rosidl_generator_c__String__fini(&msg->etcdata);
  // place
  // extfile
  rosidl_generator_c__String__fini(&msg->extfile);
  // sensor
  // probability
  // state
  // task
  rosidl_generator_c__String__fini(&msg->task);
  // note
  rosidl_generator_c__String__fini(&msg->note);
  // tag
  rosidl_generator_c__String__fini(&msg->tag);
  // announce
  rosidl_generator_c__String__fini(&msg->announce);
}

tms_msg_db__msg__Tmsdb *
tms_msg_db__msg__Tmsdb__create()
{
  tms_msg_db__msg__Tmsdb * msg = (tms_msg_db__msg__Tmsdb *)malloc(sizeof(tms_msg_db__msg__Tmsdb));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__msg__Tmsdb));
  bool success = tms_msg_db__msg__Tmsdb__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__msg__Tmsdb__destroy(tms_msg_db__msg__Tmsdb * msg)
{
  if (msg) {
    tms_msg_db__msg__Tmsdb__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__msg__Tmsdb__Sequence__init(tms_msg_db__msg__Tmsdb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__msg__Tmsdb * data = NULL;
  if (size) {
    data = (tms_msg_db__msg__Tmsdb *)calloc(size, sizeof(tms_msg_db__msg__Tmsdb));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__msg__Tmsdb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__msg__Tmsdb__fini(&data[i - 1]);
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
tms_msg_db__msg__Tmsdb__Sequence__fini(tms_msg_db__msg__Tmsdb__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__msg__Tmsdb__fini(&array->data[i]);
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

tms_msg_db__msg__Tmsdb__Sequence *
tms_msg_db__msg__Tmsdb__Sequence__create(size_t size)
{
  tms_msg_db__msg__Tmsdb__Sequence * array = (tms_msg_db__msg__Tmsdb__Sequence *)malloc(sizeof(tms_msg_db__msg__Tmsdb__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__msg__Tmsdb__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__msg__Tmsdb__Sequence__destroy(tms_msg_db__msg__Tmsdb__Sequence * array)
{
  if (array) {
    tms_msg_db__msg__Tmsdb__Sequence__fini(array);
  }
  free(array);
}
