# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: BMSMessage.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='BMSMessage.proto',
  package='',
  serialized_pb='\n\x10\x42MSMessage.proto\"Y\n\nBmsMessage\x12\x0c\n\x04Stat\x18\x01 \x01(\x05\x12\x0f\n\x07\x42MS_SOC\x18\x02 \x01(\x05\x12\x13\n\x0b\x42MS_Voltage\x18\x03 \x01(\x02\x12\x17\n\x0f\x42MS_sys_Current\x18\x04 \x01(\x02')




_BMSMESSAGE = _descriptor.Descriptor(
  name='BmsMessage',
  full_name='BmsMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='Stat', full_name='BmsMessage.Stat', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='BMS_SOC', full_name='BmsMessage.BMS_SOC', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='BMS_Voltage', full_name='BmsMessage.BMS_Voltage', index=2,
      number=3, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='BMS_sys_Current', full_name='BmsMessage.BMS_sys_Current', index=3,
      number=4, type=2, cpp_type=6, label=1,
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
  serialized_start=20,
  serialized_end=109,
)

DESCRIPTOR.message_types_by_name['BmsMessage'] = _BMSMESSAGE

class BmsMessage(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _BMSMESSAGE

  # @@protoc_insertion_point(class_scope:BmsMessage)


# @@protoc_insertion_point(module_scope)
