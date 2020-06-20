// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from object_recognition_msgs:srv/GetObjectInformation.idl
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
#include "object_recognition_msgs/srv/get_object_information__struct.h"
#include "object_recognition_msgs/srv/get_object_information__functions.h"

bool object_recognition_msgs__msg__object_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * object_recognition_msgs__msg__object_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool object_recognition_msgs__srv__get_object_information__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[81];
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
        "object_recognition_msgs.srv._get_object_information.GetObjectInformation_Request",
        full_classname_dest, 80) == 0);
  }
  object_recognition_msgs__srv__GetObjectInformation_Request * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    if (!object_recognition_msgs__msg__object_type__convert_from_py(field, &ros_message->type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * object_recognition_msgs__srv__get_object_information__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetObjectInformation_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("object_recognition_msgs.srv._get_object_information");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetObjectInformation_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  object_recognition_msgs__srv__GetObjectInformation_Request * ros_message = (object_recognition_msgs__srv__GetObjectInformation_Request *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = object_recognition_msgs__msg__object_type__convert_to_py(&ros_message->type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
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
// #include "object_recognition_msgs/srv/get_object_information__struct.h"
// already included above
// #include "object_recognition_msgs/srv/get_object_information__functions.h"

bool object_recognition_msgs__msg__object_information__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * object_recognition_msgs__msg__object_information__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool object_recognition_msgs__srv__get_object_information__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[82];
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
        "object_recognition_msgs.srv._get_object_information.GetObjectInformation_Response",
        full_classname_dest, 81) == 0);
  }
  object_recognition_msgs__srv__GetObjectInformation_Response * ros_message = _ros_message;
  {  // information
    PyObject * field = PyObject_GetAttrString(_pymsg, "information");
    if (!field) {
      return false;
    }
    if (!object_recognition_msgs__msg__object_information__convert_from_py(field, &ros_message->information)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * object_recognition_msgs__srv__get_object_information__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetObjectInformation_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("object_recognition_msgs.srv._get_object_information");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetObjectInformation_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  object_recognition_msgs__srv__GetObjectInformation_Response * ros_message = (object_recognition_msgs__srv__GetObjectInformation_Response *)raw_ros_message;
  {  // information
    PyObject * field = NULL;
    field = object_recognition_msgs__msg__object_information__convert_to_py(&ros_message->information);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "information", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
