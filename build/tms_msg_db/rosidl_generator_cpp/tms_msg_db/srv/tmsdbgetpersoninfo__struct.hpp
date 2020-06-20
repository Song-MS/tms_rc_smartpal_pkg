// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetpersoninfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetpersoninfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetpersoninfo_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetpersoninfo_Request_
{
  using Type = Tmsdbgetpersoninfo_Request_<ContainerAllocator>;

  explicit Tmsdbgetpersoninfo_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tmsdbgetpersoninfo_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _rostime_type =
    std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _rostime_type rostime;
  using _id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _id_type id;
  using _x_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _x_type x;
  using _y_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _y_type y;
  using _z_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _z_type z;
  using _theta_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _theta_type theta;
  using _state_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _state_type state;
  using _place_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _place_type place;

  // setters for named parameter idiom
  Type & set__rostime(
    const std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->rostime = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__theta(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__place(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->place = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetpersoninfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetpersoninfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetpersoninfo_Request_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->place != other.place) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetpersoninfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetpersoninfo_Request_

// alias to use template instance with default allocator
using Tmsdbgetpersoninfo_Request =
  tms_msg_db::srv::Tmsdbgetpersoninfo_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetpersoninfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetpersoninfo_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetpersoninfo_Response_
{
  using Type = Tmsdbgetpersoninfo_Response_<ContainerAllocator>;

  explicit Tmsdbgetpersoninfo_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tmsdbgetpersoninfo_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _rostime_type =
    std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _rostime_type rostime;
  using _id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _id_type id;
  using _x_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _x_type x;
  using _y_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _y_type y;
  using _z_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _z_type z;
  using _theta_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _theta_type theta;
  using _state_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _state_type state;
  using _place_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _place_type place;

  // setters for named parameter idiom
  Type & set__rostime(
    const std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->rostime = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__theta(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__place(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->place = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetpersoninfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetpersoninfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetpersoninfo_Response_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->place != other.place) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetpersoninfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetpersoninfo_Response_

// alias to use template instance with default allocator
using Tmsdbgetpersoninfo_Response =
  tms_msg_db::srv::Tmsdbgetpersoninfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbgetpersoninfo
{
  using Request = tms_msg_db::srv::Tmsdbgetpersoninfo_Request;
  using Response = tms_msg_db::srv::Tmsdbgetpersoninfo_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBGETPERSONINFO__STRUCT_HPP_
