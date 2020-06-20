// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from octomap_msgs:srv/BoundingBoxQuery.idl
// generated code does not contain a copyright notice
#include "octomap_msgs/srv/bounding_box_query__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `min`
// Member `max`
#include "geometry_msgs/msg/point__functions.h"

bool
octomap_msgs__srv__BoundingBoxQuery_Request__init(octomap_msgs__srv__BoundingBoxQuery_Request * msg)
{
  if (!msg) {
    return false;
  }
  // min
  if (!geometry_msgs__msg__Point__init(&msg->min)) {
    octomap_msgs__srv__BoundingBoxQuery_Request__destroy(msg);
    return false;
  }
  // max
  if (!geometry_msgs__msg__Point__init(&msg->max)) {
    octomap_msgs__srv__BoundingBoxQuery_Request__destroy(msg);
    return false;
  }
  return true;
}

void
octomap_msgs__srv__BoundingBoxQuery_Request__fini(octomap_msgs__srv__BoundingBoxQuery_Request * msg)
{
  if (!msg) {
    return;
  }
  // min
  geometry_msgs__msg__Point__fini(&msg->min);
  // max
  geometry_msgs__msg__Point__fini(&msg->max);
}

octomap_msgs__srv__BoundingBoxQuery_Request *
octomap_msgs__srv__BoundingBoxQuery_Request__create()
{
  octomap_msgs__srv__BoundingBoxQuery_Request * msg = (octomap_msgs__srv__BoundingBoxQuery_Request *)malloc(sizeof(octomap_msgs__srv__BoundingBoxQuery_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(octomap_msgs__srv__BoundingBoxQuery_Request));
  bool success = octomap_msgs__srv__BoundingBoxQuery_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
octomap_msgs__srv__BoundingBoxQuery_Request__destroy(octomap_msgs__srv__BoundingBoxQuery_Request * msg)
{
  if (msg) {
    octomap_msgs__srv__BoundingBoxQuery_Request__fini(msg);
  }
  free(msg);
}


bool
octomap_msgs__srv__BoundingBoxQuery_Request__Sequence__init(octomap_msgs__srv__BoundingBoxQuery_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  octomap_msgs__srv__BoundingBoxQuery_Request * data = NULL;
  if (size) {
    data = (octomap_msgs__srv__BoundingBoxQuery_Request *)calloc(size, sizeof(octomap_msgs__srv__BoundingBoxQuery_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = octomap_msgs__srv__BoundingBoxQuery_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        octomap_msgs__srv__BoundingBoxQuery_Request__fini(&data[i - 1]);
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
octomap_msgs__srv__BoundingBoxQuery_Request__Sequence__fini(octomap_msgs__srv__BoundingBoxQuery_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      octomap_msgs__srv__BoundingBoxQuery_Request__fini(&array->data[i]);
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

octomap_msgs__srv__BoundingBoxQuery_Request__Sequence *
octomap_msgs__srv__BoundingBoxQuery_Request__Sequence__create(size_t size)
{
  octomap_msgs__srv__BoundingBoxQuery_Request__Sequence * array = (octomap_msgs__srv__BoundingBoxQuery_Request__Sequence *)malloc(sizeof(octomap_msgs__srv__BoundingBoxQuery_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = octomap_msgs__srv__BoundingBoxQuery_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
octomap_msgs__srv__BoundingBoxQuery_Request__Sequence__destroy(octomap_msgs__srv__BoundingBoxQuery_Request__Sequence * array)
{
  if (array) {
    octomap_msgs__srv__BoundingBoxQuery_Request__Sequence__fini(array);
  }
  free(array);
}


bool
octomap_msgs__srv__BoundingBoxQuery_Response__init(octomap_msgs__srv__BoundingBoxQuery_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
octomap_msgs__srv__BoundingBoxQuery_Response__fini(octomap_msgs__srv__BoundingBoxQuery_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

octomap_msgs__srv__BoundingBoxQuery_Response *
octomap_msgs__srv__BoundingBoxQuery_Response__create()
{
  octomap_msgs__srv__BoundingBoxQuery_Response * msg = (octomap_msgs__srv__BoundingBoxQuery_Response *)malloc(sizeof(octomap_msgs__srv__BoundingBoxQuery_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(octomap_msgs__srv__BoundingBoxQuery_Response));
  bool success = octomap_msgs__srv__BoundingBoxQuery_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
octomap_msgs__srv__BoundingBoxQuery_Response__destroy(octomap_msgs__srv__BoundingBoxQuery_Response * msg)
{
  if (msg) {
    octomap_msgs__srv__BoundingBoxQuery_Response__fini(msg);
  }
  free(msg);
}


bool
octomap_msgs__srv__BoundingBoxQuery_Response__Sequence__init(octomap_msgs__srv__BoundingBoxQuery_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  octomap_msgs__srv__BoundingBoxQuery_Response * data = NULL;
  if (size) {
    data = (octomap_msgs__srv__BoundingBoxQuery_Response *)calloc(size, sizeof(octomap_msgs__srv__BoundingBoxQuery_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = octomap_msgs__srv__BoundingBoxQuery_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        octomap_msgs__srv__BoundingBoxQuery_Response__fini(&data[i - 1]);
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
octomap_msgs__srv__BoundingBoxQuery_Response__Sequence__fini(octomap_msgs__srv__BoundingBoxQuery_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      octomap_msgs__srv__BoundingBoxQuery_Response__fini(&array->data[i]);
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

octomap_msgs__srv__BoundingBoxQuery_Response__Sequence *
octomap_msgs__srv__BoundingBoxQuery_Response__Sequence__create(size_t size)
{
  octomap_msgs__srv__BoundingBoxQuery_Response__Sequence * array = (octomap_msgs__srv__BoundingBoxQuery_Response__Sequence *)malloc(sizeof(octomap_msgs__srv__BoundingBoxQuery_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = octomap_msgs__srv__BoundingBoxQuery_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
octomap_msgs__srv__BoundingBoxQuery_Response__Sequence__destroy(octomap_msgs__srv__BoundingBoxQuery_Response__Sequence * array)
{
  if (array) {
    octomap_msgs__srv__BoundingBoxQuery_Response__Sequence__fini(array);
  }
  free(array);
}
