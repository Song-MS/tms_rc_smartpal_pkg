// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetunknownobject.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETUNKNOWNOBJECT__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETUNKNOWNOBJECT__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetunknownobject_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetunknownobject_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetunknownobject_Request_
{
  using Type = Tmsdbgetunknownobject_Request_<ContainerAllocator>;

  explicit Tmsdbgetunknownobject_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->unknown_object_id = 0ul;
    }
  }

  explicit Tmsdbgetunknownobject_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->unknown_object_id = 0ul;
    }
  }

  // field types and members
  using _unknown_object_id_type =
    uint32_t;
  _unknown_object_id_type unknown_object_id;

  // setters for named parameter idiom
  Type & set__unknown_object_id(
    const uint32_t & _arg)
  {
    this->unknown_object_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetunknownobject_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetunknownobject_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetunknownobject_Request_ & other) const
  {
    if (this->unknown_object_id != other.unknown_object_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetunknownobject_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetunknownobject_Request_

// alias to use template instance with default allocator
using Tmsdbgetunknownobject_Request =
  tms_msg_db::srv::Tmsdbgetunknownobject_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetunknownobject_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetunknownobject_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetunknownobject_Response_
{
  using Type = Tmsdbgetunknownobject_Response_<ContainerAllocator>;

  explicit Tmsdbgetunknownobject_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->unknown_object_x = 0.0f;
      this->unknown_object_y = 0.0f;
      this->unknown_object_z = 0.0f;
    }
  }

  explicit Tmsdbgetunknownobject_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->unknown_object_x = 0.0f;
      this->unknown_object_y = 0.0f;
      this->unknown_object_z = 0.0f;
    }
  }

  // field types and members
  using _unknown_object_x_type =
    float;
  _unknown_object_x_type unknown_object_x;
  using _unknown_object_y_type =
    float;
  _unknown_object_y_type unknown_object_y;
  using _unknown_object_z_type =
    float;
  _unknown_object_z_type unknown_object_z;

  // setters for named parameter idiom
  Type & set__unknown_object_x(
    const float & _arg)
  {
    this->unknown_object_x = _arg;
    return *this;
  }
  Type & set__unknown_object_y(
    const float & _arg)
  {
    this->unknown_object_y = _arg;
    return *this;
  }
  Type & set__unknown_object_z(
    const float & _arg)
  {
    this->unknown_object_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetunknownobject_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetunknownobject_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetunknownobject_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetunknownobject_Response_ & other) const
  {
    if (this->unknown_object_x != other.unknown_object_x) {
      return false;
    }
    if (this->unknown_object_y != other.unknown_object_y) {
      return false;
    }
    if (this->unknown_object_z != other.unknown_object_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetunknownobject_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetunknownobject_Response_

// alias to use template instance with default allocator
using Tmsdbgetunknownobject_Response =
  tms_msg_db::srv::Tmsdbgetunknownobject_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbgetunknownobject
{
  using Request = tms_msg_db::srv::Tmsdbgetunknownobject_Request;
  using Response = tms_msg_db::srv::Tmsdbgetunknownobject_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBGETUNKNOWNOBJECT__STRUCT_HPP_
