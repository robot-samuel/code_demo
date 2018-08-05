# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: RobotStatusMessage.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


import ControllerMessage_pb2
import pantiltMessage_pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='RobotStatusMessage.proto',
  package='',
  serialized_pb='\n\x18RobotStatusMessage.proto\x1a\x17\x43ontrollerMessage.proto\x1a\x14pantiltMessage.proto\"\x93\x02\n\x12RobotStatusMessage\x12\x0c\n\x04Stat\x18\x01 \x01(\x05\x12&\n\nController\x18\x02 \x01(\x0b\x32\x12.ControllerMessage\x12-\n\tcameramsg\x18\x03 \x01(\x0b\x32\x1a.RobotStatusMessage.camera\x12\x39\n\x0finfredcameramsg\x18\x04 \x01(\x0b\x32 .RobotStatusMessage.infredcamera\x12#\n\npantlitmsg\x18\x05 \x01(\x0b\x32\x0f.pantiltMessage\x1a\x18\n\x06\x63\x61mera\x12\x0e\n\x06online\x18\x01 \x01(\x05\x1a\x1e\n\x0cinfredcamera\x12\x0e\n\x06online\x18\x01 \x01(\x05')




_ROBOTSTATUSMESSAGE_CAMERA = _descriptor.Descriptor(
  name='camera',
  full_name='RobotStatusMessage.camera',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='online', full_name='RobotStatusMessage.camera.online', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=295,
  serialized_end=319,
)

_ROBOTSTATUSMESSAGE_INFREDCAMERA = _descriptor.Descriptor(
  name='infredcamera',
  full_name='RobotStatusMessage.infredcamera',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='online', full_name='RobotStatusMessage.infredcamera.online', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=321,
  serialized_end=351,
)

_ROBOTSTATUSMESSAGE = _descriptor.Descriptor(
  name='RobotStatusMessage',
  full_name='RobotStatusMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='Stat', full_name='RobotStatusMessage.Stat', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='Controller', full_name='RobotStatusMessage.Controller', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cameramsg', full_name='RobotStatusMessage.cameramsg', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='infredcameramsg', full_name='RobotStatusMessage.infredcameramsg', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pantlitmsg', full_name='RobotStatusMessage.pantlitmsg', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_ROBOTSTATUSMESSAGE_CAMERA, _ROBOTSTATUSMESSAGE_INFREDCAMERA, ],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=76,
  serialized_end=351,
)

_ROBOTSTATUSMESSAGE_CAMERA.containing_type = _ROBOTSTATUSMESSAGE;
_ROBOTSTATUSMESSAGE_INFREDCAMERA.containing_type = _ROBOTSTATUSMESSAGE;
_ROBOTSTATUSMESSAGE.fields_by_name['Controller'].message_type = ControllerMessage_pb2._CONTROLLERMESSAGE
_ROBOTSTATUSMESSAGE.fields_by_name['cameramsg'].message_type = _ROBOTSTATUSMESSAGE_CAMERA
_ROBOTSTATUSMESSAGE.fields_by_name['infredcameramsg'].message_type = _ROBOTSTATUSMESSAGE_INFREDCAMERA
_ROBOTSTATUSMESSAGE.fields_by_name['pantlitmsg'].message_type = pantiltMessage_pb2._PANTILTMESSAGE
DESCRIPTOR.message_types_by_name['RobotStatusMessage'] = _ROBOTSTATUSMESSAGE

class RobotStatusMessage(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType

  class camera(_message.Message):
    __metaclass__ = _reflection.GeneratedProtocolMessageType
    DESCRIPTOR = _ROBOTSTATUSMESSAGE_CAMERA

    # @@protoc_insertion_point(class_scope:RobotStatusMessage.camera)

  class infredcamera(_message.Message):
    __metaclass__ = _reflection.GeneratedProtocolMessageType
    DESCRIPTOR = _ROBOTSTATUSMESSAGE_INFREDCAMERA

    # @@protoc_insertion_point(class_scope:RobotStatusMessage.infredcamera)
  DESCRIPTOR = _ROBOTSTATUSMESSAGE

  # @@protoc_insertion_point(class_scope:RobotStatusMessage)


# @@protoc_insertion_point(module_scope)
