// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from object_recognition_msgs:action/ObjectRecognition.idl
// generated code does not contain a copyright notice
#include "object_recognition_msgs/action/object_recognition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `filter_limits`
#include "rosidl_generator_c/primitives_sequence_functions.h"

bool
object_recognition_msgs__action__ObjectRecognition_Goal__init(object_recognition_msgs__action__ObjectRecognition_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // use_roi
  // filter_limits
  if (!rosidl_generator_c__float__Sequence__init(&msg->filter_limits, 0)) {
    object_recognition_msgs__action__ObjectRecognition_Goal__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__action__ObjectRecognition_Goal__fini(object_recognition_msgs__action__ObjectRecognition_Goal * msg)
{
  if (!msg) {
    return;
  }
  // use_roi
  // filter_limits
  rosidl_generator_c__float__Sequence__fini(&msg->filter_limits);
}

object_recognition_msgs__action__ObjectRecognition_Goal *
object_recognition_msgs__action__ObjectRecognition_Goal__create()
{
  object_recognition_msgs__action__ObjectRecognition_Goal * msg = (object_recognition_msgs__action__ObjectRecognition_Goal *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__action__ObjectRecognition_Goal));
  bool success = object_recognition_msgs__action__ObjectRecognition_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__action__ObjectRecognition_Goal__destroy(object_recognition_msgs__action__ObjectRecognition_Goal * msg)
{
  if (msg) {
    object_recognition_msgs__action__ObjectRecognition_Goal__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__init(object_recognition_msgs__action__ObjectRecognition_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__action__ObjectRecognition_Goal * data = NULL;
  if (size) {
    data = (object_recognition_msgs__action__ObjectRecognition_Goal *)calloc(size, sizeof(object_recognition_msgs__action__ObjectRecognition_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__action__ObjectRecognition_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__action__ObjectRecognition_Goal__fini(&data[i - 1]);
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
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__action__ObjectRecognition_Goal__fini(&array->data[i]);
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

object_recognition_msgs__action__ObjectRecognition_Goal__Sequence *
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__create(size_t size)
{
  object_recognition_msgs__action__ObjectRecognition_Goal__Sequence * array = (object_recognition_msgs__action__ObjectRecognition_Goal__Sequence *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_Goal__Sequence * array)
{
  if (array) {
    object_recognition_msgs__action__ObjectRecognition_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `recognized_objects`
#include "object_recognition_msgs/msg/recognized_object_array__functions.h"

bool
object_recognition_msgs__action__ObjectRecognition_Result__init(object_recognition_msgs__action__ObjectRecognition_Result * msg)
{
  if (!msg) {
    return false;
  }
  // recognized_objects
  if (!object_recognition_msgs__msg__RecognizedObjectArray__init(&msg->recognized_objects)) {
    object_recognition_msgs__action__ObjectRecognition_Result__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__action__ObjectRecognition_Result__fini(object_recognition_msgs__action__ObjectRecognition_Result * msg)
{
  if (!msg) {
    return;
  }
  // recognized_objects
  object_recognition_msgs__msg__RecognizedObjectArray__fini(&msg->recognized_objects);
}

object_recognition_msgs__action__ObjectRecognition_Result *
object_recognition_msgs__action__ObjectRecognition_Result__create()
{
  object_recognition_msgs__action__ObjectRecognition_Result * msg = (object_recognition_msgs__action__ObjectRecognition_Result *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__action__ObjectRecognition_Result));
  bool success = object_recognition_msgs__action__ObjectRecognition_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__action__ObjectRecognition_Result__destroy(object_recognition_msgs__action__ObjectRecognition_Result * msg)
{
  if (msg) {
    object_recognition_msgs__action__ObjectRecognition_Result__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__action__ObjectRecognition_Result__Sequence__init(object_recognition_msgs__action__ObjectRecognition_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__action__ObjectRecognition_Result * data = NULL;
  if (size) {
    data = (object_recognition_msgs__action__ObjectRecognition_Result *)calloc(size, sizeof(object_recognition_msgs__action__ObjectRecognition_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__action__ObjectRecognition_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__action__ObjectRecognition_Result__fini(&data[i - 1]);
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
object_recognition_msgs__action__ObjectRecognition_Result__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__action__ObjectRecognition_Result__fini(&array->data[i]);
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

object_recognition_msgs__action__ObjectRecognition_Result__Sequence *
object_recognition_msgs__action__ObjectRecognition_Result__Sequence__create(size_t size)
{
  object_recognition_msgs__action__ObjectRecognition_Result__Sequence * array = (object_recognition_msgs__action__ObjectRecognition_Result__Sequence *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__action__ObjectRecognition_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__action__ObjectRecognition_Result__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_Result__Sequence * array)
{
  if (array) {
    object_recognition_msgs__action__ObjectRecognition_Result__Sequence__fini(array);
  }
  free(array);
}


bool
object_recognition_msgs__action__ObjectRecognition_Feedback__init(object_recognition_msgs__action__ObjectRecognition_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
object_recognition_msgs__action__ObjectRecognition_Feedback__fini(object_recognition_msgs__action__ObjectRecognition_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

object_recognition_msgs__action__ObjectRecognition_Feedback *
object_recognition_msgs__action__ObjectRecognition_Feedback__create()
{
  object_recognition_msgs__action__ObjectRecognition_Feedback * msg = (object_recognition_msgs__action__ObjectRecognition_Feedback *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__action__ObjectRecognition_Feedback));
  bool success = object_recognition_msgs__action__ObjectRecognition_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__action__ObjectRecognition_Feedback__destroy(object_recognition_msgs__action__ObjectRecognition_Feedback * msg)
{
  if (msg) {
    object_recognition_msgs__action__ObjectRecognition_Feedback__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__init(object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__action__ObjectRecognition_Feedback * data = NULL;
  if (size) {
    data = (object_recognition_msgs__action__ObjectRecognition_Feedback *)calloc(size, sizeof(object_recognition_msgs__action__ObjectRecognition_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__action__ObjectRecognition_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__action__ObjectRecognition_Feedback__fini(&data[i - 1]);
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
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__action__ObjectRecognition_Feedback__fini(&array->data[i]);
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

object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence *
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__create(size_t size)
{
  object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence * array = (object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence * array)
{
  if (array) {
    object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "object_recognition_msgs/action/object_recognition__functions.h"

bool
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__init(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__destroy(msg);
    return false;
  }
  // goal
  if (!object_recognition_msgs__action__ObjectRecognition_Goal__init(&msg->goal)) {
    object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__fini(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  object_recognition_msgs__action__ObjectRecognition_Goal__fini(&msg->goal);
}

object_recognition_msgs__action__ObjectRecognition_SendGoal_Request *
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__create()
{
  object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * msg = (object_recognition_msgs__action__ObjectRecognition_SendGoal_Request *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request));
  bool success = object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__destroy(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * msg)
{
  if (msg) {
    object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__init(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * data = NULL;
  if (size) {
    data = (object_recognition_msgs__action__ObjectRecognition_SendGoal_Request *)calloc(size, sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__fini(&data[i - 1]);
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
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__fini(&array->data[i]);
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

object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence *
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__create(size_t size)
{
  object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence * array = (object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence * array)
{
  if (array) {
    object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__init(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__fini(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

object_recognition_msgs__action__ObjectRecognition_SendGoal_Response *
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__create()
{
  object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * msg = (object_recognition_msgs__action__ObjectRecognition_SendGoal_Response *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response));
  bool success = object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__destroy(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * msg)
{
  if (msg) {
    object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__init(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * data = NULL;
  if (size) {
    data = (object_recognition_msgs__action__ObjectRecognition_SendGoal_Response *)calloc(size, sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__fini(&data[i - 1]);
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
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__fini(&array->data[i]);
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

object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence *
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__create(size_t size)
{
  object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence * array = (object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence * array)
{
  if (array) {
    object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__init(object_recognition_msgs__action__ObjectRecognition_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    object_recognition_msgs__action__ObjectRecognition_GetResult_Request__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__fini(object_recognition_msgs__action__ObjectRecognition_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

object_recognition_msgs__action__ObjectRecognition_GetResult_Request *
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__create()
{
  object_recognition_msgs__action__ObjectRecognition_GetResult_Request * msg = (object_recognition_msgs__action__ObjectRecognition_GetResult_Request *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Request));
  bool success = object_recognition_msgs__action__ObjectRecognition_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__destroy(object_recognition_msgs__action__ObjectRecognition_GetResult_Request * msg)
{
  if (msg) {
    object_recognition_msgs__action__ObjectRecognition_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__init(object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__action__ObjectRecognition_GetResult_Request * data = NULL;
  if (size) {
    data = (object_recognition_msgs__action__ObjectRecognition_GetResult_Request *)calloc(size, sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__action__ObjectRecognition_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__action__ObjectRecognition_GetResult_Request__fini(&data[i - 1]);
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
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__action__ObjectRecognition_GetResult_Request__fini(&array->data[i]);
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

object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence *
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__create(size_t size)
{
  object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence * array = (object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence * array)
{
  if (array) {
    object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "object_recognition_msgs/action/object_recognition__functions.h"

bool
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__init(object_recognition_msgs__action__ObjectRecognition_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!object_recognition_msgs__action__ObjectRecognition_Result__init(&msg->result)) {
    object_recognition_msgs__action__ObjectRecognition_GetResult_Response__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__fini(object_recognition_msgs__action__ObjectRecognition_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  object_recognition_msgs__action__ObjectRecognition_Result__fini(&msg->result);
}

object_recognition_msgs__action__ObjectRecognition_GetResult_Response *
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__create()
{
  object_recognition_msgs__action__ObjectRecognition_GetResult_Response * msg = (object_recognition_msgs__action__ObjectRecognition_GetResult_Response *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Response));
  bool success = object_recognition_msgs__action__ObjectRecognition_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__destroy(object_recognition_msgs__action__ObjectRecognition_GetResult_Response * msg)
{
  if (msg) {
    object_recognition_msgs__action__ObjectRecognition_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__init(object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__action__ObjectRecognition_GetResult_Response * data = NULL;
  if (size) {
    data = (object_recognition_msgs__action__ObjectRecognition_GetResult_Response *)calloc(size, sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__action__ObjectRecognition_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__action__ObjectRecognition_GetResult_Response__fini(&data[i - 1]);
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
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__action__ObjectRecognition_GetResult_Response__fini(&array->data[i]);
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

object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence *
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__create(size_t size)
{
  object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence * array = (object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence * array)
{
  if (array) {
    object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "object_recognition_msgs/action/object_recognition__functions.h"

bool
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__init(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__destroy(msg);
    return false;
  }
  // feedback
  if (!object_recognition_msgs__action__ObjectRecognition_Feedback__init(&msg->feedback)) {
    object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__destroy(msg);
    return false;
  }
  return true;
}

void
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__fini(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  object_recognition_msgs__action__ObjectRecognition_Feedback__fini(&msg->feedback);
}

object_recognition_msgs__action__ObjectRecognition_FeedbackMessage *
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__create()
{
  object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * msg = (object_recognition_msgs__action__ObjectRecognition_FeedbackMessage *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage));
  bool success = object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__destroy(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * msg)
{
  if (msg) {
    object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__init(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * data = NULL;
  if (size) {
    data = (object_recognition_msgs__action__ObjectRecognition_FeedbackMessage *)calloc(size, sizeof(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__fini(&data[i - 1]);
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
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__fini(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__fini(&array->data[i]);
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

object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence *
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__create(size_t size)
{
  object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence * array = (object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence *)malloc(sizeof(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__destroy(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence * array)
{
  if (array) {
    object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
