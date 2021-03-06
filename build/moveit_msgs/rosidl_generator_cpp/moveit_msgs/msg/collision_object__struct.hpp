// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:msg/CollisionObject.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__MSG__COLLISION_OBJECT__STRUCT_HPP_
#define MOVEIT_MSGS__MSG__COLLISION_OBJECT__STRUCT_HPP_

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
// Member 'primitives'
#include "shape_msgs/msg/solid_primitive__struct.hpp"
// Member 'primitive_poses'
// Member 'mesh_poses'
// Member 'plane_poses'
// Member 'subframe_poses'
#include "geometry_msgs/msg/pose__struct.hpp"
// Member 'meshes'
#include "shape_msgs/msg/mesh__struct.hpp"
// Member 'planes'
#include "shape_msgs/msg/plane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__msg__CollisionObject __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__msg__CollisionObject __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CollisionObject_
{
  using Type = CollisionObject_<ContainerAllocator>;

  explicit CollisionObject_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_init),
    type(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->operation = 0;
    }
  }

  explicit CollisionObject_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc),
    type(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->operation = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _type_type =
    object_recognition_msgs::msg::ObjectType_<ContainerAllocator>;
  _type_type type;
  using _primitives_type =
    std::vector<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>::other>;
  _primitives_type primitives;
  using _primitive_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other>;
  _primitive_poses_type primitive_poses;
  using _meshes_type =
    std::vector<shape_msgs::msg::Mesh_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::Mesh_<ContainerAllocator>>::other>;
  _meshes_type meshes;
  using _mesh_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other>;
  _mesh_poses_type mesh_poses;
  using _planes_type =
    std::vector<shape_msgs::msg::Plane_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::Plane_<ContainerAllocator>>::other>;
  _planes_type planes;
  using _plane_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other>;
  _plane_poses_type plane_poses;
  using _subframe_names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _subframe_names_type subframe_names;
  using _subframe_poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other>;
  _subframe_poses_type subframe_poses;
  using _operation_type =
    unsigned char;
  _operation_type operation;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const object_recognition_msgs::msg::ObjectType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__primitives(
    const std::vector<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::SolidPrimitive_<ContainerAllocator>>::other> & _arg)
  {
    this->primitives = _arg;
    return *this;
  }
  Type & set__primitive_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other> & _arg)
  {
    this->primitive_poses = _arg;
    return *this;
  }
  Type & set__meshes(
    const std::vector<shape_msgs::msg::Mesh_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::Mesh_<ContainerAllocator>>::other> & _arg)
  {
    this->meshes = _arg;
    return *this;
  }
  Type & set__mesh_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other> & _arg)
  {
    this->mesh_poses = _arg;
    return *this;
  }
  Type & set__planes(
    const std::vector<shape_msgs::msg::Plane_<ContainerAllocator>, typename ContainerAllocator::template rebind<shape_msgs::msg::Plane_<ContainerAllocator>>::other> & _arg)
  {
    this->planes = _arg;
    return *this;
  }
  Type & set__plane_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other> & _arg)
  {
    this->plane_poses = _arg;
    return *this;
  }
  Type & set__subframe_names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->subframe_names = _arg;
    return *this;
  }
  Type & set__subframe_poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Pose_<ContainerAllocator>>::other> & _arg)
  {
    this->subframe_poses = _arg;
    return *this;
  }
  Type & set__operation(
    const unsigned char & _arg)
  {
    this->operation = _arg;
    return *this;
  }

  // constant declarations
  static constexpr unsigned char ADD =
    0;
  static constexpr unsigned char REMOVE =
    1;
  static constexpr unsigned char APPEND =
    2;
  static constexpr unsigned char MOVE =
    3;

  // pointer types
  using RawPtr =
    moveit_msgs::msg::CollisionObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::msg::CollisionObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::msg::CollisionObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::CollisionObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::CollisionObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::msg::CollisionObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::msg::CollisionObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::msg::CollisionObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__msg__CollisionObject
    std::shared_ptr<moveit_msgs::msg::CollisionObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__msg__CollisionObject
    std::shared_ptr<moveit_msgs::msg::CollisionObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CollisionObject_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->primitives != other.primitives) {
      return false;
    }
    if (this->primitive_poses != other.primitive_poses) {
      return false;
    }
    if (this->meshes != other.meshes) {
      return false;
    }
    if (this->mesh_poses != other.mesh_poses) {
      return false;
    }
    if (this->planes != other.planes) {
      return false;
    }
    if (this->plane_poses != other.plane_poses) {
      return false;
    }
    if (this->subframe_names != other.subframe_names) {
      return false;
    }
    if (this->subframe_poses != other.subframe_poses) {
      return false;
    }
    if (this->operation != other.operation) {
      return false;
    }
    return true;
  }
  bool operator!=(const CollisionObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CollisionObject_

// alias to use template instance with default allocator
using CollisionObject =
  moveit_msgs::msg::CollisionObject_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr unsigned char CollisionObject_<ContainerAllocator>::ADD;
template<typename ContainerAllocator>
constexpr unsigned char CollisionObject_<ContainerAllocator>::REMOVE;
template<typename ContainerAllocator>
constexpr unsigned char CollisionObject_<ContainerAllocator>::APPEND;
template<typename ContainerAllocator>
constexpr unsigned char CollisionObject_<ContainerAllocator>::MOVE;

}  // namespace msg

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__MSG__COLLISION_OBJECT__STRUCT_HPP_
