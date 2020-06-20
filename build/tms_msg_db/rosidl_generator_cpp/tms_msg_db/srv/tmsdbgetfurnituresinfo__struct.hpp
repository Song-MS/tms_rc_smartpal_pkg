// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetfurnituresinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETFURNITURESINFO__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETFURNITURESINFO__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetfurnituresinfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetfurnituresinfo_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetfurnituresinfo_Request_
{
  using Type = Tmsdbgetfurnituresinfo_Request_<ContainerAllocator>;

  explicit Tmsdbgetfurnituresinfo_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->furnitures_id = 0ul;
    }
  }

  explicit Tmsdbgetfurnituresinfo_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->furnitures_id = 0ul;
    }
  }

  // field types and members
  using _furnitures_id_type =
    uint32_t;
  _furnitures_id_type furnitures_id;

  // setters for named parameter idiom
  Type & set__furnitures_id(
    const uint32_t & _arg)
  {
    this->furnitures_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetfurnituresinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetfurnituresinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetfurnituresinfo_Request_ & other) const
  {
    if (this->furnitures_id != other.furnitures_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetfurnituresinfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetfurnituresinfo_Request_

// alias to use template instance with default allocator
using Tmsdbgetfurnituresinfo_Request =
  tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetfurnituresinfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetfurnituresinfo_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetfurnituresinfo_Response_
{
  using Type = Tmsdbgetfurnituresinfo_Response_<ContainerAllocator>;

  explicit Tmsdbgetfurnituresinfo_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->furniture_x = 0.0f;
      this->furniture_y = 0.0f;
      this->furniture_z = 0.0f;
    }
  }

  explicit Tmsdbgetfurnituresinfo_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->furniture_x = 0.0f;
      this->furniture_y = 0.0f;
      this->furniture_z = 0.0f;
    }
  }

  // field types and members
  using _furniture_x_type =
    float;
  _furniture_x_type furniture_x;
  using _furniture_y_type =
    float;
  _furniture_y_type furniture_y;
  using _furniture_z_type =
    float;
  _furniture_z_type furniture_z;

  // setters for named parameter idiom
  Type & set__furniture_x(
    const float & _arg)
  {
    this->furniture_x = _arg;
    return *this;
  }
  Type & set__furniture_y(
    const float & _arg)
  {
    this->furniture_y = _arg;
    return *this;
  }
  Type & set__furniture_z(
    const float & _arg)
  {
    this->furniture_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetfurnituresinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetfurnituresinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetfurnituresinfo_Response_ & other) const
  {
    if (this->furniture_x != other.furniture_x) {
      return false;
    }
    if (this->furniture_y != other.furniture_y) {
      return false;
    }
    if (this->furniture_z != other.furniture_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetfurnituresinfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetfurnituresinfo_Response_

// alias to use template instance with default allocator
using Tmsdbgetfurnituresinfo_Response =
  tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbgetfurnituresinfo
{
  using Request = tms_msg_db::srv::Tmsdbgetfurnituresinfo_Request;
  using Response = tms_msg_db::srv::Tmsdbgetfurnituresinfo_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBGETFURNITURESINFO__STRUCT_HPP_
