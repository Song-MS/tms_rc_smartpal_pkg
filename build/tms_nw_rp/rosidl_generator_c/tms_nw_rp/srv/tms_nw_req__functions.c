// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tms_nw_rp:srv/TmsNwReq.idl
// generated code does not contain a copyright notice
#include "tms_nw_rp/srv/tms_nw_req__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `url`
// Member `service_name`
// Member `service_type`
#include "rosidl_generator_c/string_functions.h"

bool
tms_nw_rp__srv__TmsNwReq_Request__init(tms_nw_rp__srv__TmsNwReq_Request * msg)
{
  if (!msg) {
    return false;
  }
  // url
  if (!rosidl_generator_c__String__init(&msg->url)) {
    tms_nw_rp__srv__TmsNwReq_Request__destroy(msg);
    return false;
  }
  // service_name
  if (!rosidl_generator_c__String__init(&msg->service_name)) {
    tms_nw_rp__srv__TmsNwReq_Request__destroy(msg);
    return false;
  }
  // service_type
  if (!rosidl_generator_c__String__init(&msg->service_type)) {
    tms_nw_rp__srv__TmsNwReq_Request__destroy(msg);
    return false;
  }
  // task_id
  // robot_id
  // object_id
  // user_id
  // place_id
  // priority
  return true;
}

void
tms_nw_rp__srv__TmsNwReq_Request__fini(tms_nw_rp__srv__TmsNwReq_Request * msg)
{
  if (!msg) {
    return;
  }
  // url
  rosidl_generator_c__String__fini(&msg->url);
  // service_name
  rosidl_generator_c__String__fini(&msg->service_name);
  // service_type
  rosidl_generator_c__String__fini(&msg->service_type);
  // task_id
  // robot_id
  // object_id
  // user_id
  // place_id
  // priority
}

tms_nw_rp__srv__TmsNwReq_Request *
tms_nw_rp__srv__TmsNwReq_Request__create()
{
  tms_nw_rp__srv__TmsNwReq_Request * msg = (tms_nw_rp__srv__TmsNwReq_Request *)malloc(sizeof(tms_nw_rp__srv__TmsNwReq_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_nw_rp__srv__TmsNwReq_Request));
  bool success = tms_nw_rp__srv__TmsNwReq_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_nw_rp__srv__TmsNwReq_Request__destroy(tms_nw_rp__srv__TmsNwReq_Request * msg)
{
  if (msg) {
    tms_nw_rp__srv__TmsNwReq_Request__fini(msg);
  }
  free(msg);
}


bool
tms_nw_rp__srv__TmsNwReq_Request__Sequence__init(tms_nw_rp__srv__TmsNwReq_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_nw_rp__srv__TmsNwReq_Request * data = NULL;
  if (size) {
    data = (tms_nw_rp__srv__TmsNwReq_Request *)calloc(size, sizeof(tms_nw_rp__srv__TmsNwReq_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_nw_rp__srv__TmsNwReq_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_nw_rp__srv__TmsNwReq_Request__fini(&data[i - 1]);
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
tms_nw_rp__srv__TmsNwReq_Request__Sequence__fini(tms_nw_rp__srv__TmsNwReq_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_nw_rp__srv__TmsNwReq_Request__fini(&array->data[i]);
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

tms_nw_rp__srv__TmsNwReq_Request__Sequence *
tms_nw_rp__srv__TmsNwReq_Request__Sequence__create(size_t size)
{
  tms_nw_rp__srv__TmsNwReq_Request__Sequence * array = (tms_nw_rp__srv__TmsNwReq_Request__Sequence *)malloc(sizeof(tms_nw_rp__srv__TmsNwReq_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_nw_rp__srv__TmsNwReq_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_nw_rp__srv__TmsNwReq_Request__Sequence__destroy(tms_nw_rp__srv__TmsNwReq_Request__Sequence * array)
{
  if (array) {
    tms_nw_rp__srv__TmsNwReq_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `val`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
tms_nw_rp__srv__TmsNwReq_Response__init(tms_nw_rp__srv__TmsNwReq_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  // val
  if (!rosidl_generator_c__float__Sequence__init(&msg->val, 0)) {
    tms_nw_rp__srv__TmsNwReq_Response__destroy(msg);
    return false;
  }
  return true;
}

void
tms_nw_rp__srv__TmsNwReq_Response__fini(tms_nw_rp__srv__TmsNwReq_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
  // val
  rosidl_generator_c__float__Sequence__fini(&msg->val);
}

tms_nw_rp__srv__TmsNwReq_Response *
tms_nw_rp__srv__TmsNwReq_Response__create()
{
  tms_nw_rp__srv__TmsNwReq_Response * msg = (tms_nw_rp__srv__TmsNwReq_Response *)malloc(sizeof(tms_nw_rp__srv__TmsNwReq_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tms_nw_rp__srv__TmsNwReq_Response));
  bool success = tms_nw_rp__srv__TmsNwReq_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tms_nw_rp__srv__TmsNwReq_Response__destroy(tms_nw_rp__srv__TmsNwReq_Response * msg)
{
  if (msg) {
    tms_nw_rp__srv__TmsNwReq_Response__fini(msg);
  }
  free(msg);
}


bool
tms_nw_rp__srv__TmsNwReq_Response__Sequence__init(tms_nw_rp__srv__TmsNwReq_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tms_nw_rp__srv__TmsNwReq_Response * data = NULL;
  if (size) {
    data = (tms_nw_rp__srv__TmsNwReq_Response *)calloc(size, sizeof(tms_nw_rp__srv__TmsNwReq_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tms_nw_rp__srv__TmsNwReq_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tms_nw_rp__srv__TmsNwReq_Response__fini(&data[i - 1]);
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
tms_nw_rp__srv__TmsNwReq_Response__Sequence__fini(tms_nw_rp__srv__TmsNwReq_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tms_nw_rp__srv__TmsNwReq_Response__fini(&array->data[i]);
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

tms_nw_rp__srv__TmsNwReq_Response__Sequence *
tms_nw_rp__srv__TmsNwReq_Response__Sequence__create(size_t size)
{
  tms_nw_rp__srv__TmsNwReq_Response__Sequence * array = (tms_nw_rp__srv__TmsNwReq_Response__Sequence *)malloc(sizeof(tms_nw_rp__srv__TmsNwReq_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tms_nw_rp__srv__TmsNwReq_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tms_nw_rp__srv__TmsNwReq_Response__Sequence__destroy(tms_nw_rp__srv__TmsNwReq_Response__Sequence * array)
{
  if (array) {
    tms_nw_rp__srv__TmsNwReq_Response__Sequence__fini(array);
  }
  free(array);
}
