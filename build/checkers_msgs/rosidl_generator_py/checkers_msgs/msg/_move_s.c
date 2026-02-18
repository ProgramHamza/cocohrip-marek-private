// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from checkers_msgs:msg/Move.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "checkers_msgs/msg/detail/move__struct.h"
#include "checkers_msgs/msg/detail/move__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "checkers_msgs/msg/detail/piece__functions.h"
// end nested array functions include
bool checkers_msgs__msg__piece__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * checkers_msgs__msg__piece__convert_to_py(void * raw_ros_message);
bool checkers_msgs__msg__piece__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * checkers_msgs__msg__piece__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool checkers_msgs__msg__move__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("checkers_msgs.msg._move.Move", full_classname_dest, 28) == 0);
  }
  checkers_msgs__msg__Move * ros_message = _ros_message;
  {  // target_row
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_row");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_row = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // target_col
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_col");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_col = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // piece_for_moving
    PyObject * field = PyObject_GetAttrString(_pymsg, "piece_for_moving");
    if (!field) {
      return false;
    }
    if (!checkers_msgs__msg__piece__convert_from_py(field, &ros_message->piece_for_moving)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // removed_pieces
    PyObject * field = PyObject_GetAttrString(_pymsg, "removed_pieces");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'removed_pieces'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!checkers_msgs__msg__Piece__Sequence__init(&(ros_message->removed_pieces), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create checkers_msgs__msg__Piece__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    checkers_msgs__msg__Piece * dest = ros_message->removed_pieces.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!checkers_msgs__msg__piece__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * checkers_msgs__msg__move__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Move */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("checkers_msgs.msg._move");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Move");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  checkers_msgs__msg__Move * ros_message = (checkers_msgs__msg__Move *)raw_ros_message;
  {  // target_row
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->target_row);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_row", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_col
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->target_col);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_col", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // piece_for_moving
    PyObject * field = NULL;
    field = checkers_msgs__msg__piece__convert_to_py(&ros_message->piece_for_moving);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "piece_for_moving", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // removed_pieces
    PyObject * field = NULL;
    size_t size = ros_message->removed_pieces.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    checkers_msgs__msg__Piece * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->removed_pieces.data[i]);
      PyObject * pyitem = checkers_msgs__msg__piece__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "removed_pieces", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
