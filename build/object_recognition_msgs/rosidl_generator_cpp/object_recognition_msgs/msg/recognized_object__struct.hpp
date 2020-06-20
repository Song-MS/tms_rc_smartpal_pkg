// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_recognition_msgs:msg/RecognizedObject.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__STRUCT_HPP_
#define OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__STRUCT_HPP_

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
// Member 'type'
#include "object_recognition_msgs/msg/object_type__struct.hpp"
// Member 'point_clouds'
#include "sensor_msgs/msg/point_cloud2__struct.hpp"
// Member 'bounding_mesh'
#include "shape_msgs/msg/mesh__struct.hpp"
// Member 'bounding_contours'
#include "geometry_msgs/msg/point__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/pose_with_covariance_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__msg__RecognizedObject __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__msg__RecognizedObject __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RecognizedObject_
{
  using Type = RecognizedObject_<ContainerAllocator>;

  explicit RecognizedObject_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    type(_init),
    bounding_mesh(_init),
    pose(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
    }
  }

  explicit RecognizedObject_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    type(_alloc, _init),
    bounding_mesh(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _type_type =
    object_recognition_msgs::msg::ObjectType_<ContainerAllocator>;
  _type_type type;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _point_clouds_type =
    std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>::other>;
  _point_clouds_type point_clouds;
  using _bounding_mesh_type =
    shape_msgs::msg::Mesh_<ContainerAllocator>;
  _bounding_mesh_type bounding_mesh;
  using _bounding_contours_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other>;
  _bounding_contours_type bounding_contours;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__type(
    const object_recognition_msgs::msg::ObjectType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__point_clouds(
    const std::vector<sensor_msgs::msg::PointCloud2_<ContainerAllocator>, typename ContainerAllocator::template rebind<sensor_msgs::msg::PointCloud2_<ContainerAllocator>>::other> & _arg)
  {
    this->point_clouds = _arg;
    return *this;
  }
  Type & set__bounding_mesh(
    const shape_msgs::msg::Mesh_<ContainerAllocator> & _arg)
  {
    this->bounding_mesh = _arg;
    return *this;
  }
  Type & set__bounding_contours(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Point_<ContainerAllocator>>::other> & _arg)
  {
    this->bounding_contours = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovarianceStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__msg__RecognizedObject
    std::shared_ptr<object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__msg__RecognizedObject
    std::shared_ptr<object_recognition_msgs::msg::RecognizedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RecognizedObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->point_clouds != other.point_clouds) {
      return false;
    }
    if (this->bounding_mesh != other.bounding_mesh) {
      return false;
    }
    if (this->bounding_contours != other.bounding_contours) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const RecognizedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RecognizedObject_

// alias to use template instance with default allocator
using RecognizedObject =
  object_recognition_msgs::msg::RecognizedObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace object_recognition_msgs

#endif  // OBJECT_RECOGNITION_MSGS__MSG__RECOGNIZED_OBJECT__STRUCT_HPP_
