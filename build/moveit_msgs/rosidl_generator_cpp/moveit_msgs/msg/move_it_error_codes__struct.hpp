// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/MoveItErrorCodes.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__MOVE_IT_ERROR_CODES__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__MOVE_IT_ERROR_CODES__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__MoveItErrorCodes __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__MoveItErrorCodes __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MoveItErrorCodes_
{
  using Type = MoveItErrorCodes_<ContainerAllocator>;

  explicit MoveItErrorCodes_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0l;
    }
  }

  explicit MoveItErrorCodes_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0l;
    }
  }

  // field types and members
  using _val_type =
    int32_t;
  _val_type val;

  // setters for named parameter idiom
  Type & set__val(
    const int32_t & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t SUCCESS =
    1;
  static constexpr int32_t FAILURE =
    99999;
  static constexpr int32_t PLANNING_FAILED =
    -1;
  static constexpr int32_t INVALID_MOTION_PLAN =
    -2;
  static constexpr int32_t MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE =
    -3;
  static constexpr int32_t CONTROL_FAILED =
    -4;
  static constexpr int32_t UNABLE_TO_AQUIRE_SENSOR_DATA =
    -5;
  static constexpr int32_t TIMED_OUT =
    -6;
  static constexpr int32_t PREEMPTED =
    -7;
  static constexpr int32_t START_STATE_IN_COLLISION =
    -10;
  static constexpr int32_t START_STATE_VIOLATES_PATH_CONSTRAINTS =
    -11;
  static constexpr int32_t GOAL_IN_COLLISION =
    -12;
  static constexpr int32_t GOAL_VIOLATES_PATH_CONSTRAINTS =
    -13;
  static constexpr int32_t GOAL_CONSTRAINTS_VIOLATED =
    -14;
  static constexpr int32_t INVALID_GROUP_NAME =
    -15;
  static constexpr int32_t INVALID_GOAL_CONSTRAINTS =
    -16;
  static constexpr int32_t INVALID_ROBOT_STATE =
    -17;
  static constexpr int32_t INVALID_LINK_NAME =
    -18;
  static constexpr int32_t INVALID_OBJECT_NAME =
    -19;
  static constexpr int32_t FRAME_TRANSFORM_FAILURE =
    -21;
  static constexpr int32_t COLLISION_CHECKING_UNAVAILABLE =
    -22;
  static constexpr int32_t ROBOT_STATE_STALE =
    -23;
  static constexpr int32_t SENSOR_INFO_STALE =
    -24;
  static constexpr int32_t NO_IK_SOLUTION =
    -31;

  // pointer types
  using RawPtr =
    moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__MoveItErrorCodes
    std::shared_ptr<moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__MoveItErrorCodes
    std::shared_ptr<moveit_msgs::msg::MoveItErrorCodes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MoveItErrorCodes_ & other) const
  {
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const MoveItErrorCodes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MoveItErrorCodes_

// alias to use template instance with default allocator
using MoveItErrorCodes =
  moveit_msgs::msg::MoveItErrorCodes_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::SUCCESS;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::FAILURE;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::PLANNING_FAILED;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::INVALID_MOTION_PLAN;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::CONTROL_FAILED;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::UNABLE_TO_AQUIRE_SENSOR_DATA;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::TIMED_OUT;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::PREEMPTED;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::START_STATE_IN_COLLISION;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::START_STATE_VIOLATES_PATH_CONSTRAINTS;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::GOAL_IN_COLLISION;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::GOAL_VIOLATES_PATH_CONSTRAINTS;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::GOAL_CONSTRAINTS_VIOLATED;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::INVALID_GROUP_NAME;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::INVALID_GOAL_CONSTRAINTS;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::INVALID_ROBOT_STATE;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::INVALID_LINK_NAME;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::INVALID_OBJECT_NAME;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::FRAME_TRANSFORM_FAILURE;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::COLLISION_CHECKING_UNAVAILABLE;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::ROBOT_STATE_STALE;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::SENSOR_INFO_STALE;
template<typename ContainerAllocator>
constexpr int32_t MoveItErrorCodes_<ContainerAllocator>::NO_IK_SOLUTION;

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__MOVE_IT_ERROR_CODES__STRUCT_HPP_
