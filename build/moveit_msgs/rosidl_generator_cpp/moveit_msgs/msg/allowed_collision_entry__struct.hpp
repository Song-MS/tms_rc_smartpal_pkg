// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/AllowedCollisionEntry.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__ALLOWED_COLLISION_ENTRY__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__ALLOWED_COLLISION_ENTRY__STRUCT_HPP_

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
# define DEPRECATED__moveit_msgs__msg__AllowedCollisionEntry __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__AllowedCollisionEntry __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllowedCollisionEntry_
{
  using Type = AllowedCollisionEntry_<ContainerAllocator>;

  explicit AllowedCollisionEntry_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AllowedCollisionEntry_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _enabled_type =
    std::vector<bool, typename ContainerAllocator::template rebind<bool>::other>;
  _enabled_type enabled;

  // setters for named parameter idiom
  Type & set__enabled(
    const std::vector<bool, typename ContainerAllocator::template rebind<bool>::other> & _arg)
  {
    this->enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__AllowedCollisionEntry
    std::shared_ptr<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__AllowedCollisionEntry
    std::shared_ptr<moveit_msgs::msg::AllowedCollisionEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllowedCollisionEntry_ & other) const
  {
    if (this->enabled != other.enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllowedCollisionEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllowedCollisionEntry_

// alias to use template instance with default allocator
using AllowedCollisionEntry =
  moveit_msgs::msg::AllowedCollisionEntry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__ALLOWED_COLLISION_ENTRY__STRUCT_HPP_
