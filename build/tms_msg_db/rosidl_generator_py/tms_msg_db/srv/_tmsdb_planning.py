# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/TmsdbPlanning.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TmsdbPlanning_Request(type):
    """Metaclass of message 'TmsdbPlanning_Request'."""

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
                'tms_msg_db.srv.TmsdbPlanning_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdb_planning__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdb_planning__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdb_planning__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdb_planning__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdb_planning__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TmsdbPlanning_Request(metaclass=Metaclass_TmsdbPlanning_Request):
    """Message class 'TmsdbPlanning_Request'."""

    __slots__ = [
        '_robotid',
        '_objectid',
    ]

    _fields_and_field_types = {
        'robotid': 'uint32',
        'objectid': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robotid = kwargs.get('robotid', int())
        self.objectid = kwargs.get('objectid', int())

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
        if self.robotid != other.robotid:
            return False
        if self.objectid != other.objectid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robotid(self):
        """Message field 'robotid'."""
        return self._robotid

    @robotid.setter
    def robotid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robotid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'robotid' field must be an unsigned integer in [0, 4294967295]"
        self._robotid = value

    @property
    def objectid(self):
        """Message field 'objectid'."""
        return self._objectid

    @objectid.setter
    def objectid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'objectid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'objectid' field must be an unsigned integer in [0, 4294967295]"
        self._objectid = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TmsdbPlanning_Response(type):
    """Metaclass of message 'TmsdbPlanning_Response'."""

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
                'tms_msg_db.srv.TmsdbPlanning_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdb_planning__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdb_planning__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdb_planning__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdb_planning__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdb_planning__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TmsdbPlanning_Response(metaclass=Metaclass_TmsdbPlanning_Response):
    """Message class 'TmsdbPlanning_Response'."""

    __slots__ = [
        '_robot_x',
        '_robot_y',
        '_robot_z',
        '_robot_th',
        '_wagon_x',
        '_wagon_y',
        '_wagon_z',
        '_wagon_th',
        '_object_x',
        '_object_y',
        '_object_z',
        '_object_th',
    ]

    _fields_and_field_types = {
        'robot_x': 'float',
        'robot_y': 'float',
        'robot_z': 'float',
        'robot_th': 'float',
        'wagon_x': 'float',
        'wagon_y': 'float',
        'wagon_z': 'float',
        'wagon_th': 'float',
        'object_x': 'float',
        'object_y': 'float',
        'object_z': 'float',
        'object_th': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_x = kwargs.get('robot_x', float())
        self.robot_y = kwargs.get('robot_y', float())
        self.robot_z = kwargs.get('robot_z', float())
        self.robot_th = kwargs.get('robot_th', float())
        self.wagon_x = kwargs.get('wagon_x', float())
        self.wagon_y = kwargs.get('wagon_y', float())
        self.wagon_z = kwargs.get('wagon_z', float())
        self.wagon_th = kwargs.get('wagon_th', float())
        self.object_x = kwargs.get('object_x', float())
        self.object_y = kwargs.get('object_y', float())
        self.object_z = kwargs.get('object_z', float())
        self.object_th = kwargs.get('object_th', float())

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
        if self.robot_x != other.robot_x:
            return False
        if self.robot_y != other.robot_y:
            return False
        if self.robot_z != other.robot_z:
            return False
        if self.robot_th != other.robot_th:
            return False
        if self.wagon_x != other.wagon_x:
            return False
        if self.wagon_y != other.wagon_y:
            return False
        if self.wagon_z != other.wagon_z:
            return False
        if self.wagon_th != other.wagon_th:
            return False
        if self.object_x != other.object_x:
            return False
        if self.object_y != other.object_y:
            return False
        if self.object_z != other.object_z:
            return False
        if self.object_th != other.object_th:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def robot_x(self):
        """Message field 'robot_x'."""
        return self._robot_x

    @robot_x.setter
    def robot_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robot_x' field must be of type 'float'"
        self._robot_x = value

    @property
    def robot_y(self):
        """Message field 'robot_y'."""
        return self._robot_y

    @robot_y.setter
    def robot_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robot_y' field must be of type 'float'"
        self._robot_y = value

    @property
    def robot_z(self):
        """Message field 'robot_z'."""
        return self._robot_z

    @robot_z.setter
    def robot_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robot_z' field must be of type 'float'"
        self._robot_z = value

    @property
    def robot_th(self):
        """Message field 'robot_th'."""
        return self._robot_th

    @robot_th.setter
    def robot_th(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'robot_th' field must be of type 'float'"
        self._robot_th = value

    @property
    def wagon_x(self):
        """Message field 'wagon_x'."""
        return self._wagon_x

    @wagon_x.setter
    def wagon_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wagon_x' field must be of type 'float'"
        self._wagon_x = value

    @property
    def wagon_y(self):
        """Message field 'wagon_y'."""
        return self._wagon_y

    @wagon_y.setter
    def wagon_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wagon_y' field must be of type 'float'"
        self._wagon_y = value

    @property
    def wagon_z(self):
        """Message field 'wagon_z'."""
        return self._wagon_z

    @wagon_z.setter
    def wagon_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wagon_z' field must be of type 'float'"
        self._wagon_z = value

    @property
    def wagon_th(self):
        """Message field 'wagon_th'."""
        return self._wagon_th

    @wagon_th.setter
    def wagon_th(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wagon_th' field must be of type 'float'"
        self._wagon_th = value

    @property
    def object_x(self):
        """Message field 'object_x'."""
        return self._object_x

    @object_x.setter
    def object_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_x' field must be of type 'float'"
        self._object_x = value

    @property
    def object_y(self):
        """Message field 'object_y'."""
        return self._object_y

    @object_y.setter
    def object_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_y' field must be of type 'float'"
        self._object_y = value

    @property
    def object_z(self):
        """Message field 'object_z'."""
        return self._object_z

    @object_z.setter
    def object_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_z' field must be of type 'float'"
        self._object_z = value

    @property
    def object_th(self):
        """Message field 'object_th'."""
        return self._object_th

    @object_th.setter
    def object_th(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'object_th' field must be of type 'float'"
        self._object_th = value


class Metaclass_TmsdbPlanning(type):
    """Metaclass of service 'TmsdbPlanning'."""

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
                'tms_msg_db.srv.TmsdbPlanning')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdb_planning

            from tms_msg_db.srv import _tmsdb_planning
            if _tmsdb_planning.Metaclass_TmsdbPlanning_Request._TYPE_SUPPORT is None:
                _tmsdb_planning.Metaclass_TmsdbPlanning_Request.__import_type_support__()
            if _tmsdb_planning.Metaclass_TmsdbPlanning_Response._TYPE_SUPPORT is None:
                _tmsdb_planning.Metaclass_TmsdbPlanning_Response.__import_type_support__()


class TmsdbPlanning(metaclass=Metaclass_TmsdbPlanning):
    from tms_msg_db.srv._tmsdb_planning import TmsdbPlanning_Request as Request
    from tms_msg_db.srv._tmsdb_planning import TmsdbPlanning_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
