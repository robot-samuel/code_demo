# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: pantiltMessage.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='pantiltMessage.proto',
  package='',
  serialized_pb='\n\x14pantiltMessage.proto\"X\n\x0epantiltMessage\x12\x0e\n\x06online\x18\x01 \x01(\x05\x12\x0b\n\x03pan\x18\x02 \x01(\x05\x12\x0c\n\x04tilt\x18\x03 \x01(\x05\x12\x0c\n\x04zoom\x18\x04 \x01(\x05\x12\r\n\x05\x66oucs\x18\x05 \x01(\x05')




_PANTILTMESSAGE = _descriptor.Descriptor(
  name='pantiltMessage',
  full_name='pantiltMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='online', full_name='pantiltMessage.online', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pan', full_name='pantiltMessage.pan', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tilt', full_name='pantiltMessage.tilt', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='zoom', full_name='pantiltMessage.zoom', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='foucs', full_name='pantiltMessage.foucs', index=4,
      number=5, type=5, cpp_type=1, label=1,
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
  serialized_start=24,
  serialized_end=112,
)

DESCRIPTOR.message_types_by_name['pantiltMessage'] = _PANTILTMESSAGE

class pantiltMessage(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _PANTILTMESSAGE

  # @@protoc_insertion_point(class_scope:pantiltMessage)


# @@protoc_insertion_point(module_scope)