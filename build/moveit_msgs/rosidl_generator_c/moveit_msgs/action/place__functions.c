// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from moveit_msgs:action/Place.idl
// generated code does not contain a copyright notice
#include "moveit_msgs/action/place__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `group_name`
// Member `attached_object_name`
// Member `support_surface_name`
// Member `planner_id`
// Member `allowed_touch_objects`
#include "rosidl_generator_c/string_functions.h"
// Member `place_locations`
#include "moveit_msgs/msg/place_location__functions.h"
// Member `path_constraints`
#include "moveit_msgs/msg/constraints__functions.h"
// Member `planning_options`
#include "moveit_msgs/msg/planning_options__functions.h"

bool
moveit_msgs__action__Place_Goal__init(moveit_msgs__action__Place_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // group_name
  if (!rosidl_generator_c__String__init(&msg->group_name)) {
    moveit_msgs__action__Place_Goal__destroy(msg);
    return false;
  }
  // attached_object_name
  if (!rosidl_generator_c__String__init(&msg->attached_object_name)) {
    moveit_msgs__action__Place_Goal__destroy(msg);
    return false;
  }
  // place_locations
  if (!moveit_msgs__msg__PlaceLocation__Sequence__init(&msg->place_locations, 0)) {
    moveit_msgs__action__Place_Goal__destroy(msg);
    return false;
  }
  // place_eef
  // support_surface_name
  if (!rosidl_generator_c__String__init(&msg->support_surface_name)) {
    moveit_msgs__action__Place_Goal__destroy(msg);
    return false;
  }
  // allow_gripper_support_collision
  // path_constraints
  if (!moveit_msgs__msg__Constraints__init(&msg->path_constraints)) {
    moveit_msgs__action__Place_Goal__destroy(msg);
    return false;
  }
  // planner_id
  if (!rosidl_generator_c__String__init(&msg->planner_id)) {
    moveit_msgs__action__Place_Goal__destroy(msg);
    return false;
  }
  // allowed_touch_objects
  if (!rosidl_generator_c__String__Sequence__init(&msg->allowed_touch_objects, 0)) {
    moveit_msgs__action__Place_Goal__destroy(msg);
    return false;
  }
  // allowed_planning_time
  // planning_options
  if (!moveit_msgs__msg__PlanningOptions__init(&msg->planning_options)) {
    moveit_msgs__action__Place_Goal__destroy(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__Place_Goal__fini(moveit_msgs__action__Place_Goal * msg)
{
  if (!msg) {
    return;
  }
  // group_name
  rosidl_generator_c__String__fini(&msg->group_name);
  // attached_object_name
  rosidl_generator_c__String__fini(&msg->attached_object_name);
  // place_locations
  moveit_msgs__msg__PlaceLocation__Sequence__fini(&msg->place_locations);
  // place_eef
  // support_surface_name
  rosidl_generator_c__String__fini(&msg->support_surface_name);
  // allow_gripper_support_collision
  // path_constraints
  moveit_msgs__msg__Constraints__fini(&msg->path_constraints);
  // planner_id
  rosidl_generator_c__String__fini(&msg->planner_id);
  // allowed_touch_objects
  rosidl_generator_c__String__Sequence__fini(&msg->allowed_touch_objects);
  // allowed_planning_time
  // planning_options
  moveit_msgs__msg__PlanningOptions__fini(&msg->planning_options);
}

moveit_msgs__action__Place_Goal *
moveit_msgs__action__Place_Goal__create()
{
  moveit_msgs__action__Place_Goal * msg = (moveit_msgs__action__Place_Goal *)malloc(sizeof(moveit_msgs__action__Place_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__Place_Goal));
  bool success = moveit_msgs__action__Place_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__Place_Goal__destroy(moveit_msgs__action__Place_Goal * msg)
{
  if (msg) {
    moveit_msgs__action__Place_Goal__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__Place_Goal__Sequence__init(moveit_msgs__action__Place_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__Place_Goal * data = NULL;
  if (size) {
    data = (moveit_msgs__action__Place_Goal *)calloc(size, sizeof(moveit_msgs__action__Place_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__Place_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__Place_Goal__fini(&data[i - 1]);
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
moveit_msgs__action__Place_Goal__Sequence__fini(moveit_msgs__action__Place_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__Place_Goal__fini(&array->data[i]);
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

moveit_msgs__action__Place_Goal__Sequence *
moveit_msgs__action__Place_Goal__Sequence__create(size_t size)
{
  moveit_msgs__action__Place_Goal__Sequence * array = (moveit_msgs__action__Place_Goal__Sequence *)malloc(sizeof(moveit_msgs__action__Place_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__Place_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__Place_Goal__Sequence__destroy(moveit_msgs__action__Place_Goal__Sequence * array)
{
  if (array) {
    moveit_msgs__action__Place_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `error_code`
#include "moveit_msgs/msg/move_it_error_codes__functions.h"
// Member `trajectory_start`
#include "moveit_msgs/msg/robot_state__functions.h"
// Member `trajectory_stages`
#include "moveit_msgs/msg/robot_trajectory__functions.h"
// Member `trajectory_descriptions`
// already included above
// #include "rosidl_generator_c/string_functions.h"
// Member `place_location`
// already included above
// #include "moveit_msgs/msg/place_location__functions.h"

bool
moveit_msgs__action__Place_Result__init(moveit_msgs__action__Place_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  if (!moveit_msgs__msg__MoveItErrorCodes__init(&msg->error_code)) {
    moveit_msgs__action__Place_Result__destroy(msg);
    return false;
  }
  // trajectory_start
  if (!moveit_msgs__msg__RobotState__init(&msg->trajectory_start)) {
    moveit_msgs__action__Place_Result__destroy(msg);
    return false;
  }
  // trajectory_stages
  if (!moveit_msgs__msg__RobotTrajectory__Sequence__init(&msg->trajectory_stages, 0)) {
    moveit_msgs__action__Place_Result__destroy(msg);
    return false;
  }
  // trajectory_descriptions
  if (!rosidl_generator_c__String__Sequence__init(&msg->trajectory_descriptions, 0)) {
    moveit_msgs__action__Place_Result__destroy(msg);
    return false;
  }
  // place_location
  if (!moveit_msgs__msg__PlaceLocation__init(&msg->place_location)) {
    moveit_msgs__action__Place_Result__destroy(msg);
    return false;
  }
  // planning_time
  return true;
}

void
moveit_msgs__action__Place_Result__fini(moveit_msgs__action__Place_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  moveit_msgs__msg__MoveItErrorCodes__fini(&msg->error_code);
  // trajectory_start
  moveit_msgs__msg__RobotState__fini(&msg->trajectory_start);
  // trajectory_stages
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(&msg->trajectory_stages);
  // trajectory_descriptions
  rosidl_generator_c__String__Sequence__fini(&msg->trajectory_descriptions);
  // place_location
  moveit_msgs__msg__PlaceLocation__fini(&msg->place_location);
  // planning_time
}

moveit_msgs__action__Place_Result *
moveit_msgs__action__Place_Result__create()
{
  moveit_msgs__action__Place_Result * msg = (moveit_msgs__action__Place_Result *)malloc(sizeof(moveit_msgs__action__Place_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__Place_Result));
  bool success = moveit_msgs__action__Place_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__Place_Result__destroy(moveit_msgs__action__Place_Result * msg)
{
  if (msg) {
    moveit_msgs__action__Place_Result__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__Place_Result__Sequence__init(moveit_msgs__action__Place_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__Place_Result * data = NULL;
  if (size) {
    data = (moveit_msgs__action__Place_Result *)calloc(size, sizeof(moveit_msgs__action__Place_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__Place_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__Place_Result__fini(&data[i - 1]);
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
moveit_msgs__action__Place_Result__Sequence__fini(moveit_msgs__action__Place_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__Place_Result__fini(&array->data[i]);
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

moveit_msgs__action__Place_Result__Sequence *
moveit_msgs__action__Place_Result__Sequence__create(size_t size)
{
  moveit_msgs__action__Place_Result__Sequence * array = (moveit_msgs__action__Place_Result__Sequence *)malloc(sizeof(moveit_msgs__action__Place_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__Place_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__Place_Result__Sequence__destroy(moveit_msgs__action__Place_Result__Sequence * array)
{
  if (array) {
    moveit_msgs__action__Place_Result__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_generator_c/string_functions.h"

bool
moveit_msgs__action__Place_Feedback__init(moveit_msgs__action__Place_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  if (!rosidl_generator_c__String__init(&msg->state)) {
    moveit_msgs__action__Place_Feedback__destroy(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__Place_Feedback__fini(moveit_msgs__action__Place_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  rosidl_generator_c__String__fini(&msg->state);
}

moveit_msgs__action__Place_Feedback *
moveit_msgs__action__Place_Feedback__create()
{
  moveit_msgs__action__Place_Feedback * msg = (moveit_msgs__action__Place_Feedback *)malloc(sizeof(moveit_msgs__action__Place_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__Place_Feedback));
  bool success = moveit_msgs__action__Place_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__Place_Feedback__destroy(moveit_msgs__action__Place_Feedback * msg)
{
  if (msg) {
    moveit_msgs__action__Place_Feedback__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__Place_Feedback__Sequence__init(moveit_msgs__action__Place_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__Place_Feedback * data = NULL;
  if (size) {
    data = (moveit_msgs__action__Place_Feedback *)calloc(size, sizeof(moveit_msgs__action__Place_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__Place_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__Place_Feedback__fini(&data[i - 1]);
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
moveit_msgs__action__Place_Feedback__Sequence__fini(moveit_msgs__action__Place_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__Place_Feedback__fini(&array->data[i]);
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

moveit_msgs__action__Place_Feedback__Sequence *
moveit_msgs__action__Place_Feedback__Sequence__create(size_t size)
{
  moveit_msgs__action__Place_Feedback__Sequence * array = (moveit_msgs__action__Place_Feedback__Sequence *)malloc(sizeof(moveit_msgs__action__Place_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__Place_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__Place_Feedback__Sequence__destroy(moveit_msgs__action__Place_Feedback__Sequence * array)
{
  if (array) {
    moveit_msgs__action__Place_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `goal`
// already included above
// #include "moveit_msgs/action/place__functions.h"

bool
moveit_msgs__action__Place_SendGoal_Request__init(moveit_msgs__action__Place_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__Place_SendGoal_Request__destroy(msg);
    return false;
  }
  // goal
  if (!moveit_msgs__action__Place_Goal__init(&msg->goal)) {
    moveit_msgs__action__Place_SendGoal_Request__destroy(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__Place_SendGoal_Request__fini(moveit_msgs__action__Place_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  moveit_msgs__action__Place_Goal__fini(&msg->goal);
}

moveit_msgs__action__Place_SendGoal_Request *
moveit_msgs__action__Place_SendGoal_Request__create()
{
  moveit_msgs__action__Place_SendGoal_Request * msg = (moveit_msgs__action__Place_SendGoal_Request *)malloc(sizeof(moveit_msgs__action__Place_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__Place_SendGoal_Request));
  bool success = moveit_msgs__action__Place_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__Place_SendGoal_Request__destroy(moveit_msgs__action__Place_SendGoal_Request * msg)
{
  if (msg) {
    moveit_msgs__action__Place_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__Place_SendGoal_Request__Sequence__init(moveit_msgs__action__Place_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__Place_SendGoal_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__action__Place_SendGoal_Request *)calloc(size, sizeof(moveit_msgs__action__Place_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__Place_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__Place_SendGoal_Request__fini(&data[i - 1]);
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
moveit_msgs__action__Place_SendGoal_Request__Sequence__fini(moveit_msgs__action__Place_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__Place_SendGoal_Request__fini(&array->data[i]);
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

moveit_msgs__action__Place_SendGoal_Request__Sequence *
moveit_msgs__action__Place_SendGoal_Request__Sequence__create(size_t size)
{
  moveit_msgs__action__Place_SendGoal_Request__Sequence * array = (moveit_msgs__action__Place_SendGoal_Request__Sequence *)malloc(sizeof(moveit_msgs__action__Place_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__Place_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__Place_SendGoal_Request__Sequence__destroy(moveit_msgs__action__Place_SendGoal_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__action__Place_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time__functions.h"

bool
moveit_msgs__action__Place_SendGoal_Response__init(moveit_msgs__action__Place_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    moveit_msgs__action__Place_SendGoal_Response__destroy(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__Place_SendGoal_Response__fini(moveit_msgs__action__Place_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

moveit_msgs__action__Place_SendGoal_Response *
moveit_msgs__action__Place_SendGoal_Response__create()
{
  moveit_msgs__action__Place_SendGoal_Response * msg = (moveit_msgs__action__Place_SendGoal_Response *)malloc(sizeof(moveit_msgs__action__Place_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__Place_SendGoal_Response));
  bool success = moveit_msgs__action__Place_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__Place_SendGoal_Response__destroy(moveit_msgs__action__Place_SendGoal_Response * msg)
{
  if (msg) {
    moveit_msgs__action__Place_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__Place_SendGoal_Response__Sequence__init(moveit_msgs__action__Place_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__Place_SendGoal_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__action__Place_SendGoal_Response *)calloc(size, sizeof(moveit_msgs__action__Place_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__Place_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__Place_SendGoal_Response__fini(&data[i - 1]);
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
moveit_msgs__action__Place_SendGoal_Response__Sequence__fini(moveit_msgs__action__Place_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__Place_SendGoal_Response__fini(&array->data[i]);
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

moveit_msgs__action__Place_SendGoal_Response__Sequence *
moveit_msgs__action__Place_SendGoal_Response__Sequence__create(size_t size)
{
  moveit_msgs__action__Place_SendGoal_Response__Sequence * array = (moveit_msgs__action__Place_SendGoal_Response__Sequence *)malloc(sizeof(moveit_msgs__action__Place_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__Place_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__Place_SendGoal_Response__Sequence__destroy(moveit_msgs__action__Place_SendGoal_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__action__Place_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"

bool
moveit_msgs__action__Place_GetResult_Request__init(moveit_msgs__action__Place_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__Place_GetResult_Request__destroy(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__Place_GetResult_Request__fini(moveit_msgs__action__Place_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

moveit_msgs__action__Place_GetResult_Request *
moveit_msgs__action__Place_GetResult_Request__create()
{
  moveit_msgs__action__Place_GetResult_Request * msg = (moveit_msgs__action__Place_GetResult_Request *)malloc(sizeof(moveit_msgs__action__Place_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__Place_GetResult_Request));
  bool success = moveit_msgs__action__Place_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__Place_GetResult_Request__destroy(moveit_msgs__action__Place_GetResult_Request * msg)
{
  if (msg) {
    moveit_msgs__action__Place_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__Place_GetResult_Request__Sequence__init(moveit_msgs__action__Place_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__Place_GetResult_Request * data = NULL;
  if (size) {
    data = (moveit_msgs__action__Place_GetResult_Request *)calloc(size, sizeof(moveit_msgs__action__Place_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__Place_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__Place_GetResult_Request__fini(&data[i - 1]);
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
moveit_msgs__action__Place_GetResult_Request__Sequence__fini(moveit_msgs__action__Place_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__Place_GetResult_Request__fini(&array->data[i]);
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

moveit_msgs__action__Place_GetResult_Request__Sequence *
moveit_msgs__action__Place_GetResult_Request__Sequence__create(size_t size)
{
  moveit_msgs__action__Place_GetResult_Request__Sequence * array = (moveit_msgs__action__Place_GetResult_Request__Sequence *)malloc(sizeof(moveit_msgs__action__Place_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__Place_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__Place_GetResult_Request__Sequence__destroy(moveit_msgs__action__Place_GetResult_Request__Sequence * array)
{
  if (array) {
    moveit_msgs__action__Place_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "moveit_msgs/action/place__functions.h"

bool
moveit_msgs__action__Place_GetResult_Response__init(moveit_msgs__action__Place_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!moveit_msgs__action__Place_Result__init(&msg->result)) {
    moveit_msgs__action__Place_GetResult_Response__destroy(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__Place_GetResult_Response__fini(moveit_msgs__action__Place_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  moveit_msgs__action__Place_Result__fini(&msg->result);
}

moveit_msgs__action__Place_GetResult_Response *
moveit_msgs__action__Place_GetResult_Response__create()
{
  moveit_msgs__action__Place_GetResult_Response * msg = (moveit_msgs__action__Place_GetResult_Response *)malloc(sizeof(moveit_msgs__action__Place_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__Place_GetResult_Response));
  bool success = moveit_msgs__action__Place_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__Place_GetResult_Response__destroy(moveit_msgs__action__Place_GetResult_Response * msg)
{
  if (msg) {
    moveit_msgs__action__Place_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__Place_GetResult_Response__Sequence__init(moveit_msgs__action__Place_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__Place_GetResult_Response * data = NULL;
  if (size) {
    data = (moveit_msgs__action__Place_GetResult_Response *)calloc(size, sizeof(moveit_msgs__action__Place_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__Place_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__Place_GetResult_Response__fini(&data[i - 1]);
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
moveit_msgs__action__Place_GetResult_Response__Sequence__fini(moveit_msgs__action__Place_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__Place_GetResult_Response__fini(&array->data[i]);
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

moveit_msgs__action__Place_GetResult_Response__Sequence *
moveit_msgs__action__Place_GetResult_Response__Sequence__create(size_t size)
{
  moveit_msgs__action__Place_GetResult_Response__Sequence * array = (moveit_msgs__action__Place_GetResult_Response__Sequence *)malloc(sizeof(moveit_msgs__action__Place_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__Place_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__Place_GetResult_Response__Sequence__destroy(moveit_msgs__action__Place_GetResult_Response__Sequence * array)
{
  if (array) {
    moveit_msgs__action__Place_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__functions.h"
// Member `feedback`
// already included above
// #include "moveit_msgs/action/place__functions.h"

bool
moveit_msgs__action__Place_FeedbackMessage__init(moveit_msgs__action__Place_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    moveit_msgs__action__Place_FeedbackMessage__destroy(msg);
    return false;
  }
  // feedback
  if (!moveit_msgs__action__Place_Feedback__init(&msg->feedback)) {
    moveit_msgs__action__Place_FeedbackMessage__destroy(msg);
    return false;
  }
  return true;
}

void
moveit_msgs__action__Place_FeedbackMessage__fini(moveit_msgs__action__Place_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  moveit_msgs__action__Place_Feedback__fini(&msg->feedback);
}

moveit_msgs__action__Place_FeedbackMessage *
moveit_msgs__action__Place_FeedbackMessage__create()
{
  moveit_msgs__action__Place_FeedbackMessage * msg = (moveit_msgs__action__Place_FeedbackMessage *)malloc(sizeof(moveit_msgs__action__Place_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(moveit_msgs__action__Place_FeedbackMessage));
  bool success = moveit_msgs__action__Place_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
moveit_msgs__action__Place_FeedbackMessage__destroy(moveit_msgs__action__Place_FeedbackMessage * msg)
{
  if (msg) {
    moveit_msgs__action__Place_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
moveit_msgs__action__Place_FeedbackMessage__Sequence__init(moveit_msgs__action__Place_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  moveit_msgs__action__Place_FeedbackMessage * data = NULL;
  if (size) {
    data = (moveit_msgs__action__Place_FeedbackMessage *)calloc(size, sizeof(moveit_msgs__action__Place_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = moveit_msgs__action__Place_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        moveit_msgs__action__Place_FeedbackMessage__fini(&data[i - 1]);
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
moveit_msgs__action__Place_FeedbackMessage__Sequence__fini(moveit_msgs__action__Place_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      moveit_msgs__action__Place_FeedbackMessage__fini(&array->data[i]);
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

moveit_msgs__action__Place_FeedbackMessage__Sequence *
moveit_msgs__action__Place_FeedbackMessage__Sequence__create(size_t size)
{
  moveit_msgs__action__Place_FeedbackMessage__Sequence * array = (moveit_msgs__action__Place_FeedbackMessage__Sequence *)malloc(sizeof(moveit_msgs__action__Place_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = moveit_msgs__action__Place_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
moveit_msgs__action__Place_FeedbackMessage__Sequence__destroy(moveit_msgs__action__Place_FeedbackMessage__Sequence * array)
{
  if (array) {
    moveit_msgs__action__Place_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
