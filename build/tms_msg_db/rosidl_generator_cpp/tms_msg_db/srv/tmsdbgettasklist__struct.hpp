// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbgettasklist.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETTASKLIST__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETTASKLIST__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgettasklist_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgettasklist_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgettasklist_Request_
{
  using Type = Tmsdbgettasklist_Request_<ContainerAllocator>;

  explicit Tmsdbgettasklist_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0ul;
    }
  }

  explicit Tmsdbgettasklist_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_id = 0ul;
    }
  }

  // field types and members
  using _task_id_type =
    uint32_t;
  _task_id_type task_id;

  // setters for named parameter idiom
  Type & set__task_id(
    const uint32_t & _arg)
  {
    this->task_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgettasklist_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgettasklist_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgettasklist_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgettasklist_Request_ & other) const
  {
    if (this->task_id != other.task_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgettasklist_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgettasklist_Request_

// alias to use template instance with default allocator
using Tmsdbgettasklist_Request =
  tms_msg_db::srv::Tmsdbgettasklist_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgettasklist_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgettasklist_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgettasklist_Response_
{
  using Type = Tmsdbgettasklist_Response_<ContainerAllocator>;

  explicit Tmsdbgettasklist_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_name = "";
      this->priority = 0ul;
      this->time = 0ull;
      this->sub_task = "";
      this->robot_id = 0ul;
      this->sensor = "";
      this->robot_func = "";
      this->sensor_func = "";
    }
  }

  explicit Tmsdbgettasklist_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : task_name(_alloc),
    sub_task(_alloc),
    sensor(_alloc),
    robot_func(_alloc),
    sensor_func(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_name = "";
      this->priority = 0ul;
      this->time = 0ull;
      this->sub_task = "";
      this->robot_id = 0ul;
      this->sensor = "";
      this->robot_func = "";
      this->sensor_func = "";
    }
  }

  // field types and members
  using _task_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _task_name_type task_name;
  using _priority_type =
    uint32_t;
  _priority_type priority;
  using _time_type =
    uint64_t;
  _time_type time;
  using _sub_task_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _sub_task_type sub_task;
  using _robot_id_type =
    uint32_t;
  _robot_id_type robot_id;
  using _sensor_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _sensor_type sensor;
  using _robot_func_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _robot_func_type robot_func;
  using _sensor_func_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _sensor_func_type sensor_func;

  // setters for named parameter idiom
  Type & set__task_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->task_name = _arg;
    return *this;
  }
  Type & set__priority(
    const uint32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__time(
    const uint64_t & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__sub_task(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->sub_task = _arg;
    return *this;
  }
  Type & set__robot_id(
    const uint32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__sensor(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->sensor = _arg;
    return *this;
  }
  Type & set__robot_func(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->robot_func = _arg;
    return *this;
  }
  Type & set__sensor_func(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->sensor_func = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgettasklist_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgettasklist_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgettasklist_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgettasklist_Response_ & other) const
  {
    if (this->task_name != other.task_name) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->sub_task != other.sub_task) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->sensor != other.sensor) {
      return false;
    }
    if (this->robot_func != other.robot_func) {
      return false;
    }
    if (this->sensor_func != other.sensor_func) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgettasklist_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgettasklist_Response_

// alias to use template instance with default allocator
using Tmsdbgettasklist_Response =
  tms_msg_db::srv::Tmsdbgettasklist_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbgettasklist
{
  using Request = tms_msg_db::srv::Tmsdbgettasklist_Request;
  using Response = tms_msg_db::srv::Tmsdbgettasklist_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBGETTASKLIST__STRUCT_HPP_
