// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_ts:srv/TsStateControl.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__SRV__TS_STATE_CONTROL__STRUCT_HPP_
#define TMS_MSG_TS__SRV__TS_STATE_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_ts__srv__TsStateControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__srv__TsStateControl_Request __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TsStateControl_Request_
{
  using Type = TsStateControl_Request_<ContainerAllocator>;

  explicit TsStateControl_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->type = 0l;
      this->state = 0l;
      this->cc_subtasks = 0l;
      this->error_msg = "";
    }
  }

  explicit TsStateControl_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : error_msg(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->type = 0l;
      this->state = 0l;
      this->cc_subtasks = 0l;
      this->error_msg = "";
    }
  }

  // field types and members
  using _rostime_type =
    uint64_t;
  _rostime_type rostime;
  using _type_type =
    int32_t;
  _type_type type;
  using _state_type =
    int32_t;
  _state_type state;
  using _cc_subtasks_type =
    int32_t;
  _cc_subtasks_type cc_subtasks;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__rostime(
    const uint64_t & _arg)
  {
    this->rostime = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__cc_subtasks(
    const int32_t & _arg)
  {
    this->cc_subtasks = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__srv__TsStateControl_Request
    std::shared_ptr<tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__srv__TsStateControl_Request
    std::shared_ptr<tms_msg_ts::srv::TsStateControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TsStateControl_Request_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->cc_subtasks != other.cc_subtasks) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const TsStateControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TsStateControl_Request_

// alias to use template instance with default allocator
using TsStateControl_Request =
  tms_msg_ts::srv::TsStateControl_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_ts__srv__TsStateControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__srv__TsStateControl_Response __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TsStateControl_Response_
{
  using Type = TsStateControl_Response_<ContainerAllocator>;

  explicit TsStateControl_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit TsStateControl_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__srv__TsStateControl_Response
    std::shared_ptr<tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__srv__TsStateControl_Response
    std::shared_ptr<tms_msg_ts::srv::TsStateControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TsStateControl_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TsStateControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TsStateControl_Response_

// alias to use template instance with default allocator
using TsStateControl_Response =
  tms_msg_ts::srv::TsStateControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_ts

namespace tms_msg_ts
{

namespace srv
{

struct TsStateControl
{
  using Request = tms_msg_ts::srv::TsStateControl_Request;
  using Response = tms_msg_ts::srv::TsStateControl_Response;
};

}  // namespace srv

}  // namespace tms_msg_ts

#endif  // TMS_MSG_TS__SRV__TS_STATE_CONTROL__STRUCT_HPP_
