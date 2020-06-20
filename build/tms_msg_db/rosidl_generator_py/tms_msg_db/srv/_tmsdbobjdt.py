# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbobjdt.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbobjdt_Request(type):
    """Metaclass of message 'Tmsdbobjdt_Request'."""

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
                'tms_msg_db.srv.Tmsdbobjdt_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbobjdt__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbobjdt__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbobjdt__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbobjdt__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbobjdt__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbobjdt_Request(metaclass=Metaclass_Tmsdbobjdt_Request):
    """Message class 'Tmsdbobjdt_Request'."""

    __slots__ = [
        '_furniture_id',
    ]

    _fields_and_field_types = {
        'furniture_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.furniture_id = kwargs.get('furniture_id', int())

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
        if self.furniture_id != other.furniture_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def furniture_id(self):
        """Message field 'furniture_id'."""
        return self._furniture_id

    @furniture_id.setter
    def furniture_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'furniture_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'furniture_id' field must be an unsigned integer in [0, 4294967295]"
        self._furniture_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbobjdt_Response(type):
    """Metaclass of message 'Tmsdbobjdt_Response'."""

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
                'tms_msg_db.srv.Tmsdbobjdt_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbobjdt__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbobjdt__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbobjdt__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbobjdt__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbobjdt__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbobjdt_Response(metaclass=Metaclass_Tmsdbobjdt_Response):
    """Message class 'Tmsdbobjdt_Response'."""

    __slots__ = [
        '_furniture_x',
        '_furniture_y',
    ]

    _fields_and_field_types = {
        'furniture_x': 'float',
        'furniture_y': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.furniture_x = kwargs.get('furniture_x', float())
        self.furniture_y = kwargs.get('furniture_y', float())

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
        if self.furniture_x != other.furniture_x:
            return False
        if self.furniture_y != other.furniture_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


class Metaclass_Tmsdbobjdt(type):
    """Metaclass of service 'Tmsdbobjdt'."""

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
                'tms_msg_db.srv.Tmsdbobjdt')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbobjdt

            from tms_msg_db.srv import _tmsdbobjdt
            if _tmsdbobjdt.Metaclass_Tmsdbobjdt_Request._TYPE_SUPPORT is None:
                _tmsdbobjdt.Metaclass_Tmsdbobjdt_Request.__import_type_support__()
            if _tmsdbobjdt.Metaclass_Tmsdbobjdt_Response._TYPE_SUPPORT is None:
                _tmsdbobjdt.Metaclass_Tmsdbobjdt_Response.__import_type_support__()


class Tmsdbobjdt(metaclass=Metaclass_Tmsdbobjdt):
    from tms_msg_db.srv._tmsdbobjdt import Tmsdbobjdt_Request as Request
    from tms_msg_db.srv._tmsdbobjdt import Tmsdbobjdt_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
