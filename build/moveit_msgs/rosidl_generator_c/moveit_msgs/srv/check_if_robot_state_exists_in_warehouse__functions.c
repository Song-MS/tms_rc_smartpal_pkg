// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:srv/CheckIfRobotStateExistsInWarehouse.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/srv/check_if_robot_state_exists_in_warehouse__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `name`
// Member `robot`
#include "rosidl_generator_c/string_functions.h"

bool
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__init(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_generator_c__String__init(&msg->name)) {
    moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__destroy(msg);
    return false;
  }
  // robot
  if (!rosidl_generator_c__String__init(&msg->robot)) {
    moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__destroy(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__fini(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_generator_c__String__fini(&msg->name);
  // robot
  rosidl_generator_c__String__fini(&msg->robot);
}

moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request *
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__create()
{
  moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request * msg = (moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request *)malloc(sizeof(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request));
  bool success = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__destroy(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request * msg)
{
  if (msg) {
    moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence__init(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request *)calloc(size, sizeof(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__fini(&data[i - 1]);
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
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence__fini(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__fini(&array->data[i]);
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

moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence *
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence__create(size_t size)
{
  moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence * array = (moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence *)malloc(sizeof(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence__destroy(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Request__Sequence__fini(array);
  }
  free(array);
}


bool
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__init(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response * msg)
{
  if (!msg) {
    return false;
  }
  // exists
  return true;
}

void
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__fini(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response * msg)
{
  if (!msg) {
    return;
  }
  // exists
}

moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response *
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__create()
{
  moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response * msg = (moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response *)malloc(sizeof(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response));
  bool success = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__destroy(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response * msg)
{
  if (msg) {
    moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence__init(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response *)calloc(size, sizeof(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__fini(&data[i - 1]);
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
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence__fini(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__fini(&array->data[i]);
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

moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence *
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence__create(size_t size)
{
  moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence * array = (moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence *)malloc(sizeof(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence__destroy(moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__srv__CheckIfRobotStateExistsInWarehouse_Response__Sequence__fini(array);
  }
  free(array);
}
