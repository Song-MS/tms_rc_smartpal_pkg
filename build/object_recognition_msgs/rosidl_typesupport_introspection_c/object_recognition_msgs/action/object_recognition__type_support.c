// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from object_recognition_msgs:action/ObjectRecognition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
#include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "object_recognition_msgs/action/object_recognition__struct.h"


// Include directives for member types
// Member `filter_limits`
#include "rosidl_generator_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectRecognition_Goal__rosidl_typesupport_introspection_c__ObjectRecognition_Goal_message_member_array[2] = {
  {
    "use_roi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_Goal, use_roi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filter_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_Goal, filter_limits),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectRecognition_Goal__rosidl_typesupport_introspection_c__ObjectRecognition_Goal_message_members = {
  "object_recognition_msgs__action",  // message namespace
  "ObjectRecognition_Goal",  // message name
  2,  // number of fields
  sizeof(object_recognition_msgs__action__ObjectRecognition_Goal),
  ObjectRecognition_Goal__rosidl_typesupport_introspection_c__ObjectRecognition_Goal_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectRecognition_Goal__rosidl_typesupport_introspection_c__ObjectRecognition_Goal_message_type_support_handle = {
  0,
  &ObjectRecognition_Goal__rosidl_typesupport_introspection_c__ObjectRecognition_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_Goal)() {
  if (!ObjectRecognition_Goal__rosidl_typesupport_introspection_c__ObjectRecognition_Goal_message_type_support_handle.typesupport_identifier) {
    ObjectRecognition_Goal__rosidl_typesupport_introspection_c__ObjectRecognition_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectRecognition_Goal__rosidl_typesupport_introspection_c__ObjectRecognition_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"


// Include directives for member types
// Member `recognized_objects`
#include "object_recognition_msgs/msg/recognized_object_array.h"
// Member `recognized_objects`
#include "object_recognition_msgs/msg/recognized_object_array__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_member_array[1] = {
  {
    "recognized_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_Result, recognized_objects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_members = {
  "object_recognition_msgs__action",  // message namespace
  "ObjectRecognition_Result",  // message name
  1,  // number of fields
  sizeof(object_recognition_msgs__action__ObjectRecognition_Result),
  ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_type_support_handle = {
  0,
  &ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_Result)() {
  ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, msg, RecognizedObjectArray)();
  if (!ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_type_support_handle.typesupport_identifier) {
    ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectRecognition_Result__rosidl_typesupport_introspection_c__ObjectRecognition_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectRecognition_Feedback__rosidl_typesupport_introspection_c__ObjectRecognition_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectRecognition_Feedback__rosidl_typesupport_introspection_c__ObjectRecognition_Feedback_message_members = {
  "object_recognition_msgs__action",  // message namespace
  "ObjectRecognition_Feedback",  // message name
  1,  // number of fields
  sizeof(object_recognition_msgs__action__ObjectRecognition_Feedback),
  ObjectRecognition_Feedback__rosidl_typesupport_introspection_c__ObjectRecognition_Feedback_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectRecognition_Feedback__rosidl_typesupport_introspection_c__ObjectRecognition_Feedback_message_type_support_handle = {
  0,
  &ObjectRecognition_Feedback__rosidl_typesupport_introspection_c__ObjectRecognition_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_Feedback)() {
  if (!ObjectRecognition_Feedback__rosidl_typesupport_introspection_c__ObjectRecognition_Feedback_message_type_support_handle.typesupport_identifier) {
    ObjectRecognition_Feedback__rosidl_typesupport_introspection_c__ObjectRecognition_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectRecognition_Feedback__rosidl_typesupport_introspection_c__ObjectRecognition_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "object_recognition_msgs/action/object_recognition.h"
// Member `goal`
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_members = {
  "object_recognition_msgs__action",  // message namespace
  "ObjectRecognition_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Request),
  ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_type_support_handle = {
  0,
  &ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_SendGoal_Request)() {
  ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_Goal)();
  if (!ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectRecognition_SendGoal_Request__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_members = {
  "object_recognition_msgs__action",  // message namespace
  "ObjectRecognition_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(object_recognition_msgs__action__ObjectRecognition_SendGoal_Response),
  ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_type_support_handle = {
  0,
  &ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_SendGoal_Response)() {
  ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectRecognition_SendGoal_Response__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_service_members = {
  "object_recognition_msgs__action",  // service namespace
  "ObjectRecognition_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_service_type_support_handle = {
  0,
  &object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_SendGoal)() {
  if (!object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_service_type_support_handle.typesupport_identifier) {
    object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_SendGoal_Response)()->data;
  }

  return &object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_members = {
  "object_recognition_msgs__action",  // message namespace
  "ObjectRecognition_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Request),
  ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_type_support_handle = {
  0,
  &ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_GetResult_Request)() {
  ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectRecognition_GetResult_Request__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "object_recognition_msgs/action/object_recognition.h"
// Member `result`
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_members = {
  "object_recognition_msgs__action",  // message namespace
  "ObjectRecognition_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(object_recognition_msgs__action__ObjectRecognition_GetResult_Response),
  ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_type_support_handle = {
  0,
  &ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_GetResult_Response)() {
  ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_Result)();
  if (!ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectRecognition_GetResult_Response__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_generator_c/service_type_support_struct.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_service_members = {
  "object_recognition_msgs__action",  // service namespace
  "ObjectRecognition_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_service_type_support_handle = {
  0,
  &object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_GetResult)() {
  if (!object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_service_type_support_handle.typesupport_identifier) {
    object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_GetResult_Response)()->data;
  }

  return &object_recognition_msgs__action__object_recognition__rosidl_typesupport_introspection_c__ObjectRecognition_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"
// already included above
// #include "object_recognition_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "object_recognition_msgs/action/object_recognition.h"
// Member `feedback`
// already included above
// #include "object_recognition_msgs/action/object_recognition__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_members = {
  "object_recognition_msgs__action",  // message namespace
  "ObjectRecognition_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(object_recognition_msgs__action__ObjectRecognition_FeedbackMessage),
  ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_type_support_handle = {
  0,
  &ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_object_recognition_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_FeedbackMessage)() {
  ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, object_recognition_msgs, action, ObjectRecognition_Feedback)();
  if (!ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ObjectRecognition_FeedbackMessage__rosidl_typesupport_introspection_c__ObjectRecognition_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
