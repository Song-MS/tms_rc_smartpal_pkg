// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from moveit_msgs:srv/GetPlanningScene.idl
// generated code does not contain a copyright notice

#ifndef MOVEIT_MSGS__SRV__GET_PLANNING_SCENE__STRUCT_HPP_
#define MOVEIT_MSGS__SRV__GET_PLANNING_SCENE__STRUCT_HPP_

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
// Member 'components'
#include "moveit_msgs/msg/planning_scene_components__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetPlanningScene_Request __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetPlanningScene_Request __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlanningScene_Request_
{
  using Type = GetPlanningScene_Request_<ContainerAllocator>;

  explicit GetPlanningScene_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : components(_init)
  {
    (void)_init;
  }

  explicit GetPlanningScene_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : components(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _components_type =
    moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator>;
  _components_type components;

  // setters for named parameter idiom
  Type & set__components(
    const moveit_msgs::msg::PlanningSceneComponents_<ContainerAllocator> & _arg)
  {
    this->components = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetPlanningScene_Request
    std::shared_ptr<moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetPlanningScene_Request
    std::shared_ptr<moveit_msgs::srv::GetPlanningScene_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlanningScene_Request_ & other) const
  {
    if (this->components != other.components) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlanningScene_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlanningScene_Request_

// alias to use template instance with default allocator
using GetPlanningScene_Request =
  moveit_msgs::srv::GetPlanningScene_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

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
// Member 'scene'
#include "moveit_msgs/msg/planning_scene__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__moveit_msgs__srv__GetPlanningScene_Response __attribute__((deprecated))
#else
# define DEPRECATED__moveit_msgs__srv__GetPlanningScene_Response __declspec(deprecated)
#endif

namespace moveit_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetPlanningScene_Response_
{
  using Type = GetPlanningScene_Response_<ContainerAllocator>;

  explicit GetPlanningScene_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : scene(_init)
  {
    (void)_init;
  }

  explicit GetPlanningScene_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : scene(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _scene_type =
    moveit_msgs::msg::PlanningScene_<ContainerAllocator>;
  _scene_type scene;

  // setters for named parameter idiom
  Type & set__scene(
    const moveit_msgs::msg::PlanningScene_<ContainerAllocator> & _arg)
  {
    this->scene = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__moveit_msgs__srv__GetPlanningScene_Response
    std::shared_ptr<moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__moveit_msgs__srv__GetPlanningScene_Response
    std::shared_ptr<moveit_msgs::srv::GetPlanningScene_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetPlanningScene_Response_ & other) const
  {
    if (this->scene != other.scene) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetPlanningScene_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetPlanningScene_Response_

// alias to use template instance with default allocator
using GetPlanningScene_Response =
  moveit_msgs::srv::GetPlanningScene_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace moveit_msgs

namespace moveit_msgs
{

namespace srv
{

struct GetPlanningScene
{
  using Request = moveit_msgs::srv::GetPlanningScene_Request;
  using Response = moveit_msgs::srv::GetPlanningScene_Response;
};

}  // namespace srv

}  // namespace moveit_msgs

#endif  // MOVEIT_MSGS__SRV__GET_PLANNING_SCENE__STRUCT_HPP_
