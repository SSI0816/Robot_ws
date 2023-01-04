// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from test_interface:msg/Intfloat.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__MSG__DETAIL__INTFLOAT__BUILDER_HPP_
#define TEST_INTERFACE__MSG__DETAIL__INTFLOAT__BUILDER_HPP_

#include "test_interface/msg/detail/intfloat__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace test_interface
{

namespace msg
{

namespace builder
{

class Init_Intfloat_sum
{
public:
  explicit Init_Intfloat_sum(::test_interface::msg::Intfloat & msg)
  : msg_(msg)
  {}
  ::test_interface::msg::Intfloat sum(::test_interface::msg::Intfloat::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::test_interface::msg::Intfloat msg_;
};

class Init_Intfloat_num
{
public:
  Init_Intfloat_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Intfloat_sum num(::test_interface::msg::Intfloat::_num_type arg)
  {
    msg_.num = std::move(arg);
    return Init_Intfloat_sum(msg_);
  }

private:
  ::test_interface::msg::Intfloat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::test_interface::msg::Intfloat>()
{
  return test_interface::msg::builder::Init_Intfloat_num();
}

}  // namespace test_interface

#endif  // TEST_INTERFACE__MSG__DETAIL__INTFLOAT__BUILDER_HPP_
