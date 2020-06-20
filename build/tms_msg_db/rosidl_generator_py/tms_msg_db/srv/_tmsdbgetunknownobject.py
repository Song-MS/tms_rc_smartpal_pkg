# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbgetunknownobject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbgetunknownobject_Request(type):
    """Metaclass of message 'Tmsdbgetunknownobject_Request'."""

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
                'tms_msg_db.srv.Tmsdbgetunknownobject_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetunknownobject__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetunknownobject__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetunknownobject__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetunknownobject__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetunknownobject__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetunknownobject_Request(metaclass=Metaclass_Tmsdbgetunknownobject_Request):
    """Message class 'Tmsdbgetunknownobject_Request'."""

    __slots__ = [
        '_unknown_object_id',
    ]

    _fields_and_field_types = {
        'unknown_object_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.unknown_object_id = kwargs.get('unknown_object_id', int())

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
        if self.unknown_object_id != other.unknown_object_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def unknown_object_id(self):
        """Message field 'unknown_object_id'."""
        return self._unknown_object_id

    @unknown_object_id.setter
    def unknown_object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'unknown_object_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'unknown_object_id' field must be an unsigned integer in [0, 4294967295]"
        self._unknown_object_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbgetunknownobject_Response(type):
    """Metaclass of message 'Tmsdbgetunknownobject_Response'."""

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
                'tms_msg_db.srv.Tmsdbgetunknownobject_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetunknownobject__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetunknownobject__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetunknownobject__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetunknownobject__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetunknownobject__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetunknownobject_Response(metaclass=Metaclass_Tmsdbgetunknownobject_Response):
    """Message class 'Tmsdbgetunknownobject_Response'."""

    __slots__ = [
        '_unknown_object_x',
        '_unknown_object_y',
        '_unknown_object_z',
    ]

    _fields_and_field_types = {
        'unknown_object_x': 'float',
        'unknown_object_y': 'float',
        'unknown_object_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.unknown_object_x = kwargs.get('unknown_object_x', float())
        self.unknown_object_y = kwargs.get('unknown_object_y', float())
        self.unknown_object_z = kwargs.get('unknown_object_z', float())

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
        if self.unknown_object_x != other.unknown_object_x:
            return False
        if self.unknown_object_y != other.unknown_object_y:
            return False
        if self.unknown_object_z != other.unknown_object_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def unknown_object_x(self):
        """Message field 'unknown_object_x'."""
        return self._unknown_object_x

    @unknown_object_x.setter
    def unknown_object_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'unknown_object_x' field must be of type 'float'"
        self._unknown_object_x = value

    @property
    def unknown_object_y(self):
        """Message field 'unknown_object_y'."""
        return self._unknown_object_y

    @unknown_object_y.setter
    def unknown_object_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'unknown_object_y' field must be of type 'float'"
        self._unknown_object_y = value

    @property
    def unknown_object_z(self):
        """Message field 'unknown_object_z'."""
        return self._unknown_object_z

    @unknown_object_z.setter
    def unknown_object_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'unknown_object_z' field must be of type 'float'"
        self._unknown_object_z = value


class Metaclass_Tmsdbgetunknownobject(type):
    """Metaclass of service 'Tmsdbgetunknownobject'."""

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
                'tms_msg_db.srv.Tmsdbgetunknownobject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbgetunknownobject

            from tms_msg_db.srv import _tmsdbgetunknownobject
            if _tmsdbgetunknownobject.Metaclass_Tmsdbgetunknownobject_Request._TYPE_SUPPORT is None:
                _tmsdbgetunknownobject.Metaclass_Tmsdbgetunknownobject_Request.__import_type_support__()
            if _tmsdbgetunknownobject.Metaclass_Tmsdbgetunknownobject_Response._TYPE_SUPPORT is None:
                _tmsdbgetunknownobject.Metaclass_Tmsdbgetunknownobject_Response.__import_type_support__()


class Tmsdbgetunknownobject(metaclass=Metaclass_Tmsdbgetunknownobject):
    from tms_msg_db.srv._tmsdbgetunknownobject import Tmsdbgetunknownobject_Request as Request
    from tms_msg_db.srv._tmsdbgetunknownobject import Tmsdbgetunknownobject_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
