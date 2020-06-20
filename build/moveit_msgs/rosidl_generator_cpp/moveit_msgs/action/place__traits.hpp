// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from moveit_msgs:action/Place.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__ACTION__PLACE__TRAITS_HPP_
#define MOVEIT_MSGS__ACTION__PLACE__TRAITS_HPP_

#include "moveit_msgs/action/place__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'path_constraints'
#include "moveit_msgs/msg/constraints__traits.hpp"
// Member 'planning_options'
#include "moveit_msgs/msg/planning_options__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_Goal>()
{
  return "moveit_msgs::action::Place_Goal";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_Goal>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'error_code'
#include "moveit_msgs/msg/move_it_error_codes__traits.hpp"
// Member 'trajectory_start'
#include "moveit_msgs/msg/robot_state__traits.hpp"
// Member 'place_location'
#include "moveit_msgs/msg/place_location__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_Result>()
{
  return "moveit_msgs::action::Place_Result";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_Result>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_Feedback>()
{
  return "moveit_msgs::action::Place_Feedback";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_Feedback>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "moveit_msgs/action/place__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_SendGoal_Request>()
{
  return "moveit_msgs::action::Place_SendGoal_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::Place_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::Place_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_SendGoal_Response>()
{
  return "moveit_msgs::action::Place_SendGoal_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_SendGoal>()
{
  return "moveit_msgs::action::Place_SendGoal";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::Place_SendGoal_Request>::value &&
    has_fixed_size<moveit_msgs::action::Place_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::Place_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::Place_SendGoal_Request>::value &&
    has_bounded_size<moveit_msgs::action::Place_SendGoal_Response>::value
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
inline const char * data_type<moveit_msgs::action::Place_GetResult_Request>()
{
  return "moveit_msgs::action::Place_GetResult_Request";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "moveit_msgs/action/place__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_GetResult_Response>()
{
  return "moveit_msgs::action::Place_GetResult_Response";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::Place_Result>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::Place_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_GetResult>()
{
  return "moveit_msgs::action::Place_GetResult";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<moveit_msgs::action::Place_GetResult_Request>::value &&
    has_fixed_size<moveit_msgs::action::Place_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<moveit_msgs::action::Place_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<moveit_msgs::action::Place_GetResult_Request>::value &&
    has_bounded_size<moveit_msgs::action::Place_GetResult_Response>::value
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
// #include "moveit_msgs/action/place__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<moveit_msgs::action::Place_FeedbackMessage>()
{
  return "moveit_msgs::action::Place_FeedbackMessage";
}

template<>
struct has_fixed_size<moveit_msgs::action::Place_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<moveit_msgs::action::Place_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<moveit_msgs::action::Place_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<moveit_msgs::action::Place_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // MOVEIT_MSGS__ACTION__PLACE__TRAITS_HPP_
