# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_ts:srv/TsStateControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TsStateControl_Request(type):
    """Metaclass of message 'TsStateControl_Request'."""

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
            module = import_type_support('tms_msg_ts')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_ts.srv.TsStateControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ts_state_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ts_state_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ts_state_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ts_state_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ts_state_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TsStateControl_Request(metaclass=Metaclass_TsStateControl_Request):
    """Message class 'TsStateControl_Request'."""

    __slots__ = [
        '_rostime',
        '_type',
        '_state',
        '_cc_subtasks',
        '_error_msg',
    ]

    _fields_and_field_types = {
        'rostime': 'uint64',
        'type': 'int32',
        'state': 'int32',
        'cc_subtasks': 'int32',
        'error_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rostime = kwargs.get('rostime', int())
        self.type = kwargs.get('type', int())
        self.state = kwargs.get('state', int())
        self.cc_subtasks = kwargs.get('cc_subtasks', int())
        self.error_msg = kwargs.get('error_msg', str())

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
        if self.rostime != other.rostime:
            return False
        if self.type != other.type:
            return False
        if self.state != other.state:
            return False
        if self.cc_subtasks != other.cc_subtasks:
            return False
        if self.error_msg != other.error_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rostime(self):
        """Message field 'rostime'."""
        return self._rostime

    @rostime.setter
    def rostime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rostime' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rostime' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rostime = value

    @property  # noqa: A003
    def type(self):
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'type' field must be an integer in [-2147483648, 2147483647]"
        self._type = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state' field must be an integer in [-2147483648, 2147483647]"
        self._state = value

    @property
    def cc_subtasks(self):
        """Message field 'cc_subtasks'."""
        return self._cc_subtasks

    @cc_subtasks.setter
    def cc_subtasks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cc_subtasks' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cc_subtasks' field must be an integer in [-2147483648, 2147483647]"
        self._cc_subtasks = value

    @property
    def error_msg(self):
        """Message field 'error_msg'."""
        return self._error_msg

    @error_msg.setter
    def error_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_msg' field must be of type 'str'"
        self._error_msg = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TsStateControl_Response(type):
    """Metaclass of message 'TsStateControl_Response'."""

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
            module = import_type_support('tms_msg_ts')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_ts.srv.TsStateControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ts_state_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ts_state_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ts_state_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ts_state_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ts_state_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TsStateControl_Response(metaclass=Metaclass_TsStateControl_Response):
    """Message class 'TsStateControl_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'result' field must be an integer in [-2147483648, 2147483647]"
        self._result = value


class Metaclass_TsStateControl(type):
    """Metaclass of service 'TsStateControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tms_msg_ts')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_ts.srv.TsStateControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ts_state_control

            from tms_msg_ts.srv import _ts_state_control
            if _ts_state_control.Metaclass_TsStateControl_Request._TYPE_SUPPORT is None:
                _ts_state_control.Metaclass_TsStateControl_Request.__import_type_support__()
            if _ts_state_control.Metaclass_TsStateControl_Response._TYPE_SUPPORT is None:
                _ts_state_control.Metaclass_TsStateControl_Response.__import_type_support__()


class TsStateControl(metaclass=Metaclass_TsStateControl):
    from tms_msg_ts.srv._ts_state_control import TsStateControl_Request as Request
    from tms_msg_ts.srv._ts_state_control import TsStateControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
