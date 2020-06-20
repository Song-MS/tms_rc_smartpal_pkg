// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_db:srv/TmsdbPlanning.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdb_planning__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
tms_msg_db__srv__TmsdbPlanning_Request__init(tms_msg_db__srv__TmsdbPlanning_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robotid
  // objectid
  return true;
}

void
tms_msg_db__srv__TmsdbPlanning_Request__fini(tms_msg_db__srv__TmsdbPlanning_Request * msg)
{
  if (!msg) {
    return;
  }
  // robotid
  // objectid
}

tms_msg_db__srv__TmsdbPlanning_Request *
tms_msg_db__srv__TmsdbPlanning_Request__create()
{
  tms_msg_db__srv__TmsdbPlanning_Request * msg = (tms_msg_db__srv__TmsdbPlanning_Request *)malloc(sizeof(tms_msg_db__srv__TmsdbPlanning_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__srv__TmsdbPlanning_Request));
  bool success = tms_msg_db__srv__TmsdbPlanning_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__srv__TmsdbPlanning_Request__destroy(tms_msg_db__srv__TmsdbPlanning_Request * msg)
{
  if (msg) {
    tms_msg_db__srv__TmsdbPlanning_Request__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__srv__TmsdbPlanning_Request__Sequence__init(tms_msg_db__srv__TmsdbPlanning_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__srv__TmsdbPlanning_Request * data = NULL;
  if (size) {
    data = (tms_msg_db__srv__TmsdbPlanning_Request *)calloc(size, sizeof(tms_msg_db__srv__TmsdbPlanning_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__srv__TmsdbPlanning_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__srv__TmsdbPlanning_Request__fini(&data[i - 1]);
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
tms_msg_db__srv__TmsdbPlanning_Request__Sequence__fini(tms_msg_db__srv__TmsdbPlanning_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__srv__TmsdbPlanning_Request__fini(&array->data[i]);
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

tms_msg_db__srv__TmsdbPlanning_Request__Sequence *
tms_msg_db__srv__TmsdbPlanning_Request__Sequence__create(size_t size)
{
  tms_msg_db__srv__TmsdbPlanning_Request__Sequence * array = (tms_msg_db__srv__TmsdbPlanning_Request__Sequence *)malloc(sizeof(tms_msg_db__srv__TmsdbPlanning_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__srv__TmsdbPlanning_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__srv__TmsdbPlanning_Request__Sequence__destroy(tms_msg_db__srv__TmsdbPlanning_Request__Sequence * array)
{
  if (array) {
    tms_msg_db__srv__TmsdbPlanning_Request__Sequence__fini(array);
  }
  free(array);
}


bool
tms_msg_db__srv__TmsdbPlanning_Response__init(tms_msg_db__srv__TmsdbPlanning_Response * msg)
{
  if (!msg) {
    return false;
  }
  // robot_x
  // robot_y
  // robot_z
  // robot_th
  // wagon_x
  // wagon_y
  // wagon_z
  // wagon_th
  // object_x
  // object_y
  // object_z
  // object_th
  return true;
}

void
tms_msg_db__srv__TmsdbPlanning_Response__fini(tms_msg_db__srv__TmsdbPlanning_Response * msg)
{
  if (!msg) {
    return;
  }
  // robot_x
  // robot_y
  // robot_z
  // robot_th
  // wagon_x
  // wagon_y
  // wagon_z
  // wagon_th
  // object_x
  // object_y
  // object_z
  // object_th
}

tms_msg_db__srv__TmsdbPlanning_Response *
tms_msg_db__srv__TmsdbPlanning_Response__create()
{
  tms_msg_db__srv__TmsdbPlanning_Response * msg = (tms_msg_db__srv__TmsdbPlanning_Response *)malloc(sizeof(tms_msg_db__srv__TmsdbPlanning_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__srv__TmsdbPlanning_Response));
  bool success = tms_msg_db__srv__TmsdbPlanning_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__srv__TmsdbPlanning_Response__destroy(tms_msg_db__srv__TmsdbPlanning_Response * msg)
{
  if (msg) {
    tms_msg_db__srv__TmsdbPlanning_Response__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__srv__TmsdbPlanning_Response__Sequence__init(tms_msg_db__srv__TmsdbPlanning_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__srv__TmsdbPlanning_Response * data = NULL;
  if (size) {
    data = (tms_msg_db__srv__TmsdbPlanning_Response *)calloc(size, sizeof(tms_msg_db__srv__TmsdbPlanning_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__srv__TmsdbPlanning_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__srv__TmsdbPlanning_Response__fini(&data[i - 1]);
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
tms_msg_db__srv__TmsdbPlanning_Response__Sequence__fini(tms_msg_db__srv__TmsdbPlanning_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__srv__TmsdbPlanning_Response__fini(&array->data[i]);
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

tms_msg_db__srv__TmsdbPlanning_Response__Sequence *
tms_msg_db__srv__TmsdbPlanning_Response__Sequence__create(size_t size)
{
  tms_msg_db__srv__TmsdbPlanning_Response__Sequence * array = (tms_msg_db__srv__TmsdbPlanning_Response__Sequence *)malloc(sizeof(tms_msg_db__srv__TmsdbPlanning_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__srv__TmsdbPlanning_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__srv__TmsdbPlanning_Response__Sequence__destroy(tms_msg_db__srv__TmsdbPlanning_Response__Sequence * array)
{
  if (array) {
    tms_msg_db__srv__TmsdbPlanning_Response__Sequence__fini(array);
  }
  free(array);
}
