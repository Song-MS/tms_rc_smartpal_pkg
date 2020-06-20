# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_ss:msg/ViconData.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'eulerxyz'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ViconData(type):
    """Metaclass of message 'ViconData'."""

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
            module = import_type_support('tms_msg_ss')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_ss.msg.ViconData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vicon_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vicon_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vicon_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vicon_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vicon_data

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ViconData(metaclass=Metaclass_ViconData):
    """Message class 'ViconData'."""

    __slots__ = [
        '_header',
        '_measuredtime',
        '_subjectname',
        '_segmentname',
        '_translation',
        '_rotation',
        '_eulerxyz',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'measuredtime': 'string',
        'subjectname': 'string',
        'segmentname': 'string',
        'translation': 'geometry_msgs/Point',
        'rotation': 'geometry_msgs/Quaternion',
        'eulerxyz': 'double[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.measuredtime = kwargs.get('measuredtime', str())
        self.subjectname = kwargs.get('subjectname', str())
        self.segmentname = kwargs.get('segmentname', str())
        from geometry_msgs.msg import Point
        self.translation = kwargs.get('translation', Point())
        from geometry_msgs.msg import Quaternion
        self.rotation = kwargs.get('rotation', Quaternion())
        if 'eulerxyz' not in kwargs:
            self.eulerxyz = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.eulerxyz = numpy.array(kwargs.get('eulerxyz'), dtype=numpy.float64)
            assert self.eulerxyz.shape == (3, )

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
        if self.header != other.header:
            return False
        if self.measuredtime != other.measuredtime:
            return False
        if self.subjectname != other.subjectname:
            return False
        if self.segmentname != other.segmentname:
            return False
        if self.translation != other.translation:
            return False
        if self.rotation != other.rotation:
            return False
        if all(self.eulerxyz != other.eulerxyz):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def measuredtime(self):
        """Message field 'measuredtime'."""
        return self._measuredtime

    @measuredtime.setter
    def measuredtime(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'measuredtime' field must be of type 'str'"
        self._measuredtime = value

    @property
    def subjectname(self):
        """Message field 'subjectname'."""
        return self._subjectname

    @subjectname.setter
    def subjectname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'subjectname' field must be of type 'str'"
        self._subjectname = value

    @property
    def segmentname(self):
        """Message field 'segmentname'."""
        return self._segmentname

    @segmentname.setter
    def segmentname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'segmentname' field must be of type 'str'"
        self._segmentname = value

    @property
    def translation(self):
        """Message field 'translation'."""
        return self._translation

    @translation.setter
    def translation(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'translation' field must be a sub message of type 'Point'"
        self._translation = value

    @property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'rotation' field must be a sub message of type 'Quaternion'"
        self._rotation = value

    @property
    def eulerxyz(self):
        """Message field 'eulerxyz'."""
        return self._eulerxyz

    @eulerxyz.setter
    def eulerxyz(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'eulerxyz' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 3, \
                "The 'eulerxyz' numpy.ndarray() must have a size of 3"
            self._eulerxyz = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'eulerxyz' field must be a set or sequence with length 3 and each value of type 'float'"
        self._eulerxyz = numpy.array(value, dtype=numpy.float64)
