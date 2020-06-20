// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetrobotsinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETROBOTSINFO__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETROBOTSINFO__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotsinfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotsinfo_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetrobotsinfo_Request_
{
  using Type = Tmsdbgetrobotsinfo_Request_<ContainerAllocator>;

  explicit Tmsdbgetrobotsinfo_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robots_id = 0ul;
    }
  }

  explicit Tmsdbgetrobotsinfo_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robots_id = 0ul;
    }
  }

  // field types and members
  using _robots_id_type =
    uint32_t;
  _robots_id_type robots_id;

  // setters for named parameter idiom
  Type & set__robots_id(
    const uint32_t & _arg)
  {
    this->robots_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotsinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotsinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetrobotsinfo_Request_ & other) const
  {
    if (this->robots_id != other.robots_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetrobotsinfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetrobotsinfo_Request_

// alias to use template instance with default allocator
using Tmsdbgetrobotsinfo_Request =
  tms_msg_db::srv::Tmsdbgetrobotsinfo_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotsinfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotsinfo_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetrobotsinfo_Response_
{
  using Type = Tmsdbgetrobotsinfo_Response_<ContainerAllocator>;

  explicit Tmsdbgetrobotsinfo_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->robots_x = 0.0f;
      this->robots_y = 0.0f;
      this->robots_z = 0.0f;
      this->robots_theta = 0.0f;
      this->robots_state = 0ul;
      this->robots_place = 0ul;
    }
  }

  explicit Tmsdbgetrobotsinfo_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->robots_x = 0.0f;
      this->robots_y = 0.0f;
      this->robots_z = 0.0f;
      this->robots_theta = 0.0f;
      this->robots_state = 0ul;
      this->robots_place = 0ul;
    }
  }

  // field types and members
  using _rostime_type =
    uint64_t;
  _rostime_type rostime;
  using _robots_x_type =
    float;
  _robots_x_type robots_x;
  using _robots_y_type =
    float;
  _robots_y_type robots_y;
  using _robots_z_type =
    float;
  _robots_z_type robots_z;
  using _robots_theta_type =
    float;
  _robots_theta_type robots_theta;
  using _robots_state_type =
    uint32_t;
  _robots_state_type robots_state;
  using _robots_place_type =
    uint32_t;
  _robots_place_type robots_place;

  // setters for named parameter idiom
  Type & set__rostime(
    const uint64_t & _arg)
  {
    this->rostime = _arg;
    return *this;
  }
  Type & set__robots_x(
    const float & _arg)
  {
    this->robots_x = _arg;
    return *this;
  }
  Type & set__robots_y(
    const float & _arg)
  {
    this->robots_y = _arg;
    return *this;
  }
  Type & set__robots_z(
    const float & _arg)
  {
    this->robots_z = _arg;
    return *this;
  }
  Type & set__robots_theta(
    const float & _arg)
  {
    this->robots_theta = _arg;
    return *this;
  }
  Type & set__robots_state(
    const uint32_t & _arg)
  {
    this->robots_state = _arg;
    return *this;
  }
  Type & set__robots_place(
    const uint32_t & _arg)
  {
    this->robots_place = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotsinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotsinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetrobotsinfo_Response_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    if (this->robots_x != other.robots_x) {
      return false;
    }
    if (this->robots_y != other.robots_y) {
      return false;
    }
    if (this->robots_z != other.robots_z) {
      return false;
    }
    if (this->robots_theta != other.robots_theta) {
      return false;
    }
    if (this->robots_state != other.robots_state) {
      return false;
    }
    if (this->robots_place != other.robots_place) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetrobotsinfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetrobotsinfo_Response_

// alias to use template instance with default allocator
using Tmsdbgetrobotsinfo_Response =
  tms_msg_db::srv::Tmsdbgetrobotsinfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbgetrobotsinfo
{
  using Request = tms_msg_db::srv::Tmsdbgetrobotsinfo_Request;
  using Response = tms_msg_db::srv::Tmsdbgetrobotsinfo_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBGETROBOTSINFO__STRUCT_HPP_
