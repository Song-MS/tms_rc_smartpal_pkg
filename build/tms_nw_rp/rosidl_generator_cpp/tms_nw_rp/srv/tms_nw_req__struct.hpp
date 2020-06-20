// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_nw_rp:srv/TmsNwReq.idl
// generated code does not contain a copyright notice

#ifndef TMS_NW_RP__SRV__TMS_NW_REQ__STRUCT_HPP_
#define TMS_NW_RP__SRV__TMS_NW_REQ__STRUCT_HPP_

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
# define DEPRECATED__tms_nw_rp__srv__TmsNwReq_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_nw_rp__srv__TmsNwReq_Request __declspec(deprecated)
#endif

namespace tms_nw_rp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsNwReq_Request_
{
  using Type = TmsNwReq_Request_<ContainerAllocator>;

  explicit TmsNwReq_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->url = "";
      this->service_name = "";
      this->service_type = "";
      this->task_id = 0l;
      this->robot_id = 0l;
      this->object_id = 0l;
      this->user_id = 0l;
      this->place_id = 0l;
      this->priority = 0l;
    }
  }

  explicit TmsNwReq_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : url(_alloc),
    service_name(_alloc),
    service_type(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->url = "";
      this->service_name = "";
      this->service_type = "";
      this->task_id = 0l;
      this->robot_id = 0l;
      this->object_id = 0l;
      this->user_id = 0l;
      this->place_id = 0l;
      this->priority = 0l;
    }
  }

  // field types and members
  using _url_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _url_type url;
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _service_name_type service_name;
  using _service_type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _service_type_type service_type;
  using _task_id_type =
    int32_t;
  _task_id_type task_id;
  using _robot_id_type =
    int32_t;
  _robot_id_type robot_id;
  using _object_id_type =
    int32_t;
  _object_id_type object_id;
  using _user_id_type =
    int32_t;
  _user_id_type user_id;
  using _place_id_type =
    int32_t;
  _place_id_type place_id;
  using _priority_type =
    int32_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__url(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->url = _arg;
    return *this;
  }
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__service_type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->service_type = _arg;
    return *this;
  }
  Type & set__task_id(
    const int32_t & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__robot_id(
    const int32_t & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__object_id(
    const int32_t & _arg)
  {
    this->object_id = _arg;
    return *this;
  }
  Type & set__user_id(
    const int32_t & _arg)
  {
    this->user_id = _arg;
    return *this;
  }
  Type & set__place_id(
    const int32_t & _arg)
  {
    this->place_id = _arg;
    return *this;
  }
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_nw_rp__srv__TmsNwReq_Request
    std::shared_ptr<tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_nw_rp__srv__TmsNwReq_Request
    std::shared_ptr<tms_nw_rp::srv::TmsNwReq_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsNwReq_Request_ & other) const
  {
    if (this->url != other.url) {
      return false;
    }
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->service_type != other.service_type) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->object_id != other.object_id) {
      return false;
    }
    if (this->user_id != other.user_id) {
      return false;
    }
    if (this->place_id != other.place_id) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsNwReq_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsNwReq_Request_

// alias to use template instance with default allocator
using TmsNwReq_Request =
  tms_nw_rp::srv::TmsNwReq_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_nw_rp

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
# define DEPRECATED__tms_nw_rp__srv__TmsNwReq_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_nw_rp__srv__TmsNwReq_Response __declspec(deprecated)
#endif

namespace tms_nw_rp
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TmsNwReq_Response_
{
  using Type = TmsNwReq_Response_<ContainerAllocator>;

  explicit TmsNwReq_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit TmsNwReq_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;
  using _val_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _val_type val;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__val(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_nw_rp__srv__TmsNwReq_Response
    std::shared_ptr<tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_nw_rp__srv__TmsNwReq_Response
    std::shared_ptr<tms_nw_rp::srv::TmsNwReq_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TmsNwReq_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const TmsNwReq_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TmsNwReq_Response_

// alias to use template instance with default allocator
using TmsNwReq_Response =
  tms_nw_rp::srv::TmsNwReq_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_nw_rp

namespace tms_nw_rp
{

namespace srv
{

struct TmsNwReq
{
  using Request = tms_nw_rp::srv::TmsNwReq_Request;
  using Response = tms_nw_rp::srv::TmsNwReq_Response;
};

}  // namespace srv

}  // namespace tms_nw_rp

#endif  // TMS_NW_RP__SRV__TMS_NW_REQ__STRUCT_HPP_
