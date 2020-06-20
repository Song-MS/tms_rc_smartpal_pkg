// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_rc:srv/TurtlebotControl.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_RC__SRV__TURTLEBOT_CONTROL__STRUCT_HPP_
#define TMS_MSG_RC__SRV__TURTLEBOT_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_rc__srv__TurtlebotControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_rc__srv__TurtlebotControl_Request __declspec(deprecated)
#endif

namespace tms_msg_rc
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtlebotControl_Request_
{
  using Type = TurtlebotControl_Request_<ContainerAllocator>;

  explicit TurtlebotControl_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->unit = 0;
      this->cmd = 0;
    }
  }

  explicit TurtlebotControl_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->unit = 0;
      this->cmd = 0;
    }
  }

  // field types and members
  using _unit_type =
    int8_t;
  _unit_type unit;
  using _cmd_type =
    int8_t;
  _cmd_type cmd;
  using _arg_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _arg_type arg;

  // setters for named parameter idiom
  Type & set__unit(
    const int8_t & _arg)
  {
    this->unit = _arg;
    return *this;
  }
  Type & set__cmd(
    const int8_t & _arg)
  {
    this->cmd = _arg;
    return *this;
  }
  Type & set__arg(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->arg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_rc__srv__TurtlebotControl_Request
    std::shared_ptr<tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_rc__srv__TurtlebotControl_Request
    std::shared_ptr<tms_msg_rc::srv::TurtlebotControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtlebotControl_Request_ & other) const
  {
    if (this->unit != other.unit) {
      return false;
    }
    if (this->cmd != other.cmd) {
      return false;
    }
    if (this->arg != other.arg) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtlebotControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtlebotControl_Request_

// alias to use template instance with default allocator
using TurtlebotControl_Request =
  tms_msg_rc::srv::TurtlebotControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_rc

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
# define DEPRECATED__tms_msg_rc__srv__TurtlebotControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_rc__srv__TurtlebotControl_Response __declspec(deprecated)
#endif

namespace tms_msg_rc
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TurtlebotControl_Response_
{
  using Type = TurtlebotControl_Response_<ContainerAllocator>;

  explicit TurtlebotControl_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  explicit TurtlebotControl_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0;
    }
  }

  // field types and members
  using _result_type =
    int8_t;
  _result_type result;
  using _val_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _val_type val;

  // setters for named parameter idiom
  Type & set__result(
    const int8_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__val(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_rc__srv__TurtlebotControl_Response
    std::shared_ptr<tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_rc__srv__TurtlebotControl_Response
    std::shared_ptr<tms_msg_rc::srv::TurtlebotControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TurtlebotControl_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const TurtlebotControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TurtlebotControl_Response_

// alias to use template instance with default allocator
using TurtlebotControl_Response =
  tms_msg_rc::srv::TurtlebotControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_rc

namespace tms_msg_rc
{

namespace srv
{

struct TurtlebotControl
{
  using Request = tms_msg_rc::srv::TurtlebotControl_Request;
  using Response = tms_msg_rc::srv::TurtlebotControl_Response;
};

}  // namespace srv

}  // namespace tms_msg_rc

#endif  // TMS_MSG_RC__SRV__TURTLEBOT_CONTROL__STRUCT_HPP_
