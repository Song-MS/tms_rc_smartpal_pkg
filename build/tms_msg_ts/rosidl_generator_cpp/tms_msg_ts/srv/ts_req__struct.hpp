// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_ts:srv/TsReq.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__SRV__TS_REQ__STRUCT_HPP_
#define TMS_MSG_TS__SRV__TS_REQ__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_ts__srv__TsReq_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__srv__TsReq_Request __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TsReq_Request_
{
  using Type = TsReq_Request_<ContainerAllocator>;

  explicit TsReq_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->task_id = 0l;
      this->robot_id = 0l;
      this->object_id = 0l;
      this->user_id = 0l;
      this->place_id = 0l;
      this->priority = 0l;
    }
  }

  explicit TsReq_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->task_id = 0l;
      this->robot_id = 0l;
      this->object_id = 0l;
      this->user_id = 0l;
      this->place_id = 0l;
      this->priority = 0l;
    }
  }

  // field types and members
  using _rostime_type =
    uint64_t;
  _rostime_type rostime;
  using _task_id_type =
    int32_t;
  _task_id_type task_id;
  using _robot_id_type =
    int32_t;
  _robot_id_type robot_id;
  using _object_id_type =
    int32_t;
  _object_id_type object_id;
  using _user_id_type =
    int32_t;
  _user_id_type user_id;
  using _place_id_type =
    int32_t;
  _place_id_type place_id;
  using _priority_type =
    int32_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__rostime(
    const uint64_t & _arg)
  {
    this->rostime = _arg;
    return *this;
  }
  Type & set__task_id(
    const int32_t & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__robot_id(
    const int32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__object_id(
    const int32_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__user_id(
    const int32_t & _arg)
  {
    this->user_id = _arg;
    return *this;
  }
  Type & set__place_id(
    const int32_t & _arg)
  {
    this->place_id = _arg;
    return *this;
  }
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::srv::TsReq_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::srv::TsReq_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsReq_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsReq_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsReq_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsReq_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsReq_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsReq_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsReq_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsReq_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__srv__TsReq_Request
    std::shared_ptr<tms_msg_ts::srv::TsReq_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__srv__TsReq_Request
    std::shared_ptr<tms_msg_ts::srv::TsReq_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TsReq_Request_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->place_id != other.place_id) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const TsReq_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TsReq_Request_

// alias to use template instance with default allocator
using TsReq_Request =
  tms_msg_ts::srv::TsReq_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_ts__srv__TsReq_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__srv__TsReq_Response __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TsReq_Response_
{
  using Type = TsReq_Response_<ContainerAllocator>;

  explicit TsReq_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit TsReq_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
  using _val_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _val_type val;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__val(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::srv::TsReq_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::srv::TsReq_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsReq_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TsReq_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsReq_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsReq_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TsReq_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TsReq_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsReq_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TsReq_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__srv__TsReq_Response
    std::shared_ptr<tms_msg_ts::srv::TsReq_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__srv__TsReq_Response
    std::shared_ptr<tms_msg_ts::srv::TsReq_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TsReq_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const TsReq_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TsReq_Response_

// alias to use template instance with default allocator
using TsReq_Response =
  tms_msg_ts::srv::TsReq_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_ts

namespace tms_msg_ts
{

namespace srv
{

struct TsReq
{
  using Request = tms_msg_ts::srv::TsReq_Request;
  using Response = tms_msg_ts::srv::TsReq_Response;
};

}  // namespace srv

}  // namespace tms_msg_ts

#endif  // TMS_MSG_TS__SRV__TS_REQ__STRUCT_HPP_
