# generated from rosidl_generator_py/resource/_idl.py.em
# with input from object_recognition_msgs:action/ObjectRecognition.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'filter_limits'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectRecognition_Goal(type):
    """Metaclass of message 'ObjectRecognition_Goal'."""

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
                'object_recognition_msgs.action.ObjectRecognition_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__object_recognition__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__object_recognition__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__object_recognition__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__object_recognition__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__object_recognition__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectRecognition_Goal(metaclass=Metaclass_ObjectRecognition_Goal):
    """Message class 'ObjectRecognition_Goal'."""

    __slots__ = [
        '_use_roi',
        '_filter_limits',
    ]

    _fields_and_field_types = {
        'use_roi': 'boolean',
        'filter_limits': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.use_roi = kwargs.get('use_roi', bool())
        self.filter_limits = array.array('f', kwargs.get('filter_limits', []))

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
        if self.use_roi != other.use_roi:
            return False
        if self.filter_limits != other.filter_limits:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def use_roi(self):
        """Message field 'use_roi'."""
        return self._use_roi

    @use_roi.setter
    def use_roi(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_roi' field must be of type 'bool'"
        self._use_roi = value

    @property
    def filter_limits(self):
        """Message field 'filter_limits'."""
        return self._filter_limits

    @filter_limits.setter
    def filter_limits(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'filter_limits' array.array() must have the type code of 'f'"
            self._filter_limits = value
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
                "The 'filter_limits' field must be a set or sequence and each value of type 'float'"
        self._filter_limits = array.array('f', value)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ObjectRecognition_Result(type):
    """Metaclass of message 'ObjectRecognition_Result'."""

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
                'object_recognition_msgs.action.ObjectRecognition_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__object_recognition__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__object_recognition__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__object_recognition__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__object_recognition__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__object_recognition__result

            from object_recognition_msgs.msg import RecognizedObjectArray
            if RecognizedObjectArray.__class__._TYPE_SUPPORT is None:
                RecognizedObjectArray.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectRecognition_Result(metaclass=Metaclass_ObjectRecognition_Result):
    """Message class 'ObjectRecognition_Result'."""

    __slots__ = [
        '_recognized_objects',
    ]

    _fields_and_field_types = {
        'recognized_objects': 'object_recognition_msgs/RecognizedObjectArray',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['object_recognition_msgs', 'msg'], 'RecognizedObjectArray'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from object_recognition_msgs.msg import RecognizedObjectArray
        self.recognized_objects = kwargs.get('recognized_objects', RecognizedObjectArray())

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
        if self.recognized_objects != other.recognized_objects:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def recognized_objects(self):
        """Message field 'recognized_objects'."""
        return self._recognized_objects

    @recognized_objects.setter
    def recognized_objects(self, value):
        if __debug__:
            from object_recognition_msgs.msg import RecognizedObjectArray
            assert \
                isinstance(value, RecognizedObjectArray), \
                "The 'recognized_objects' field must be a sub message of type 'RecognizedObjectArray'"
        self._recognized_objects = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ObjectRecognition_Feedback(type):
    """Metaclass of message 'ObjectRecognition_Feedback'."""

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
                'object_recognition_msgs.action.ObjectRecognition_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__object_recognition__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__object_recognition__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__object_recognition__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__object_recognition__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__object_recognition__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectRecognition_Feedback(metaclass=Metaclass_ObjectRecognition_Feedback):
    """Message class 'ObjectRecognition_Feedback'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ObjectRecognition_SendGoal_Request(type):
    """Metaclass of message 'ObjectRecognition_SendGoal_Request'."""

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
                'object_recognition_msgs.action.ObjectRecognition_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__object_recognition__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__object_recognition__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__object_recognition__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__object_recognition__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__object_recognition__send_goal__request

            from object_recognition_msgs.action import ObjectRecognition
            if ObjectRecognition.Goal.__class__._TYPE_SUPPORT is None:
                ObjectRecognition.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectRecognition_SendGoal_Request(metaclass=Metaclass_ObjectRecognition_SendGoal_Request):
    """Message class 'ObjectRecognition_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'object_recognition_msgs/ObjectRecognition_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['object_recognition_msgs', 'action'], 'ObjectRecognition_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from object_recognition_msgs.action._object_recognition import ObjectRecognition_Goal
        self.goal = kwargs.get('goal', ObjectRecognition_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from object_recognition_msgs.action._object_recognition import ObjectRecognition_Goal
            assert \
                isinstance(value, ObjectRecognition_Goal), \
                "The 'goal' field must be a sub message of type 'ObjectRecognition_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ObjectRecognition_SendGoal_Response(type):
    """Metaclass of message 'ObjectRecognition_SendGoal_Response'."""

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
                'object_recognition_msgs.action.ObjectRecognition_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__object_recognition__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__object_recognition__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__object_recognition__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__object_recognition__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__object_recognition__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectRecognition_SendGoal_Response(metaclass=Metaclass_ObjectRecognition_SendGoal_Response):
    """Message class 'ObjectRecognition_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ObjectRecognition_SendGoal(type):
    """Metaclass of service 'ObjectRecognition_SendGoal'."""

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
                'object_recognition_msgs.action.ObjectRecognition_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__object_recognition__send_goal

            from object_recognition_msgs.action import _object_recognition
            if _object_recognition.Metaclass_ObjectRecognition_SendGoal_Request._TYPE_SUPPORT is None:
                _object_recognition.Metaclass_ObjectRecognition_SendGoal_Request.__import_type_support__()
            if _object_recognition.Metaclass_ObjectRecognition_SendGoal_Response._TYPE_SUPPORT is None:
                _object_recognition.Metaclass_ObjectRecognition_SendGoal_Response.__import_type_support__()


class ObjectRecognition_SendGoal(metaclass=Metaclass_ObjectRecognition_SendGoal):
    from object_recognition_msgs.action._object_recognition import ObjectRecognition_SendGoal_Request as Request
    from object_recognition_msgs.action._object_recognition import ObjectRecognition_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ObjectRecognition_GetResult_Request(type):
    """Metaclass of message 'ObjectRecognition_GetResult_Request'."""

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
                'object_recognition_msgs.action.ObjectRecognition_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__object_recognition__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__object_recognition__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__object_recognition__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__object_recognition__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__object_recognition__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectRecognition_GetResult_Request(metaclass=Metaclass_ObjectRecognition_GetResult_Request):
    """Message class 'ObjectRecognition_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ObjectRecognition_GetResult_Response(type):
    """Metaclass of message 'ObjectRecognition_GetResult_Response'."""

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
                'object_recognition_msgs.action.ObjectRecognition_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__object_recognition__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__object_recognition__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__object_recognition__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__object_recognition__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__object_recognition__get_result__response

            from object_recognition_msgs.action import ObjectRecognition
            if ObjectRecognition.Result.__class__._TYPE_SUPPORT is None:
                ObjectRecognition.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectRecognition_GetResult_Response(metaclass=Metaclass_ObjectRecognition_GetResult_Response):
    """Message class 'ObjectRecognition_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'object_recognition_msgs/ObjectRecognition_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['object_recognition_msgs', 'action'], 'ObjectRecognition_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from object_recognition_msgs.action._object_recognition import ObjectRecognition_Result
        self.result = kwargs.get('result', ObjectRecognition_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from object_recognition_msgs.action._object_recognition import ObjectRecognition_Result
            assert \
                isinstance(value, ObjectRecognition_Result), \
                "The 'result' field must be a sub message of type 'ObjectRecognition_Result'"
        self._result = value


class Metaclass_ObjectRecognition_GetResult(type):
    """Metaclass of service 'ObjectRecognition_GetResult'."""

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
                'object_recognition_msgs.action.ObjectRecognition_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__object_recognition__get_result

            from object_recognition_msgs.action import _object_recognition
            if _object_recognition.Metaclass_ObjectRecognition_GetResult_Request._TYPE_SUPPORT is None:
                _object_recognition.Metaclass_ObjectRecognition_GetResult_Request.__import_type_support__()
            if _object_recognition.Metaclass_ObjectRecognition_GetResult_Response._TYPE_SUPPORT is None:
                _object_recognition.Metaclass_ObjectRecognition_GetResult_Response.__import_type_support__()


class ObjectRecognition_GetResult(metaclass=Metaclass_ObjectRecognition_GetResult):
    from object_recognition_msgs.action._object_recognition import ObjectRecognition_GetResult_Request as Request
    from object_recognition_msgs.action._object_recognition import ObjectRecognition_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ObjectRecognition_FeedbackMessage(type):
    """Metaclass of message 'ObjectRecognition_FeedbackMessage'."""

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
                'object_recognition_msgs.action.ObjectRecognition_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__object_recognition__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__object_recognition__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__object_recognition__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__object_recognition__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__object_recognition__feedback_message

            from object_recognition_msgs.action import ObjectRecognition
            if ObjectRecognition.Feedback.__class__._TYPE_SUPPORT is None:
                ObjectRecognition.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ObjectRecognition_FeedbackMessage(metaclass=Metaclass_ObjectRecognition_FeedbackMessage):
    """Message class 'ObjectRecognition_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'object_recognition_msgs/ObjectRecognition_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['object_recognition_msgs', 'action'], 'ObjectRecognition_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from object_recognition_msgs.action._object_recognition import ObjectRecognition_Feedback
        self.feedback = kwargs.get('feedback', ObjectRecognition_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from object_recognition_msgs.action._object_recognition import ObjectRecognition_Feedback
            assert \
                isinstance(value, ObjectRecognition_Feedback), \
                "The 'feedback' field must be a sub message of type 'ObjectRecognition_Feedback'"
        self._feedback = value


class Metaclass_ObjectRecognition(type):
    """Metaclass of action 'ObjectRecognition'."""

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
                'object_recognition_msgs.action.ObjectRecognition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__object_recognition

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from object_recognition_msgs.action import _object_recognition
            if _object_recognition.Metaclass_ObjectRecognition_SendGoal._TYPE_SUPPORT is None:
                _object_recognition.Metaclass_ObjectRecognition_SendGoal.__import_type_support__()
            if _object_recognition.Metaclass_ObjectRecognition_GetResult._TYPE_SUPPORT is None:
                _object_recognition.Metaclass_ObjectRecognition_GetResult.__import_type_support__()
            if _object_recognition.Metaclass_ObjectRecognition_FeedbackMessage._TYPE_SUPPORT is None:
                _object_recognition.Metaclass_ObjectRecognition_FeedbackMessage.__import_type_support__()


class ObjectRecognition(metaclass=Metaclass_ObjectRecognition):

    # The goal message defined in the action definition.
    from object_recognition_msgs.action._object_recognition import ObjectRecognition_Goal as Goal
    # The result message defined in the action definition.
    from object_recognition_msgs.action._object_recognition import ObjectRecognition_Result as Result
    # The feedback message defined in the action definition.
    from object_recognition_msgs.action._object_recognition import ObjectRecognition_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from object_recognition_msgs.action._object_recognition import ObjectRecognition_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from object_recognition_msgs.action._object_recognition import ObjectRecognition_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from object_recognition_msgs.action._object_recognition import ObjectRecognition_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
