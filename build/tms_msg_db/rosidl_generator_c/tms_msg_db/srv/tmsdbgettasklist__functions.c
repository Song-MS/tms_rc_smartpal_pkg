// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_db:srv/Tmsdbgettasklist.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbgettasklist__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
tms_msg_db__srv__Tmsdbgettasklist_Request__init(tms_msg_db__srv__Tmsdbgettasklist_Request * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  return true;
}

void
tms_msg_db__srv__Tmsdbgettasklist_Request__fini(tms_msg_db__srv__Tmsdbgettasklist_Request * msg)
{
  if (!msg) {
    return;
  }
  // task_id
}

tms_msg_db__srv__Tmsdbgettasklist_Request *
tms_msg_db__srv__Tmsdbgettasklist_Request__create()
{
  tms_msg_db__srv__Tmsdbgettasklist_Request * msg = (tms_msg_db__srv__Tmsdbgettasklist_Request *)malloc(sizeof(tms_msg_db__srv__Tmsdbgettasklist_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__srv__Tmsdbgettasklist_Request));
  bool success = tms_msg_db__srv__Tmsdbgettasklist_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__srv__Tmsdbgettasklist_Request__destroy(tms_msg_db__srv__Tmsdbgettasklist_Request * msg)
{
  if (msg) {
    tms_msg_db__srv__Tmsdbgettasklist_Request__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence__init(tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__srv__Tmsdbgettasklist_Request * data = NULL;
  if (size) {
    data = (tms_msg_db__srv__Tmsdbgettasklist_Request *)calloc(size, sizeof(tms_msg_db__srv__Tmsdbgettasklist_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__srv__Tmsdbgettasklist_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__srv__Tmsdbgettasklist_Request__fini(&data[i - 1]);
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
tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence__fini(tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__srv__Tmsdbgettasklist_Request__fini(&array->data[i]);
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

tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence *
tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence__create(size_t size)
{
  tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence * array = (tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence *)malloc(sizeof(tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence__destroy(tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence * array)
{
  if (array) {
    tms_msg_db__srv__Tmsdbgettasklist_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `task_name`
// Member `sub_task`
// Member `sensor`
// Member `robot_func`
// Member `sensor_func`
#include "rosidl_generator_c/string_functions.h"

bool
tms_msg_db__srv__Tmsdbgettasklist_Response__init(tms_msg_db__srv__Tmsdbgettasklist_Response * msg)
{
  if (!msg) {
    return false;
  }
  // task_name
  if (!rosidl_generator_c__String__init(&msg->task_name)) {
    tms_msg_db__srv__Tmsdbgettasklist_Response__destroy(msg);
    return false;
  }
  // priority
  // time
  // sub_task
  if (!rosidl_generator_c__String__init(&msg->sub_task)) {
    tms_msg_db__srv__Tmsdbgettasklist_Response__destroy(msg);
    return false;
  }
  // robot_id
  // sensor
  if (!rosidl_generator_c__String__init(&msg->sensor)) {
    tms_msg_db__srv__Tmsdbgettasklist_Response__destroy(msg);
    return false;
  }
  // robot_func
  if (!rosidl_generator_c__String__init(&msg->robot_func)) {
    tms_msg_db__srv__Tmsdbgettasklist_Response__destroy(msg);
    return false;
  }
  // sensor_func
  if (!rosidl_generator_c__String__init(&msg->sensor_func)) {
    tms_msg_db__srv__Tmsdbgettasklist_Response__destroy(msg);
    return false;
  }
  return true;
}

void
tms_msg_db__srv__Tmsdbgettasklist_Response__fini(tms_msg_db__srv__Tmsdbgettasklist_Response * msg)
{
  if (!msg) {
    return;
  }
  // task_name
  rosidl_generator_c__String__fini(&msg->task_name);
  // priority
  // time
  // sub_task
  rosidl_generator_c__String__fini(&msg->sub_task);
  // robot_id
  // sensor
  rosidl_generator_c__String__fini(&msg->sensor);
  // robot_func
  rosidl_generator_c__String__fini(&msg->robot_func);
  // sensor_func
  rosidl_generator_c__String__fini(&msg->sensor_func);
}

tms_msg_db__srv__Tmsdbgettasklist_Response *
tms_msg_db__srv__Tmsdbgettasklist_Response__create()
{
  tms_msg_db__srv__Tmsdbgettasklist_Response * msg = (tms_msg_db__srv__Tmsdbgettasklist_Response *)malloc(sizeof(tms_msg_db__srv__Tmsdbgettasklist_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__srv__Tmsdbgettasklist_Response));
  bool success = tms_msg_db__srv__Tmsdbgettasklist_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__srv__Tmsdbgettasklist_Response__destroy(tms_msg_db__srv__Tmsdbgettasklist_Response * msg)
{
  if (msg) {
    tms_msg_db__srv__Tmsdbgettasklist_Response__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence__init(tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__srv__Tmsdbgettasklist_Response * data = NULL;
  if (size) {
    data = (tms_msg_db__srv__Tmsdbgettasklist_Response *)calloc(size, sizeof(tms_msg_db__srv__Tmsdbgettasklist_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__srv__Tmsdbgettasklist_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__srv__Tmsdbgettasklist_Response__fini(&data[i - 1]);
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
tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence__fini(tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__srv__Tmsdbgettasklist_Response__fini(&array->data[i]);
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

tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence *
tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence__create(size_t size)
{
  tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence * array = (tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence *)malloc(sizeof(tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence__destroy(tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence * array)
{
  if (array) {
    tms_msg_db__srv__Tmsdbgettasklist_Response__Sequence__fini(array);
  }
  free(array);
}
