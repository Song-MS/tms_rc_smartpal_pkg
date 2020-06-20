# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_recognition_msgs:msg/RecognizedObject.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RecognizedObject(type):
    """Metaclass of message 'RecognizedObject'."""

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
            module = import_type_support('object_recognition_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'object_recognition_msgs.msg.RecognizedObject')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__recognized_object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__recognized_object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__recognized_object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__recognized_object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__recognized_object

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseWithCovarianceStamped
            if PoseWithCovarianceStamped.__class__._TYPE_SUPPORT is None:
                PoseWithCovarianceStamped.__class__.__import_type_support__()

            from object_recognition_msgs.msg import ObjectType
            if ObjectType.__class__._TYPE_SUPPORT is None:
                ObjectType.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

            from shape_msgs.msg import Mesh
            if Mesh.__class__._TYPE_SUPPORT is None:
                Mesh.__class__.__import_type_support__()

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


class RecognizedObject(metaclass=Metaclass_RecognizedObject):
    """Message class 'RecognizedObject'."""

    __slots__ = [
        '_header',
        '_type',
        '_confidence',
        '_point_clouds',
        '_bounding_mesh',
        '_bounding_contours',
        '_pose',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'type': 'object_recognition_msgs/ObjectType',
        'confidence': 'float',
        'point_clouds': 'sequence<sensor_msgs/PointCloud2>',
        'bounding_mesh': 'shape_msgs/Mesh',
        'bounding_contours': 'sequence<geometry_msgs/Point>',
        'pose': 'geometry_msgs/PoseWithCovarianceStamped',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['object_recognition_msgs', 'msg'], 'ObjectType'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['shape_msgs', 'msg'], 'Mesh'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseWithCovarianceStamped'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from object_recognition_msgs.msg import ObjectType
        self.type = kwargs.get('type', ObjectType())
        self.confidence = kwargs.get('confidence', float())
        self.point_clouds = kwargs.get('point_clouds', [])
        from shape_msgs.msg import Mesh
        self.bounding_mesh = kwargs.get('bounding_mesh', Mesh())
        self.bounding_contours = kwargs.get('bounding_contours', [])
        from geometry_msgs.msg import PoseWithCovarianceStamped
        self.pose = kwargs.get('pose', PoseWithCovarianceStamped())

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
        if self.type != other.type:
            return False
        if self.confidence != other.confidence:
            return False
        if self.point_clouds != other.point_clouds:
            return False
        if self.bounding_mesh != other.bounding_mesh:
            return False
        if self.bounding_contours != other.bounding_contours:
            return False
        if self.pose != other.pose:
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

    @property  # noqa: A003
    def type(self):
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):
        if __debug__:
            from object_recognition_msgs.msg import ObjectType
            assert \
                isinstance(value, ObjectType), \
                "The 'type' field must be a sub message of type 'ObjectType'"
        self._type = value

    @property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
        self._confidence = value

    @property
    def point_clouds(self):
        """Message field 'point_clouds'."""
        return self._point_clouds

    @point_clouds.setter
    def point_clouds(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
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
                 all(isinstance(v, PointCloud2) for v in value) and
                 True), \
                "The 'point_clouds' field must be a set or sequence and each value of type 'PointCloud2'"
        self._point_clouds = value

    @property
    def bounding_mesh(self):
        """Message field 'bounding_mesh'."""
        return self._bounding_mesh

    @bounding_mesh.setter
    def bounding_mesh(self, value):
        if __debug__:
            from shape_msgs.msg import Mesh
            assert \
                isinstance(value, Mesh), \
                "The 'bounding_mesh' field must be a sub message of type 'Mesh'"
        self._bounding_mesh = value

    @property
    def bounding_contours(self):
        """Message field 'bounding_contours'."""
        return self._bounding_contours

    @bounding_contours.setter
    def bounding_contours(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'bounding_contours' field must be a set or sequence and each value of type 'Point'"
        self._bounding_contours = value

    @property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseWithCovarianceStamped
            assert \
                isinstance(value, PoseWithCovarianceStamped), \
                "The 'pose' field must be a sub message of type 'PoseWithCovarianceStamped'"
        self._pose = value
