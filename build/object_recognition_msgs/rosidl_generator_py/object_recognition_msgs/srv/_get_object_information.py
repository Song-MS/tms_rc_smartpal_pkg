# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_recognition_msgs:srv/GetObjectInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetObjectInformation_Request(type):
    """Metaclass of message 'GetObjectInformation_Request'."""

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
                'object_recognition_msgs.srv.GetObjectInformation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_object_information__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_object_information__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_object_information__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_object_information__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_object_information__request

            from object_recognition_msgs.msg import ObjectType
            if ObjectType.__class__._TYPE_SUPPORT is None:
                ObjectType.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetObjectInformation_Request(metaclass=Metaclass_GetObjectInformation_Request):
    """Message class 'GetObjectInformation_Request'."""

    __slots__ = [
        '_type',
    ]

    _fields_and_field_types = {
        'type': 'object_recognition_msgs/ObjectType',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['object_recognition_msgs', 'msg'], 'ObjectType'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from object_recognition_msgs.msg import ObjectType
        self.type = kwargs.get('type', ObjectType())

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
        if self.type != other.type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetObjectInformation_Response(type):
    """Metaclass of message 'GetObjectInformation_Response'."""

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
                'object_recognition_msgs.srv.GetObjectInformation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_object_information__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_object_information__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_object_information__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_object_information__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_object_information__response

            from object_recognition_msgs.msg import ObjectInformation
            if ObjectInformation.__class__._TYPE_SUPPORT is None:
                ObjectInformation.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetObjectInformation_Response(metaclass=Metaclass_GetObjectInformation_Response):
    """Message class 'GetObjectInformation_Response'."""

    __slots__ = [
        '_information',
    ]

    _fields_and_field_types = {
        'information': 'object_recognition_msgs/ObjectInformation',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['object_recognition_msgs', 'msg'], 'ObjectInformation'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from object_recognition_msgs.msg import ObjectInformation
        self.information = kwargs.get('information', ObjectInformation())

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
        if self.information != other.information:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def information(self):
        """Message field 'information'."""
        return self._information

    @information.setter
    def information(self, value):
        if __debug__:
            from object_recognition_msgs.msg import ObjectInformation
            assert \
                isinstance(value, ObjectInformation), \
                "The 'information' field must be a sub message of type 'ObjectInformation'"
        self._information = value


class Metaclass_GetObjectInformation(type):
    """Metaclass of service 'GetObjectInformation'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('object_recognition_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'object_recognition_msgs.srv.GetObjectInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_object_information

            from object_recognition_msgs.srv import _get_object_information
            if _get_object_information.Metaclass_GetObjectInformation_Request._TYPE_SUPPORT is None:
                _get_object_information.Metaclass_GetObjectInformation_Request.__import_type_support__()
            if _get_object_information.Metaclass_GetObjectInformation_Response._TYPE_SUPPORT is None:
                _get_object_information.Metaclass_GetObjectInformation_Response.__import_type_support__()


class GetObjectInformation(metaclass=Metaclass_GetObjectInformation):
    from object_recognition_msgs.srv._get_object_information import GetObjectInformation_Request as Request
    from object_recognition_msgs.srv._get_object_information import GetObjectInformation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
