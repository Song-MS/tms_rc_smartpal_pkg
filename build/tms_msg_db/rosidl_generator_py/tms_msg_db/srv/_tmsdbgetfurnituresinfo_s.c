// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tms_msg_db:srv/Tmsdbgetfurnituresinfo.idl
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
#include "tms_msg_db/srv/tmsdbgetfurnituresinfo__struct.h"
#include "tms_msg_db/srv/tmsdbgetfurnituresinfo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdbgetfurnituresinfo__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
        "tms_msg_db.srv._tmsdbgetfurnituresinfo.Tmsdbgetfurnituresinfo_Request",
        full_classname_dest, 69) == 0);
  }
  tms_msg_db__srv__Tmsdbgetfurnituresinfo_Request * ros_message = _ros_message;
  {  // furnitures_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "furnitures_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->furnitures_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdbgetfurnituresinfo__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Tmsdbgetfurnituresinfo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdbgetfurnituresinfo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Tmsdbgetfurnituresinfo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__Tmsdbgetfurnituresinfo_Request * ros_message = (tms_msg_db__srv__Tmsdbgetfurnituresinfo_Request *)raw_ros_message;
  {  // furnitures_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->furnitures_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furnitures_id", field);
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
// #include "tms_msg_db/srv/tmsdbgetfurnituresinfo__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetfurnituresinfo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdbgetfurnituresinfo__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
        "tms_msg_db.srv._tmsdbgetfurnituresinfo.Tmsdbgetfurnituresinfo_Response",
        full_classname_dest, 70) == 0);
  }
  tms_msg_db__srv__Tmsdbgetfurnituresinfo_Response * ros_message = _ros_message;
  {  // furniture_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "furniture_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->furniture_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // furniture_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "furniture_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->furniture_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // furniture_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "furniture_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->furniture_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdbgetfurnituresinfo__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Tmsdbgetfurnituresinfo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdbgetfurnituresinfo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Tmsdbgetfurnituresinfo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__Tmsdbgetfurnituresinfo_Response * ros_message = (tms_msg_db__srv__Tmsdbgetfurnituresinfo_Response *)raw_ros_message;
  {  // furniture_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->furniture_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furniture_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // furniture_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->furniture_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furniture_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // furniture_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->furniture_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furniture_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
