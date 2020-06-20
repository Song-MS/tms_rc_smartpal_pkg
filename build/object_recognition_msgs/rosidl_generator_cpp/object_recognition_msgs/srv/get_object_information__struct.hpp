// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_recognition_msgs:srv/GetObjectInformation.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__SRV__GET_OBJECT_INFORMATION__STRUCT_HPP_
#define OBJECT_RECOGNITION_MSGS__SRV__GET_OBJECT_INFORMATION__STRUCT_HPP_

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
// Member 'type'
#include "object_recognition_msgs/msg/object_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__srv__GetObjectInformation_Request __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__srv__GetObjectInformation_Request __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjectInformation_Request_
{
  using Type = GetObjectInformation_Request_<ContainerAllocator>;

  explicit GetObjectInformation_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    (void)_init;
  }

  explicit GetObjectInformation_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _type_type =
    object_recognition_msgs::msg::ObjectType_<ContainerAllocator>;
  _type_type type;

  // setters for named parameter idiom
  Type & set__type(
    const object_recognition_msgs::msg::ObjectType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__srv__GetObjectInformation_Request
    std::shared_ptr<object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__srv__GetObjectInformation_Request
    std::shared_ptr<object_recognition_msgs::srv::GetObjectInformation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjectInformation_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjectInformation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjectInformation_Request_

// alias to use template instance with default allocator
using GetObjectInformation_Request =
  object_recognition_msgs::srv::GetObjectInformation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace object_recognition_msgs

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
// Member 'information'
#include "object_recognition_msgs/msg/object_information__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__srv__GetObjectInformation_Response __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__srv__GetObjectInformation_Response __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetObjectInformation_Response_
{
  using Type = GetObjectInformation_Response_<ContainerAllocator>;

  explicit GetObjectInformation_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : information(_init)
  {
    (void)_init;
  }

  explicit GetObjectInformation_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : information(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _information_type =
    object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator>;
  _information_type information;

  // setters for named parameter idiom
  Type & set__information(
    const object_recognition_msgs::msg::ObjectInformation_<ContainerAllocator> & _arg)
  {
    this->information = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__srv__GetObjectInformation_Response
    std::shared_ptr<object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__srv__GetObjectInformation_Response
    std::shared_ptr<object_recognition_msgs::srv::GetObjectInformation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetObjectInformation_Response_ & other) const
  {
    if (this->information != other.information) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetObjectInformation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetObjectInformation_Response_

// alias to use template instance with default allocator
using GetObjectInformation_Response =
  object_recognition_msgs::srv::GetObjectInformation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace object_recognition_msgs

namespace object_recognition_msgs
{

namespace srv
{

struct GetObjectInformation
{
  using Request = object_recognition_msgs::srv::GetObjectInformation_Request;
  using Response = object_recognition_msgs::srv::GetObjectInformation_Response;
};

}  // namespace srv

}  // namespace object_recognition_msgs

#endif  // OBJECT_RECOGNITION_MSGS__SRV__GET_OBJECT_INFORMATION__STRUCT_HPP_
