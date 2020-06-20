# generated from rosidl_generator_py/resource/_idl.py.em
# with input from moveit_msgs:srv/GetPlanningScene.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPlanningScene_Request(type):
    """Metaclass of message 'GetPlanningScene_Request'."""

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
                'moveit_msgs.srv.GetPlanningScene_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_planning_scene__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_planning_scene__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_planning_scene__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_planning_scene__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_planning_scene__request

            from moveit_msgs.msg import PlanningSceneComponents
            if PlanningSceneComponents.__class__._TYPE_SUPPORT is None:
                PlanningSceneComponents.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPlanningScene_Request(metaclass=Metaclass_GetPlanningScene_Request):
    """Message class 'GetPlanningScene_Request'."""

    __slots__ = [
        '_components',
    ]

    _fields_and_field_types = {
        'components': 'moveit_msgs/PlanningSceneComponents',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'PlanningSceneComponents'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import PlanningSceneComponents
        self.components = kwargs.get('components', PlanningSceneComponents())

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
        if self.components != other.components:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def components(self):
        """Message field 'components'."""
        return self._components

    @components.setter
    def components(self, value):
        if __debug__:
            from moveit_msgs.msg import PlanningSceneComponents
            assert \
                isinstance(value, PlanningSceneComponents), \
                "The 'components' field must be a sub message of type 'PlanningSceneComponents'"
        self._components = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPlanningScene_Response(type):
    """Metaclass of message 'GetPlanningScene_Response'."""

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
                'moveit_msgs.srv.GetPlanningScene_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_planning_scene__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_planning_scene__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_planning_scene__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_planning_scene__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_planning_scene__response

            from moveit_msgs.msg import PlanningScene
            if PlanningScene.__class__._TYPE_SUPPORT is None:
                PlanningScene.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPlanningScene_Response(metaclass=Metaclass_GetPlanningScene_Response):
    """Message class 'GetPlanningScene_Response'."""

    __slots__ = [
        '_scene',
    ]

    _fields_and_field_types = {
        'scene': 'moveit_msgs/PlanningScene',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['moveit_msgs', 'msg'], 'PlanningScene'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from moveit_msgs.msg import PlanningScene
        self.scene = kwargs.get('scene', PlanningScene())

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
        if self.scene != other.scene:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def scene(self):
        """Message field 'scene'."""
        return self._scene

    @scene.setter
    def scene(self, value):
        if __debug__:
            from moveit_msgs.msg import PlanningScene
            assert \
                isinstance(value, PlanningScene), \
                "The 'scene' field must be a sub message of type 'PlanningScene'"
        self._scene = value


class Metaclass_GetPlanningScene(type):
    """Metaclass of service 'GetPlanningScene'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('moveit_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'moveit_msgs.srv.GetPlanningScene')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_planning_scene

            from moveit_msgs.srv import _get_planning_scene
            if _get_planning_scene.Metaclass_GetPlanningScene_Request._TYPE_SUPPORT is None:
                _get_planning_scene.Metaclass_GetPlanningScene_Request.__import_type_support__()
            if _get_planning_scene.Metaclass_GetPlanningScene_Response._TYPE_SUPPORT is None:
                _get_planning_scene.Metaclass_GetPlanningScene_Response.__import_type_support__()


class GetPlanningScene(metaclass=Metaclass_GetPlanningScene):
    from moveit_msgs.srv._get_planning_scene import GetPlanningScene_Request as Request
    from moveit_msgs.srv._get_planning_scene import GetPlanningScene_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')