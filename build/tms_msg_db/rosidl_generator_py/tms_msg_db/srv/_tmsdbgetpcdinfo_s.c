// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tms_msg_db:srv/Tmsdbgetpcdinfo.idl
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
#include "tms_msg_db/srv/tmsdbgetpcdinfo__struct.h"
#include "tms_msg_db/srv/tmsdbgetpcdinfo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdbgetpcdinfo__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
        "tms_msg_db.srv._tmsdbgetpcdinfo.Tmsdbgetpcdinfo_Request",
        full_classname_dest, 55) == 0);
  }
  tms_msg_db__srv__Tmsdbgetpcdinfo_Request * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdbgetpcdinfo__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Tmsdbgetpcdinfo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdbgetpcdinfo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Tmsdbgetpcdinfo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__Tmsdbgetpcdinfo_Request * ros_message = (tms_msg_db__srv__Tmsdbgetpcdinfo_Request *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
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
// #include "tms_msg_db/srv/tmsdbgetpcdinfo__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetpcdinfo__functions.h"

#include "rosidl_generator_c/string.h"
#include "rosidl_generator_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdbgetpcdinfo__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
        "tms_msg_db.srv._tmsdbgetpcdinfo.Tmsdbgetpcdinfo_Response",
        full_classname_dest, 56) == 0);
  }
  tms_msg_db__srv__Tmsdbgetpcdinfo_Response * ros_message = _ros_message;
  {  // rostime
    PyObject * field = PyObject_GetAttrString(_pymsg, "rostime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rostime = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // pcd_file
    PyObject * field = PyObject_GetAttrString(_pymsg, "pcd_file");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_generator_c__String__assign(&ros_message->pcd_file, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // cloud
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // get_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "get_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->get_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // get_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "get_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->get_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // get_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "get_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->get_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // get_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "get_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->get_theta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdbgetpcdinfo__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Tmsdbgetpcdinfo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdbgetpcdinfo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Tmsdbgetpcdinfo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__Tmsdbgetpcdinfo_Response * ros_message = (tms_msg_db__srv__Tmsdbgetpcdinfo_Response *)raw_ros_message;
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
  {  // pcd_file
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->pcd_file.data,
      strlen(ros_message->pcd_file.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pcd_file", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // get_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->get_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "get_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // get_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->get_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "get_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // get_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->get_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "get_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // get_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->get_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "get_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
