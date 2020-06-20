// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_recognition_msgs:msg/ObjectInformation.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__OBJECT_INFORMATION__STRUCT_HPP_
#define OBJECT_RECOGNITION_MSGS__MSG__OBJECT_INFORMATION__STRUCT_HPP_

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
// Member 'ground_truth_mesh'
#include "shape_msgs/msg/mesh__struct.hpp"
// Member 'ground_truth_point_cloud'
#include "sensor_msgs/msg/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__msg__ObjectInformation __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__msg__ObjectInformation __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectInformation_
{
  using Type = ObjectInformation_<ContainerAllocator>;

  explicit ObjectInformation_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : ground_truth_mesh(_init),
    ground_truth_point_cloud(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit ObjectInformation_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : name(_alloc),
    ground_truth_mesh(_alloc, _init),
    ground_truth_point_cloud(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _ground_truth_mesh_type =
    shape_msgs::msg::Mesh_<ContainerAllocator>;
  _ground_truth_mesh_type ground_truth_mesh;
  using _ground_truth_point_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _ground_truth_point_cloud_type ground_truth_point_cloud;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__ground_truth_mesh(
    const shape_msgs::msg::Mesh_<ContainerAllocator> & _arg)
  {
    this->ground_truth_mesh = _arg;
    return *this;
  }
  Type & set__ground_truth_point_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->ground_truth_point_cloud = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__msg__ObjectInformation
    std::shared_ptr<object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__msg__ObjectInformation
    std::shared_ptr<object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectInformation_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->ground_truth_mesh != other.ground_truth_mesh) {
      return false;
    }
    if (this->ground_truth_point_cloud != other.ground_truth_point_cloud) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectInformation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectInformation_

// alias to use template instance with default allocator
using ObjectInformation =
  object_recognition_msgs::msg::ObjectInformation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_recognition_msgs

#endif  // OBJECT_RECOGNITION_MSGS__MSG__OBJECT_INFORMATION__STRUCT_HPP_
