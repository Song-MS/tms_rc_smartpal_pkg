// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:srv/Tmsdbgetrobotinfo.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__SRV__TMSDBGETROBOTINFO__STRUCT_HPP_
#define TMS_MSG_DB__SRV__TMSDBGETROBOTINFO__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotinfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotinfo_Request __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetrobotinfo_Request_
{
  using Type = Tmsdbgetrobotinfo_Request_<ContainerAllocator>;

  explicit Tmsdbgetrobotinfo_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tmsdbgetrobotinfo_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotinfo_Request
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetrobotinfo_Request_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetrobotinfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetrobotinfo_Request_

// alias to use template instance with default allocator
using Tmsdbgetrobotinfo_Request =
  tms_msg_db::srv::Tmsdbgetrobotinfo_Request_<std::allocator<void>>;

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
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotinfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotinfo_Response __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Tmsdbgetrobotinfo_Response_
{
  using Type = Tmsdbgetrobotinfo_Response_<ContainerAllocator>;

  explicit Tmsdbgetrobotinfo_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Tmsdbgetrobotinfo_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _rostime_type =
    std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other>;
  _rostime_type rostime;
  using _id_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _id_type id;
  using _x_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _x_type x;
  using _y_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _y_type y;
  using _z_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _z_type z;
  using _theta_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _theta_type theta;
  using _joint_waist_low_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_waist_low_type joint_waist_low;
  using _joint_waist_high_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_waist_high_type joint_waist_high;
  using _joint_arm_right_1_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_right_1_type joint_arm_right_1;
  using _joint_arm_right_2_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_right_2_type joint_arm_right_2;
  using _joint_arm_right_3_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_right_3_type joint_arm_right_3;
  using _joint_arm_right_4_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_right_4_type joint_arm_right_4;
  using _joint_arm_right_5_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_right_5_type joint_arm_right_5;
  using _joint_arm_right_6_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_right_6_type joint_arm_right_6;
  using _joint_arm_right_7_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_right_7_type joint_arm_right_7;
  using _joint_arm_right_g_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_right_g_type joint_arm_right_g;
  using _joint_arm_left_1_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_left_1_type joint_arm_left_1;
  using _joint_arm_left_2_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_left_2_type joint_arm_left_2;
  using _joint_arm_left_3_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_left_3_type joint_arm_left_3;
  using _joint_arm_left_4_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_left_4_type joint_arm_left_4;
  using _joint_arm_left_5_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_left_5_type joint_arm_left_5;
  using _joint_arm_left_6_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_left_6_type joint_arm_left_6;
  using _joint_arm_left_7_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_left_7_type joint_arm_left_7;
  using _joint_arm_left_g_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _joint_arm_left_g_type joint_arm_left_g;
  using _state_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _state_type state;
  using _place_type =
    std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other>;
  _place_type place;

  // setters for named parameter idiom
  Type & set__rostime(
    const std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other> & _arg)
  {
    this->rostime = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__theta(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__joint_waist_low(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_waist_low = _arg;
    return *this;
  }
  Type & set__joint_waist_high(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_waist_high = _arg;
    return *this;
  }
  Type & set__joint_arm_right_1(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_right_1 = _arg;
    return *this;
  }
  Type & set__joint_arm_right_2(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_right_2 = _arg;
    return *this;
  }
  Type & set__joint_arm_right_3(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_right_3 = _arg;
    return *this;
  }
  Type & set__joint_arm_right_4(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_right_4 = _arg;
    return *this;
  }
  Type & set__joint_arm_right_5(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_right_5 = _arg;
    return *this;
  }
  Type & set__joint_arm_right_6(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_right_6 = _arg;
    return *this;
  }
  Type & set__joint_arm_right_7(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_right_7 = _arg;
    return *this;
  }
  Type & set__joint_arm_right_g(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_right_g = _arg;
    return *this;
  }
  Type & set__joint_arm_left_1(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_left_1 = _arg;
    return *this;
  }
  Type & set__joint_arm_left_2(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_left_2 = _arg;
    return *this;
  }
  Type & set__joint_arm_left_3(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_left_3 = _arg;
    return *this;
  }
  Type & set__joint_arm_left_4(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_left_4 = _arg;
    return *this;
  }
  Type & set__joint_arm_left_5(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_left_5 = _arg;
    return *this;
  }
  Type & set__joint_arm_left_6(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_left_6 = _arg;
    return *this;
  }
  Type & set__joint_arm_left_7(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_left_7 = _arg;
    return *this;
  }
  Type & set__joint_arm_left_g(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->joint_arm_left_g = _arg;
    return *this;
  }
  Type & set__state(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__place(
    const std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other> & _arg)
  {
    this->place = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__srv__Tmsdbgetrobotinfo_Response
    std::shared_ptr<tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdbgetrobotinfo_Response_ & other) const
  {
    if (this->rostime != other.rostime) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->joint_waist_low != other.joint_waist_low) {
      return false;
    }
    if (this->joint_waist_high != other.joint_waist_high) {
      return false;
    }
    if (this->joint_arm_right_1 != other.joint_arm_right_1) {
      return false;
    }
    if (this->joint_arm_right_2 != other.joint_arm_right_2) {
      return false;
    }
    if (this->joint_arm_right_3 != other.joint_arm_right_3) {
      return false;
    }
    if (this->joint_arm_right_4 != other.joint_arm_right_4) {
      return false;
    }
    if (this->joint_arm_right_5 != other.joint_arm_right_5) {
      return false;
    }
    if (this->joint_arm_right_6 != other.joint_arm_right_6) {
      return false;
    }
    if (this->joint_arm_right_7 != other.joint_arm_right_7) {
      return false;
    }
    if (this->joint_arm_right_g != other.joint_arm_right_g) {
      return false;
    }
    if (this->joint_arm_left_1 != other.joint_arm_left_1) {
      return false;
    }
    if (this->joint_arm_left_2 != other.joint_arm_left_2) {
      return false;
    }
    if (this->joint_arm_left_3 != other.joint_arm_left_3) {
      return false;
    }
    if (this->joint_arm_left_4 != other.joint_arm_left_4) {
      return false;
    }
    if (this->joint_arm_left_5 != other.joint_arm_left_5) {
      return false;
    }
    if (this->joint_arm_left_6 != other.joint_arm_left_6) {
      return false;
    }
    if (this->joint_arm_left_7 != other.joint_arm_left_7) {
      return false;
    }
    if (this->joint_arm_left_g != other.joint_arm_left_g) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->place != other.place) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdbgetrobotinfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdbgetrobotinfo_Response_

// alias to use template instance with default allocator
using Tmsdbgetrobotinfo_Response =
  tms_msg_db::srv::Tmsdbgetrobotinfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tms_msg_db

namespace tms_msg_db
{

namespace srv
{

struct Tmsdbgetrobotinfo
{
  using Request = tms_msg_db::srv::Tmsdbgetrobotinfo_Request;
  using Response = tms_msg_db::srv::Tmsdbgetrobotinfo_Response;
};

}  // namespace srv

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__SRV__TMSDBGETROBOTINFO__STRUCT_HPP_
