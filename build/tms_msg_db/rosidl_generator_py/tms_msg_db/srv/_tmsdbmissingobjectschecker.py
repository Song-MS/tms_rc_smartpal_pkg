# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:srv/Tmsdbmissingobjectschecker.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'objects_id'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdbmissingobjectschecker_Request(type):
    """Metaclass of message 'Tmsdbmissingobjectschecker_Request'."""

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
                'tms_msg_db.srv.Tmsdbmissingobjectschecker_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbmissingobjectschecker__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbmissingobjectschecker__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbmissingobjectschecker__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbmissingobjectschecker__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbmissingobjectschecker__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbmissingobjectschecker_Request(metaclass=Metaclass_Tmsdbmissingobjectschecker_Request):
    """Message class 'Tmsdbmissingobjectschecker_Request'."""

    __slots__ = [
        '_objects_id',
    ]

    _fields_and_field_types = {
        'objects_id': 'sequence<uint32>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.objects_id = array.array('I', kwargs.get('objects_id', []))

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
        if self.objects_id != other.objects_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def objects_id(self):
        """Message field 'objects_id'."""
        return self._objects_id

    @objects_id.setter
    def objects_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'objects_id' array.array() must have the type code of 'I'"
            self._objects_id = value
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
                "The 'objects_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._objects_id = array.array('I', value)


# Import statements for member types

# Member 'missing_objects_id'
# Member 'missing_objects_time'
# already imported above
# import array

# already imported above
# import rosidl_parser.definition


class Metaclass_Tmsdbmissingobjectschecker_Response(type):
    """Metaclass of message 'Tmsdbmissingobjectschecker_Response'."""

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
                'tms_msg_db.srv.Tmsdbmissingobjectschecker_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tmsdbmissingobjectschecker__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tmsdbmissingobjectschecker__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tmsdbmissingobjectschecker__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tmsdbmissingobjectschecker__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tmsdbmissingobjectschecker__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdbmissingobjectschecker_Response(metaclass=Metaclass_Tmsdbmissingobjectschecker_Response):
    """Message class 'Tmsdbmissingobjectschecker_Response'."""

    __slots__ = [
        '_missing_objects_id',
        '_missing_objects_time',
    ]

    _fields_and_field_types = {
        'missing_objects_id': 'sequence<uint32>',
        'missing_objects_time': 'sequence<uint64>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.missing_objects_id = array.array('I', kwargs.get('missing_objects_id', []))
        self.missing_objects_time = array.array('Q', kwargs.get('missing_objects_time', []))

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
        if self.missing_objects_id != other.missing_objects_id:
            return False
        if self.missing_objects_time != other.missing_objects_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def missing_objects_id(self):
        """Message field 'missing_objects_id'."""
        return self._missing_objects_id

    @missing_objects_id.setter
    def missing_objects_id(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'I', \
                "The 'missing_objects_id' array.array() must have the type code of 'I'"
            self._missing_objects_id = value
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
                "The 'missing_objects_id' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._missing_objects_id = array.array('I', value)

    @property
    def missing_objects_time(self):
        """Message field 'missing_objects_time'."""
        return self._missing_objects_time

    @missing_objects_time.setter
    def missing_objects_time(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'missing_objects_time' array.array() must have the type code of 'Q'"
            self._missing_objects_time = value
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
                "The 'missing_objects_time' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._missing_objects_time = array.array('Q', value)


class Metaclass_Tmsdbmissingobjectschecker(type):
    """Metaclass of service 'Tmsdbmissingobjectschecker'."""

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
                'tms_msg_db.srv.Tmsdbmissingobjectschecker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tmsdbmissingobjectschecker

            from tms_msg_db.srv import _tmsdbmissingobjectschecker
            if _tmsdbmissingobjectschecker.Metaclass_Tmsdbmissingobjectschecker_Request._TYPE_SUPPORT is None:
                _tmsdbmissingobjectschecker.Metaclass_Tmsdbmissingobjectschecker_Request.__import_type_support__()
            if _tmsdbmissingobjectschecker.Metaclass_Tmsdbmissingobjectschecker_Response._TYPE_SUPPORT is None:
                _tmsdbmissingobjectschecker.Metaclass_Tmsdbmissingobjectschecker_Response.__import_type_support__()


class Tmsdbmissingobjectschecker(metaclass=Metaclass_Tmsdbmissingobjectschecker):
    from tms_msg_db.srv._tmsdbmissingobjectschecker import Tmsdbmissingobjectschecker_Request as Request
    from tms_msg_db.srv._tmsdbmissingobjectschecker import Tmsdbmissingobjectschecker_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
