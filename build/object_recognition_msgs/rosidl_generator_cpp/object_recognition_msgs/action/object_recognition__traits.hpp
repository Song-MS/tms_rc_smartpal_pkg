// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from object_recognition_msgs:action/ObjectRecognition.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__TRAITS_HPP_
#define OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__TRAITS_HPP_

#include "object_recognition_msgs/action/object_recognition__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_Goal>()
{
  return "object_recognition_msgs::action::ObjectRecognition_Goal";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_Goal>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'recognized_objects'
#include "object_recognition_msgs/msg/recognized_object_array__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_Result>()
{
  return "object_recognition_msgs::action::ObjectRecognition_Result";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_Result>
  : std::integral_constant<bool, has_fixed_size<object_recognition_msgs::msg::RecognizedObjectArray>::value> {};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_Result>
  : std::integral_constant<bool, has_bounded_size<object_recognition_msgs::msg::RecognizedObjectArray>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_Feedback>()
{
  return "object_recognition_msgs::action::ObjectRecognition_Feedback";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_Feedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "object_recognition_msgs/action/object_recognition__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request>()
{
  return "object_recognition_msgs::action::ObjectRecognition_SendGoal_Request";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<object_recognition_msgs::action::ObjectRecognition_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<object_recognition_msgs::action::ObjectRecognition_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response>()
{
  return "object_recognition_msgs::action::ObjectRecognition_SendGoal_Response";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_SendGoal>()
{
  return "object_recognition_msgs::action::ObjectRecognition_SendGoal";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request>::value &&
    has_fixed_size<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request>::value &&
    has_bounded_size<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_GetResult_Request>()
{
  return "object_recognition_msgs::action::ObjectRecognition_GetResult_Request";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "object_recognition_msgs/action/object_recognition__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_GetResult_Response>()
{
  return "object_recognition_msgs::action::ObjectRecognition_GetResult_Response";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<object_recognition_msgs::action::ObjectRecognition_Result>::value> {};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<object_recognition_msgs::action::ObjectRecognition_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_GetResult>()
{
  return "object_recognition_msgs::action::ObjectRecognition_GetResult";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<object_recognition_msgs::action::ObjectRecognition_GetResult_Request>::value &&
    has_fixed_size<object_recognition_msgs::action::ObjectRecognition_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<object_recognition_msgs::action::ObjectRecognition_GetResult_Request>::value &&
    has_bounded_size<object_recognition_msgs::action::ObjectRecognition_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "object_recognition_msgs/action/object_recognition__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage>()
{
  return "object_recognition_msgs::action::ObjectRecognition_FeedbackMessage";
}

template<>
struct has_fixed_size<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<object_recognition_msgs::action::ObjectRecognition_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<object_recognition_msgs::action::ObjectRecognition_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__TRAITS_HPP_
