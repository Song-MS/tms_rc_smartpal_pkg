// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_ts:srv/TmsSaFindObjects.idl
// generated code does not contain a copyright notice
#include "tms_msg_ts/srv/tms_sa_find_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `search_furnitures_id`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tms_msg_ts__srv__TmsSaFindObjects_Request__init(tms_msg_ts__srv__TmsSaFindObjects_Request * msg)
{
  if (!msg) {
    return false;
  }
  // search_furnitures_id
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->search_furnitures_id, 0)) {
    tms_msg_ts__srv__TmsSaFindObjects_Request__destroy(msg);
    return false;
  }
  return true;
}

void
tms_msg_ts__srv__TmsSaFindObjects_Request__fini(tms_msg_ts__srv__TmsSaFindObjects_Request * msg)
{
  if (!msg) {
    return;
  }
  // search_furnitures_id
  rosidl_generator_c__uint32__Sequence__fini(&msg->search_furnitures_id);
}

tms_msg_ts__srv__TmsSaFindObjects_Request *
tms_msg_ts__srv__TmsSaFindObjects_Request__create()
{
  tms_msg_ts__srv__TmsSaFindObjects_Request * msg = (tms_msg_ts__srv__TmsSaFindObjects_Request *)malloc(sizeof(tms_msg_ts__srv__TmsSaFindObjects_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_ts__srv__TmsSaFindObjects_Request));
  bool success = tms_msg_ts__srv__TmsSaFindObjects_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_ts__srv__TmsSaFindObjects_Request__destroy(tms_msg_ts__srv__TmsSaFindObjects_Request * msg)
{
  if (msg) {
    tms_msg_ts__srv__TmsSaFindObjects_Request__fini(msg);
  }
  free(msg);
}


bool
tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence__init(tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_ts__srv__TmsSaFindObjects_Request * data = NULL;
  if (size) {
    data = (tms_msg_ts__srv__TmsSaFindObjects_Request *)calloc(size, sizeof(tms_msg_ts__srv__TmsSaFindObjects_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_ts__srv__TmsSaFindObjects_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_ts__srv__TmsSaFindObjects_Request__fini(&data[i - 1]);
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
tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence__fini(tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_ts__srv__TmsSaFindObjects_Request__fini(&array->data[i]);
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

tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence *
tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence__create(size_t size)
{
  tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence * array = (tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence *)malloc(sizeof(tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence__destroy(tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence * array)
{
  if (array) {
    tms_msg_ts__srv__TmsSaFindObjects_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `message`
#include "rosidl_generator_c/string_functions.h"
// Member `object_id`
// Member `object_x`
// Member `object_y`
// Member `object_z`
// Member `furnitures_id`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tms_msg_ts__srv__TmsSaFindObjects_Response__init(tms_msg_ts__srv__TmsSaFindObjects_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_generator_c__String__init(&msg->message)) {
    tms_msg_ts__srv__TmsSaFindObjects_Response__destroy(msg);
    return false;
  }
  // object_id
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->object_id, 0)) {
    tms_msg_ts__srv__TmsSaFindObjects_Response__destroy(msg);
    return false;
  }
  // object_x
  if (!rosidl_generator_c__float__Sequence__init(&msg->object_x, 0)) {
    tms_msg_ts__srv__TmsSaFindObjects_Response__destroy(msg);
    return false;
  }
  // object_y
  if (!rosidl_generator_c__float__Sequence__init(&msg->object_y, 0)) {
    tms_msg_ts__srv__TmsSaFindObjects_Response__destroy(msg);
    return false;
  }
  // object_z
  if (!rosidl_generator_c__float__Sequence__init(&msg->object_z, 0)) {
    tms_msg_ts__srv__TmsSaFindObjects_Response__destroy(msg);
    return false;
  }
  // furnitures_id
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->furnitures_id, 0)) {
    tms_msg_ts__srv__TmsSaFindObjects_Response__destroy(msg);
    return false;
  }
  return true;
}

void
tms_msg_ts__srv__TmsSaFindObjects_Response__fini(tms_msg_ts__srv__TmsSaFindObjects_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_generator_c__String__fini(&msg->message);
  // object_id
  rosidl_generator_c__uint32__Sequence__fini(&msg->object_id);
  // object_x
  rosidl_generator_c__float__Sequence__fini(&msg->object_x);
  // object_y
  rosidl_generator_c__float__Sequence__fini(&msg->object_y);
  // object_z
  rosidl_generator_c__float__Sequence__fini(&msg->object_z);
  // furnitures_id
  rosidl_generator_c__uint32__Sequence__fini(&msg->furnitures_id);
}

tms_msg_ts__srv__TmsSaFindObjects_Response *
tms_msg_ts__srv__TmsSaFindObjects_Response__create()
{
  tms_msg_ts__srv__TmsSaFindObjects_Response * msg = (tms_msg_ts__srv__TmsSaFindObjects_Response *)malloc(sizeof(tms_msg_ts__srv__TmsSaFindObjects_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_ts__srv__TmsSaFindObjects_Response));
  bool success = tms_msg_ts__srv__TmsSaFindObjects_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_ts__srv__TmsSaFindObjects_Response__destroy(tms_msg_ts__srv__TmsSaFindObjects_Response * msg)
{
  if (msg) {
    tms_msg_ts__srv__TmsSaFindObjects_Response__fini(msg);
  }
  free(msg);
}


bool
tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence__init(tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_ts__srv__TmsSaFindObjects_Response * data = NULL;
  if (size) {
    data = (tms_msg_ts__srv__TmsSaFindObjects_Response *)calloc(size, sizeof(tms_msg_ts__srv__TmsSaFindObjects_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_ts__srv__TmsSaFindObjects_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_ts__srv__TmsSaFindObjects_Response__fini(&data[i - 1]);
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
tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence__fini(tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_ts__srv__TmsSaFindObjects_Response__fini(&array->data[i]);
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

tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence *
tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence__create(size_t size)
{
  tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence * array = (tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence *)malloc(sizeof(tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence__destroy(tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence * array)
{
  if (array) {
    tms_msg_ts__srv__TmsSaFindObjects_Response__Sequence__fini(array);
  }
  free(array);
}
