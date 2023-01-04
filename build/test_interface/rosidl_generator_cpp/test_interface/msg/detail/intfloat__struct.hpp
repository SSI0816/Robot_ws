// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from test_interface:msg/Intfloat.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__MSG__DETAIL__INTFLOAT__STRUCT_HPP_
#define TEST_INTERFACE__MSG__DETAIL__INTFLOAT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__test_interface__msg__Intfloat __attribute__((deprecated))
#else
# define DEPRECATED__test_interface__msg__Intfloat __declspec(deprecated)
#endif

namespace test_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Intfloat_
{
  using Type = Intfloat_<ContainerAllocator>;

  explicit Intfloat_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
      this->sum = 0.0;
    }
  }

  explicit Intfloat_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
      this->sum = 0.0;
    }
  }

  // field types and members
  using _num_type =
    int64_t;
  _num_type num;
  using _sum_type =
    double;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__sum(
    const double & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    test_interface::msg::Intfloat_<ContainerAllocator> *;
  using ConstRawPtr =
    const test_interface::msg::Intfloat_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<test_interface::msg::Intfloat_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<test_interface::msg::Intfloat_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      test_interface::msg::Intfloat_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<test_interface::msg::Intfloat_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      test_interface::msg::Intfloat_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<test_interface::msg::Intfloat_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<test_interface::msg::Intfloat_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<test_interface::msg::Intfloat_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__test_interface__msg__Intfloat
    std::shared_ptr<test_interface::msg::Intfloat_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__test_interface__msg__Intfloat
    std::shared_ptr<test_interface::msg::Intfloat_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Intfloat_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Intfloat_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Intfloat_

// alias to use template instance with default allocator
using Intfloat =
  test_interface::msg::Intfloat_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace test_interface

#endif  // TEST_INTERFACE__MSG__DETAIL__INTFLOAT__STRUCT_HPP_
