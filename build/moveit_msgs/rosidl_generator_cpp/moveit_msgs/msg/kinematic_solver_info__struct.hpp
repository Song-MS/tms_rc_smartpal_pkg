// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/KinematicSolverInfo.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__KINEMATIC_SOLVER_INFO__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__KINEMATIC_SOLVER_INFO__STRUCT_HPP_

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

// Include directives for member types
// Member 'limits'
#include "moveit_msgs/msg/joint_limits__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__KinematicSolverInfo __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__KinematicSolverInfo __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KinematicSolverInfo_
{
  using Type = KinematicSolverInfo_<ContainerAllocator>;

  explicit KinematicSolverInfo_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit KinematicSolverInfo_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _joint_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _joint_names_type joint_names;
  using _limits_type =
    std::vector<moveit_msgs::msg::JointLimits_<ContainerAllocator>, typename ContainerAllocator::template rebind<moveit_msgs::msg::JointLimits_<ContainerAllocator>>::other>;
  _limits_type limits;
  using _link_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _link_names_type link_names;

  // setters for named parameter idiom
  Type & set__joint_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->joint_names = _arg;
    return *this;
  }
  Type & set__limits(
    const std::vector<moveit_msgs::msg::JointLimits_<ContainerAllocator>, typename ContainerAllocator::template rebind<moveit_msgs::msg::JointLimits_<ContainerAllocator>>::other> & _arg)
  {
    this->limits = _arg;
    return *this;
  }
  Type & set__link_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->link_names = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__KinematicSolverInfo
    std::shared_ptr<moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__KinematicSolverInfo
    std::shared_ptr<moveit_msgs::msg::KinematicSolverInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KinematicSolverInfo_ & other) const
  {
    if (this->joint_names != other.joint_names) {
      return false;
    }
    if (this->limits != other.limits) {
      return false;
    }
    if (this->link_names != other.link_names) {
      return false;
    }
    return true;
  }
  bool operator!=(const KinematicSolverInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KinematicSolverInfo_

// alias to use template instance with default allocator
using KinematicSolverInfo =
  moveit_msgs::msg::KinematicSolverInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__KINEMATIC_SOLVER_INFO__STRUCT_HPP_
