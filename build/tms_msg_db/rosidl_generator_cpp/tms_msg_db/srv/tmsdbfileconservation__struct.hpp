// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbfileconservation.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBFILECONSERVATION__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBFILECONSERVATION__STRUCT_HPP_

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
// Member 'cloud'
#include "sensor_msgs/msg/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tms_msg_db__srv__Tmsdbfileconservation_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbfileconservation_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbfileconservation_Request_
{
  using Type = Tmsdbfileconservation_Request_<ContainerAllocator>;

  explicit Tmsdbfileconservation_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : cloud(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->id = 0ul;
      this->filename = "";
      this->get_x = 0.0f;
      this->get_y = 0.0f;
      this->get_z = 0.0f;
      this->get_theta = 0.0f;
      this->get_place = 0ul;
    }
  }

  explicit Tmsdbfileconservation_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : filename(_alloc),
    cloud(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->rostime = 0ull;
      this->id = 0ul;
      this->filename = "";
      this->get_x = 0.0f;
      this->get_y = 0.0f;
      this->get_z = 0.0f;
      this->get_theta = 0.0f;
      this->get_place = 0ul;
    }
  }

  // field types and members
  using _rostime_type =
    uint64_t;
  _rostime_type rostime;
  using _id_type =
    uint32_t;
  _id_type id;
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _filename_type filename;
  using _get_x_type =
    float;
  _get_x_type get_x;
  using _get_y_type =
    float;
  _get_y_type get_y;
  using _get_z_type =
    float;
  _get_z_type get_z;
  using _get_theta_type =
    float;
  _get_theta_type get_theta;
  using _get_place_type =
    uint32_t;
  _get_place_type get_place;
  using _cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_type cloud;

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
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->filename = _arg;
    return *this;
  }
  Type & set__get_x(
    const float & _arg)
  {
    this->get_x = _arg;
    return *this;
  }
  Type & set__get_y(
    const float & _arg)
  {
    this->get_y = _arg;
    return *this;
  }
  Type & set__get_z(
    const float & _arg)
  {
    this->get_z = _arg;
    return *this;
  }
  Type & set__get_theta(
    const float & _arg)
  {
    this->get_theta = _arg;
    return *this;
  }
  Type & set__get_place(
    const uint32_t & _arg)
  {
    this->get_place = _arg;
    return *this;
  }
  Type & set__cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbfileconservation_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbfileconservation_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbfileconservation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbfileconservation_Request_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->filename != other.filename) {
      return false;
    }
    if (this->get_x != other.get_x) {
      return false;
    }
    if (this->get_y != other.get_y) {
      return false;
    }
    if (this->get_z != other.get_z) {
      return false;
    }
    if (this->get_theta != other.get_theta) {
      return false;
    }
    if (this->get_place != other.get_place) {
      return false;
    }
    if (this->cloud != other.cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbfileconservation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbfileconservation_Request_

// alias to use template instance with default allocator
using Tmsdbfileconservation_Request =
  tms_msg_db::srv::Tmsdbfileconservation_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbfileconservation_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbfileconservation_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbfileconservation_Response_
{
  using Type = Tmsdbfileconservation_Response_<ContainerAllocator>;

  explicit Tmsdbfileconservation_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ul;
      this->message = "";
    }
  }

  explicit Tmsdbfileconservation_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
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
    tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbfileconservation_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbfileconservation_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbfileconservation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbfileconservation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbfileconservation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbfileconservation_Response_

// alias to use template instance with default allocator
using Tmsdbfileconservation_Response =
  tms_msg_db::srv::Tmsdbfileconservation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbfileconservation
{
  using Request = tms_msg_db::srv::Tmsdbfileconservation_Request;
  using Response = tms_msg_db::srv::Tmsdbfileconservation_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBFILECONSERVATION__STRUCT_HPP_
