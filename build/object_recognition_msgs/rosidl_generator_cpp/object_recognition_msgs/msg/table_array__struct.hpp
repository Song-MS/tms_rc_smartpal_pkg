// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_recognition_msgs:msg/TableArray.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__STRUCT_HPP_
#define OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__STRUCT_HPP_

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
// Member 'tables'
#include "object_recognition_msgs/msg/table__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__msg__TableArray __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__msg__TableArray __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TableArray_
{
  using Type = TableArray_<ContainerAllocator>;

  explicit TableArray_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TableArray_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tables_type =
    std::vector<object_recognition_msgs::msg::Table_<ContainerAllocator>, typename ContainerAllocator::template rebind<object_recognition_msgs::msg::Table_<ContainerAllocator>>::other>;
  _tables_type tables;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tables(
    const std::vector<object_recognition_msgs::msg::Table_<ContainerAllocator>, typename ContainerAllocator::template rebind<object_recognition_msgs::msg::Table_<ContainerAllocator>>::other> & _arg)
  {
    this->tables = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::msg::TableArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::msg::TableArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::msg::TableArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::msg::TableArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::msg::TableArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::msg::TableArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::msg::TableArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::msg::TableArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::msg::TableArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::msg::TableArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__msg__TableArray
    std::shared_ptr<object_recognition_msgs::msg::TableArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__msg__TableArray
    std::shared_ptr<object_recognition_msgs::msg::TableArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TableArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tables != other.tables) {
      return false;
    }
    return true;
  }
  bool operator!=(const TableArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TableArray_

// alias to use template instance with default allocator
using TableArray =
  object_recognition_msgs::msg::TableArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_recognition_msgs

#endif  // OBJECT_RECOGNITION_MSGS__MSG__TABLE_ARRAY__STRUCT_HPP_
