// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/TmsdbGetData.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDB_GET_DATA__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDB_GET_DATA__STRUCT_HPP_

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
// Member 'tmsdb'
#include "tms_msg_db/msg/tmsdb__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tms_msg_db__srv__TmsdbGetData_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__TmsdbGetData_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsdbGetData_Request_
{
  using Type = TmsdbGetData_Request_<ContainerAllocator>;

  explicit TmsdbGetData_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : tmsdb(_init)
  {
    (void)_init;
  }

  explicit TmsdbGetData_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : tmsdb(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _tmsdb_type =
    tms_msg_db::msg::Tmsdb_<ContainerAllocator>;
  _tmsdb_type tmsdb;

  // setters for named parameter idiom
  Type & set__tmsdb(
    const tms_msg_db::msg::Tmsdb_<ContainerAllocator> & _arg)
  {
    this->tmsdb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__TmsdbGetData_Request
    std::shared_ptr<tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__TmsdbGetData_Request
    std::shared_ptr<tms_msg_db::srv::TmsdbGetData_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsdbGetData_Request_ & other) const
  {
    if (this->tmsdb != other.tmsdb) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsdbGetData_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsdbGetData_Request_

// alias to use template instance with default allocator
using TmsdbGetData_Request =
  tms_msg_db::srv::TmsdbGetData_Request_<std::allocator<void>>;

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

// Include directives for member types
// Member 'tmsdb'
// already included above
// #include "tms_msg_db/msg/tmsdb__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tms_msg_db__srv__TmsdbGetData_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__TmsdbGetData_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsdbGetData_Response_
{
  using Type = TmsdbGetData_Response_<ContainerAllocator>;

  explicit TmsdbGetData_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TmsdbGetData_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _tmsdb_type =
    std::vector<tms_msg_db::msg::Tmsdb_<ContainerAllocator>, typename ContainerAllocator::template rebind<tms_msg_db::msg::Tmsdb_<ContainerAllocator>>::other>;
  _tmsdb_type tmsdb;

  // setters for named parameter idiom
  Type & set__tmsdb(
    const std::vector<tms_msg_db::msg::Tmsdb_<ContainerAllocator>, typename ContainerAllocator::template rebind<tms_msg_db::msg::Tmsdb_<ContainerAllocator>>::other> & _arg)
  {
    this->tmsdb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__TmsdbGetData_Response
    std::shared_ptr<tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__TmsdbGetData_Response
    std::shared_ptr<tms_msg_db::srv::TmsdbGetData_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsdbGetData_Response_ & other) const
  {
    if (this->tmsdb != other.tmsdb) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsdbGetData_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsdbGetData_Response_

// alias to use template instance with default allocator
using TmsdbGetData_Response =
  tms_msg_db::srv::TmsdbGetData_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct TmsdbGetData
{
  using Request = tms_msg_db::srv::TmsdbGetData_Request;
  using Response = tms_msg_db::srv::TmsdbGetData_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDB_GET_DATA__STRUCT_HPP_
