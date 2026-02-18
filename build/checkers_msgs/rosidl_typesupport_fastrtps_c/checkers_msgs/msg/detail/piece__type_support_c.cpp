// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from checkers_msgs:msg/Piece.idl
// generated code does not contain a copyright notice
#include "checkers_msgs/msg/detail/piece__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "checkers_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "checkers_msgs/msg/detail/piece__struct.h"
#include "checkers_msgs/msg/detail/piece__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // color
#include "rosidl_runtime_c/string_functions.h"  // color

// forward declare type support functions


using _Piece__ros_msg_type = checkers_msgs__msg__Piece;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
bool cdr_serialize_checkers_msgs__msg__Piece(
  const checkers_msgs__msg__Piece * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: row
  {
    cdr << ros_message->row;
  }

  // Field name: col
  {
    cdr << ros_message->col;
  }

  // Field name: color
  {
    const rosidl_runtime_c__String * str = &ros_message->color;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: king
  {
    cdr << (ros_message->king ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
bool cdr_deserialize_checkers_msgs__msg__Piece(
  eprosima::fastcdr::Cdr & cdr,
  checkers_msgs__msg__Piece * ros_message)
{
  // Field name: row
  {
    cdr >> ros_message->row;
  }

  // Field name: col
  {
    cdr >> ros_message->col;
  }

  // Field name: color
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->color.data) {
      rosidl_runtime_c__String__init(&ros_message->color);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->color,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'color'\n");
      return false;
    }
  }

  // Field name: king
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->king = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
size_t get_serialized_size_checkers_msgs__msg__Piece(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Piece__ros_msg_type * ros_message = static_cast<const _Piece__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: row
  {
    size_t item_size = sizeof(ros_message->row);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: col
  {
    size_t item_size = sizeof(ros_message->col);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: color
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color.size + 1);

  // Field name: king
  {
    size_t item_size = sizeof(ros_message->king);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
size_t max_serialized_size_checkers_msgs__msg__Piece(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: row
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: col
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: color
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: king
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = checkers_msgs__msg__Piece;
    is_plain =
      (
      offsetof(DataType, king) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
bool cdr_serialize_key_checkers_msgs__msg__Piece(
  const checkers_msgs__msg__Piece * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: row
  {
    cdr << ros_message->row;
  }

  // Field name: col
  {
    cdr << ros_message->col;
  }

  // Field name: color
  {
    const rosidl_runtime_c__String * str = &ros_message->color;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: king
  {
    cdr << (ros_message->king ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
size_t get_serialized_size_key_checkers_msgs__msg__Piece(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Piece__ros_msg_type * ros_message = static_cast<const _Piece__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: row
  {
    size_t item_size = sizeof(ros_message->row);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: col
  {
    size_t item_size = sizeof(ros_message->col);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: color
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->color.size + 1);

  // Field name: king
  {
    size_t item_size = sizeof(ros_message->king);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_checkers_msgs
size_t max_serialized_size_key_checkers_msgs__msg__Piece(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: row
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: col
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: color
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: king
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = checkers_msgs__msg__Piece;
    is_plain =
      (
      offsetof(DataType, king) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Piece__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const checkers_msgs__msg__Piece * ros_message = static_cast<const checkers_msgs__msg__Piece *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_checkers_msgs__msg__Piece(ros_message, cdr);
}

static bool _Piece__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  checkers_msgs__msg__Piece * ros_message = static_cast<checkers_msgs__msg__Piece *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_checkers_msgs__msg__Piece(cdr, ros_message);
}

static uint32_t _Piece__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_checkers_msgs__msg__Piece(
      untyped_ros_message, 0));
}

static size_t _Piece__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_checkers_msgs__msg__Piece(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Piece = {
  "checkers_msgs::msg",
  "Piece",
  _Piece__cdr_serialize,
  _Piece__cdr_deserialize,
  _Piece__get_serialized_size,
  _Piece__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Piece__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Piece,
  get_message_typesupport_handle_function,
  &checkers_msgs__msg__Piece__get_type_hash,
  &checkers_msgs__msg__Piece__get_type_description,
  &checkers_msgs__msg__Piece__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, checkers_msgs, msg, Piece)() {
  return &_Piece__type_support;
}

#if defined(__cplusplus)
}
#endif
