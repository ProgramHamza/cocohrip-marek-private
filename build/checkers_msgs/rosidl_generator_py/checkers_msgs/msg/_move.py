# generated from rosidl_generator_py/resource/_idl.py.em
# with input from checkers_msgs:msg/Move.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Move(type):
    """Metaclass of message 'Move'."""

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
            module = import_type_support('checkers_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'checkers_msgs.msg.Move')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__move
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__move
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__move
            cls._TYPE_SUPPORT = module.type_support_msg__msg__move
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__move

            from checkers_msgs.msg import Piece
            if Piece.__class__._TYPE_SUPPORT is None:
                Piece.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move(metaclass=Metaclass_Move):
    """Message class 'Move'."""

    __slots__ = [
        '_target_row',
        '_target_col',
        '_piece_for_moving',
        '_removed_pieces',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'target_row': 'int32',
        'target_col': 'int32',
        'piece_for_moving': 'checkers_msgs/Piece',
        'removed_pieces': 'sequence<checkers_msgs/Piece>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['checkers_msgs', 'msg'], 'Piece'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['checkers_msgs', 'msg'], 'Piece')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_row = kwargs.get('target_row', int())
        self.target_col = kwargs.get('target_col', int())
        from checkers_msgs.msg import Piece
        self.piece_for_moving = kwargs.get('piece_for_moving', Piece())
        self.removed_pieces = kwargs.get('removed_pieces', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.target_row != other.target_row:
            return False
        if self.target_col != other.target_col:
            return False
        if self.piece_for_moving != other.piece_for_moving:
            return False
        if self.removed_pieces != other.removed_pieces:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_row(self):
        """Message field 'target_row'."""
        return self._target_row

    @target_row.setter
    def target_row(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'target_row' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_row' field must be an integer in [-2147483648, 2147483647]"
        self._target_row = value

    @builtins.property
    def target_col(self):
        """Message field 'target_col'."""
        return self._target_col

    @target_col.setter
    def target_col(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'target_col' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'target_col' field must be an integer in [-2147483648, 2147483647]"
        self._target_col = value

    @builtins.property
    def piece_for_moving(self):
        """Message field 'piece_for_moving'."""
        return self._piece_for_moving

    @piece_for_moving.setter
    def piece_for_moving(self, value):
        if self._check_fields:
            from checkers_msgs.msg import Piece
            assert \
                isinstance(value, Piece), \
                "The 'piece_for_moving' field must be a sub message of type 'Piece'"
        self._piece_for_moving = value

    @builtins.property
    def removed_pieces(self):
        """Message field 'removed_pieces'."""
        return self._removed_pieces

    @removed_pieces.setter
    def removed_pieces(self, value):
        if self._check_fields:
            from checkers_msgs.msg import Piece
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
                 all(isinstance(v, Piece) for v in value) and
                 True), \
                "The 'removed_pieces' field must be a set or sequence and each value of type 'Piece'"
        self._removed_pieces = value
