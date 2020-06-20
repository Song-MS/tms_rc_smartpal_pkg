# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tms_msg_db:msg/Tmsdb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Tmsdb(type):
    """Metaclass of message 'Tmsdb'."""

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
                'tms_msg_db.msg.Tmsdb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tmsdb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tmsdb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tmsdb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tmsdb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tmsdb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Tmsdb(metaclass=Metaclass_Tmsdb):
    """Message class 'Tmsdb'."""

    __slots__ = [
        '_time',
        '_type',
        '_id',
        '_name',
        '_x',
        '_y',
        '_z',
        '_rr',
        '_rp',
        '_ry',
        '_offset_x',
        '_offset_y',
        '_offset_z',
        '_joint',
        '_weight',
        '_rfid',
        '_etcdata',
        '_place',
        '_extfile',
        '_sensor',
        '_probability',
        '_state',
        '_task',
        '_note',
        '_tag',
        '_announce',
    ]

    _fields_and_field_types = {
        'time': 'string',
        'type': 'string',
        'id': 'int32',
        'name': 'string',
        'x': 'double',
        'y': 'double',
        'z': 'double',
        'rr': 'double',
        'rp': 'double',
        'ry': 'double',
        'offset_x': 'double',
        'offset_y': 'double',
        'offset_z': 'double',
        'joint': 'string',
        'weight': 'double',
        'rfid': 'string',
        'etcdata': 'string',
        'place': 'int32',
        'extfile': 'string',
        'sensor': 'int32',
        'probability': 'double',
        'state': 'int32',
        'task': 'string',
        'note': 'string',
        'tag': 'string',
        'announce': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time = kwargs.get('time', str())
        self.type = kwargs.get('type', str())
        self.id = kwargs.get('id', int())
        self.name = kwargs.get('name', str())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.rr = kwargs.get('rr', float())
        self.rp = kwargs.get('rp', float())
        self.ry = kwargs.get('ry', float())
        self.offset_x = kwargs.get('offset_x', float())
        self.offset_y = kwargs.get('offset_y', float())
        self.offset_z = kwargs.get('offset_z', float())
        self.joint = kwargs.get('joint', str())
        self.weight = kwargs.get('weight', float())
        self.rfid = kwargs.get('rfid', str())
        self.etcdata = kwargs.get('etcdata', str())
        self.place = kwargs.get('place', int())
        self.extfile = kwargs.get('extfile', str())
        self.sensor = kwargs.get('sensor', int())
        self.probability = kwargs.get('probability', float())
        self.state = kwargs.get('state', int())
        self.task = kwargs.get('task', str())
        self.note = kwargs.get('note', str())
        self.tag = kwargs.get('tag', str())
        self.announce = kwargs.get('announce', str())

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
        if self.time != other.time:
            return False
        if self.type != other.type:
            return False
        if self.id != other.id:
            return False
        if self.name != other.name:
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
        if self.offset_x != other.offset_x:
            return False
        if self.offset_y != other.offset_y:
            return False
        if self.offset_z != other.offset_z:
            return False
        if self.joint != other.joint:
            return False
        if self.weight != other.weight:
            return False
        if self.rfid != other.rfid:
            return False
        if self.etcdata != other.etcdata:
            return False
        if self.place != other.place:
            return False
        if self.extfile != other.extfile:
            return False
        if self.sensor != other.sensor:
            return False
        if self.probability != other.probability:
            return False
        if self.state != other.state:
            return False
        if self.task != other.task:
            return False
        if self.note != other.note:
            return False
        if self.tag != other.tag:
            return False
        if self.announce != other.announce:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'time' field must be of type 'str'"
        self._time = value

    @property  # noqa: A003
    def type(self):
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @property  # noqa: A003
    def id(self):
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
        self._z = value

    @property
    def rr(self):
        """Message field 'rr'."""
        return self._rr

    @rr.setter
    def rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr' field must be of type 'float'"
        self._rr = value

    @property
    def rp(self):
        """Message field 'rp'."""
        return self._rp

    @rp.setter
    def rp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rp' field must be of type 'float'"
        self._rp = value

    @property
    def ry(self):
        """Message field 'ry'."""
        return self._ry

    @ry.setter
    def ry(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ry' field must be of type 'float'"
        self._ry = value

    @property
    def offset_x(self):
        """Message field 'offset_x'."""
        return self._offset_x

    @offset_x.setter
    def offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_x' field must be of type 'float'"
        self._offset_x = value

    @property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_y' field must be of type 'float'"
        self._offset_y = value

    @property
    def offset_z(self):
        """Message field 'offset_z'."""
        return self._offset_z

    @offset_z.setter
    def offset_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_z' field must be of type 'float'"
        self._offset_z = value

    @property
    def joint(self):
        """Message field 'joint'."""
        return self._joint

    @joint.setter
    def joint(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'joint' field must be of type 'str'"
        self._joint = value

    @property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'weight' field must be of type 'float'"
        self._weight = value

    @property
    def rfid(self):
        """Message field 'rfid'."""
        return self._rfid

    @rfid.setter
    def rfid(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rfid' field must be of type 'str'"
        self._rfid = value

    @property
    def etcdata(self):
        """Message field 'etcdata'."""
        return self._etcdata

    @etcdata.setter
    def etcdata(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'etcdata' field must be of type 'str'"
        self._etcdata = value

    @property
    def place(self):
        """Message field 'place'."""
        return self._place

    @place.setter
    def place(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'place' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'place' field must be an integer in [-2147483648, 2147483647]"
        self._place = value

    @property
    def extfile(self):
        """Message field 'extfile'."""
        return self._extfile

    @extfile.setter
    def extfile(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'extfile' field must be of type 'str'"
        self._extfile = value

    @property
    def sensor(self):
        """Message field 'sensor'."""
        return self._sensor

    @sensor.setter
    def sensor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'sensor' field must be an integer in [-2147483648, 2147483647]"
        self._sensor = value

    @property
    def probability(self):
        """Message field 'probability'."""
        return self._probability

    @probability.setter
    def probability(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'probability' field must be of type 'float'"
        self._probability = value

    @property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'state' field must be an integer in [-2147483648, 2147483647]"
        self._state = value

    @property
    def task(self):
        """Message field 'task'."""
        return self._task

    @task.setter
    def task(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task' field must be of type 'str'"
        self._task = value

    @property
    def note(self):
        """Message field 'note'."""
        return self._note

    @note.setter
    def note(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'note' field must be of type 'str'"
        self._note = value

    @property
    def tag(self):
        """Message field 'tag'."""
        return self._tag

    @tag.setter
    def tag(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'tag' field must be of type 'str'"
        self._tag = value

    @property
    def announce(self):
        """Message field 'announce'."""
        return self._announce

    @announce.setter
    def announce(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'announce' field must be of type 'str'"
        self._announce = value
