# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_ts:srv/TsDoTask.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TsDoTask_Request(type):
    """Metaclass of message 'TsDoTask_Request'."""

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
                'tms_msg_ts.srv.TsDoTask_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ts_do_task__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ts_do_task__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ts_do_task__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ts_do_task__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ts_do_task__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TsDoTask_Request(metaclass=Metaclass_TsDoTask_Request):
    """Message class 'TsDoTask_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TsDoTask_Response(type):
    """Metaclass of message 'TsDoTask_Response'."""

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
                'tms_msg_ts.srv.TsDoTask_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ts_do_task__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ts_do_task__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ts_do_task__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ts_do_task__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ts_do_task__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TsDoTask_Response(metaclass=Metaclass_TsDoTask_Response):
    """Message class 'TsDoTask_Response'."""

    __slots__ = [
        '_message',
    ]

    _fields_and_field_types = {
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_TsDoTask(type):
    """Metaclass of service 'TsDoTask'."""

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
                'tms_msg_ts.srv.TsDoTask')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ts_do_task

            from tms_msg_ts.srv import _ts_do_task
            if _ts_do_task.Metaclass_TsDoTask_Request._TYPE_SUPPORT is None:
                _ts_do_task.Metaclass_TsDoTask_Request.__import_type_support__()
            if _ts_do_task.Metaclass_TsDoTask_Response._TYPE_SUPPORT is None:
                _ts_do_task.Metaclass_TsDoTask_Response.__import_type_support__()


class TsDoTask(metaclass=Metaclass_TsDoTask):
    from tms_msg_ts.srv._ts_do_task import TsDoTask_Request as Request
    from tms_msg_ts.srv._ts_do_task import TsDoTask_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
