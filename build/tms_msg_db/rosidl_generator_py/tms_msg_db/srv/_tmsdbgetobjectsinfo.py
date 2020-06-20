# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbgetobjectsinfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'rostime'
# Member 'id'
# Member 'x'
# Member 'y'
# Member 'z'
# Member 'weight'
# Member 'state'
# Member 'place'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbgetobjectsinfo_Request(type):
    """Metaclass of message 'Tmsdbgetobjectsinfo_Request'."""

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
                'tms_msg_db.srv.Tmsdbgetobjectsinfo_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetobjectsinfo__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetobjectsinfo__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetobjectsinfo__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetobjectsinfo__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetobjectsinfo__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetobjectsinfo_Request(metaclass=Metaclass_Tmsdbgetobjectsinfo_Request):
    """Message class 'Tmsdbgetobjectsinfo_Request'."""

    __slots__ = [
        '_rostime',
        '_id',
        '_x',
        '_y',
        '_z',
        '_weight',
        '_state',
        '_place',
    ]

    _fields_and_field_types = {
        'rostime': 'sequence<uint64>',
        'id': 'sequence<uint32>',
        'x': 'sequence<float>',
        'y': 'sequence<float>',
        'z': 'sequence<float>',
        'weight': 'sequence<float>',
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
        self.weight = array.array('f', kwargs.get('weight', []))
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
        if self.weight != other.weight:
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
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'weight' array.array() must have the type code of 'f'"
            self._weight = value
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
                "The 'weight' field must be a set or sequence and each value of type 'float'"
        self._weight = array.array('f', value)

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


# Import statements for member types

# Member 'rostime'
# Member 'id'
# Member 'x'
# Member 'y'
# Member 'z'
# Member 'rr'
# Member 'rp'
# Member 'ry'
# Member 'weight'
# Member 'state'
# Member 'place'
# already imported above
# import array

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbgetobjectsinfo_Response(type):
    """Metaclass of message 'Tmsdbgetobjectsinfo_Response'."""

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
                'tms_msg_db.srv.Tmsdbgetobjectsinfo_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbgetobjectsinfo__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbgetobjectsinfo__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbgetobjectsinfo__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbgetobjectsinfo__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbgetobjectsinfo__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbgetobjectsinfo_Response(metaclass=Metaclass_Tmsdbgetobjectsinfo_Response):
    """Message class 'Tmsdbgetobjectsinfo_Response'."""

    __slots__ = [
        '_rostime',
        '_id',
        '_x',
        '_y',
        '_z',
        '_rr',
        '_rp',
        '_ry',
        '_weight',
        '_state',
        '_place',
    ]

    _fields_and_field_types = {
        'rostime': 'sequence<uint64>',
        'id': 'sequence<uint32>',
        'x': 'sequence<float>',
        'y': 'sequence<float>',
        'z': 'sequence<float>',
        'rr': 'sequence<float>',
        'rp': 'sequence<float>',
        'ry': 'sequence<float>',
        'weight': 'sequence<float>',
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
        self.rr = array.array('f', kwargs.get('rr', []))
        self.rp = array.array('f', kwargs.get('rp', []))
        self.ry = array.array('f', kwargs.get('ry', []))
        self.weight = array.array('f', kwargs.get('weight', []))
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
        if self.rr != other.rr:
            return False
        if self.rp != other.rp:
            return False
        if self.ry != other.ry:
            return False
        if self.weight != other.weight:
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
    def rr(self):
        """Message field 'rr'."""
        return self._rr

    @rr.setter
    def rr(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'rr' array.array() must have the type code of 'f'"
            self._rr = value
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
                "The 'rr' field must be a set or sequence and each value of type 'float'"
        self._rr = array.array('f', value)

    @property
    def rp(self):
        """Message field 'rp'."""
        return self._rp

    @rp.setter
    def rp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'rp' array.array() must have the type code of 'f'"
            self._rp = value
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
                "The 'rp' field must be a set or sequence and each value of type 'float'"
        self._rp = array.array('f', value)

    @property
    def ry(self):
        """Message field 'ry'."""
        return self._ry

    @ry.setter
    def ry(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ry' array.array() must have the type code of 'f'"
            self._ry = value
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
                "The 'ry' field must be a set or sequence and each value of type 'float'"
        self._ry = array.array('f', value)

    @property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'weight' array.array() must have the type code of 'f'"
            self._weight = value
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
                "The 'weight' field must be a set or sequence and each value of type 'float'"
        self._weight = array.array('f', value)

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


class Metaclass_Tmsdbgetobjectsinfo(type):
    """Metaclass of service 'Tmsdbgetobjectsinfo'."""

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
                'tms_msg_db.srv.Tmsdbgetobjectsinfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbgetobjectsinfo

            from tms_msg_db.srv import _tmsdbgetobjectsinfo
            if _tmsdbgetobjectsinfo.Metaclass_Tmsdbgetobjectsinfo_Request._TYPE_SUPPORT is None:
                _tmsdbgetobjectsinfo.Metaclass_Tmsdbgetobjectsinfo_Request.__import_type_support__()
            if _tmsdbgetobjectsinfo.Metaclass_Tmsdbgetobjectsinfo_Response._TYPE_SUPPORT is None:
                _tmsdbgetobjectsinfo.Metaclass_Tmsdbgetobjectsinfo_Response.__import_type_support__()


class Tmsdbgetobjectsinfo(metaclass=Metaclass_Tmsdbgetobjectsinfo):
    from tms_msg_db.srv._tmsdbgetobjectsinfo import Tmsdbgetobjectsinfo_Request as Request
    from tms_msg_db.srv._tmsdbgetobjectsinfo import Tmsdbgetobjectsinfo_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
