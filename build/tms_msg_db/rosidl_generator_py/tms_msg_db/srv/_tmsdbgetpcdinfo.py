# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbgetpcdinfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbgetpcdinfo_Request(type):
    """Metaclass of message 'Tmsdbgetpcdinfo_Request'."""

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
                'tms_msg_db.srv.Tmsdbgetpcdinfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetpcdinfo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetpcdinfo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetpcdinfo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetpcdinfo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetpcdinfo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetpcdinfo_Request(metaclass=Metaclass_Tmsdbgetpcdinfo_Request):
    """Message class 'Tmsdbgetpcdinfo_Request'."""

    __slots__ = [
        '_id',
    ]

    _fields_and_field_types = {
        'id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbgetpcdinfo_Response(type):
    """Metaclass of message 'Tmsdbgetpcdinfo_Response'."""

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
                'tms_msg_db.srv.Tmsdbgetpcdinfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetpcdinfo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetpcdinfo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetpcdinfo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetpcdinfo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetpcdinfo__response

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetpcdinfo_Response(metaclass=Metaclass_Tmsdbgetpcdinfo_Response):
    """Message class 'Tmsdbgetpcdinfo_Response'."""

    __slots__ = [
        '_rostime',
        '_pcd_file',
        '_cloud',
        '_get_x',
        '_get_y',
        '_get_z',
        '_get_theta',
    ]

    _fields_and_field_types = {
        'rostime': 'uint64',
        'pcd_file': 'string',
        'cloud': 'sensor_msgs/PointCloud2',
        'get_x': 'float',
        'get_y': 'float',
        'get_z': 'float',
        'get_theta': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rostime = kwargs.get('rostime', int())
        self.pcd_file = kwargs.get('pcd_file', str())
        from sensor_msgs.msg import PointCloud2
        self.cloud = kwargs.get('cloud', PointCloud2())
        self.get_x = kwargs.get('get_x', float())
        self.get_y = kwargs.get('get_y', float())
        self.get_z = kwargs.get('get_z', float())
        self.get_theta = kwargs.get('get_theta', float())

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
        if self.pcd_file != other.pcd_file:
            return False
        if self.cloud != other.cloud:
            return False
        if self.get_x != other.get_x:
            return False
        if self.get_y != other.get_y:
            return False
        if self.get_z != other.get_z:
            return False
        if self.get_theta != other.get_theta:
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
    def pcd_file(self):
        """Message field 'pcd_file'."""
        return self._pcd_file

    @pcd_file.setter
    def pcd_file(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'pcd_file' field must be of type 'str'"
        self._pcd_file = value

    @property
    def cloud(self):
        """Message field 'cloud'."""
        return self._cloud

    @cloud.setter
    def cloud(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud' field must be a sub message of type 'PointCloud2'"
        self._cloud = value

    @property
    def get_x(self):
        """Message field 'get_x'."""
        return self._get_x

    @get_x.setter
    def get_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'get_x' field must be of type 'float'"
        self._get_x = value

    @property
    def get_y(self):
        """Message field 'get_y'."""
        return self._get_y

    @get_y.setter
    def get_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'get_y' field must be of type 'float'"
        self._get_y = value

    @property
    def get_z(self):
        """Message field 'get_z'."""
        return self._get_z

    @get_z.setter
    def get_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'get_z' field must be of type 'float'"
        self._get_z = value

    @property
    def get_theta(self):
        """Message field 'get_theta'."""
        return self._get_theta

    @get_theta.setter
    def get_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'get_theta' field must be of type 'float'"
        self._get_theta = value


class Metaclass_Tmsdbgetpcdinfo(type):
    """Metaclass of service 'Tmsdbgetpcdinfo'."""

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
                'tms_msg_db.srv.Tmsdbgetpcdinfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbgetpcdinfo

            from tms_msg_db.srv import _tmsdbgetpcdinfo
            if _tmsdbgetpcdinfo.Metaclass_Tmsdbgetpcdinfo_Request._TYPE_SUPPORT is None:
                _tmsdbgetpcdinfo.Metaclass_Tmsdbgetpcdinfo_Request.__import_type_support__()
            if _tmsdbgetpcdinfo.Metaclass_Tmsdbgetpcdinfo_Response._TYPE_SUPPORT is None:
                _tmsdbgetpcdinfo.Metaclass_Tmsdbgetpcdinfo_Response.__import_type_support__()


class Tmsdbgetpcdinfo(metaclass=Metaclass_Tmsdbgetpcdinfo):
    from tms_msg_db.srv._tmsdbgetpcdinfo import Tmsdbgetpcdinfo_Request as Request
    from tms_msg_db.srv._tmsdbgetpcdinfo import Tmsdbgetpcdinfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
