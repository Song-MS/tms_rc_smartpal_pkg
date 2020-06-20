// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from object_recognition_msgs:action/ObjectRecognition.idl
// generated code does not contain a copyright notice

#ifndef OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__STRUCT_HPP_
#define OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__STRUCT_HPP_

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
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Goal __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Goal __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ObjectRecognition_Goal_
{
  using Type = ObjectRecognition_Goal_<ContainerAllocator>;

  explicit ObjectRecognition_Goal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_roi = false;
    }
  }

  explicit ObjectRecognition_Goal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->use_roi = false;
    }
  }

  // field types and members
  using _use_roi_type =
    bool;
  _use_roi_type use_roi;
  using _filter_limits_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _filter_limits_type filter_limits;

  // setters for named parameter idiom
  Type & set__use_roi(
    const bool & _arg)
  {
    this->use_roi = _arg;
    return *this;
  }
  Type & set__filter_limits(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->filter_limits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Goal
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Goal
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectRecognition_Goal_ & other) const
  {
    if (this->use_roi != other.use_roi) {
      return false;
    }
    if (this->filter_limits != other.filter_limits) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectRecognition_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectRecognition_Goal_

// alias to use template instance with default allocator
using ObjectRecognition_Goal =
  object_recognition_msgs::action::ObjectRecognition_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

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
// Member 'recognized_objects'
#include "object_recognition_msgs/msg/recognized_object_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Result __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Result __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ObjectRecognition_Result_
{
  using Type = ObjectRecognition_Result_<ContainerAllocator>;

  explicit ObjectRecognition_Result_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : recognized_objects(_init)
  {
    (void)_init;
  }

  explicit ObjectRecognition_Result_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : recognized_objects(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _recognized_objects_type =
    object_recognition_msgs::msg::RecognizedObjectArray_<ContainerAllocator>;
  _recognized_objects_type recognized_objects;

  // setters for named parameter idiom
  Type & set__recognized_objects(
    const object_recognition_msgs::msg::RecognizedObjectArray_<ContainerAllocator> & _arg)
  {
    this->recognized_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Result
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Result
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectRecognition_Result_ & other) const
  {
    if (this->recognized_objects != other.recognized_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectRecognition_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectRecognition_Result_

// alias to use template instance with default allocator
using ObjectRecognition_Result =
  object_recognition_msgs::action::ObjectRecognition_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

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

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Feedback __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ObjectRecognition_Feedback_
{
  using Type = ObjectRecognition_Feedback_<ContainerAllocator>;

  explicit ObjectRecognition_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ObjectRecognition_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Feedback
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_Feedback
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectRecognition_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectRecognition_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectRecognition_Feedback_

// alias to use template instance with default allocator
using ObjectRecognition_Feedback =
  object_recognition_msgs::action::ObjectRecognition_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

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
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'goal'
#include "object_recognition_msgs/action/object_recognition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_SendGoal_Request __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ObjectRecognition_SendGoal_Request_
{
  using Type = ObjectRecognition_SendGoal_Request_<ContainerAllocator>;

  explicit ObjectRecognition_SendGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit ObjectRecognition_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const object_recognition_msgs::action::ObjectRecognition_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_SendGoal_Request
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_SendGoal_Request
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectRecognition_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectRecognition_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectRecognition_SendGoal_Request_

// alias to use template instance with default allocator
using ObjectRecognition_SendGoal_Request =
  object_recognition_msgs::action::ObjectRecognition_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

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
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_SendGoal_Response __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ObjectRecognition_SendGoal_Response_
{
  using Type = ObjectRecognition_SendGoal_Response_<ContainerAllocator>;

  explicit ObjectRecognition_SendGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit ObjectRecognition_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_SendGoal_Response
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_SendGoal_Response
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectRecognition_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectRecognition_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectRecognition_SendGoal_Response_

// alias to use template instance with default allocator
using ObjectRecognition_SendGoal_Response =
  object_recognition_msgs::action::ObjectRecognition_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace object_recognition_msgs

namespace object_recognition_msgs
{

namespace action
{

struct ObjectRecognition_SendGoal
{
  using Request = object_recognition_msgs::action::ObjectRecognition_SendGoal_Request;
  using Response = object_recognition_msgs::action::ObjectRecognition_SendGoal_Response;
};

}  // namespace action

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
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_GetResult_Request __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ObjectRecognition_GetResult_Request_
{
  using Type = ObjectRecognition_GetResult_Request_<ContainerAllocator>;

  explicit ObjectRecognition_GetResult_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit ObjectRecognition_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_GetResult_Request
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_GetResult_Request
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectRecognition_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectRecognition_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectRecognition_GetResult_Request_

// alias to use template instance with default allocator
using ObjectRecognition_GetResult_Request =
  object_recognition_msgs::action::ObjectRecognition_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

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
// Member 'result'
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_GetResult_Response __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ObjectRecognition_GetResult_Response_
{
  using Type = ObjectRecognition_GetResult_Response_<ContainerAllocator>;

  explicit ObjectRecognition_GetResult_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit ObjectRecognition_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const object_recognition_msgs::action::ObjectRecognition_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_GetResult_Response
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_GetResult_Response
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectRecognition_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectRecognition_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectRecognition_GetResult_Response_

// alias to use template instance with default allocator
using ObjectRecognition_GetResult_Response =
  object_recognition_msgs::action::ObjectRecognition_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace object_recognition_msgs

namespace object_recognition_msgs
{

namespace action
{

struct ObjectRecognition_GetResult
{
  using Request = object_recognition_msgs::action::ObjectRecognition_GetResult_Request;
  using Response = object_recognition_msgs::action::ObjectRecognition_GetResult_Response;
};

}  // namespace action

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
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "object_recognition_msgs/action/object_recognition__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__object_recognition_msgs__action__ObjectRecognition_FeedbackMessage __declspec(deprecated)
#endif

namespace object_recognition_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct ObjectRecognition_FeedbackMessage_
{
  using Type = ObjectRecognition_FeedbackMessage_<ContainerAllocator>;

  explicit ObjectRecognition_FeedbackMessage_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit ObjectRecognition_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const object_recognition_msgs::action::ObjectRecognition_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_FeedbackMessage
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__object_recognition_msgs__action__ObjectRecognition_FeedbackMessage
    std::shared_ptr<object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectRecognition_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectRecognition_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectRecognition_FeedbackMessage_

// alias to use template instance with default allocator
using ObjectRecognition_FeedbackMessage =
  object_recognition_msgs::action::ObjectRecognition_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace object_recognition_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace object_recognition_msgs
{

namespace action
{

struct ObjectRecognition
{
  /// The goal message defined in the action definition.
  using Goal = object_recognition_msgs::action::ObjectRecognition_Goal;
  /// The result message defined in the action definition.
  using Result = object_recognition_msgs::action::ObjectRecognition_Result;
  /// The feedback message defined in the action definition.
  using Feedback = object_recognition_msgs::action::ObjectRecognition_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = object_recognition_msgs::action::ObjectRecognition_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = object_recognition_msgs::action::ObjectRecognition_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = object_recognition_msgs::action::ObjectRecognition_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct ObjectRecognition ObjectRecognition;

}  // namespace action

}  // namespace object_recognition_msgs

#endif  // OBJECT_RECOGNITION_MSGS__ACTION__OBJECT_RECOGNITION__STRUCT_HPP_
