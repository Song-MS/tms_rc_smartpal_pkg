// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from tms_msg_db:srv/TmsdbPlanning.idl
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
#include "tms_msg_db/srv/tmsdb_planning__struct.h"
#include "tms_msg_db/srv/tmsdb_planning__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdb_planning__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
        "tms_msg_db.srv._tmsdb_planning.TmsdbPlanning_Request",
        full_classname_dest, 52) == 0);
  }
  tms_msg_db__srv__TmsdbPlanning_Request * ros_message = _ros_message;
  {  // robotid
    PyObject * field = PyObject_GetAttrString(_pymsg, "robotid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robotid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // objectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "objectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->objectid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdb_planning__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TmsdbPlanning_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdb_planning");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TmsdbPlanning_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__TmsdbPlanning_Request * ros_message = (tms_msg_db__srv__TmsdbPlanning_Request *)raw_ros_message;
  {  // robotid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robotid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robotid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->objectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "objectid", field);
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
// #include "tms_msg_db/srv/tmsdb_planning__struct.h"
// already included above
// #include "tms_msg_db/srv/tmsdb_planning__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool tms_msg_db__srv__tmsdb_planning__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
        "tms_msg_db.srv._tmsdb_planning.TmsdbPlanning_Response",
        full_classname_dest, 53) == 0);
  }
  tms_msg_db__srv__TmsdbPlanning_Response * ros_message = _ros_message;
  {  // robot_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robot_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robot_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // robot_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->robot_th = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wagon_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "wagon_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wagon_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wagon_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "wagon_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wagon_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wagon_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "wagon_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wagon_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wagon_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "wagon_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wagon_th = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // object_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // object_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // object_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // object_th
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_th");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->object_th = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * tms_msg_db__srv__tmsdb_planning__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TmsdbPlanning_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("tms_msg_db.srv._tmsdb_planning");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TmsdbPlanning_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  tms_msg_db__srv__TmsdbPlanning_Response * ros_message = (tms_msg_db__srv__TmsdbPlanning_Response *)raw_ros_message;
  {  // robot_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robot_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->robot_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wagon_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wagon_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wagon_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wagon_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wagon_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wagon_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wagon_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wagon_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wagon_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wagon_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wagon_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wagon_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->object_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->object_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->object_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_th
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->object_th);
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_th", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
