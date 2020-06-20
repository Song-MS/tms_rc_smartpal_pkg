# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbgettasklist.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbgettasklist_Request(type):
    """Metaclass of message 'Tmsdbgettasklist_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tms_msg_db')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_db.srv.Tmsdbgettasklist_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgettasklist__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgettasklist__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgettasklist__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgettasklist__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgettasklist__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgettasklist_Request(metaclass=Metaclass_Tmsdbgettasklist_Request):
    """Message class 'Tmsdbgettasklist_Request'."""

    __slots__ = [
        '_task_id',
    ]

    _fields_and_field_types = {
        'task_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_id = kwargs.get('task_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.task_id != other.task_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'task_id' field must be an unsigned integer in [0, 4294967295]"
        self._task_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbgettasklist_Response(type):
    """Metaclass of message 'Tmsdbgettasklist_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tms_msg_db')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_db.srv.Tmsdbgettasklist_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgettasklist__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgettasklist__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgettasklist__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgettasklist__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgettasklist__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgettasklist_Response(metaclass=Metaclass_Tmsdbgettasklist_Response):
    """Message class 'Tmsdbgettasklist_Response'."""

    __slots__ = [
        '_task_name',
        '_priority',
        '_time',
        '_sub_task',
        '_robot_id',
        '_sensor',
        '_robot_func',
        '_sensor_func',
    ]

    _fields_and_field_types = {
        'task_name': 'string',
        'priority': 'uint32',
        'time': 'uint64',
        'sub_task': 'string',
        'robot_id': 'uint32',
        'sensor': 'string',
        'robot_func': 'string',
        'sensor_func': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task_name = kwargs.get('task_name', str())
        self.priority = kwargs.get('priority', int())
        self.time = kwargs.get('time', int())
        self.sub_task = kwargs.get('sub_task', str())
        self.robot_id = kwargs.get('robot_id', int())
        self.sensor = kwargs.get('sensor', str())
        self.robot_func = kwargs.get('robot_func', str())
        self.sensor_func = kwargs.get('sensor_func', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.task_name != other.task_name:
            return False
        if self.priority != other.priority:
            return False
        if self.time != other.time:
            return False
        if self.sub_task != other.sub_task:
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.sensor != other.sensor:
            return False
        if self.robot_func != other.robot_func:
            return False
        if self.sensor_func != other.sensor_func:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def task_name(self):
        """Message field 'task_name'."""
        return self._task_name

    @task_name.setter
    def task_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_name' field must be of type 'str'"
        self._task_name = value

    @property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'priority' field must be an unsigned integer in [0, 4294967295]"
        self._priority = value

    @property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._time = value

    @property
    def sub_task(self):
        """Message field 'sub_task'."""
        return self._sub_task

    @sub_task.setter
    def sub_task(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sub_task' field must be of type 'str'"
        self._sub_task = value

    @property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robot_id' field must be an unsigned integer in [0, 4294967295]"
        self._robot_id = value

    @property
    def sensor(self):
        """Message field 'sensor'."""
        return self._sensor

    @sensor.setter
    def sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor' field must be of type 'str'"
        self._sensor = value

    @property
    def robot_func(self):
        """Message field 'robot_func'."""
        return self._robot_func

    @robot_func.setter
    def robot_func(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_func' field must be of type 'str'"
        self._robot_func = value

    @property
    def sensor_func(self):
        """Message field 'sensor_func'."""
        return self._sensor_func

    @sensor_func.setter
    def sensor_func(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_func' field must be of type 'str'"
        self._sensor_func = value


class Metaclass_Tmsdbgettasklist(type):
    """Metaclass of service 'Tmsdbgettasklist'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tms_msg_db')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_db.srv.Tmsdbgettasklist')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbgettasklist

            from tms_msg_db.srv import _tmsdbgettasklist
            if _tmsdbgettasklist.Metaclass_Tmsdbgettasklist_Request._TYPE_SUPPORT is None:
                _tmsdbgettasklist.Metaclass_Tmsdbgettasklist_Request.__import_type_support__()
            if _tmsdbgettasklist.Metaclass_Tmsdbgettasklist_Response._TYPE_SUPPORT is None:
                _tmsdbgettasklist.Metaclass_Tmsdbgettasklist_Response.__import_type_support__()


class Tmsdbgettasklist(metaclass=Metaclass_Tmsdbgettasklist):
    from tms_msg_db.srv._tmsdbgettasklist import Tmsdbgettasklist_Request as Request
    from tms_msg_db.srv._tmsdbgettasklist import Tmsdbgettasklist_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
