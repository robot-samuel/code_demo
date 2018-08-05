/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_ControllerMessage_2eproto__INCLUDED
#define PROTOBUF_C_ControllerMessage_2eproto__INCLUDED

#include <google/protobuf-c/protobuf-c.h>

PROTOBUF_C_BEGIN_DECLS

#include "ExternSensor.pb-c.h"
#include "BMSMessage.pb-c.h"
#include "ErrorMessage.pb-c.h"
#include "AlarmMessage.pb-c.h"
#include "UltrasoundMessage.pb-c.h"

typedef struct _ControllerMessage ControllerMessage;
typedef struct _ControllerMessage__Dirver ControllerMessage__Dirver;


/* --- enums --- */


/* --- messages --- */

struct  _ControllerMessage__Dirver
{
  ProtobufCMessage base;
  protobuf_c_boolean has_device_status;
  int32_t device_status;
  protobuf_c_boolean has_device_add;
  int32_t device_add;
  protobuf_c_boolean has_actvelocity;
  int32_t actvelocity;
  protobuf_c_boolean has_setvelocity;
  int32_t setvelocity;
  protobuf_c_boolean has_ctrl_dc_voltage;
  float ctrl_dc_voltage;
  protobuf_c_boolean has_ctrl_ipm_temperature;
  float ctrl_ipm_temperature;
  protobuf_c_boolean has_actualpos;
  int32_t actualpos;
  protobuf_c_boolean has_emergencyinputvalue;
  protobuf_c_boolean emergencyinputvalue;
  char *error;
};
#define CONTROLLER_MESSAGE__DIRVER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&controller_message__dirver__descriptor) \
    , 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, 0,0, NULL }


struct  _ControllerMessage
{
  ProtobufCMessage base;
  protobuf_c_boolean has_stat;
  int32_t stat;
  size_t n_dirvermessage;
  ControllerMessage__Dirver **dirvermessage;
  ExternSensor *sensormsg;
  protobuf_c_boolean has_ctrl_device;
  int32_t ctrl_device;
  BmsMessage *bmsmsg;
  ErrorMessage *errormsg;
  AlarmMessage *alarmmsg;
  UltrasoundMessage *ultrasound;
  protobuf_c_boolean has_linevelocity;
  float linevelocity;
  protobuf_c_boolean has_thvelocity;
  float thvelocity;
};
#define CONTROLLER_MESSAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&controller_message__descriptor) \
    , 0,0, 0,NULL, NULL, 0,0, NULL, NULL, NULL, NULL, 0,0, 0,0 }


/* ControllerMessage__Dirver methods */
void   controller_message__dirver__init
                     (ControllerMessage__Dirver         *message);
/* ControllerMessage methods */
void   controller_message__init
                     (ControllerMessage         *message);
size_t controller_message__get_packed_size
                     (const ControllerMessage   *message);
size_t controller_message__pack
                     (const ControllerMessage   *message,
                      uint8_t             *out);
size_t controller_message__pack_to_buffer
                     (const ControllerMessage   *message,
                      ProtobufCBuffer     *buffer);
ControllerMessage *
       controller_message__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   controller_message__free_unpacked
                     (ControllerMessage *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*ControllerMessage__Dirver_Closure)
                 (const ControllerMessage__Dirver *message,
                  void *closure_data);
typedef void (*ControllerMessage_Closure)
                 (const ControllerMessage *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor controller_message__descriptor;
extern const ProtobufCMessageDescriptor controller_message__dirver__descriptor;

PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_ControllerMessage_2eproto__INCLUDED */