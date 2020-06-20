# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbgetmovablefurnituresinfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbgetmovablefurnituresinfo_Request(type):
    """Metaclass of message 'Tmsdbgetmovablefurnituresinfo_Request'."""

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
                'tms_msg_db.srv.Tmsdbgetmovablefurnituresinfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetmovablefurnituresinfo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetmovablefurnituresinfo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetmovablefurnituresinfo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetmovablefurnituresinfo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetmovablefurnituresinfo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetmovablefurnituresinfo_Request(metaclass=Metaclass_Tmsdbgetmovablefurnituresinfo_Request):
    """Message class 'Tmsdbgetmovablefurnituresinfo_Request'."""

    __slots__ = [
        '_furnitures_id',
    ]

    _fields_and_field_types = {
        'furnitures_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.furnitures_id = kwargs.get('furnitures_id', int())

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
        if self.furnitures_id != other.furnitures_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def furnitures_id(self):
        """Message field 'furnitures_id'."""
        return self._furnitures_id

    @furnitures_id.setter
    def furnitures_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'furnitures_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'furnitures_id' field must be an unsigned integer in [0, 4294967295]"
        self._furnitures_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbgetmovablefurnituresinfo_Response(type):
    """Metaclass of message 'Tmsdbgetmovablefurnituresinfo_Response'."""

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
                'tms_msg_db.srv.Tmsdbgetmovablefurnituresinfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetmovablefurnituresinfo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetmovablefurnituresinfo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetmovablefurnituresinfo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetmovablefurnituresinfo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetmovablefurnituresinfo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetmovablefurnituresinfo_Response(metaclass=Metaclass_Tmsdbgetmovablefurnituresinfo_Response):
    """Message class 'Tmsdbgetmovablefurnituresinfo_Response'."""

    __slots__ = [
        '_rostime',
        '_furniture_x',
        '_furniture_y',
        '_furniture_z',
        '_furnitures_theta',
        '_furnitures_width',
        '_furnitures_depth',
        '_furnitures_height',
        '_furnitures_state',
        '_furnitures_place',
    ]

    _fields_and_field_types = {
        'rostime': 'uint64',
        'furniture_x': 'float',
        'furniture_y': 'float',
        'furniture_z': 'float',
        'furnitures_theta': 'float',
        'furnitures_width': 'float',
        'furnitures_depth': 'float',
        'furnitures_height': 'float',
        'furnitures_state': 'uint32',
        'furnitures_place': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.furniture_x = kwargs.get('furniture_x', float())
        self.furniture_y = kwargs.get('furniture_y', float())
        self.furniture_z = kwargs.get('furniture_z', float())
        self.furnitures_theta = kwargs.get('furnitures_theta', float())
        self.furnitures_width = kwargs.get('furnitures_width', float())
        self.furnitures_depth = kwargs.get('furnitures_depth', float())
        self.furnitures_height = kwargs.get('furnitures_height', float())
        self.furnitures_state = kwargs.get('furnitures_state', int())
        self.furnitures_place = kwargs.get('furnitures_place', int())

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
        if self.furniture_x != other.furniture_x:
            return False
        if self.furniture_y != other.furniture_y:
            return False
        if self.furniture_z != other.furniture_z:
            return False
        if self.furnitures_theta != other.furnitures_theta:
            return False
        if self.furnitures_width != other.furnitures_width:
            return False
        if self.furnitures_depth != other.furnitures_depth:
            return False
        if self.furnitures_height != other.furnitures_height:
            return False
        if self.furnitures_state != other.furnitures_state:
            return False
        if self.furnitures_place != other.furnitures_place:
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
    def furniture_x(self):
        """Message field 'furniture_x'."""
        return self._furniture_x

    @furniture_x.setter
    def furniture_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'furniture_x' field must be of type 'float'"
        self._furniture_x = value

    @property
    def furniture_y(self):
        """Message field 'furniture_y'."""
        return self._furniture_y

    @furniture_y.setter
    def furniture_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'furniture_y' field must be of type 'float'"
        self._furniture_y = value

    @property
    def furniture_z(self):
        """Message field 'furniture_z'."""
        return self._furniture_z

    @furniture_z.setter
    def furniture_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'furniture_z' field must be of type 'float'"
        self._furniture_z = value

    @property
    def furnitures_theta(self):
        """Message field 'furnitures_theta'."""
        return self._furnitures_theta

    @furnitures_theta.setter
    def furnitures_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'furnitures_theta' field must be of type 'float'"
        self._furnitures_theta = value

    @property
    def furnitures_width(self):
        """Message field 'furnitures_width'."""
        return self._furnitures_width

    @furnitures_width.setter
    def furnitures_width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'furnitures_width' field must be of type 'float'"
        self._furnitures_width = value

    @property
    def furnitures_depth(self):
        """Message field 'furnitures_depth'."""
        return self._furnitures_depth

    @furnitures_depth.setter
    def furnitures_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'furnitures_depth' field must be of type 'float'"
        self._furnitures_depth = value

    @property
    def furnitures_height(self):
        """Message field 'furnitures_height'."""
        return self._furnitures_height

    @furnitures_height.setter
    def furnitures_height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'furnitures_height' field must be of type 'float'"
        self._furnitures_height = value

    @property
    def furnitures_state(self):
        """Message field 'furnitures_state'."""
        return self._furnitures_state

    @furnitures_state.setter
    def furnitures_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'furnitures_state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'furnitures_state' field must be an unsigned integer in [0, 4294967295]"
        self._furnitures_state = value

    @property
    def furnitures_place(self):
        """Message field 'furnitures_place'."""
        return self._furnitures_place

    @furnitures_place.setter
    def furnitures_place(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'furnitures_place' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'furnitures_place' field must be an unsigned integer in [0, 4294967295]"
        self._furnitures_place = value


class Metaclass_Tmsdbgetmovablefurnituresinfo(type):
    """Metaclass of service 'Tmsdbgetmovablefurnituresinfo'."""

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
                'tms_msg_db.srv.Tmsdbgetmovablefurnituresinfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbgetmovablefurnituresinfo

            from tms_msg_db.srv import _tmsdbgetmovablefurnituresinfo
            if _tmsdbgetmovablefurnituresinfo.Metaclass_Tmsdbgetmovablefurnituresinfo_Request._TYPE_SUPPORT is None:
                _tmsdbgetmovablefurnituresinfo.Metaclass_Tmsdbgetmovablefurnituresinfo_Request.__import_type_support__()
            if _tmsdbgetmovablefurnituresinfo.Metaclass_Tmsdbgetmovablefurnituresinfo_Response._TYPE_SUPPORT is None:
                _tmsdbgetmovablefurnituresinfo.Metaclass_Tmsdbgetmovablefurnituresinfo_Response.__import_type_support__()


class Tmsdbgetmovablefurnituresinfo(metaclass=Metaclass_Tmsdbgetmovablefurnituresinfo):
    from tms_msg_db.srv._tmsdbgetmovablefurnituresinfo import Tmsdbgetmovablefurnituresinfo_Request as Request
    from tms_msg_db.srv._tmsdbgetmovablefurnituresinfo import Tmsdbgetmovablefurnituresinfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
