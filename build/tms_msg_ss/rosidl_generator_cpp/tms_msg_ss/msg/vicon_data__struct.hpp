// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_ss:msg/ViconData.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_SS__MSG__VICON_DATA__STRUCT_HPP_
#define TMS_MSG_SS__MSG__VICON_DATA__STRUCT_HPP_

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
// Member 'header'
#include "std_msgs/msg/header__struct.hpp"
// Member 'translation'
#include "geometry_msgs/msg/point__struct.hpp"
// Member 'rotation'
#include "geometry_msgs/msg/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__tms_msg_ss__msg__ViconData __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ss__msg__ViconData __declspec(deprecated)
#endif

namespace tms_msg_ss
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ViconData_
{
  using Type = ViconData_<ContainerAllocator>;

  explicit ViconData_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    translation(_init),
    rotation(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->measuredtime = "";
      this->subjectname = "";
      this->segmentname = "";
      std::fill<typename std::array<double, 3>::iterator, double>(this->eulerxyz.begin(), this->eulerxyz.end(), 0.0);
    }
  }

  explicit ViconData_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    measuredtime(_alloc),
    subjectname(_alloc),
    segmentname(_alloc),
    translation(_alloc, _init),
    rotation(_alloc, _init),
    eulerxyz(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->measuredtime = "";
      this->subjectname = "";
      this->segmentname = "";
      std::fill<typename std::array<double, 3>::iterator, double>(this->eulerxyz.begin(), this->eulerxyz.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _measuredtime_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _measuredtime_type measuredtime;
  using _subjectname_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _subjectname_type subjectname;
  using _segmentname_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _segmentname_type segmentname;
  using _translation_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _translation_type translation;
  using _rotation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _rotation_type rotation;
  using _eulerxyz_type =
    std::array<double, 3>;
  _eulerxyz_type eulerxyz;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__measuredtime(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->measuredtime = _arg;
    return *this;
  }
  Type & set__subjectname(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->subjectname = _arg;
    return *this;
  }
  Type & set__segmentname(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->segmentname = _arg;
    return *this;
  }
  Type & set__translation(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->translation = _arg;
    return *this;
  }
  Type & set__rotation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->rotation = _arg;
    return *this;
  }
  Type & set__eulerxyz(
    const std::array<double, 3> & _arg)
  {
    this->eulerxyz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ss::msg::ViconData_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ss::msg::ViconData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ss::msg::ViconData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ss::msg::ViconData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ss::msg::ViconData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ss::msg::ViconData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ss::msg::ViconData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ss::msg::ViconData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ss::msg::ViconData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ss::msg::ViconData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ss__msg__ViconData
    std::shared_ptr<tms_msg_ss::msg::ViconData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ss__msg__ViconData
    std::shared_ptr<tms_msg_ss::msg::ViconData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ViconData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->measuredtime != other.measuredtime) {
      return false;
    }
    if (this->subjectname != other.subjectname) {
      return false;
    }
    if (this->segmentname != other.segmentname) {
      return false;
    }
    if (this->translation != other.translation) {
      return false;
    }
    if (this->rotation != other.rotation) {
      return false;
    }
    if (this->eulerxyz != other.eulerxyz) {
      return false;
    }
    return true;
  }
  bool operator!=(const ViconData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ViconData_

// alias to use template instance with default allocator
using ViconData =
  tms_msg_ss::msg::ViconData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tms_msg_ss

#endif  // TMS_MSG_SS__MSG__VICON_DATA__STRUCT_HPP_
