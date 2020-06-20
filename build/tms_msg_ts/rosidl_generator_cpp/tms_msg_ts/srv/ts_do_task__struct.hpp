// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_ts:srv/TsDoTask.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__SRV__TS_DO_TASK__STRUCT_HPP_
#define TMS_MSG_TS__SRV__TS_DO_TASK__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_ts__srv__TsDoTask_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__srv__TsDoTask_Request __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TsDoTask_Request_
{
  using Type = TsDoTask_Request_<ContainerAllocator>;

  explicit TsDoTask_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit TsDoTask_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__srv__TsDoTask_Request
    std::shared_ptr<tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__srv__TsDoTask_Request
    std::shared_ptr<tms_msg_ts::srv::TsDoTask_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TsDoTask_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const TsDoTask_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TsDoTask_Request_

// alias to use template instance with default allocator
using TsDoTask_Request =
  tms_msg_ts::srv::TsDoTask_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_ts

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
# define DEPRECATED__tms_msg_ts__srv__TsDoTask_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__srv__TsDoTask_Response __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TsDoTask_Response_
{
  using Type = TsDoTask_Response_<ContainerAllocator>;

  explicit TsDoTask_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit TsDoTask_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__srv__TsDoTask_Response
    std::shared_ptr<tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__srv__TsDoTask_Response
    std::shared_ptr<tms_msg_ts::srv::TsDoTask_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TsDoTask_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const TsDoTask_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TsDoTask_Response_

// alias to use template instance with default allocator
using TsDoTask_Response =
  tms_msg_ts::srv::TsDoTask_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_ts

namespace tms_msg_ts
{

namespace srv
{

struct TsDoTask
{
  using Request = tms_msg_ts::srv::TsDoTask_Request;
  using Response = tms_msg_ts::srv::TsDoTask_Response;
};

}  // namespace srv

}  // namespace tms_msg_ts

#endif  // TMS_MSG_TS__SRV__TS_DO_TASK__STRUCT_HPP_
