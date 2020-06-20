// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_ur:msg/JuliusMsg.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_UR__MSG__JULIUS_MSG__STRUCT_HPP_
#define TMS_MSG_UR__MSG__JULIUS_MSG__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_ur__msg__JuliusMsg __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ur__msg__JuliusMsg __declspec(deprecated)
#endif

namespace tms_msg_ur
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JuliusMsg_
{
  using Type = JuliusMsg_<ContainerAllocator>;

  explicit JuliusMsg_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->value = 0.0f;
    }
  }

  explicit JuliusMsg_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->data = "";
      this->value = 0.0f;
    }
  }

  // field types and members
  using _data_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _data_type data;
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__data(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ur::msg::JuliusMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ur::msg::JuliusMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ur::msg::JuliusMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ur::msg::JuliusMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ur::msg::JuliusMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ur::msg::JuliusMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ur::msg::JuliusMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ur::msg::JuliusMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ur::msg::JuliusMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ur::msg::JuliusMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ur__msg__JuliusMsg
    std::shared_ptr<tms_msg_ur::msg::JuliusMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ur__msg__JuliusMsg
    std::shared_ptr<tms_msg_ur::msg::JuliusMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JuliusMsg_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const JuliusMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JuliusMsg_

// alias to use template instance with default allocator
using JuliusMsg =
  tms_msg_ur::msg::JuliusMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tms_msg_ur

#endif  // TMS_MSG_UR__MSG__JULIUS_MSG__STRUCT_HPP_
