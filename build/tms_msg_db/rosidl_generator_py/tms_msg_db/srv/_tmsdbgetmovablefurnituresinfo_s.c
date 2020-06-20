// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tms_msg_db:srv/Tmsdbgetmovablefurnituresinfo.idl
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
#include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__struct.h"
#include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[84];
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
        "tms_msg_db.srv._tmsdbgetmovablefurnituresinfo.Tmsdbgetmovablefurnituresinfo_Request",
        full_classname_dest, 83) == 0);
  }
  tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request * ros_message = _ros_message;
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
PyObject * tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Tmsdbgetmovablefurnituresinfo_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdbgetmovablefurnituresinfo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Tmsdbgetmovablefurnituresinfo_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request * ros_message = (tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Request *)raw_ros_message;
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
// #include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdbgetmovablefurnituresinfo__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[85];
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
        "tms_msg_db.srv._tmsdbgetmovablefurnituresinfo.Tmsdbgetmovablefurnituresinfo_Response",
        full_classname_dest, 84) == 0);
  }
  tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response * ros_message = _ros_message;
  {  // rostime
    PyObject * field = PyObject_GetAttrString(_pymsg, "rostime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rostime = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
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
  {  // furnitures_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "furnitures_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->furnitures_theta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // furnitures_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "furnitures_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->furnitures_width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // furnitures_depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "furnitures_depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->furnitures_depth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // furnitures_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "furnitures_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->furnitures_height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // furnitures_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "furnitures_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->furnitures_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // furnitures_place
    PyObject * field = PyObject_GetAttrString(_pymsg, "furnitures_place");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->furnitures_place = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdbgetmovablefurnituresinfo__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Tmsdbgetmovablefurnituresinfo_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdbgetmovablefurnituresinfo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Tmsdbgetmovablefurnituresinfo_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response * ros_message = (tms_msg_db__srv__Tmsdbgetmovablefurnituresinfo_Response *)raw_ros_message;
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
  {  // furnitures_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->furnitures_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furnitures_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // furnitures_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->furnitures_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furnitures_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // furnitures_depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->furnitures_depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furnitures_depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // furnitures_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->furnitures_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furnitures_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // furnitures_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->furnitures_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furnitures_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // furnitures_place
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->furnitures_place);
    {
      int rc = PyObject_SetAttrString(_pymessage, "furnitures_place", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
