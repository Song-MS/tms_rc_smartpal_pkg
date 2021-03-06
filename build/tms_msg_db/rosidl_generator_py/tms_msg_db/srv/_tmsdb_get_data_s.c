// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tms_msg_db:srv/TmsdbGetData.idl
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
#include "rosidl_generator_c/visibility_control.h"
#include "tms_msg_db/srv/tmsdb_get_data__struct.h"
#include "tms_msg_db/srv/tmsdb_get_data__functions.h"

bool tms_msg_db__msg__tmsdb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tms_msg_db__msg__tmsdb__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdb_get_data__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp(
        "tms_msg_db.srv._tmsdb_get_data.TmsdbGetData_Request",
        full_classname_dest, 51) == 0);
  }
  tms_msg_db__srv__TmsdbGetData_Request * ros_message = _ros_message;
  {  // tmsdb
    PyObject * field = PyObject_GetAttrString(_pymsg, "tmsdb");
    if (!field) {
      return false;
    }
    if (!tms_msg_db__msg__tmsdb__convert_from_py(field, &ros_message->tmsdb)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdb_get_data__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TmsdbGetData_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdb_get_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TmsdbGetData_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__TmsdbGetData_Request * ros_message = (tms_msg_db__srv__TmsdbGetData_Request *)raw_ros_message;
  {  // tmsdb
    PyObject * field = NULL;
    field = tms_msg_db__msg__tmsdb__convert_to_py(&ros_message->tmsdb);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tmsdb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_generator_c/visibility_control.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_get_data__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_get_data__functions.h"

#include "rosidl_generator_c/primitives_sequence.h"
#include "rosidl_generator_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "tms_msg_db/msg/tmsdb__functions.h"
// end nested array functions include
bool tms_msg_db__msg__tmsdb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * tms_msg_db__msg__tmsdb__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdb_get_data__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp(
        "tms_msg_db.srv._tmsdb_get_data.TmsdbGetData_Response",
        full_classname_dest, 52) == 0);
  }
  tms_msg_db__srv__TmsdbGetData_Response * ros_message = _ros_message;
  {  // tmsdb
    PyObject * field = PyObject_GetAttrString(_pymsg, "tmsdb");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tmsdb'");
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
    if (!tms_msg_db__msg__Tmsdb__Sequence__init(&(ros_message->tmsdb), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create tms_msg_db__msg__Tmsdb__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    tms_msg_db__msg__Tmsdb * dest = ros_message->tmsdb.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!tms_msg_db__msg__tmsdb__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * tms_msg_db__srv__tmsdb_get_data__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TmsdbGetData_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdb_get_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TmsdbGetData_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__TmsdbGetData_Response * ros_message = (tms_msg_db__srv__TmsdbGetData_Response *)raw_ros_message;
  {  // tmsdb
    PyObject * field = NULL;
    size_t size = ros_message->tmsdb.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    tms_msg_db__msg__Tmsdb * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tmsdb.data[i]);
      PyObject * pyitem = tms_msg_db__msg__tmsdb__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tmsdb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
