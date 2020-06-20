// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_ts:srv/TmsSaFindObjects.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__STRUCT_HPP_
#define TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_ts__srv__TmsSaFindObjects_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__srv__TmsSaFindObjects_Request __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsSaFindObjects_Request_
{
  using Type = TmsSaFindObjects_Request_<ContainerAllocator>;

  explicit TmsSaFindObjects_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TmsSaFindObjects_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _search_furnitures_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _search_furnitures_id_type search_furnitures_id;

  // setters for named parameter idiom
  Type & set__search_furnitures_id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->search_furnitures_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__srv__TmsSaFindObjects_Request
    std::shared_ptr<tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__srv__TmsSaFindObjects_Request
    std::shared_ptr<tms_msg_ts::srv::TmsSaFindObjects_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsSaFindObjects_Request_ & other) const
  {
    if (this->search_furnitures_id != other.search_furnitures_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsSaFindObjects_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsSaFindObjects_Request_

// alias to use template instance with default allocator
using TmsSaFindObjects_Request =
  tms_msg_ts::srv::TmsSaFindObjects_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_ts

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
# define DEPRECATED__tms_msg_ts__srv__TmsSaFindObjects_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_ts__srv__TmsSaFindObjects_Response __declspec(deprecated)
#endif

namespace tms_msg_ts
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsSaFindObjects_Response_
{
  using Type = TmsSaFindObjects_Response_<ContainerAllocator>;

  explicit TmsSaFindObjects_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ul;
      this->message = "";
    }
  }

  explicit TmsSaFindObjects_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ul;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    uint32_t;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _object_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _object_id_type object_id;
  using _object_x_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _object_x_type object_x;
  using _object_y_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _object_y_type object_y;
  using _object_z_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _object_z_type object_z;
  using _furnitures_id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _furnitures_id_type furnitures_id;

  // setters for named parameter idiom
  Type & set__success(
    const uint32_t & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__object_id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__object_x(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->object_x = _arg;
    return *this;
  }
  Type & set__object_y(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->object_y = _arg;
    return *this;
  }
  Type & set__object_z(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->object_z = _arg;
    return *this;
  }
  Type & set__furnitures_id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->furnitures_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_ts__srv__TmsSaFindObjects_Response
    std::shared_ptr<tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_ts__srv__TmsSaFindObjects_Response
    std::shared_ptr<tms_msg_ts::srv::TmsSaFindObjects_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsSaFindObjects_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->object_x != other.object_x) {
      return false;
    }
    if (this->object_y != other.object_y) {
      return false;
    }
    if (this->object_z != other.object_z) {
      return false;
    }
    if (this->furnitures_id != other.furnitures_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsSaFindObjects_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsSaFindObjects_Response_

// alias to use template instance with default allocator
using TmsSaFindObjects_Response =
  tms_msg_ts::srv::TmsSaFindObjects_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_ts

namespace tms_msg_ts
{

namespace srv
{

struct TmsSaFindObjects
{
  using Request = tms_msg_ts::srv::TmsSaFindObjects_Request;
  using Response = tms_msg_ts::srv::TmsSaFindObjects_Response;
};

}  // namespace srv

}  // namespace tms_msg_ts

#endif  // TMS_MSG_TS__SRV__TMS_SA_FIND_OBJECTS__STRUCT_HPP_
