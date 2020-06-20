// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/PlaceLocation.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__PLACE_LOCATION__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__PLACE_LOCATION__STRUCT_HPP_

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
// Member 'post_place_posture'
#include "trajectory_msgs/msg/joint_trajectory__struct.hpp"
// Member 'place_pose'
#include "geometry_msgs/msg/pose_stamped__struct.hpp"
// Member 'pre_place_approach'
// Member 'post_place_retreat'
#include "moveit_msgs/msg/gripper_translation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__PlaceLocation __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__PlaceLocation __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlaceLocation_
{
  using Type = PlaceLocation_<ContainerAllocator>;

  explicit PlaceLocation_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : post_place_posture(_init),
    place_pose(_init),
    pre_place_approach(_init),
    post_place_retreat(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  explicit PlaceLocation_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : id(_alloc),
    post_place_posture(_alloc, _init),
    place_pose(_alloc, _init),
    pre_place_approach(_alloc, _init),
    post_place_retreat(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _post_place_posture_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _post_place_posture_type post_place_posture;
  using _place_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _place_pose_type place_pose;
  using _pre_place_approach_type =
    moveit_msgs::msg::GripperTranslation_<ContainerAllocator>;
  _pre_place_approach_type pre_place_approach;
  using _post_place_retreat_type =
    moveit_msgs::msg::GripperTranslation_<ContainerAllocator>;
  _post_place_retreat_type post_place_retreat;
  using _allowed_touch_objects_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _allowed_touch_objects_type allowed_touch_objects;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__post_place_posture(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->post_place_posture = _arg;
    return *this;
  }
  Type & set__place_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->place_pose = _arg;
    return *this;
  }
  Type & set__pre_place_approach(
    const moveit_msgs::msg::GripperTranslation_<ContainerAllocator> & _arg)
  {
    this->pre_place_approach = _arg;
    return *this;
  }
  Type & set__post_place_retreat(
    const moveit_msgs::msg::GripperTranslation_<ContainerAllocator> & _arg)
  {
    this->post_place_retreat = _arg;
    return *this;
  }
  Type & set__allowed_touch_objects(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->allowed_touch_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::msg::PlaceLocation_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::PlaceLocation_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlaceLocation_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::PlaceLocation_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlaceLocation_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlaceLocation_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::PlaceLocation_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::PlaceLocation_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlaceLocation_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::PlaceLocation_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__PlaceLocation
    std::shared_ptr<moveit_msgs::msg::PlaceLocation_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__PlaceLocation
    std::shared_ptr<moveit_msgs::msg::PlaceLocation_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlaceLocation_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->post_place_posture != other.post_place_posture) {
      return false;
    }
    if (this->place_pose != other.place_pose) {
      return false;
    }
    if (this->pre_place_approach != other.pre_place_approach) {
      return false;
    }
    if (this->post_place_retreat != other.post_place_retreat) {
      return false;
    }
    if (this->allowed_touch_objects != other.allowed_touch_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlaceLocation_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlaceLocation_

// alias to use template instance with default allocator
using PlaceLocation =
  moveit_msgs::msg::PlaceLocation_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__PLACE_LOCATION__STRUCT_HPP_
