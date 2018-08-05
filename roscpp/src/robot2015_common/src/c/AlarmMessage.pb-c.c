/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "AlarmMessage.pb-c.h"
void   alarm_message__init
                     (AlarmMessage         *message)
{
  static AlarmMessage init_value = ALARM_MESSAGE__INIT;
  *message = init_value;
}
size_t alarm_message__get_packed_size
                     (const AlarmMessage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &alarm_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t alarm_message__pack
                     (const AlarmMessage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &alarm_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t alarm_message__pack_to_buffer
                     (const AlarmMessage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &alarm_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
AlarmMessage *
       alarm_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (AlarmMessage *)
     protobuf_c_message_unpack (&alarm_message__descriptor,
                                allocator, len, data);
}
void   alarm_message__free_unpacked
                     (AlarmMessage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &alarm_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor alarm_message__field_descriptors[6] =
{
  {
    "CtrolBoxHighTemAlarm",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(AlarmMessage, has_ctrolboxhightemalarm),
    PROTOBUF_C_OFFSETOF(AlarmMessage, ctrolboxhightemalarm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CtrolBoxFrozenTemAlarm",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(AlarmMessage, has_ctrolboxfrozentemalarm),
    PROTOBUF_C_OFFSETOF(AlarmMessage, ctrolboxfrozentemalarm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMSModComLostAlarm",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(AlarmMessage, has_bmsmodcomlostalarm),
    PROTOBUF_C_OFFSETOF(AlarmMessage, bmsmodcomlostalarm),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Emergency_Status_stop",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(AlarmMessage, has_emergency_status_stop),
    PROTOBUF_C_OFFSETOF(AlarmMessage, emergency_status_stop),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "EcanExternSnsorNdeOFF",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(AlarmMessage, has_ecanexternsnsorndeoff),
    PROTOBUF_C_OFFSETOF(AlarmMessage, ecanexternsnsorndeoff),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "JoyTestNodeOFF",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(AlarmMessage, has_joytestnodeoff),
    PROTOBUF_C_OFFSETOF(AlarmMessage, joytestnodeoff),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned alarm_message__field_indices_by_name[] = {
  2,   /* field[2] = BMSModComLostAlarm */
  1,   /* field[1] = CtrolBoxFrozenTemAlarm */
  0,   /* field[0] = CtrolBoxHighTemAlarm */
  4,   /* field[4] = EcanExternSnsorNdeOFF */
  3,   /* field[3] = Emergency_Status_stop */
  5,   /* field[5] = JoyTestNodeOFF */
};
static const ProtobufCIntRange alarm_message__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 7, 5 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor alarm_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "AlarmMessage",
  "AlarmMessage",
  "AlarmMessage",
  "",
  sizeof(AlarmMessage),
  6,
  alarm_message__field_descriptors,
  alarm_message__field_indices_by_name,
  2,  alarm_message__number_ranges,
  (ProtobufCMessageInit) alarm_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
