// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_recognition_msgs:msg/Table.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__TABLE__STRUCT_HPP_
#define OBJECT_RECOGNITION_MSGS__MSG__TABLE__STRUCT_HPP_

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
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.hpp"
// Member 'convex_hull'
#include "geometry_msgs/msg/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__msg__Table __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__msg__Table __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Table_
{
  using Type = Table_<ContainerAllocator>;

  explicit Table_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit Table_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _convex_hull_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _convex_hull_type convex_hull;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__convex_hull(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->convex_hull = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::msg::Table_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::msg::Table_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::msg::Table_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::msg::Table_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::msg::Table_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::msg::Table_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::msg::Table_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::msg::Table_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::msg::Table_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::msg::Table_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__msg__Table
    std::shared_ptr<object_recognition_msgs::msg::Table_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__msg__Table
    std::shared_ptr<object_recognition_msgs::msg::Table_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Table_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->convex_hull != other.convex_hull) {
      return false;
    }
    return true;
  }
  bool operator!=(const Table_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Table_

// alias to use template instance with default allocator
using Table =
  object_recognition_msgs::msg::Table_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_recognition_msgs

#endif  // OBJECT_RECOGNITION_MSGS__MSG__TABLE__STRUCT_HPP_
