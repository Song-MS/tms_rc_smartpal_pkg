// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from object_recognition_msgs:action/ObjectRecognition.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__STRUCT_H_
#define OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filter_limits'
#include "rosidl_generator_c/primitives_sequence.h"

// Struct defined in action/ObjectRecognition in the package object_recognition_msgs.
typedef struct object_recognition_msgs__action__ObjectRecognition_Goal
{
  bool use_roi;
  rosidl_generator_c__float__Sequence filter_limits;
} object_recognition_msgs__action__ObjectRecognition_Goal;

// Struct for a sequence of object_recognition_msgs__action__ObjectRecognition_Goal.
typedef struct object_recognition_msgs__action__ObjectRecognition_Goal__Sequence
{
  object_recognition_msgs__action__ObjectRecognition_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__action__ObjectRecognition_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'recognized_objects'
#include "object_recognition_msgs/msg/recognized_object_array__struct.h"

// Struct defined in action/ObjectRecognition in the package object_recognition_msgs.
typedef struct object_recognition_msgs__action__ObjectRecognition_Result
{
  object_recognition_msgs__msg__RecognizedObjectArray recognized_objects;
} object_recognition_msgs__action__ObjectRecognition_Result;

// Struct for a sequence of object_recognition_msgs__action__ObjectRecognition_Result.
typedef struct object_recognition_msgs__action__ObjectRecognition_Result__Sequence
{
  object_recognition_msgs__action__ObjectRecognition_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__action__ObjectRecognition_Result__Sequence;


// Constants defined in the message

// Struct defined in action/ObjectRecognition in the package object_recognition_msgs.
typedef struct object_recognition_msgs__action__ObjectRecognition_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} object_recognition_msgs__action__ObjectRecognition_Feedback;

// Struct for a sequence of object_recognition_msgs__action__ObjectRecognition_Feedback.
typedef struct object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence
{
  object_recognition_msgs__action__ObjectRecognition_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__action__ObjectRecognition_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'goal'
#include "object_recognition_msgs/action/object_recognition__struct.h"

// Struct defined in action/ObjectRecognition in the package object_recognition_msgs.
typedef struct object_recognition_msgs__action__ObjectRecognition_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  object_recognition_msgs__action__ObjectRecognition_Goal goal;
} object_recognition_msgs__action__ObjectRecognition_SendGoal_Request;

// Struct for a sequence of object_recognition_msgs__action__ObjectRecognition_SendGoal_Request.
typedef struct object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence
{
  object_recognition_msgs__action__ObjectRecognition_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__action__ObjectRecognition_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.h"

// Struct defined in action/ObjectRecognition in the package object_recognition_msgs.
typedef struct object_recognition_msgs__action__ObjectRecognition_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} object_recognition_msgs__action__ObjectRecognition_SendGoal_Response;

// Struct for a sequence of object_recognition_msgs__action__ObjectRecognition_SendGoal_Response.
typedef struct object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence
{
  object_recognition_msgs__action__ObjectRecognition_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__action__ObjectRecognition_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"

// Struct defined in action/ObjectRecognition in the package object_recognition_msgs.
typedef struct object_recognition_msgs__action__ObjectRecognition_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} object_recognition_msgs__action__ObjectRecognition_GetResult_Request;

// Struct for a sequence of object_recognition_msgs__action__ObjectRecognition_GetResult_Request.
typedef struct object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence
{
  object_recognition_msgs__action__ObjectRecognition_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__action__ObjectRecognition_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"

// Struct defined in action/ObjectRecognition in the package object_recognition_msgs.
typedef struct object_recognition_msgs__action__ObjectRecognition_GetResult_Response
{
  int8_t status;
  object_recognition_msgs__action__ObjectRecognition_Result result;
} object_recognition_msgs__action__ObjectRecognition_GetResult_Response;

// Struct for a sequence of object_recognition_msgs__action__ObjectRecognition_GetResult_Response.
typedef struct object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence
{
  object_recognition_msgs__action__ObjectRecognition_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__action__ObjectRecognition_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"

// Struct defined in action/ObjectRecognition in the package object_recognition_msgs.
typedef struct object_recognition_msgs__action__ObjectRecognition_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  object_recognition_msgs__action__ObjectRecognition_Feedback feedback;
} object_recognition_msgs__action__ObjectRecognition_FeedbackMessage;

// Struct for a sequence of object_recognition_msgs__action__ObjectRecognition_FeedbackMessage.
typedef struct object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence
{
  object_recognition_msgs__action__ObjectRecognition_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} object_recognition_msgs__action__ObjectRecognition_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__STRUCT_H_
