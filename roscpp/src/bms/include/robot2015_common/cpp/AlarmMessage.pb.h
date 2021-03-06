// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AlarmMessage.proto

#ifndef PROTOBUF_AlarmMessage_2eproto__INCLUDED
#define PROTOBUF_AlarmMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_AlarmMessage_2eproto();
void protobuf_AssignDesc_AlarmMessage_2eproto();
void protobuf_ShutdownFile_AlarmMessage_2eproto();

class AlarmMessage;

// ===================================================================

class AlarmMessage : public ::google::protobuf::Message {
 public:
  AlarmMessage();
  virtual ~AlarmMessage();

  AlarmMessage(const AlarmMessage& from);

  inline AlarmMessage& operator=(const AlarmMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AlarmMessage& default_instance();

  void Swap(AlarmMessage* other);

  // implements Message ----------------------------------------------

  AlarmMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AlarmMessage& from);
  void MergeFrom(const AlarmMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bool CtrolBoxHighTemAlarm = 1;
  inline bool has_ctrolboxhightemalarm() const;
  inline void clear_ctrolboxhightemalarm();
  static const int kCtrolBoxHighTemAlarmFieldNumber = 1;
  inline bool ctrolboxhightemalarm() const;
  inline void set_ctrolboxhightemalarm(bool value);

  // optional bool CtrolBoxFrozenTemAlarm = 2;
  inline bool has_ctrolboxfrozentemalarm() const;
  inline void clear_ctrolboxfrozentemalarm();
  static const int kCtrolBoxFrozenTemAlarmFieldNumber = 2;
  inline bool ctrolboxfrozentemalarm() const;
  inline void set_ctrolboxfrozentemalarm(bool value);

  // optional bool BMSModComLostAlarm = 3;
  inline bool has_bmsmodcomlostalarm() const;
  inline void clear_bmsmodcomlostalarm();
  static const int kBMSModComLostAlarmFieldNumber = 3;
  inline bool bmsmodcomlostalarm() const;
  inline void set_bmsmodcomlostalarm(bool value);

  // optional bool Emergency_Status_stop = 4;
  inline bool has_emergency_status_stop() const;
  inline void clear_emergency_status_stop();
  static const int kEmergencyStatusStopFieldNumber = 4;
  inline bool emergency_status_stop() const;
  inline void set_emergency_status_stop(bool value);

  // optional bool EcanExternSnsorNdeOFF = 5;
  inline bool has_ecanexternsnsorndeoff() const;
  inline void clear_ecanexternsnsorndeoff();
  static const int kEcanExternSnsorNdeOFFFieldNumber = 5;
  inline bool ecanexternsnsorndeoff() const;
  inline void set_ecanexternsnsorndeoff(bool value);

  // optional bool JoyTestNodeOFF = 7;
  inline bool has_joytestnodeoff() const;
  inline void clear_joytestnodeoff();
  static const int kJoyTestNodeOFFFieldNumber = 7;
  inline bool joytestnodeoff() const;
  inline void set_joytestnodeoff(bool value);

  // @@protoc_insertion_point(class_scope:AlarmMessage)
 private:
  inline void set_has_ctrolboxhightemalarm();
  inline void clear_has_ctrolboxhightemalarm();
  inline void set_has_ctrolboxfrozentemalarm();
  inline void clear_has_ctrolboxfrozentemalarm();
  inline void set_has_bmsmodcomlostalarm();
  inline void clear_has_bmsmodcomlostalarm();
  inline void set_has_emergency_status_stop();
  inline void clear_has_emergency_status_stop();
  inline void set_has_ecanexternsnsorndeoff();
  inline void clear_has_ecanexternsnsorndeoff();
  inline void set_has_joytestnodeoff();
  inline void clear_has_joytestnodeoff();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  bool ctrolboxhightemalarm_;
  bool ctrolboxfrozentemalarm_;
  bool bmsmodcomlostalarm_;
  bool emergency_status_stop_;
  bool ecanexternsnsorndeoff_;
  bool joytestnodeoff_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_AlarmMessage_2eproto();
  friend void protobuf_AssignDesc_AlarmMessage_2eproto();
  friend void protobuf_ShutdownFile_AlarmMessage_2eproto();

  void InitAsDefaultInstance();
  static AlarmMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// AlarmMessage

// optional bool CtrolBoxHighTemAlarm = 1;
inline bool AlarmMessage::has_ctrolboxhightemalarm() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AlarmMessage::set_has_ctrolboxhightemalarm() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AlarmMessage::clear_has_ctrolboxhightemalarm() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AlarmMessage::clear_ctrolboxhightemalarm() {
  ctrolboxhightemalarm_ = false;
  clear_has_ctrolboxhightemalarm();
}
inline bool AlarmMessage::ctrolboxhightemalarm() const {
  return ctrolboxhightemalarm_;
}
inline void AlarmMessage::set_ctrolboxhightemalarm(bool value) {
  set_has_ctrolboxhightemalarm();
  ctrolboxhightemalarm_ = value;
}

// optional bool CtrolBoxFrozenTemAlarm = 2;
inline bool AlarmMessage::has_ctrolboxfrozentemalarm() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AlarmMessage::set_has_ctrolboxfrozentemalarm() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AlarmMessage::clear_has_ctrolboxfrozentemalarm() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AlarmMessage::clear_ctrolboxfrozentemalarm() {
  ctrolboxfrozentemalarm_ = false;
  clear_has_ctrolboxfrozentemalarm();
}
inline bool AlarmMessage::ctrolboxfrozentemalarm() const {
  return ctrolboxfrozentemalarm_;
}
inline void AlarmMessage::set_ctrolboxfrozentemalarm(bool value) {
  set_has_ctrolboxfrozentemalarm();
  ctrolboxfrozentemalarm_ = value;
}

// optional bool BMSModComLostAlarm = 3;
inline bool AlarmMessage::has_bmsmodcomlostalarm() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AlarmMessage::set_has_bmsmodcomlostalarm() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AlarmMessage::clear_has_bmsmodcomlostalarm() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AlarmMessage::clear_bmsmodcomlostalarm() {
  bmsmodcomlostalarm_ = false;
  clear_has_bmsmodcomlostalarm();
}
inline bool AlarmMessage::bmsmodcomlostalarm() const {
  return bmsmodcomlostalarm_;
}
inline void AlarmMessage::set_bmsmodcomlostalarm(bool value) {
  set_has_bmsmodcomlostalarm();
  bmsmodcomlostalarm_ = value;
}

// optional bool Emergency_Status_stop = 4;
inline bool AlarmMessage::has_emergency_status_stop() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AlarmMessage::set_has_emergency_status_stop() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AlarmMessage::clear_has_emergency_status_stop() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AlarmMessage::clear_emergency_status_stop() {
  emergency_status_stop_ = false;
  clear_has_emergency_status_stop();
}
inline bool AlarmMessage::emergency_status_stop() const {
  return emergency_status_stop_;
}
inline void AlarmMessage::set_emergency_status_stop(bool value) {
  set_has_emergency_status_stop();
  emergency_status_stop_ = value;
}

// optional bool EcanExternSnsorNdeOFF = 5;
inline bool AlarmMessage::has_ecanexternsnsorndeoff() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AlarmMessage::set_has_ecanexternsnsorndeoff() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AlarmMessage::clear_has_ecanexternsnsorndeoff() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AlarmMessage::clear_ecanexternsnsorndeoff() {
  ecanexternsnsorndeoff_ = false;
  clear_has_ecanexternsnsorndeoff();
}
inline bool AlarmMessage::ecanexternsnsorndeoff() const {
  return ecanexternsnsorndeoff_;
}
inline void AlarmMessage::set_ecanexternsnsorndeoff(bool value) {
  set_has_ecanexternsnsorndeoff();
  ecanexternsnsorndeoff_ = value;
}

// optional bool JoyTestNodeOFF = 7;
inline bool AlarmMessage::has_joytestnodeoff() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void AlarmMessage::set_has_joytestnodeoff() {
  _has_bits_[0] |= 0x00000020u;
}
inline void AlarmMessage::clear_has_joytestnodeoff() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void AlarmMessage::clear_joytestnodeoff() {
  joytestnodeoff_ = false;
  clear_has_joytestnodeoff();
}
inline bool AlarmMessage::joytestnodeoff() const {
  return joytestnodeoff_;
}
inline void AlarmMessage::set_joytestnodeoff(bool value) {
  set_has_joytestnodeoff();
  joytestnodeoff_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AlarmMessage_2eproto__INCLUDED
