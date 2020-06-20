// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_msg_db:srv/Tmsdbgetobjectsinfo.idl
// generated code does not contain a copyright notice
#include "tms_msg_db/srv/tmsdbgetobjectsinfo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `rostime`
// Member `id`
// Member `x`
// Member `y`
// Member `z`
// Member `weight`
// Member `state`
// Member `place`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__init(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request * msg)
{
  if (!msg) {
    return false;
  }
  // rostime
  if (!rosidl_generator_c__uint64__Sequence__init(&msg->rostime, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(msg);
    return false;
  }
  // id
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->id, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(msg);
    return false;
  }
  // x
  if (!rosidl_generator_c__float__Sequence__init(&msg->x, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(msg);
    return false;
  }
  // y
  if (!rosidl_generator_c__float__Sequence__init(&msg->y, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(msg);
    return false;
  }
  // z
  if (!rosidl_generator_c__float__Sequence__init(&msg->z, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(msg);
    return false;
  }
  // weight
  if (!rosidl_generator_c__float__Sequence__init(&msg->weight, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(msg);
    return false;
  }
  // state
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->state, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(msg);
    return false;
  }
  // place
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->place, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(msg);
    return false;
  }
  return true;
}

void
tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__fini(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request * msg)
{
  if (!msg) {
    return;
  }
  // rostime
  rosidl_generator_c__uint64__Sequence__fini(&msg->rostime);
  // id
  rosidl_generator_c__uint32__Sequence__fini(&msg->id);
  // x
  rosidl_generator_c__float__Sequence__fini(&msg->x);
  // y
  rosidl_generator_c__float__Sequence__fini(&msg->y);
  // z
  rosidl_generator_c__float__Sequence__fini(&msg->z);
  // weight
  rosidl_generator_c__float__Sequence__fini(&msg->weight);
  // state
  rosidl_generator_c__uint32__Sequence__fini(&msg->state);
  // place
  rosidl_generator_c__uint32__Sequence__fini(&msg->place);
}

tms_msg_db__srv__Tmsdbgetobjectsinfo_Request *
tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__create()
{
  tms_msg_db__srv__Tmsdbgetobjectsinfo_Request * msg = (tms_msg_db__srv__Tmsdbgetobjectsinfo_Request *)malloc(sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request));
  bool success = tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__destroy(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request * msg)
{
  if (msg) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence__init(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__srv__Tmsdbgetobjectsinfo_Request * data = NULL;
  if (size) {
    data = (tms_msg_db__srv__Tmsdbgetobjectsinfo_Request *)calloc(size, sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__fini(&data[i - 1]);
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
tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence__fini(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__fini(&array->data[i]);
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

tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence *
tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence__create(size_t size)
{
  tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence * array = (tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence *)malloc(sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence__destroy(tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence * array)
{
  if (array) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `rostime`
// Member `id`
// Member `x`
// Member `y`
// Member `z`
// Member `rr`
// Member `rp`
// Member `ry`
// Member `weight`
// Member `state`
// Member `place`
// already included above
// #include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__init(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response * msg)
{
  if (!msg) {
    return false;
  }
  // rostime
  if (!rosidl_generator_c__uint64__Sequence__init(&msg->rostime, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // id
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->id, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // x
  if (!rosidl_generator_c__float__Sequence__init(&msg->x, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // y
  if (!rosidl_generator_c__float__Sequence__init(&msg->y, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // z
  if (!rosidl_generator_c__float__Sequence__init(&msg->z, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // rr
  if (!rosidl_generator_c__float__Sequence__init(&msg->rr, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // rp
  if (!rosidl_generator_c__float__Sequence__init(&msg->rp, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // ry
  if (!rosidl_generator_c__float__Sequence__init(&msg->ry, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // weight
  if (!rosidl_generator_c__float__Sequence__init(&msg->weight, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // state
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->state, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  // place
  if (!rosidl_generator_c__uint32__Sequence__init(&msg->place, 0)) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(msg);
    return false;
  }
  return true;
}

void
tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__fini(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response * msg)
{
  if (!msg) {
    return;
  }
  // rostime
  rosidl_generator_c__uint64__Sequence__fini(&msg->rostime);
  // id
  rosidl_generator_c__uint32__Sequence__fini(&msg->id);
  // x
  rosidl_generator_c__float__Sequence__fini(&msg->x);
  // y
  rosidl_generator_c__float__Sequence__fini(&msg->y);
  // z
  rosidl_generator_c__float__Sequence__fini(&msg->z);
  // rr
  rosidl_generator_c__float__Sequence__fini(&msg->rr);
  // rp
  rosidl_generator_c__float__Sequence__fini(&msg->rp);
  // ry
  rosidl_generator_c__float__Sequence__fini(&msg->ry);
  // weight
  rosidl_generator_c__float__Sequence__fini(&msg->weight);
  // state
  rosidl_generator_c__uint32__Sequence__fini(&msg->state);
  // place
  rosidl_generator_c__uint32__Sequence__fini(&msg->place);
}

tms_msg_db__srv__Tmsdbgetobjectsinfo_Response *
tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__create()
{
  tms_msg_db__srv__Tmsdbgetobjectsinfo_Response * msg = (tms_msg_db__srv__Tmsdbgetobjectsinfo_Response *)malloc(sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response));
  bool success = tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__destroy(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response * msg)
{
  if (msg) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__fini(msg);
  }
  free(msg);
}


bool
tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence__init(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_msg_db__srv__Tmsdbgetobjectsinfo_Response * data = NULL;
  if (size) {
    data = (tms_msg_db__srv__Tmsdbgetobjectsinfo_Response *)calloc(size, sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__fini(&data[i - 1]);
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
tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence__fini(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__fini(&array->data[i]);
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

tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence *
tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence__create(size_t size)
{
  tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence * array = (tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence *)malloc(sizeof(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence__destroy(tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence * array)
{
  if (array) {
    tms_msg_db__srv__Tmsdbgetobjectsinfo_Response__Sequence__fini(array);
  }
  free(array);
}
