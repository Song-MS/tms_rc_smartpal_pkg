# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_rc:srv/TurtlebotControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'arg'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TurtlebotControl_Request(type):
    """Metaclass of message 'TurtlebotControl_Request'."""

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
            module = import_type_support('tms_msg_rc')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_rc.srv.TurtlebotControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__turtlebot_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__turtlebot_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__turtlebot_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__turtlebot_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__turtlebot_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtlebotControl_Request(metaclass=Metaclass_TurtlebotControl_Request):
    """Message class 'TurtlebotControl_Request'."""

    __slots__ = [
        '_unit',
        '_cmd',
        '_arg',
    ]

    _fields_and_field_types = {
        'unit': 'int8',
        'cmd': 'int8',
        'arg': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.unit = kwargs.get('unit', int())
        self.cmd = kwargs.get('cmd', int())
        self.arg = array.array('d', kwargs.get('arg', []))

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
        if self.unit != other.unit:
            return False
        if self.cmd != other.cmd:
            return False
        if self.arg != other.arg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'unit' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'unit' field must be an integer in [-128, 127]"
        self._unit = value

    @property
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cmd' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'cmd' field must be an integer in [-128, 127]"
        self._cmd = value

    @property
    def arg(self):
        """Message field 'arg'."""
        return self._arg

    @arg.setter
    def arg(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'arg' array.array() must have the type code of 'd'"
            self._arg = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'arg' field must be a set or sequence and each value of type 'float'"
        self._arg = array.array('d', value)


# Import statements for member types

# Member 'val'
# already imported above
# import array

# already imported above
# import rosidl_parser.definition


class Metaclass_TurtlebotControl_Response(type):
    """Metaclass of message 'TurtlebotControl_Response'."""

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
            module = import_type_support('tms_msg_rc')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_rc.srv.TurtlebotControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__turtlebot_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__turtlebot_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__turtlebot_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__turtlebot_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__turtlebot_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TurtlebotControl_Response(metaclass=Metaclass_TurtlebotControl_Response):
    """Message class 'TurtlebotControl_Response'."""

    __slots__ = [
        '_result',
        '_val',
    ]

    _fields_and_field_types = {
        'result': 'int8',
        'val': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
        self.val = array.array('d', kwargs.get('val', []))

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
        if self.result != other.result:
            return False
        if self.val != other.val:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'result' field must be an integer in [-128, 127]"
        self._result = value

    @property
    def val(self):
        """Message field 'val'."""
        return self._val

    @val.setter
    def val(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'val' array.array() must have the type code of 'd'"
            self._val = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'val' field must be a set or sequence and each value of type 'float'"
        self._val = array.array('d', value)


class Metaclass_TurtlebotControl(type):
    """Metaclass of service 'TurtlebotControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tms_msg_rc')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_rc.srv.TurtlebotControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__turtlebot_control

            from tms_msg_rc.srv import _turtlebot_control
            if _turtlebot_control.Metaclass_TurtlebotControl_Request._TYPE_SUPPORT is None:
                _turtlebot_control.Metaclass_TurtlebotControl_Request.__import_type_support__()
            if _turtlebot_control.Metaclass_TurtlebotControl_Response._TYPE_SUPPORT is None:
                _turtlebot_control.Metaclass_TurtlebotControl_Response.__import_type_support__()


class TurtlebotControl(metaclass=Metaclass_TurtlebotControl):
    from tms_msg_rc.srv._turtlebot_control import TurtlebotControl_Request as Request
    from tms_msg_rc.srv._turtlebot_control import TurtlebotControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
