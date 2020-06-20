// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetpersonbehaviorinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETPERSONBEHAVIORINFO__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETPERSONBEHAVIORINFO__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetpersonbehaviorinfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetpersonbehaviorinfo_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetpersonbehaviorinfo_Request_
{
  using Type = Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator>;

  explicit Tmsdbgetpersonbehaviorinfo_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
    }
  }

  explicit Tmsdbgetpersonbehaviorinfo_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
    }
  }

  // field types and members
  using _rostime_type =
    uint64_t;
  _rostime_type rostime;

  // setters for named parameter idiom
  Type & set__rostime(
    const uint64_t & _arg)
  {
    this->rostime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetpersonbehaviorinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetpersonbehaviorinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetpersonbehaviorinfo_Request_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetpersonbehaviorinfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetpersonbehaviorinfo_Request_

// alias to use template instance with default allocator
using Tmsdbgetpersonbehaviorinfo_Request =
  tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetpersonbehaviorinfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetpersonbehaviorinfo_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetpersonbehaviorinfo_Response_
{
  using Type = Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator>;

  explicit Tmsdbgetpersonbehaviorinfo_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->behavior = 0ul;
    }
  }

  explicit Tmsdbgetpersonbehaviorinfo_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->behavior = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _behavior_type =
    uint32_t;
  _behavior_type behavior;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__behavior(
    const uint32_t & _arg)
  {
    this->behavior = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetpersonbehaviorinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetpersonbehaviorinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetpersonbehaviorinfo_Response_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->behavior != other.behavior) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetpersonbehaviorinfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetpersonbehaviorinfo_Response_

// alias to use template instance with default allocator
using Tmsdbgetpersonbehaviorinfo_Response =
  tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbgetpersonbehaviorinfo
{
  using Request = tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Request;
  using Response = tms_msg_db::srv::Tmsdbgetpersonbehaviorinfo_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBGETPERSONBEHAVIORINFO__STRUCT_HPP_
