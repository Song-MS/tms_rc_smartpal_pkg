// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_recognition_msgs:srv/GetObjectInformation.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/srv/get_object_information__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `type`
#include "object_recognition_msgs/msg/object_type__functions.h"

bool
object_recognition_msgs__srv__GetObjectInformation_Request__init(object_recognition_msgs__srv__GetObjectInformation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!object_recognition_msgs__msg__ObjectType__init(&msg->type)) {
    object_recognition_msgs__srv__GetObjectInformation_Request__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__srv__GetObjectInformation_Request__fini(object_recognition_msgs__srv__GetObjectInformation_Request * msg)
{
  if (!msg) {
    return;
  }
  // type
  object_recognition_msgs__msg__ObjectType__fini(&msg->type);
}

object_recognition_msgs__srv__GetObjectInformation_Request *
object_recognition_msgs__srv__GetObjectInformation_Request__create()
{
  object_recognition_msgs__srv__GetObjectInformation_Request * msg = (object_recognition_msgs__srv__GetObjectInformation_Request *)malloc(sizeof(object_recognition_msgs__srv__GetObjectInformation_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__srv__GetObjectInformation_Request));
  bool success = object_recognition_msgs__srv__GetObjectInformation_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__srv__GetObjectInformation_Request__destroy(object_recognition_msgs__srv__GetObjectInformation_Request * msg)
{
  if (msg) {
    object_recognition_msgs__srv__GetObjectInformation_Request__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__srv__GetObjectInformation_Request__Sequence__init(object_recognition_msgs__srv__GetObjectInformation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__srv__GetObjectInformation_Request * data = NULL;
  if (size) {
    data = (object_recognition_msgs__srv__GetObjectInformation_Request *)calloc(size, sizeof(object_recognition_msgs__srv__GetObjectInformation_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__srv__GetObjectInformation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__srv__GetObjectInformation_Request__fini(&data[i - 1]);
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
object_recognition_msgs__srv__GetObjectInformation_Request__Sequence__fini(object_recognition_msgs__srv__GetObjectInformation_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__srv__GetObjectInformation_Request__fini(&array->data[i]);
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

object_recognition_msgs__srv__GetObjectInformation_Request__Sequence *
object_recognition_msgs__srv__GetObjectInformation_Request__Sequence__create(size_t size)
{
  object_recognition_msgs__srv__GetObjectInformation_Request__Sequence * array = (object_recognition_msgs__srv__GetObjectInformation_Request__Sequence *)malloc(sizeof(object_recognition_msgs__srv__GetObjectInformation_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__srv__GetObjectInformation_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__srv__GetObjectInformation_Request__Sequence__destroy(object_recognition_msgs__srv__GetObjectInformation_Request__Sequence * array)
{
  if (array) {
    object_recognition_msgs__srv__GetObjectInformation_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `information`
#include "object_recognition_msgs/msg/object_information__functions.h"

bool
object_recognition_msgs__srv__GetObjectInformation_Response__init(object_recognition_msgs__srv__GetObjectInformation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // information
  if (!object_recognition_msgs__msg__ObjectInformation__init(&msg->information)) {
    object_recognition_msgs__srv__GetObjectInformation_Response__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__srv__GetObjectInformation_Response__fini(object_recognition_msgs__srv__GetObjectInformation_Response * msg)
{
  if (!msg) {
    return;
  }
  // information
  object_recognition_msgs__msg__ObjectInformation__fini(&msg->information);
}

object_recognition_msgs__srv__GetObjectInformation_Response *
object_recognition_msgs__srv__GetObjectInformation_Response__create()
{
  object_recognition_msgs__srv__GetObjectInformation_Response * msg = (object_recognition_msgs__srv__GetObjectInformation_Response *)malloc(sizeof(object_recognition_msgs__srv__GetObjectInformation_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__srv__GetObjectInformation_Response));
  bool success = object_recognition_msgs__srv__GetObjectInformation_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__srv__GetObjectInformation_Response__destroy(object_recognition_msgs__srv__GetObjectInformation_Response * msg)
{
  if (msg) {
    object_recognition_msgs__srv__GetObjectInformation_Response__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__srv__GetObjectInformation_Response__Sequence__init(object_recognition_msgs__srv__GetObjectInformation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__srv__GetObjectInformation_Response * data = NULL;
  if (size) {
    data = (object_recognition_msgs__srv__GetObjectInformation_Response *)calloc(size, sizeof(object_recognition_msgs__srv__GetObjectInformation_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__srv__GetObjectInformation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__srv__GetObjectInformation_Response__fini(&data[i - 1]);
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
object_recognition_msgs__srv__GetObjectInformation_Response__Sequence__fini(object_recognition_msgs__srv__GetObjectInformation_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__srv__GetObjectInformation_Response__fini(&array->data[i]);
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

object_recognition_msgs__srv__GetObjectInformation_Response__Sequence *
object_recognition_msgs__srv__GetObjectInformation_Response__Sequence__create(size_t size)
{
  object_recognition_msgs__srv__GetObjectInformation_Response__Sequence * array = (object_recognition_msgs__srv__GetObjectInformation_Response__Sequence *)malloc(sizeof(object_recognition_msgs__srv__GetObjectInformation_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__srv__GetObjectInformation_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__srv__GetObjectInformation_Response__Sequence__destroy(object_recognition_msgs__srv__GetObjectInformation_Response__Sequence * array)
{
  if (array) {
    object_recognition_msgs__srv__GetObjectInformation_Response__Sequence__fini(array);
  }
  free(array);
}
