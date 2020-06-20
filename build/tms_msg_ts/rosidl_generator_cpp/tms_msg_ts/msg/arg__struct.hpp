// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_ts:msg/Arg.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__MSG__ARG__STRUCT_HPP_
#define TMS_MSG_TS__MSG__ARG__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_ts__msg__Arg __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__msg__Arg __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Arg_
{
  using Type = Arg_<ContainerAllocator>;

  explicit Arg_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Arg_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _arg_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _arg_type arg;

  // setters for named parameter idiom
  Type & set__arg(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->arg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::msg::Arg_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::msg::Arg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::msg::Arg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::msg::Arg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::msg::Arg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::msg::Arg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::msg::Arg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::msg::Arg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::msg::Arg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::msg::Arg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__msg__Arg
    std::shared_ptr<tms_msg_ts::msg::Arg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__msg__Arg
    std::shared_ptr<tms_msg_ts::msg::Arg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Arg_ & other) const
  {
    if (this->arg != other.arg) {
      return false;
    }
    return true;
  }
  bool operator!=(const Arg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Arg_

// alias to use template instance with default allocator
using Arg =
  tms_msg_ts::msg::Arg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tms_msg_ts

#endif  // TMS_MSG_TS__MSG__ARG__STRUCT_HPP_
