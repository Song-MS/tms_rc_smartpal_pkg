// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/TmsdbPlanning.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDB_PLANNING__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDB_PLANNING__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__TmsdbPlanning_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__TmsdbPlanning_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsdbPlanning_Request_
{
  using Type = TmsdbPlanning_Request_<ContainerAllocator>;

  explicit TmsdbPlanning_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robotid = 0ul;
      this->objectid = 0ul;
    }
  }

  explicit TmsdbPlanning_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robotid = 0ul;
      this->objectid = 0ul;
    }
  }

  // field types and members
  using _robotid_type =
    uint32_t;
  _robotid_type robotid;
  using _objectid_type =
    uint32_t;
  _objectid_type objectid;

  // setters for named parameter idiom
  Type & set__robotid(
    const uint32_t & _arg)
  {
    this->robotid = _arg;
    return *this;
  }
  Type & set__objectid(
    const uint32_t & _arg)
  {
    this->objectid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__TmsdbPlanning_Request
    std::shared_ptr<tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__TmsdbPlanning_Request
    std::shared_ptr<tms_msg_db::srv::TmsdbPlanning_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsdbPlanning_Request_ & other) const
  {
    if (this->robotid != other.robotid) {
      return false;
    }
    if (this->objectid != other.objectid) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsdbPlanning_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsdbPlanning_Request_

// alias to use template instance with default allocator
using TmsdbPlanning_Request =
  tms_msg_db::srv::TmsdbPlanning_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__TmsdbPlanning_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__TmsdbPlanning_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsdbPlanning_Response_
{
  using Type = TmsdbPlanning_Response_<ContainerAllocator>;

  explicit TmsdbPlanning_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_x = 0.0f;
      this->robot_y = 0.0f;
      this->robot_z = 0.0f;
      this->robot_th = 0.0f;
      this->wagon_x = 0.0f;
      this->wagon_y = 0.0f;
      this->wagon_z = 0.0f;
      this->wagon_th = 0.0f;
      this->object_x = 0.0f;
      this->object_y = 0.0f;
      this->object_z = 0.0f;
      this->object_th = 0.0f;
    }
  }

  explicit TmsdbPlanning_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_x = 0.0f;
      this->robot_y = 0.0f;
      this->robot_z = 0.0f;
      this->robot_th = 0.0f;
      this->wagon_x = 0.0f;
      this->wagon_y = 0.0f;
      this->wagon_z = 0.0f;
      this->wagon_th = 0.0f;
      this->object_x = 0.0f;
      this->object_y = 0.0f;
      this->object_z = 0.0f;
      this->object_th = 0.0f;
    }
  }

  // field types and members
  using _robot_x_type =
    float;
  _robot_x_type robot_x;
  using _robot_y_type =
    float;
  _robot_y_type robot_y;
  using _robot_z_type =
    float;
  _robot_z_type robot_z;
  using _robot_th_type =
    float;
  _robot_th_type robot_th;
  using _wagon_x_type =
    float;
  _wagon_x_type wagon_x;
  using _wagon_y_type =
    float;
  _wagon_y_type wagon_y;
  using _wagon_z_type =
    float;
  _wagon_z_type wagon_z;
  using _wagon_th_type =
    float;
  _wagon_th_type wagon_th;
  using _object_x_type =
    float;
  _object_x_type object_x;
  using _object_y_type =
    float;
  _object_y_type object_y;
  using _object_z_type =
    float;
  _object_z_type object_z;
  using _object_th_type =
    float;
  _object_th_type object_th;

  // setters for named parameter idiom
  Type & set__robot_x(
    const float & _arg)
  {
    this->robot_x = _arg;
    return *this;
  }
  Type & set__robot_y(
    const float & _arg)
  {
    this->robot_y = _arg;
    return *this;
  }
  Type & set__robot_z(
    const float & _arg)
  {
    this->robot_z = _arg;
    return *this;
  }
  Type & set__robot_th(
    const float & _arg)
  {
    this->robot_th = _arg;
    return *this;
  }
  Type & set__wagon_x(
    const float & _arg)
  {
    this->wagon_x = _arg;
    return *this;
  }
  Type & set__wagon_y(
    const float & _arg)
  {
    this->wagon_y = _arg;
    return *this;
  }
  Type & set__wagon_z(
    const float & _arg)
  {
    this->wagon_z = _arg;
    return *this;
  }
  Type & set__wagon_th(
    const float & _arg)
  {
    this->wagon_th = _arg;
    return *this;
  }
  Type & set__object_x(
    const float & _arg)
  {
    this->object_x = _arg;
    return *this;
  }
  Type & set__object_y(
    const float & _arg)
  {
    this->object_y = _arg;
    return *this;
  }
  Type & set__object_z(
    const float & _arg)
  {
    this->object_z = _arg;
    return *this;
  }
  Type & set__object_th(
    const float & _arg)
  {
    this->object_th = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__TmsdbPlanning_Response
    std::shared_ptr<tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__TmsdbPlanning_Response
    std::shared_ptr<tms_msg_db::srv::TmsdbPlanning_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsdbPlanning_Response_ & other) const
  {
    if (this->robot_x != other.robot_x) {
      return false;
    }
    if (this->robot_y != other.robot_y) {
      return false;
    }
    if (this->robot_z != other.robot_z) {
      return false;
    }
    if (this->robot_th != other.robot_th) {
      return false;
    }
    if (this->wagon_x != other.wagon_x) {
      return false;
    }
    if (this->wagon_y != other.wagon_y) {
      return false;
    }
    if (this->wagon_z != other.wagon_z) {
      return false;
    }
    if (this->wagon_th != other.wagon_th) {
      return false;
    }
    if (this->object_x != other.object_x) {
      return false;
    }
    if (this->object_y != other.object_y) {
      return false;
    }
    if (this->object_z != other.object_z) {
      return false;
    }
    if (this->object_th != other.object_th) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsdbPlanning_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsdbPlanning_Response_

// alias to use template instance with default allocator
using TmsdbPlanning_Response =
  tms_msg_db::srv::TmsdbPlanning_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct TmsdbPlanning
{
  using Request = tms_msg_db::srv::TmsdbPlanning_Request;
  using Response = tms_msg_db::srv::TmsdbPlanning_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDB_PLANNING__STRUCT_HPP_
