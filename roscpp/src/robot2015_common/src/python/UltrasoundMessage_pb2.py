# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: UltrasoundMessage.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='UltrasoundMessage.proto',
  package='',
  serialized_pb='\n\x17UltrasoundMessage.proto\"_\n\x11UltrasoundMessage\x12\x0e\n\x06online\x18\x01 \x01(\x05\x12\x1c\n\x14Ldistance_Ultrasonic\x18\x02 \x01(\x05\x12\x1c\n\x14Rdistance_Ultrasonic\x18\x03 \x01(\x05')




_ULTRASOUNDMESSAGE = _descriptor.Descriptor(
  name='UltrasoundMessage',
  full_name='UltrasoundMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='online', full_name='UltrasoundMessage.online', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='Ldistance_Ultrasonic', full_name='UltrasoundMessage.Ldistance_Ultrasonic', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='Rdistance_Ultrasonic', full_name='UltrasoundMessage.Rdistance_Ultrasonic', index=2,
      number=3, type=5, cpp_type=1, label=1,
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
  serialized_start=27,
  serialized_end=122,
)

DESCRIPTOR.message_types_by_name['UltrasoundMessage'] = _ULTRASOUNDMESSAGE

class UltrasoundMessage(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _ULTRASOUNDMESSAGE

  # @@protoc_insertion_point(class_scope:UltrasoundMessage)


# @@protoc_insertion_point(module_scope)
