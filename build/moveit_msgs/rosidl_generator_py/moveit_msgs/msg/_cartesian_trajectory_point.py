# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:msg/CartesianTrajectoryPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CartesianTrajectoryPoint(type):
    """Metaclass of message 'CartesianTrajectoryPoint'."""

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
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.msg.CartesianTrajectoryPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cartesian_trajectory_point
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cartesian_trajectory_point
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cartesian_trajectory_point
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cartesian_trajectory_point
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cartesian_trajectory_point

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from moveit_msgs.msg import CartesianPoint
            if CartesianPoint.__class__._TYPE_SUPPORT is None:
                CartesianPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianTrajectoryPoint(metaclass=Metaclass_CartesianTrajectoryPoint):
    """Message class 'CartesianTrajectoryPoint'."""

    __slots__ = [
        '_point',
        '_time_from_start',
    ]

    _fields_and_field_types = {
        'point': 'moveit_msgs/CartesianPoint',
        'time_from_start': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'CartesianPoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import CartesianPoint
        self.point = kwargs.get('point', CartesianPoint())
        from builtin_interfaces.msg import Duration
        self.time_from_start = kwargs.get('time_from_start', Duration())

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
        if self.point != other.point:
            return False
        if self.time_from_start != other.time_from_start:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def point(self):
        """Message field 'point'."""
        return self._point

    @point.setter
    def point(self, value):
        if __debug__:
            from moveit_msgs.msg import CartesianPoint
            assert \
                isinstance(value, CartesianPoint), \
                "The 'point' field must be a sub message of type 'CartesianPoint'"
        self._point = value

    @property
    def time_from_start(self):
        """Message field 'time_from_start'."""
        return self._time_from_start

    @time_from_start.setter
    def time_from_start(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'time_from_start' field must be a sub message of type 'Duration'"
        self._time_from_start = value
