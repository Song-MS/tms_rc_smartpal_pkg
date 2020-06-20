// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tms_msg_db:srv/Tmsdbgetrobotsinfo.idl
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
#include "tms_msg_db/srv/tmsdbgetrobotsinfo__struct.h"
#include "tms_msg_db/srv/tmsdbgetrobotsinfo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdbgetrobotsinfo__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
        "tms_msg_db.srv._tmsdbgetrobotsinfo.Tmsdbgetrobotsinfo_Request",
        full_classname_dest, 61) == 0);
  }
  tms_msg_db__srv__Tmsdbgetrobotsinfo_Request * ros_message = _ros_message;
  {  // robots_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robots_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdbgetrobotsinfo__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Tmsdbgetrobotsinfo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdbgetrobotsinfo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Tmsdbgetrobotsinfo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__Tmsdbgetrobotsinfo_Request * ros_message = (tms_msg_db__srv__Tmsdbgetrobotsinfo_Request *)raw_ros_message;
  {  // robots_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robots_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_id", field);
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
// #include "tms_msg_db/srv/tmsdbgetrobotsinfo__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetrobotsinfo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdbgetrobotsinfo__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
        "tms_msg_db.srv._tmsdbgetrobotsinfo.Tmsdbgetrobotsinfo_Response",
        full_classname_dest, 62) == 0);
  }
  tms_msg_db__srv__Tmsdbgetrobotsinfo_Response * ros_message = _ros_message;
  {  // rostime
    PyObject * field = PyObject_GetAttrString(_pymsg, "rostime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rostime = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // robots_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robots_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robots_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robots_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robots_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robots_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robots_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robots_theta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robots_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robots_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robots_place
    PyObject * field = PyObject_GetAttrString(_pymsg, "robots_place");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robots_place = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdbgetrobotsinfo__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Tmsdbgetrobotsinfo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdbgetrobotsinfo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Tmsdbgetrobotsinfo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__Tmsdbgetrobotsinfo_Response * ros_message = (tms_msg_db__srv__Tmsdbgetrobotsinfo_Response *)raw_ros_message;
  {  // rostime
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->rostime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rostime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robots_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robots_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robots_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robots_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robots_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robots_place
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robots_place);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robots_place", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
