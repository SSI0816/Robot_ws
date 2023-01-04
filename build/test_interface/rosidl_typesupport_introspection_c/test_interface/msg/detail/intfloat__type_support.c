// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from test_interface:msg/Intfloat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "test_interface/msg/detail/intfloat__rosidl_typesupport_introspection_c.h"
#include "test_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "test_interface/msg/detail/intfloat__functions.h"
#include "test_interface/msg/detail/intfloat__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Intfloat__rosidl_typesupport_introspection_c__Intfloat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  test_interface__msg__Intfloat__init(message_memory);
}

void Intfloat__rosidl_typesupport_introspection_c__Intfloat_fini_function(void * message_memory)
{
  test_interface__msg__Intfloat__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Intfloat__rosidl_typesupport_introspection_c__Intfloat_message_member_array[2] = {
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interface__msg__Intfloat, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(test_interface__msg__Intfloat, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Intfloat__rosidl_typesupport_introspection_c__Intfloat_message_members = {
  "test_interface__msg",  // message namespace
  "Intfloat",  // message name
  2,  // number of fields
  sizeof(test_interface__msg__Intfloat),
  Intfloat__rosidl_typesupport_introspection_c__Intfloat_message_member_array,  // message members
  Intfloat__rosidl_typesupport_introspection_c__Intfloat_init_function,  // function to initialize message memory (memory has to be allocated)
  Intfloat__rosidl_typesupport_introspection_c__Intfloat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Intfloat__rosidl_typesupport_introspection_c__Intfloat_message_type_support_handle = {
  0,
  &Intfloat__rosidl_typesupport_introspection_c__Intfloat_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_test_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, test_interface, msg, Intfloat)() {
  if (!Intfloat__rosidl_typesupport_introspection_c__Intfloat_message_type_support_handle.typesupport_identifier) {
    Intfloat__rosidl_typesupport_introspection_c__Intfloat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Intfloat__rosidl_typesupport_introspection_c__Intfloat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
