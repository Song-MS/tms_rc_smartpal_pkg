// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tms_msg_db:msg/Tmsdb.idl
// generated code does not contain a copyright notice

#ifndef TMS_MSG_DB__MSG__TMSDB__STRUCT_HPP_
#define TMS_MSG_DB__MSG__TMSDB__STRUCT_HPP_

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
# define DEPRECATED__tms_msg_db__msg__Tmsdb __attribute__((deprecated))
#else
# define DEPRECATED__tms_msg_db__msg__Tmsdb __declspec(deprecated)
#endif

namespace tms_msg_db
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tmsdb_
{
  using Type = Tmsdb_<ContainerAllocator>;

  explicit Tmsdb_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = "";
      this->type = "";
      this->id = 0l;
      this->name = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rr = 0.0;
      this->rp = 0.0;
      this->ry = 0.0;
      this->offset_x = 0.0;
      this->offset_y = 0.0;
      this->offset_z = 0.0;
      this->joint = "";
      this->weight = 0.0;
      this->rfid = "";
      this->etcdata = "";
      this->place = 0l;
      this->extfile = "";
      this->sensor = 0l;
      this->probability = 0.0;
      this->state = 0l;
      this->task = "";
      this->note = "";
      this->tag = "";
      this->announce = "";
    }
  }

  explicit Tmsdb_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : time(_alloc),
    type(_alloc),
    name(_alloc),
    joint(_alloc),
    rfid(_alloc),
    etcdata(_alloc),
    extfile(_alloc),
    task(_alloc),
    note(_alloc),
    tag(_alloc),
    announce(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = "";
      this->type = "";
      this->id = 0l;
      this->name = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rr = 0.0;
      this->rp = 0.0;
      this->ry = 0.0;
      this->offset_x = 0.0;
      this->offset_y = 0.0;
      this->offset_z = 0.0;
      this->joint = "";
      this->weight = 0.0;
      this->rfid = "";
      this->etcdata = "";
      this->place = 0l;
      this->extfile = "";
      this->sensor = 0l;
      this->probability = 0.0;
      this->state = 0l;
      this->task = "";
      this->note = "";
      this->tag = "";
      this->announce = "";
    }
  }

  // field types and members
  using _time_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _time_type time;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_type type;
  using _id_type =
    int32_t;
  _id_type id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _rr_type =
    double;
  _rr_type rr;
  using _rp_type =
    double;
  _rp_type rp;
  using _ry_type =
    double;
  _ry_type ry;
  using _offset_x_type =
    double;
  _offset_x_type offset_x;
  using _offset_y_type =
    double;
  _offset_y_type offset_y;
  using _offset_z_type =
    double;
  _offset_z_type offset_z;
  using _joint_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _joint_type joint;
  using _weight_type =
    double;
  _weight_type weight;
  using _rfid_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _rfid_type rfid;
  using _etcdata_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _etcdata_type etcdata;
  using _place_type =
    int32_t;
  _place_type place;
  using _extfile_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _extfile_type extfile;
  using _sensor_type =
    int32_t;
  _sensor_type sensor;
  using _probability_type =
    double;
  _probability_type probability;
  using _state_type =
    int32_t;
  _state_type state;
  using _task_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _task_type task;
  using _note_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _note_type note;
  using _tag_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tag_type tag;
  using _announce_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _announce_type announce;

  // setters for named parameter idiom
  Type & set__time(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__rr(
    const double & _arg)
  {
    this->rr = _arg;
    return *this;
  }
  Type & set__rp(
    const double & _arg)
  {
    this->rp = _arg;
    return *this;
  }
  Type & set__ry(
    const double & _arg)
  {
    this->ry = _arg;
    return *this;
  }
  Type & set__offset_x(
    const double & _arg)
  {
    this->offset_x = _arg;
    return *this;
  }
  Type & set__offset_y(
    const double & _arg)
  {
    this->offset_y = _arg;
    return *this;
  }
  Type & set__offset_z(
    const double & _arg)
  {
    this->offset_z = _arg;
    return *this;
  }
  Type & set__joint(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->joint = _arg;
    return *this;
  }
  Type & set__weight(
    const double & _arg)
  {
    this->weight = _arg;
    return *this;
  }
  Type & set__rfid(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->rfid = _arg;
    return *this;
  }
  Type & set__etcdata(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->etcdata = _arg;
    return *this;
  }
  Type & set__place(
    const int32_t & _arg)
  {
    this->place = _arg;
    return *this;
  }
  Type & set__extfile(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->extfile = _arg;
    return *this;
  }
  Type & set__sensor(
    const int32_t & _arg)
  {
    this->sensor = _arg;
    return *this;
  }
  Type & set__probability(
    const double & _arg)
  {
    this->probability = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__task(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->task = _arg;
    return *this;
  }
  Type & set__note(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->note = _arg;
    return *this;
  }
  Type & set__tag(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tag = _arg;
    return *this;
  }
  Type & set__announce(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->announce = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tms_msg_db::msg::Tmsdb_<ContainerAllocator> *;
  using ConstRawPtr =
    const tms_msg_db::msg::Tmsdb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tms_msg_db::msg::Tmsdb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tms_msg_db::msg::Tmsdb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::msg::Tmsdb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::msg::Tmsdb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tms_msg_db::msg::Tmsdb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tms_msg_db::msg::Tmsdb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tms_msg_db::msg::Tmsdb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tms_msg_db::msg::Tmsdb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tms_msg_db__msg__Tmsdb
    std::shared_ptr<tms_msg_db::msg::Tmsdb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tms_msg_db__msg__Tmsdb
    std::shared_ptr<tms_msg_db::msg::Tmsdb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tmsdb_ & other) const
  {
    if (this->time != other.time) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->name != other.name) {
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
    if (this->rr != other.rr) {
      return false;
    }
    if (this->rp != other.rp) {
      return false;
    }
    if (this->ry != other.ry) {
      return false;
    }
    if (this->offset_x != other.offset_x) {
      return false;
    }
    if (this->offset_y != other.offset_y) {
      return false;
    }
    if (this->offset_z != other.offset_z) {
      return false;
    }
    if (this->joint != other.joint) {
      return false;
    }
    if (this->weight != other.weight) {
      return false;
    }
    if (this->rfid != other.rfid) {
      return false;
    }
    if (this->etcdata != other.etcdata) {
      return false;
    }
    if (this->place != other.place) {
      return false;
    }
    if (this->extfile != other.extfile) {
      return false;
    }
    if (this->sensor != other.sensor) {
      return false;
    }
    if (this->probability != other.probability) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->task != other.task) {
      return false;
    }
    if (this->note != other.note) {
      return false;
    }
    if (this->tag != other.tag) {
      return false;
    }
    if (this->announce != other.announce) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tmsdb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tmsdb_

// alias to use template instance with default allocator
using Tmsdb =
  tms_msg_db::msg::Tmsdb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tms_msg_db

#endif  // TMS_MSG_DB__MSG__TMSDB__STRUCT_HPP_
