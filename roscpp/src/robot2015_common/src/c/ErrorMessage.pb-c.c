/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C_NO_DEPRECATED
#define PROTOBUF_C_NO_DEPRECATED
#endif

#include "ErrorMessage.pb-c.h"
void   error_message__init
                     (ErrorMessage         *message)
{
  static ErrorMessage init_value = ERROR_MESSAGE__INIT;
  *message = init_value;
}
size_t error_message__get_packed_size
                     (const ErrorMessage *message)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &error_message__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t error_message__pack
                     (const ErrorMessage *message,
                      uint8_t       *out)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &error_message__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t error_message__pack_to_buffer
                     (const ErrorMessage *message,
                      ProtobufCBuffer *buffer)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &error_message__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
ErrorMessage *
       error_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (ErrorMessage *)
     protobuf_c_message_unpack (&error_message__descriptor,
                                allocator, len, data);
}
void   error_message__free_unpacked
                     (ErrorMessage *message,
                      ProtobufCAllocator *allocator)
{
  PROTOBUF_C_ASSERT (message->base.descriptor == &error_message__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor error_message__field_descriptors[19] =
{
  {
    "CarLeftFDriverError",
    1,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_carleftfdrivererror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, carleftfdrivererror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CarRightFDriverError",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_carrightfdrivererror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, carrightfdrivererror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CarLeftBDriverError",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_carleftbdrivererror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, carleftbdrivererror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CarRightBDriverError",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_carrightbdrivererror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, carrightbdrivererror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "LeftFDriverComError",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_leftfdrivercomerror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, leftfdrivercomerror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "RightFDriverComError",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_rightfdrivercomerror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, rightfdrivercomerror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "LeftBDriverComError",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_leftbdrivercomerror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, leftbdrivercomerror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "RightBDriverComError",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_rightbdrivercomerror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, rightbdrivercomerror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ExternComDevError",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_externcomdeverror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, externcomdeverror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BMSSysError",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_bmssyserror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, bmssyserror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ObstacleStopError",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_obstaclestoperror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, obstaclestoperror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CashSwitchStopError",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_cashswitchstoperror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, cashswitchstoperror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "CurrentOverloadError",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_currentoverloaderror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, currentoverloaderror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "DriverLeftFNodeOFF",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_driverleftfnodeoff),
    PROTOBUF_C_OFFSETOF(ErrorMessage, driverleftfnodeoff),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "DriverLeftBNodeOFF",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_driverleftbnodeoff),
    PROTOBUF_C_OFFSETOF(ErrorMessage, driverleftbnodeoff),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "DriverRightFNodeOFF",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_driverrightfnodeoff),
    PROTOBUF_C_OFFSETOF(ErrorMessage, driverrightfnodeoff),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "DriverRightBNodeOFF",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_driverrightbnodeoff),
    PROTOBUF_C_OFFSETOF(ErrorMessage, driverrightbnodeoff),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "BObstacleStopError",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_bobstaclestoperror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, bobstaclestoperror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "DropStopError",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    PROTOBUF_C_OFFSETOF(ErrorMessage, has_dropstoperror),
    PROTOBUF_C_OFFSETOF(ErrorMessage, dropstoperror),
    NULL,
    NULL,
    0,            /* packed */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned error_message__field_indices_by_name[] = {
  9,   /* field[9] = BMSSysError */
  17,   /* field[17] = BObstacleStopError */
  2,   /* field[2] = CarLeftBDriverError */
  0,   /* field[0] = CarLeftFDriverError */
  3,   /* field[3] = CarRightBDriverError */
  1,   /* field[1] = CarRightFDriverError */
  11,   /* field[11] = CashSwitchStopError */
  12,   /* field[12] = CurrentOverloadError */
  14,   /* field[14] = DriverLeftBNodeOFF */
  13,   /* field[13] = DriverLeftFNodeOFF */
  16,   /* field[16] = DriverRightBNodeOFF */
  15,   /* field[15] = DriverRightFNodeOFF */
  18,   /* field[18] = DropStopError */
  8,   /* field[8] = ExternComDevError */
  6,   /* field[6] = LeftBDriverComError */
  4,   /* field[4] = LeftFDriverComError */
  10,   /* field[10] = ObstacleStopError */
  7,   /* field[7] = RightBDriverComError */
  5,   /* field[5] = RightFDriverComError */
};
static const ProtobufCIntRange error_message__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 19 }
};
const ProtobufCMessageDescriptor error_message__descriptor =
{
  PROTOBUF_C_MESSAGE_DESCRIPTOR_MAGIC,
  "ErrorMessage",
  "ErrorMessage",
  "ErrorMessage",
  "",
  sizeof(ErrorMessage),
  19,
  error_message__field_descriptors,
  error_message__field_indices_by_name,
  1,  error_message__number_ranges,
  (ProtobufCMessageInit) error_message__init,
  NULL,NULL,NULL    /* reserved[123] */
};
