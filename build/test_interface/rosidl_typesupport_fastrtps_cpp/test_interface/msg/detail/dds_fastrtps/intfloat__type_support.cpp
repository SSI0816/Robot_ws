// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from test_interface:msg/Intfloat.idl
// generated code does not contain a copyright notice
#include "test_interface/msg/detail/intfloat__rosidl_typesupport_fastrtps_cpp.hpp"
#include "test_interface/msg/detail/intfloat__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace test_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_interface
cdr_serialize(
  const test_interface::msg::Intfloat & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: num
  cdr << ros_message.num;
  // Member: sum
  cdr << ros_message.sum;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  test_interface::msg::Intfloat & ros_message)
{
  // Member: num
  cdr >> ros_message.num;

  // Member: sum
  cdr >> ros_message.sum;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_interface
get_serialized_size(
  const test_interface::msg::Intfloat & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: num
  {
    size_t item_size = sizeof(ros_message.num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sum
  {
    size_t item_size = sizeof(ros_message.sum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_test_interface
max_serialized_size_Intfloat(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: num
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Intfloat__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const test_interface::msg::Intfloat *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Intfloat__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<test_interface::msg::Intfloat *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Intfloat__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const test_interface::msg::Intfloat *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Intfloat__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Intfloat(full_bounded, 0);
}

static message_type_support_callbacks_t _Intfloat__callbacks = {
  "test_interface::msg",
  "Intfloat",
  _Intfloat__cdr_serialize,
  _Intfloat__cdr_deserialize,
  _Intfloat__get_serialized_size,
  _Intfloat__max_serialized_size
};

static rosidl_message_type_support_t _Intfloat__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Intfloat__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace test_interface

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_test_interface
const rosidl_message_type_support_t *
get_message_type_support_handle<test_interface::msg::Intfloat>()
{
  return &test_interface::msg::typesupport_fastrtps_cpp::_Intfloat__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, test_interface, msg, Intfloat)() {
  return &test_interface::msg::typesupport_fastrtps_cpp::_Intfloat__handle;
}

#ifdef __cplusplus
}
#endif
