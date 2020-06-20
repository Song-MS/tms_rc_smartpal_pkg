// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbmissingobjectschecker.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBMISSINGOBJECTSCHECKER__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBMISSINGOBJECTSCHECKER__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbmissingobjectschecker_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbmissingobjectschecker_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbmissingobjectschecker_Request_
{
  using Type = Tmsdbmissingobjectschecker_Request_<ContainerAllocator>;

  explicit Tmsdbmissingobjectschecker_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tmsdbmissingobjectschecker_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objects_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _objects_id_type objects_id;

  // setters for named parameter idiom
  Type & set__objects_id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->objects_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbmissingobjectschecker_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbmissingobjectschecker_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbmissingobjectschecker_Request_ & other) const
  {
    if (this->objects_id != other.objects_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbmissingobjectschecker_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbmissingobjectschecker_Request_

// alias to use template instance with default allocator
using Tmsdbmissingobjectschecker_Request =
  tms_msg_db::srv::Tmsdbmissingobjectschecker_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbmissingobjectschecker_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbmissingobjectschecker_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbmissingobjectschecker_Response_
{
  using Type = Tmsdbmissingobjectschecker_Response_<ContainerAllocator>;

  explicit Tmsdbmissingobjectschecker_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tmsdbmissingobjectschecker_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _missing_objects_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _missing_objects_id_type missing_objects_id;
  using _missing_objects_time_type =
    std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _missing_objects_time_type missing_objects_time;

  // setters for named parameter idiom
  Type & set__missing_objects_id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->missing_objects_id = _arg;
    return *this;
  }
  Type & set__missing_objects_time(
    const std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->missing_objects_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbmissingobjectschecker_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbmissingobjectschecker_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbmissingobjectschecker_Response_ & other) const
  {
    if (this->missing_objects_id != other.missing_objects_id) {
      return false;
    }
    if (this->missing_objects_time != other.missing_objects_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbmissingobjectschecker_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbmissingobjectschecker_Response_

// alias to use template instance with default allocator
using Tmsdbmissingobjectschecker_Response =
  tms_msg_db::srv::Tmsdbmissingobjectschecker_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbmissingobjectschecker
{
  using Request = tms_msg_db::srv::Tmsdbmissingobjectschecker_Request;
  using Response = tms_msg_db::srv::Tmsdbmissingobjectschecker_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBMISSINGOBJECTSCHECKER__STRUCT_HPP_
