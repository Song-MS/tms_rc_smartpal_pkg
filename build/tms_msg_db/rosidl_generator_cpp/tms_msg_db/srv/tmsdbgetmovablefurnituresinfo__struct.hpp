// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetmovablefurnituresinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETMOVABLEFURNITURESINFO__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETMOVABLEFURNITURESINFO__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetmovablefurnituresinfo_Request_
{
  using Type = Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator>;

  explicit Tmsdbgetmovablefurnituresinfo_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->furnitures_id = 0ul;
    }
  }

  explicit Tmsdbgetmovablefurnituresinfo_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetmovablefurnituresinfo_Request_ & other) const
  {
    if (this->furnitures_id != other.furnitures_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetmovablefurnituresinfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetmovablefurnituresinfo_Request_

// alias to use template instance with default allocator
using Tmsdbgetmovablefurnituresinfo_Request =
  tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetmovablefurnituresinfo_Response_
{
  using Type = Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator>;

  explicit Tmsdbgetmovablefurnituresinfo_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->furniture_x = 0.0f;
      this->furniture_y = 0.0f;
      this->furniture_z = 0.0f;
      this->furnitures_theta = 0.0f;
      this->furnitures_width = 0.0f;
      this->furnitures_depth = 0.0f;
      this->furnitures_height = 0.0f;
      this->furnitures_state = 0ul;
      this->furnitures_place = 0ul;
    }
  }

  explicit Tmsdbgetmovablefurnituresinfo_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->furniture_x = 0.0f;
      this->furniture_y = 0.0f;
      this->furniture_z = 0.0f;
      this->furnitures_theta = 0.0f;
      this->furnitures_width = 0.0f;
      this->furnitures_depth = 0.0f;
      this->furnitures_height = 0.0f;
      this->furnitures_state = 0ul;
      this->furnitures_place = 0ul;
    }
  }

  // field types and members
  using _rostime_type =
    uint64_t;
  _rostime_type rostime;
  using _furniture_x_type =
    float;
  _furniture_x_type furniture_x;
  using _furniture_y_type =
    float;
  _furniture_y_type furniture_y;
  using _furniture_z_type =
    float;
  _furniture_z_type furniture_z;
  using _furnitures_theta_type =
    float;
  _furnitures_theta_type furnitures_theta;
  using _furnitures_width_type =
    float;
  _furnitures_width_type furnitures_width;
  using _furnitures_depth_type =
    float;
  _furnitures_depth_type furnitures_depth;
  using _furnitures_height_type =
    float;
  _furnitures_height_type furnitures_height;
  using _furnitures_state_type =
    uint32_t;
  _furnitures_state_type furnitures_state;
  using _furnitures_place_type =
    uint32_t;
  _furnitures_place_type furnitures_place;

  // setters for named parameter idiom
  Type & set__rostime(
    const uint64_t & _arg)
  {
    this->rostime = _arg;
    return *this;
  }
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
  Type & set__furnitures_theta(
    const float & _arg)
  {
    this->furnitures_theta = _arg;
    return *this;
  }
  Type & set__furnitures_width(
    const float & _arg)
  {
    this->furnitures_width = _arg;
    return *this;
  }
  Type & set__furnitures_depth(
    const float & _arg)
  {
    this->furnitures_depth = _arg;
    return *this;
  }
  Type & set__furnitures_height(
    const float & _arg)
  {
    this->furnitures_height = _arg;
    return *this;
  }
  Type & set__furnitures_state(
    const uint32_t & _arg)
  {
    this->furnitures_state = _arg;
    return *this;
  }
  Type & set__furnitures_place(
    const uint32_t & _arg)
  {
    this->furnitures_place = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetmovablefurnituresinfo_Response_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    if (this->furniture_x != other.furniture_x) {
      return false;
    }
    if (this->furniture_y != other.furniture_y) {
      return false;
    }
    if (this->furniture_z != other.furniture_z) {
      return false;
    }
    if (this->furnitures_theta != other.furnitures_theta) {
      return false;
    }
    if (this->furnitures_width != other.furnitures_width) {
      return false;
    }
    if (this->furnitures_depth != other.furnitures_depth) {
      return false;
    }
    if (this->furnitures_height != other.furnitures_height) {
      return false;
    }
    if (this->furnitures_state != other.furnitures_state) {
      return false;
    }
    if (this->furnitures_place != other.furnitures_place) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetmovablefurnituresinfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetmovablefurnituresinfo_Response_

// alias to use template instance with default allocator
using Tmsdbgetmovablefurnituresinfo_Response =
  tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbgetmovablefurnituresinfo
{
  using Request = tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Request;
  using Response = tms_msg_db::srv::Tmsdbgetmovablefurnituresinfo_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBGETMOVABLEFURNITURESINFO__STRUCT_HPP_
