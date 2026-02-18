// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from checkers_msgs:msg/HandDetected.idl
// generated code does not contain a copyright notice
#ifndef CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "checkers_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "checkers_msgs/msg/detail/hand_detected__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
bool cdr_serialize_checkers_msgs__msg__HandDetected(
  const checkers_msgs__msg__HandDetected * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
bool cdr_deserialize_checkers_msgs__msg__HandDetected(
  eprosima::fastcdr::Cdr &,
  checkers_msgs__msg__HandDetected * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
size_t get_serialized_size_checkers_msgs__msg__HandDetected(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
size_t max_serialized_size_checkers_msgs__msg__HandDetected(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
bool cdr_serialize_key_checkers_msgs__msg__HandDetected(
  const checkers_msgs__msg__HandDetected * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
size_t get_serialized_size_key_checkers_msgs__msg__HandDetected(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
size_t max_serialized_size_key_checkers_msgs__msg__HandDetected(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, checkers_msgs, msg, HandDetected)();

#ifdef __cplusplus
}
#endif

#endif  // CHECKERS_MSGS__MSG__DETAIL__HAND_DETECTED__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
