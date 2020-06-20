// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/TmsdbObjectsdata.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDB_OBJECTSDATA__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDB_OBJECTSDATA__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__TmsdbObjectsdata_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__TmsdbObjectsdata_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsdbObjectsdata_Request_
{
  using Type = TmsdbObjectsdata_Request_<ContainerAllocator>;

  explicit TmsdbObjectsdata_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->id = 0ul;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->theta = 0.0f;
      this->weight = 0.0f;
      this->state = 0ul;
      this->place = 0ul;
    }
  }

  explicit TmsdbObjectsdata_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->id = 0ul;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->theta = 0.0f;
      this->weight = 0.0f;
      this->state = 0ul;
      this->place = 0ul;
    }
  }

  // field types and members
  using _rostime_type =
    uint64_t;
  _rostime_type rostime;
  using _id_type =
    uint32_t;
  _id_type id;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _theta_type =
    float;
  _theta_type theta;
  using _weight_type =
    float;
  _weight_type weight;
  using _state_type =
    uint32_t;
  _state_type state;
  using _place_type =
    uint32_t;
  _place_type place;

  // setters for named parameter idiom
  Type & set__rostime(
    const uint64_t & _arg)
  {
    this->rostime = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__theta(
    const float & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__weight(
    const float & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__state(
    const uint32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__place(
    const uint32_t & _arg)
  {
    this->place = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__TmsdbObjectsdata_Request
    std::shared_ptr<tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__TmsdbObjectsdata_Request
    std::shared_ptr<tms_msg_db::srv::TmsdbObjectsdata_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsdbObjectsdata_Request_ & other) const
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
    if (this->weight != other.weight) {
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
  bool operator!=(const TmsdbObjectsdata_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsdbObjectsdata_Request_

// alias to use template instance with default allocator
using TmsdbObjectsdata_Request =
  tms_msg_db::srv::TmsdbObjectsdata_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__TmsdbObjectsdata_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__TmsdbObjectsdata_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsdbObjectsdata_Response_
{
  using Type = TmsdbObjectsdata_Response_<ContainerAllocator>;

  explicit TmsdbObjectsdata_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ul;
      this->message = "";
    }
  }

  explicit TmsdbObjectsdata_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    uint32_t;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const uint32_t & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__TmsdbObjectsdata_Response
    std::shared_ptr<tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__TmsdbObjectsdata_Response
    std::shared_ptr<tms_msg_db::srv::TmsdbObjectsdata_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsdbObjectsdata_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsdbObjectsdata_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsdbObjectsdata_Response_

// alias to use template instance with default allocator
using TmsdbObjectsdata_Response =
  tms_msg_db::srv::TmsdbObjectsdata_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct TmsdbObjectsdata
{
  using Request = tms_msg_db::srv::TmsdbObjectsdata_Request;
  using Response = tms_msg_db::srv::TmsdbObjectsdata_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDB_OBJECTSDATA__STRUCT_HPP_
