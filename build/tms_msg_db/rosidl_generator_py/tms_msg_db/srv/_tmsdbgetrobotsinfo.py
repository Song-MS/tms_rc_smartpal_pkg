# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbgetrobotsinfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbgetrobotsinfo_Request(type):
    """Metaclass of message 'Tmsdbgetrobotsinfo_Request'."""

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
                'tms_msg_db.srv.Tmsdbgetrobotsinfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetrobotsinfo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetrobotsinfo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetrobotsinfo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetrobotsinfo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetrobotsinfo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetrobotsinfo_Request(metaclass=Metaclass_Tmsdbgetrobotsinfo_Request):
    """Message class 'Tmsdbgetrobotsinfo_Request'."""

    __slots__ = [
        '_robots_id',
    ]

    _fields_and_field_types = {
        'robots_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robots_id = kwargs.get('robots_id', int())

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
        if self.robots_id != other.robots_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robots_id(self):
        """Message field 'robots_id'."""
        return self._robots_id

    @robots_id.setter
    def robots_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robots_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robots_id' field must be an unsigned integer in [0, 4294967295]"
        self._robots_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbgetrobotsinfo_Response(type):
    """Metaclass of message 'Tmsdbgetrobotsinfo_Response'."""

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
                'tms_msg_db.srv.Tmsdbgetrobotsinfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetrobotsinfo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetrobotsinfo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetrobotsinfo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetrobotsinfo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetrobotsinfo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetrobotsinfo_Response(metaclass=Metaclass_Tmsdbgetrobotsinfo_Response):
    """Message class 'Tmsdbgetrobotsinfo_Response'."""

    __slots__ = [
        '_rostime',
        '_robots_x',
        '_robots_y',
        '_robots_z',
        '_robots_theta',
        '_robots_state',
        '_robots_place',
    ]

    _fields_and_field_types = {
        'rostime': 'uint64',
        'robots_x': 'float',
        'robots_y': 'float',
        'robots_z': 'float',
        'robots_theta': 'float',
        'robots_state': 'uint32',
        'robots_place': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rostime = kwargs.get('rostime', int())
        self.robots_x = kwargs.get('robots_x', float())
        self.robots_y = kwargs.get('robots_y', float())
        self.robots_z = kwargs.get('robots_z', float())
        self.robots_theta = kwargs.get('robots_theta', float())
        self.robots_state = kwargs.get('robots_state', int())
        self.robots_place = kwargs.get('robots_place', int())

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
        if self.robots_x != other.robots_x:
            return False
        if self.robots_y != other.robots_y:
            return False
        if self.robots_z != other.robots_z:
            return False
        if self.robots_theta != other.robots_theta:
            return False
        if self.robots_state != other.robots_state:
            return False
        if self.robots_place != other.robots_place:
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

    @property
    def robots_x(self):
        """Message field 'robots_x'."""
        return self._robots_x

    @robots_x.setter
    def robots_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robots_x' field must be of type 'float'"
        self._robots_x = value

    @property
    def robots_y(self):
        """Message field 'robots_y'."""
        return self._robots_y

    @robots_y.setter
    def robots_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robots_y' field must be of type 'float'"
        self._robots_y = value

    @property
    def robots_z(self):
        """Message field 'robots_z'."""
        return self._robots_z

    @robots_z.setter
    def robots_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robots_z' field must be of type 'float'"
        self._robots_z = value

    @property
    def robots_theta(self):
        """Message field 'robots_theta'."""
        return self._robots_theta

    @robots_theta.setter
    def robots_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robots_theta' field must be of type 'float'"
        self._robots_theta = value

    @property
    def robots_state(self):
        """Message field 'robots_state'."""
        return self._robots_state

    @robots_state.setter
    def robots_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robots_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robots_state' field must be an unsigned integer in [0, 4294967295]"
        self._robots_state = value

    @property
    def robots_place(self):
        """Message field 'robots_place'."""
        return self._robots_place

    @robots_place.setter
    def robots_place(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robots_place' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robots_place' field must be an unsigned integer in [0, 4294967295]"
        self._robots_place = value


class Metaclass_Tmsdbgetrobotsinfo(type):
    """Metaclass of service 'Tmsdbgetrobotsinfo'."""

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
                'tms_msg_db.srv.Tmsdbgetrobotsinfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbgetrobotsinfo

            from tms_msg_db.srv import _tmsdbgetrobotsinfo
            if _tmsdbgetrobotsinfo.Metaclass_Tmsdbgetrobotsinfo_Request._TYPE_SUPPORT is None:
                _tmsdbgetrobotsinfo.Metaclass_Tmsdbgetrobotsinfo_Request.__import_type_support__()
            if _tmsdbgetrobotsinfo.Metaclass_Tmsdbgetrobotsinfo_Response._TYPE_SUPPORT is None:
                _tmsdbgetrobotsinfo.Metaclass_Tmsdbgetrobotsinfo_Response.__import_type_support__()


class Tmsdbgetrobotsinfo(metaclass=Metaclass_Tmsdbgetrobotsinfo):
    from tms_msg_db.srv._tmsdbgetrobotsinfo import Tmsdbgetrobotsinfo_Request as Request
    from tms_msg_db.srv._tmsdbgetrobotsinfo import Tmsdbgetrobotsinfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
