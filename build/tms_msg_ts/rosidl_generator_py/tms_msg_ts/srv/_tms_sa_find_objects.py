# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_ts:srv/TmsSaFindObjects.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'search_furnitures_id'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TmsSaFindObjects_Request(type):
    """Metaclass of message 'TmsSaFindObjects_Request'."""

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
            module = import_type_support('tms_msg_ts')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_ts.srv.TmsSaFindObjects_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tms_sa_find_objects__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tms_sa_find_objects__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tms_sa_find_objects__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tms_sa_find_objects__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tms_sa_find_objects__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TmsSaFindObjects_Request(metaclass=Metaclass_TmsSaFindObjects_Request):
    """Message class 'TmsSaFindObjects_Request'."""

    __slots__ = [
        '_search_furnitures_id',
    ]

    _fields_and_field_types = {
        'search_furnitures_id': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.search_furnitures_id = array.array('I', kwargs.get('search_furnitures_id', []))

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
        if self.search_furnitures_id != other.search_furnitures_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def search_furnitures_id(self):
        """Message field 'search_furnitures_id'."""
        return self._search_furnitures_id

    @search_furnitures_id.setter
    def search_furnitures_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'search_furnitures_id' array.array() must have the type code of 'I'"
            self._search_furnitures_id = value
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
                "The 'search_furnitures_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._search_furnitures_id = array.array('I', value)


# Import statements for member types

# Member 'object_id'
# Member 'object_x'
# Member 'object_y'
# Member 'object_z'
# Member 'furnitures_id'
# already imported above
# import array

# already imported above
# import rosidl_parser.definition


class Metaclass_TmsSaFindObjects_Response(type):
    """Metaclass of message 'TmsSaFindObjects_Response'."""

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
            module = import_type_support('tms_msg_ts')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_ts.srv.TmsSaFindObjects_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tms_sa_find_objects__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tms_sa_find_objects__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tms_sa_find_objects__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tms_sa_find_objects__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tms_sa_find_objects__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TmsSaFindObjects_Response(metaclass=Metaclass_TmsSaFindObjects_Response):
    """Message class 'TmsSaFindObjects_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_object_id',
        '_object_x',
        '_object_y',
        '_object_z',
        '_furnitures_id',
    ]

    _fields_and_field_types = {
        'success': 'uint32',
        'message': 'string',
        'object_id': 'sequence<uint32>',
        'object_x': 'sequence<float>',
        'object_y': 'sequence<float>',
        'object_z': 'sequence<float>',
        'furnitures_id': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', int())
        self.message = kwargs.get('message', str())
        self.object_id = array.array('I', kwargs.get('object_id', []))
        self.object_x = array.array('f', kwargs.get('object_x', []))
        self.object_y = array.array('f', kwargs.get('object_y', []))
        self.object_z = array.array('f', kwargs.get('object_z', []))
        self.furnitures_id = array.array('I', kwargs.get('furnitures_id', []))

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.object_id != other.object_id:
            return False
        if self.object_x != other.object_x:
            return False
        if self.object_y != other.object_y:
            return False
        if self.object_z != other.object_z:
            return False
        if self.furnitures_id != other.furnitures_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'success' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'success' field must be an unsigned integer in [0, 4294967295]"
        self._success = value

    @property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'object_id' array.array() must have the type code of 'I'"
            self._object_id = value
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
                "The 'object_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._object_id = array.array('I', value)

    @property
    def object_x(self):
        """Message field 'object_x'."""
        return self._object_x

    @object_x.setter
    def object_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'object_x' array.array() must have the type code of 'f'"
            self._object_x = value
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
                "The 'object_x' field must be a set or sequence and each value of type 'float'"
        self._object_x = array.array('f', value)

    @property
    def object_y(self):
        """Message field 'object_y'."""
        return self._object_y

    @object_y.setter
    def object_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'object_y' array.array() must have the type code of 'f'"
            self._object_y = value
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
                "The 'object_y' field must be a set or sequence and each value of type 'float'"
        self._object_y = array.array('f', value)

    @property
    def object_z(self):
        """Message field 'object_z'."""
        return self._object_z

    @object_z.setter
    def object_z(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'object_z' array.array() must have the type code of 'f'"
            self._object_z = value
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
                "The 'object_z' field must be a set or sequence and each value of type 'float'"
        self._object_z = array.array('f', value)

    @property
    def furnitures_id(self):
        """Message field 'furnitures_id'."""
        return self._furnitures_id

    @furnitures_id.setter
    def furnitures_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'furnitures_id' array.array() must have the type code of 'I'"
            self._furnitures_id = value
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
                "The 'furnitures_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._furnitures_id = array.array('I', value)


class Metaclass_TmsSaFindObjects(type):
    """Metaclass of service 'TmsSaFindObjects'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tms_msg_ts')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_msg_ts.srv.TmsSaFindObjects')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tms_sa_find_objects

            from tms_msg_ts.srv import _tms_sa_find_objects
            if _tms_sa_find_objects.Metaclass_TmsSaFindObjects_Request._TYPE_SUPPORT is None:
                _tms_sa_find_objects.Metaclass_TmsSaFindObjects_Request.__import_type_support__()
            if _tms_sa_find_objects.Metaclass_TmsSaFindObjects_Response._TYPE_SUPPORT is None:
                _tms_sa_find_objects.Metaclass_TmsSaFindObjects_Response.__import_type_support__()


class TmsSaFindObjects(metaclass=Metaclass_TmsSaFindObjects):
    from tms_msg_ts.srv._tms_sa_find_objects import TmsSaFindObjects_Request as Request
    from tms_msg_ts.srv._tms_sa_find_objects import TmsSaFindObjects_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
