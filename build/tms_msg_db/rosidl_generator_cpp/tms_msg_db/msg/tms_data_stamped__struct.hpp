// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:msg/TmsDataStamped.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMS_DATA_STAMPED__STRUCT_HPP_
#define TMS_MSG_DB__MSG__TMS_DATA_STAMPED__STRUCT_HPP_

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
// Member 'tmsdata'
#include "tms_msg_db/msg/tms_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tms_msg_db__msg__TmsDataStamped __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__msg__TmsDataStamped __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TmsDataStamped_
{
  using Type = TmsDataStamped_<ContainerAllocator>;

  explicit TmsDataStamped_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TmsDataStamped_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tmsdata_type =
    std::vector<tms_msg_db::msg::TmsData_<ContainerAllocator>, typename ContainerAllocator::template rebind<tms_msg_db::msg::TmsData_<ContainerAllocator>>::other>;
  _tmsdata_type tmsdata;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tmsdata(
    const std::vector<tms_msg_db::msg::TmsData_<ContainerAllocator>, typename ContainerAllocator::template rebind<tms_msg_db::msg::TmsData_<ContainerAllocator>>::other> & _arg)
  {
    this->tmsdata = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::msg::TmsDataStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::msg::TmsDataStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::msg::TmsDataStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::msg::TmsDataStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::msg::TmsDataStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::msg::TmsDataStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::msg::TmsDataStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::msg::TmsDataStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::msg::TmsDataStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::msg::TmsDataStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__msg__TmsDataStamped
    std::shared_ptr<tms_msg_db::msg::TmsDataStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__msg__TmsDataStamped
    std::shared_ptr<tms_msg_db::msg::TmsDataStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsDataStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tmsdata != other.tmsdata) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsDataStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsDataStamped_

// alias to use template instance with default allocator
using TmsDataStamped =
  tms_msg_db::msg::TmsDataStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__MSG__TMS_DATA_STAMPED__STRUCT_HPP_
