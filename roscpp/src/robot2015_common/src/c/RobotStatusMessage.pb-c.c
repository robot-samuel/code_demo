/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "RobotStatusMessage.pb-c.h"
void   robot_status_message__camera__init
                     (RobotStatusMessage__Camera         *message)
{
  static RobotStatusMessage__Camera init_value = ROBOT_STATUS_MESSAGE__CAMERA__INIT;
  *message = init_value;
}
void   robot_status_message__infredcamera__init
                     (RobotStatusMessage__Infredcamera         *message)
{
  static RobotStatusMessage__Infredcamera init_value = ROBOT_STATUS_MESSAGE__INFREDCAMERA__INIT;
  *message = init_value;
}
void   robot_status_message__init
                     (RobotStatusMessage         *message)
{
  static RobotStatusMessage init_value = ROBOT_STATUS_MESSAGE__INIT;
  *message = init_value;
}
size_t robot_status_message__get_packed_size
                     (const RobotStatusMessage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &robot_status_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t robot_status_message__pack
                     (const RobotStatusMessage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &robot_status_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t robot_status_message__pack_to_buffer
                     (const RobotStatusMessage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &robot_status_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
RobotStatusMessage *
       robot_status_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (RobotStatusMessage *)
     protobuf_c_message_unpack (&robot_status_message__descriptor,
                                allocator, len, data);
}
void   robot_status_message__free_unpacked
                     (RobotStatusMessage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &robot_status_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor robot_status_message__camera__field_descriptors[1] =
{
  {
    "online",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(RobotStatusMessage__Camera, has_online),
    PROTOBUF_C_OFFSETOF(RobotStatusMessage__Camera, online),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned robot_status_message__camera__field_indices_by_name[] = {
  0,   /* field[0] = online */
};
static const ProtobufCIntRange robot_status_message__camera__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor robot_status_message__camera__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "RobotStatusMessage.camera",
  "Camera",
  "RobotStatusMessage__Camera",
  "",
  sizeof(RobotStatusMessage__Camera),
  1,
  robot_status_message__camera__field_descriptors,
  robot_status_message__camera__field_indices_by_name,
  1,  robot_status_message__camera__number_ranges,
  (ProtobufCMessageInit) robot_status_message__camera__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor robot_status_message__infredcamera__field_descriptors[1] =
{
  {
    "online",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(RobotStatusMessage__Infredcamera, has_online),
    PROTOBUF_C_OFFSETOF(RobotStatusMessage__Infredcamera, online),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned robot_status_message__infredcamera__field_indices_by_name[] = {
  0,   /* field[0] = online */
};
static const ProtobufCIntRange robot_status_message__infredcamera__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor robot_status_message__infredcamera__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "RobotStatusMessage.infredcamera",
  "Infredcamera",
  "RobotStatusMessage__Infredcamera",
  "",
  sizeof(RobotStatusMessage__Infredcamera),
  1,
  robot_status_message__infredcamera__field_descriptors,
  robot_status_message__infredcamera__field_indices_by_name,
  1,  robot_status_message__infredcamera__number_ranges,
  (ProtobufCMessageInit) robot_status_message__infredcamera__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor robot_status_message__field_descriptors[5] =
{
  {
    "Stat",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    PROTOBUF_C_OFFSETOF(RobotStatusMessage, has_stat),
    PROTOBUF_C_OFFSETOF(RobotStatusMessage, stat),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "Controller",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(RobotStatusMessage, controller),
    &controller_message__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cameramsg",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(RobotStatusMessage, cameramsg),
    &robot_status_message__camera__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "infredcameramsg",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(RobotStatusMessage, infredcameramsg),
    &robot_status_message__infredcamera__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pantlitmsg",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    PROTOBUF_C_OFFSETOF(RobotStatusMessage, pantlitmsg),
    &pantilt_message__descriptor,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned robot_status_message__field_indices_by_name[] = {
  1,   /* field[1] = Controller */
  0,   /* field[0] = Stat */
  2,   /* field[2] = cameramsg */
  3,   /* field[3] = infredcameramsg */
  4,   /* field[4] = pantlitmsg */
};
static const ProtobufCIntRange robot_status_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor robot_status_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "RobotStatusMessage",
  "RobotStatusMessage",
  "RobotStatusMessage",
  "",
  sizeof(RobotStatusMessage),
  5,
  robot_status_message__field_descriptors,
  robot_status_message__field_indices_by_name,
  1,  robot_status_message__number_ranges,
  (ProtobufCMessageInit) robot_status_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
