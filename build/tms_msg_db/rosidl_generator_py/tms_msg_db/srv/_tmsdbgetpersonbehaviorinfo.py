# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbgetpersonbehaviorinfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbgetpersonbehaviorinfo_Request(type):
    """Metaclass of message 'Tmsdbgetpersonbehaviorinfo_Request'."""

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
                'tms_msg_db.srv.Tmsdbgetpersonbehaviorinfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetpersonbehaviorinfo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetpersonbehaviorinfo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetpersonbehaviorinfo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetpersonbehaviorinfo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetpersonbehaviorinfo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetpersonbehaviorinfo_Request(metaclass=Metaclass_Tmsdbgetpersonbehaviorinfo_Request):
    """Message class 'Tmsdbgetpersonbehaviorinfo_Request'."""

    __slots__ = [
        '_rostime',
    ]

    _fields_and_field_types = {
        'rostime': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rostime = kwargs.get('rostime', int())

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbgetpersonbehaviorinfo_Response(type):
    """Metaclass of message 'Tmsdbgetpersonbehaviorinfo_Response'."""

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
                'tms_msg_db.srv.Tmsdbgetpersonbehaviorinfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetpersonbehaviorinfo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetpersonbehaviorinfo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetpersonbehaviorinfo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetpersonbehaviorinfo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetpersonbehaviorinfo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetpersonbehaviorinfo_Response(metaclass=Metaclass_Tmsdbgetpersonbehaviorinfo_Response):
    """Message class 'Tmsdbgetpersonbehaviorinfo_Response'."""

    __slots__ = [
        '_id',
        '_behavior',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
        'behavior': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.behavior = kwargs.get('behavior', int())

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
        if self.id != other.id:
            return False
        if self.behavior != other.behavior:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @property
    def behavior(self):
        """Message field 'behavior'."""
        return self._behavior

    @behavior.setter
    def behavior(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'behavior' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'behavior' field must be an unsigned integer in [0, 4294967295]"
        self._behavior = value


class Metaclass_Tmsdbgetpersonbehaviorinfo(type):
    """Metaclass of service 'Tmsdbgetpersonbehaviorinfo'."""

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
                'tms_msg_db.srv.Tmsdbgetpersonbehaviorinfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbgetpersonbehaviorinfo

            from tms_msg_db.srv import _tmsdbgetpersonbehaviorinfo
            if _tmsdbgetpersonbehaviorinfo.Metaclass_Tmsdbgetpersonbehaviorinfo_Request._TYPE_SUPPORT is None:
                _tmsdbgetpersonbehaviorinfo.Metaclass_Tmsdbgetpersonbehaviorinfo_Request.__import_type_support__()
            if _tmsdbgetpersonbehaviorinfo.Metaclass_Tmsdbgetpersonbehaviorinfo_Response._TYPE_SUPPORT is None:
                _tmsdbgetpersonbehaviorinfo.Metaclass_Tmsdbgetpersonbehaviorinfo_Response.__import_type_support__()


class Tmsdbgetpersonbehaviorinfo(metaclass=Metaclass_Tmsdbgetpersonbehaviorinfo):
    from tms_msg_db.srv._tmsdbgetpersonbehaviorinfo import Tmsdbgetpersonbehaviorinfo_Request as Request
    from tms_msg_db.srv._tmsdbgetpersonbehaviorinfo import Tmsdbgetpersonbehaviorinfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
