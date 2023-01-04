// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from test_interface:msg/Intfloat.idl
// generated code does not contain a copyright notice

#ifndef TEST_INTERFACE__MSG__DETAIL__INTFLOAT__STRUCT_H_
#define TEST_INTERFACE__MSG__DETAIL__INTFLOAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Intfloat in the package test_interface.
typedef struct test_interface__msg__Intfloat
{
  int64_t num;
  double sum;
} test_interface__msg__Intfloat;

// Struct for a sequence of test_interface__msg__Intfloat.
typedef struct test_interface__msg__Intfloat__Sequence
{
  test_interface__msg__Intfloat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_interface__msg__Intfloat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEST_INTERFACE__MSG__DETAIL__INTFLOAT__STRUCT_H_
