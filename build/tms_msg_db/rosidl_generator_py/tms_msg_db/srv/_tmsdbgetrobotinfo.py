# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbgetrobotinfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'id'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbgetrobotinfo_Request(type):
    """Metaclass of message 'Tmsdbgetrobotinfo_Request'."""

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
                'tms_msg_db.srv.Tmsdbgetrobotinfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetrobotinfo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetrobotinfo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetrobotinfo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetrobotinfo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetrobotinfo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetrobotinfo_Request(metaclass=Metaclass_Tmsdbgetrobotinfo_Request):
    """Message class 'Tmsdbgetrobotinfo_Request'."""

    __slots__ = [
        '_id',
    ]

    _fields_and_field_types = {
        'id': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = array.array('I', kwargs.get('id', []))

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
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'id' array.array() must have the type code of 'I'"
            self._id = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._id = array.array('I', value)


# Import statements for member types

# Member 'rostime'
# Member 'id'
# Member 'x'
# Member 'y'
# Member 'z'
# Member 'theta'
# Member 'joint_waist_low'
# Member 'joint_waist_high'
# Member 'joint_arm_right_1'
# Member 'joint_arm_right_2'
# Member 'joint_arm_right_3'
# Member 'joint_arm_right_4'
# Member 'joint_arm_right_5'
# Member 'joint_arm_right_6'
# Member 'joint_arm_right_7'
# Member 'joint_arm_right_g'
# Member 'joint_arm_left_1'
# Member 'joint_arm_left_2'
# Member 'joint_arm_left_3'
# Member 'joint_arm_left_4'
# Member 'joint_arm_left_5'
# Member 'joint_arm_left_6'
# Member 'joint_arm_left_7'
# Member 'joint_arm_left_g'
# Member 'state'
# Member 'place'
# already imported above
# import array

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbgetrobotinfo_Response(type):
    """Metaclass of message 'Tmsdbgetrobotinfo_Response'."""

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
                'tms_msg_db.srv.Tmsdbgetrobotinfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetrobotinfo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetrobotinfo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetrobotinfo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetrobotinfo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetrobotinfo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetrobotinfo_Response(metaclass=Metaclass_Tmsdbgetrobotinfo_Response):
    """Message class 'Tmsdbgetrobotinfo_Response'."""

    __slots__ = [
        '_rostime',
        '_id',
        '_x',
        '_y',
        '_z',
        '_theta',
        '_joint_waist_low',
        '_joint_waist_high',
        '_joint_arm_right_1',
        '_joint_arm_right_2',
        '_joint_arm_right_3',
        '_joint_arm_right_4',
        '_joint_arm_right_5',
        '_joint_arm_right_6',
        '_joint_arm_right_7',
        '_joint_arm_right_g',
        '_joint_arm_left_1',
        '_joint_arm_left_2',
        '_joint_arm_left_3',
        '_joint_arm_left_4',
        '_joint_arm_left_5',
        '_joint_arm_left_6',
        '_joint_arm_left_7',
        '_joint_arm_left_g',
        '_state',
        '_place',
    ]

    _fields_and_field_types = {
        'rostime': 'sequence<uint64>',
        'id': 'sequence<uint32>',
        'x': 'sequence<float>',
        'y': 'sequence<float>',
        'z': 'sequence<float>',
        'theta': 'sequence<float>',
        'joint_waist_low': 'sequence<float>',
        'joint_waist_high': 'sequence<float>',
        'joint_arm_right_1': 'sequence<float>',
        'joint_arm_right_2': 'sequence<float>',
        'joint_arm_right_3': 'sequence<float>',
        'joint_arm_right_4': 'sequence<float>',
        'joint_arm_right_5': 'sequence<float>',
        'joint_arm_right_6': 'sequence<float>',
        'joint_arm_right_7': 'sequence<float>',
        'joint_arm_right_g': 'sequence<float>',
        'joint_arm_left_1': 'sequence<float>',
        'joint_arm_left_2': 'sequence<float>',
        'joint_arm_left_3': 'sequence<float>',
        'joint_arm_left_4': 'sequence<float>',
        'joint_arm_left_5': 'sequence<float>',
        'joint_arm_left_6': 'sequence<float>',
        'joint_arm_left_7': 'sequence<float>',
        'joint_arm_left_g': 'sequence<float>',
        'state': 'sequence<uint32>',
        'place': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rostime = array.array('Q', kwargs.get('rostime', []))
        self.id = array.array('I', kwargs.get('id', []))
        self.x = array.array('f', kwargs.get('x', []))
        self.y = array.array('f', kwargs.get('y', []))
        self.z = array.array('f', kwargs.get('z', []))
        self.theta = array.array('f', kwargs.get('theta', []))
        self.joint_waist_low = array.array('f', kwargs.get('joint_waist_low', []))
        self.joint_waist_high = array.array('f', kwargs.get('joint_waist_high', []))
        self.joint_arm_right_1 = array.array('f', kwargs.get('joint_arm_right_1', []))
        self.joint_arm_right_2 = array.array('f', kwargs.get('joint_arm_right_2', []))
        self.joint_arm_right_3 = array.array('f', kwargs.get('joint_arm_right_3', []))
        self.joint_arm_right_4 = array.array('f', kwargs.get('joint_arm_right_4', []))
        self.joint_arm_right_5 = array.array('f', kwargs.get('joint_arm_right_5', []))
        self.joint_arm_right_6 = array.array('f', kwargs.get('joint_arm_right_6', []))
        self.joint_arm_right_7 = array.array('f', kwargs.get('joint_arm_right_7', []))
        self.joint_arm_right_g = array.array('f', kwargs.get('joint_arm_right_g', []))
        self.joint_arm_left_1 = array.array('f', kwargs.get('joint_arm_left_1', []))
        self.joint_arm_left_2 = array.array('f', kwargs.get('joint_arm_left_2', []))
        self.joint_arm_left_3 = array.array('f', kwargs.get('joint_arm_left_3', []))
        self.joint_arm_left_4 = array.array('f', kwargs.get('joint_arm_left_4', []))
        self.joint_arm_left_5 = array.array('f', kwargs.get('joint_arm_left_5', []))
        self.joint_arm_left_6 = array.array('f', kwargs.get('joint_arm_left_6', []))
        self.joint_arm_left_7 = array.array('f', kwargs.get('joint_arm_left_7', []))
        self.joint_arm_left_g = array.array('f', kwargs.get('joint_arm_left_g', []))
        self.state = array.array('I', kwargs.get('state', []))
        self.place = array.array('I', kwargs.get('place', []))

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
        if self.id != other.id:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.theta != other.theta:
            return False
        if self.joint_waist_low != other.joint_waist_low:
            return False
        if self.joint_waist_high != other.joint_waist_high:
            return False
        if self.joint_arm_right_1 != other.joint_arm_right_1:
            return False
        if self.joint_arm_right_2 != other.joint_arm_right_2:
            return False
        if self.joint_arm_right_3 != other.joint_arm_right_3:
            return False
        if self.joint_arm_right_4 != other.joint_arm_right_4:
            return False
        if self.joint_arm_right_5 != other.joint_arm_right_5:
            return False
        if self.joint_arm_right_6 != other.joint_arm_right_6:
            return False
        if self.joint_arm_right_7 != other.joint_arm_right_7:
            return False
        if self.joint_arm_right_g != other.joint_arm_right_g:
            return False
        if self.joint_arm_left_1 != other.joint_arm_left_1:
            return False
        if self.joint_arm_left_2 != other.joint_arm_left_2:
            return False
        if self.joint_arm_left_3 != other.joint_arm_left_3:
            return False
        if self.joint_arm_left_4 != other.joint_arm_left_4:
            return False
        if self.joint_arm_left_5 != other.joint_arm_left_5:
            return False
        if self.joint_arm_left_6 != other.joint_arm_left_6:
            return False
        if self.joint_arm_left_7 != other.joint_arm_left_7:
            return False
        if self.joint_arm_left_g != other.joint_arm_left_g:
            return False
        if self.state != other.state:
            return False
        if self.place != other.place:
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
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'rostime' array.array() must have the type code of 'Q'"
            self._rostime = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'rostime' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._rostime = array.array('Q', value)

    @property  # noqa: A003
    def id(self):
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'id' array.array() must have the type code of 'I'"
            self._id = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._id = array.array('I', value)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'x' array.array() must have the type code of 'f'"
            self._x = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'x' field must be a set or sequence and each value of type 'float'"
        self._x = array.array('f', value)

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'y' array.array() must have the type code of 'f'"
            self._y = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'y' field must be a set or sequence and each value of type 'float'"
        self._y = array.array('f', value)

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'z' array.array() must have the type code of 'f'"
            self._z = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'z' field must be a set or sequence and each value of type 'float'"
        self._z = array.array('f', value)

    @property
    def theta(self):
        """Message field 'theta'."""
        return self._theta

    @theta.setter
    def theta(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'theta' array.array() must have the type code of 'f'"
            self._theta = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'theta' field must be a set or sequence and each value of type 'float'"
        self._theta = array.array('f', value)

    @property
    def joint_waist_low(self):
        """Message field 'joint_waist_low'."""
        return self._joint_waist_low

    @joint_waist_low.setter
    def joint_waist_low(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_waist_low' array.array() must have the type code of 'f'"
            self._joint_waist_low = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_waist_low' field must be a set or sequence and each value of type 'float'"
        self._joint_waist_low = array.array('f', value)

    @property
    def joint_waist_high(self):
        """Message field 'joint_waist_high'."""
        return self._joint_waist_high

    @joint_waist_high.setter
    def joint_waist_high(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_waist_high' array.array() must have the type code of 'f'"
            self._joint_waist_high = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_waist_high' field must be a set or sequence and each value of type 'float'"
        self._joint_waist_high = array.array('f', value)

    @property
    def joint_arm_right_1(self):
        """Message field 'joint_arm_right_1'."""
        return self._joint_arm_right_1

    @joint_arm_right_1.setter
    def joint_arm_right_1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_right_1' array.array() must have the type code of 'f'"
            self._joint_arm_right_1 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_right_1' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_right_1 = array.array('f', value)

    @property
    def joint_arm_right_2(self):
        """Message field 'joint_arm_right_2'."""
        return self._joint_arm_right_2

    @joint_arm_right_2.setter
    def joint_arm_right_2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_right_2' array.array() must have the type code of 'f'"
            self._joint_arm_right_2 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_right_2' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_right_2 = array.array('f', value)

    @property
    def joint_arm_right_3(self):
        """Message field 'joint_arm_right_3'."""
        return self._joint_arm_right_3

    @joint_arm_right_3.setter
    def joint_arm_right_3(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_right_3' array.array() must have the type code of 'f'"
            self._joint_arm_right_3 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_right_3' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_right_3 = array.array('f', value)

    @property
    def joint_arm_right_4(self):
        """Message field 'joint_arm_right_4'."""
        return self._joint_arm_right_4

    @joint_arm_right_4.setter
    def joint_arm_right_4(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_right_4' array.array() must have the type code of 'f'"
            self._joint_arm_right_4 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_right_4' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_right_4 = array.array('f', value)

    @property
    def joint_arm_right_5(self):
        """Message field 'joint_arm_right_5'."""
        return self._joint_arm_right_5

    @joint_arm_right_5.setter
    def joint_arm_right_5(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_right_5' array.array() must have the type code of 'f'"
            self._joint_arm_right_5 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_right_5' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_right_5 = array.array('f', value)

    @property
    def joint_arm_right_6(self):
        """Message field 'joint_arm_right_6'."""
        return self._joint_arm_right_6

    @joint_arm_right_6.setter
    def joint_arm_right_6(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_right_6' array.array() must have the type code of 'f'"
            self._joint_arm_right_6 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_right_6' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_right_6 = array.array('f', value)

    @property
    def joint_arm_right_7(self):
        """Message field 'joint_arm_right_7'."""
        return self._joint_arm_right_7

    @joint_arm_right_7.setter
    def joint_arm_right_7(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_right_7' array.array() must have the type code of 'f'"
            self._joint_arm_right_7 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_right_7' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_right_7 = array.array('f', value)

    @property
    def joint_arm_right_g(self):
        """Message field 'joint_arm_right_g'."""
        return self._joint_arm_right_g

    @joint_arm_right_g.setter
    def joint_arm_right_g(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_right_g' array.array() must have the type code of 'f'"
            self._joint_arm_right_g = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_right_g' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_right_g = array.array('f', value)

    @property
    def joint_arm_left_1(self):
        """Message field 'joint_arm_left_1'."""
        return self._joint_arm_left_1

    @joint_arm_left_1.setter
    def joint_arm_left_1(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_left_1' array.array() must have the type code of 'f'"
            self._joint_arm_left_1 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_left_1' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_left_1 = array.array('f', value)

    @property
    def joint_arm_left_2(self):
        """Message field 'joint_arm_left_2'."""
        return self._joint_arm_left_2

    @joint_arm_left_2.setter
    def joint_arm_left_2(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_left_2' array.array() must have the type code of 'f'"
            self._joint_arm_left_2 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_left_2' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_left_2 = array.array('f', value)

    @property
    def joint_arm_left_3(self):
        """Message field 'joint_arm_left_3'."""
        return self._joint_arm_left_3

    @joint_arm_left_3.setter
    def joint_arm_left_3(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_left_3' array.array() must have the type code of 'f'"
            self._joint_arm_left_3 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_left_3' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_left_3 = array.array('f', value)

    @property
    def joint_arm_left_4(self):
        """Message field 'joint_arm_left_4'."""
        return self._joint_arm_left_4

    @joint_arm_left_4.setter
    def joint_arm_left_4(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_left_4' array.array() must have the type code of 'f'"
            self._joint_arm_left_4 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_left_4' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_left_4 = array.array('f', value)

    @property
    def joint_arm_left_5(self):
        """Message field 'joint_arm_left_5'."""
        return self._joint_arm_left_5

    @joint_arm_left_5.setter
    def joint_arm_left_5(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_left_5' array.array() must have the type code of 'f'"
            self._joint_arm_left_5 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_left_5' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_left_5 = array.array('f', value)

    @property
    def joint_arm_left_6(self):
        """Message field 'joint_arm_left_6'."""
        return self._joint_arm_left_6

    @joint_arm_left_6.setter
    def joint_arm_left_6(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_left_6' array.array() must have the type code of 'f'"
            self._joint_arm_left_6 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_left_6' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_left_6 = array.array('f', value)

    @property
    def joint_arm_left_7(self):
        """Message field 'joint_arm_left_7'."""
        return self._joint_arm_left_7

    @joint_arm_left_7.setter
    def joint_arm_left_7(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_left_7' array.array() must have the type code of 'f'"
            self._joint_arm_left_7 = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_left_7' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_left_7 = array.array('f', value)

    @property
    def joint_arm_left_g(self):
        """Message field 'joint_arm_left_g'."""
        return self._joint_arm_left_g

    @joint_arm_left_g.setter
    def joint_arm_left_g(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'joint_arm_left_g' array.array() must have the type code of 'f'"
            self._joint_arm_left_g = value
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'joint_arm_left_g' field must be a set or sequence and each value of type 'float'"
        self._joint_arm_left_g = array.array('f', value)

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'state' array.array() must have the type code of 'I'"
            self._state = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'state' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._state = array.array('I', value)

    @property
    def place(self):
        """Message field 'place'."""
        return self._place

    @place.setter
    def place(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'place' array.array() must have the type code of 'I'"
            self._place = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'place' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._place = array.array('I', value)


class Metaclass_Tmsdbgetrobotinfo(type):
    """Metaclass of service 'Tmsdbgetrobotinfo'."""

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
                'tms_msg_db.srv.Tmsdbgetrobotinfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbgetrobotinfo

            from tms_msg_db.srv import _tmsdbgetrobotinfo
            if _tmsdbgetrobotinfo.Metaclass_Tmsdbgetrobotinfo_Request._TYPE_SUPPORT is None:
                _tmsdbgetrobotinfo.Metaclass_Tmsdbgetrobotinfo_Request.__import_type_support__()
            if _tmsdbgetrobotinfo.Metaclass_Tmsdbgetrobotinfo_Response._TYPE_SUPPORT is None:
                _tmsdbgetrobotinfo.Metaclass_Tmsdbgetrobotinfo_Response.__import_type_support__()


class Tmsdbgetrobotinfo(metaclass=Metaclass_Tmsdbgetrobotinfo):
    from tms_msg_db.srv._tmsdbgetrobotinfo import Tmsdbgetrobotinfo_Request as Request
    from tms_msg_db.srv._tmsdbgetrobotinfo import Tmsdbgetrobotinfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
