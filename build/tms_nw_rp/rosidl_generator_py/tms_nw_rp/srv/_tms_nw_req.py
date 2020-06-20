# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_nw_rp:srv/TmsNwReq.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TmsNwReq_Request(type):
    """Metaclass of message 'TmsNwReq_Request'."""

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
            module = import_type_support('tms_nw_rp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_nw_rp.srv.TmsNwReq_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tms_nw_req__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tms_nw_req__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tms_nw_req__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tms_nw_req__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tms_nw_req__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TmsNwReq_Request(metaclass=Metaclass_TmsNwReq_Request):
    """Message class 'TmsNwReq_Request'."""

    __slots__ = [
        '_url',
        '_service_name',
        '_service_type',
        '_task_id',
        '_robot_id',
        '_object_id',
        '_user_id',
        '_place_id',
        '_priority',
    ]

    _fields_and_field_types = {
        'url': 'string',
        'service_name': 'string',
        'service_type': 'string',
        'task_id': 'int32',
        'robot_id': 'int32',
        'object_id': 'int32',
        'user_id': 'int32',
        'place_id': 'int32',
        'priority': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.url = kwargs.get('url', str())
        self.service_name = kwargs.get('service_name', str())
        self.service_type = kwargs.get('service_type', str())
        self.task_id = kwargs.get('task_id', int())
        self.robot_id = kwargs.get('robot_id', int())
        self.object_id = kwargs.get('object_id', int())
        self.user_id = kwargs.get('user_id', int())
        self.place_id = kwargs.get('place_id', int())
        self.priority = kwargs.get('priority', int())

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
        if self.url != other.url:
            return False
        if self.service_name != other.service_name:
            return False
        if self.service_type != other.service_type:
            return False
        if self.task_id != other.task_id:
            return False
        if self.robot_id != other.robot_id:
            return False
        if self.object_id != other.object_id:
            return False
        if self.user_id != other.user_id:
            return False
        if self.place_id != other.place_id:
            return False
        if self.priority != other.priority:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def url(self):
        """Message field 'url'."""
        return self._url

    @url.setter
    def url(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'url' field must be of type 'str'"
        self._url = value

    @property
    def service_name(self):
        """Message field 'service_name'."""
        return self._service_name

    @service_name.setter
    def service_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'service_name' field must be of type 'str'"
        self._service_name = value

    @property
    def service_type(self):
        """Message field 'service_type'."""
        return self._service_type

    @service_type.setter
    def service_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'service_type' field must be of type 'str'"
        self._service_type = value

    @property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'task_id' field must be an integer in [-2147483648, 2147483647]"
        self._task_id = value

    @property
    def robot_id(self):
        """Message field 'robot_id'."""
        return self._robot_id

    @robot_id.setter
    def robot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_id' field must be an integer in [-2147483648, 2147483647]"
        self._robot_id = value

    @property
    def object_id(self):
        """Message field 'object_id'."""
        return self._object_id

    @object_id.setter
    def object_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'object_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'object_id' field must be an integer in [-2147483648, 2147483647]"
        self._object_id = value

    @property
    def user_id(self):
        """Message field 'user_id'."""
        return self._user_id

    @user_id.setter
    def user_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'user_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'user_id' field must be an integer in [-2147483648, 2147483647]"
        self._user_id = value

    @property
    def place_id(self):
        """Message field 'place_id'."""
        return self._place_id

    @place_id.setter
    def place_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'place_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'place_id' field must be an integer in [-2147483648, 2147483647]"
        self._place_id = value

    @property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'priority' field must be an integer in [-2147483648, 2147483647]"
        self._priority = value


# Import statements for member types

# Member 'val'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_TmsNwReq_Response(type):
    """Metaclass of message 'TmsNwReq_Response'."""

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
            module = import_type_support('tms_nw_rp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_nw_rp.srv.TmsNwReq_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__tms_nw_req__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__tms_nw_req__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__tms_nw_req__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__tms_nw_req__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__tms_nw_req__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TmsNwReq_Response(metaclass=Metaclass_TmsNwReq_Response):
    """Message class 'TmsNwReq_Response'."""

    __slots__ = [
        '_result',
        '_val',
    ]

    _fields_and_field_types = {
        'result': 'int32',
        'val': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', int())
        self.val = array.array('f', kwargs.get('val', []))

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
        if self.result != other.result:
            return False
        if self.val != other.val:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'result' field must be an integer in [-2147483648, 2147483647]"
        self._result = value

    @property
    def val(self):
        """Message field 'val'."""
        return self._val

    @val.setter
    def val(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'val' array.array() must have the type code of 'f'"
            self._val = value
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
                "The 'val' field must be a set or sequence and each value of type 'float'"
        self._val = array.array('f', value)


class Metaclass_TmsNwReq(type):
    """Metaclass of service 'TmsNwReq'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tms_nw_rp')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tms_nw_rp.srv.TmsNwReq')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__tms_nw_req

            from tms_nw_rp.srv import _tms_nw_req
            if _tms_nw_req.Metaclass_TmsNwReq_Request._TYPE_SUPPORT is None:
                _tms_nw_req.Metaclass_TmsNwReq_Request.__import_type_support__()
            if _tms_nw_req.Metaclass_TmsNwReq_Response._TYPE_SUPPORT is None:
                _tms_nw_req.Metaclass_TmsNwReq_Response.__import_type_support__()


class TmsNwReq(metaclass=Metaclass_TmsNwReq):
    from tms_nw_rp.srv._tms_nw_req import TmsNwReq_Request as Request
    from tms_nw_rp.srv._tms_nw_req import TmsNwReq_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
