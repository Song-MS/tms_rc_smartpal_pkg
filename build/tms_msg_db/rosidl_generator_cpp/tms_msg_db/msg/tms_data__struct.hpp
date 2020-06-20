// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:msg/TmsData.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMS_DATA__STRUCT_HPP_
#define TMS_MSG_DB__MSG__TMS_DATA__STRUCT_HPP_

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
// Member 'pose'
#include "geometry_msgs/msg/pose__struct.hpp"
// Member 'offset'
#include "geometry_msgs/msg/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tms_msg_db__msg__TmsData __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__msg__TmsData __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TmsData_
{
  using Type = TmsData_<ContainerAllocator>;

  explicit TmsData_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : pose(_init),
    offset(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = "";
      this->type = "";
      this->name = "";
      this->sensor = "";
      this->place = "";
      this->state = 0;
    }
  }

  explicit TmsData_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : time(_alloc),
    type(_alloc),
    name(_alloc),
    pose(_alloc, _init),
    offset(_alloc, _init),
    sensor(_alloc),
    place(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = "";
      this->type = "";
      this->name = "";
      this->sensor = "";
      this->place = "";
      this->state = 0;
    }
  }

  // field types and members
  using _time_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _time_type time;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_type type;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _offset_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _offset_type offset;
  using _sensor_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _sensor_type sensor;
  using _place_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _place_type place;
  using _state_type =
    uint8_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__time(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__offset(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__sensor(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->sensor = _arg;
    return *this;
  }
  Type & set__place(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->place = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::msg::TmsData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::msg::TmsData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::msg::TmsData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::msg::TmsData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::msg::TmsData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::msg::TmsData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::msg::TmsData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::msg::TmsData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::msg::TmsData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::msg::TmsData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__msg__TmsData
    std::shared_ptr<tms_msg_db::msg::TmsData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__msg__TmsData
    std::shared_ptr<tms_msg_db::msg::TmsData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsData_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->sensor != other.sensor) {
      return false;
    }
    if (this->place != other.place) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsData_

// alias to use template instance with default allocator
using TmsData =
  tms_msg_db::msg::TmsData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__MSG__TMS_DATA__STRUCT_HPP_
