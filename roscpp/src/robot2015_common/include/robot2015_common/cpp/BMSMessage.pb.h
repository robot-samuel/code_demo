// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BMSMessage.proto

#ifndef PROTOBUF_BMSMessage_2eproto__INCLUDED
#define PROTOBUF_BMSMessage_2eproto__INCLUDED

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
void  protobuf_AddDesc_BMSMessage_2eproto();
void protobuf_AssignDesc_BMSMessage_2eproto();
void protobuf_ShutdownFile_BMSMessage_2eproto();

class BmsMessage;

// ===================================================================

class BmsMessage : public ::google::protobuf::Message {
 public:
  BmsMessage();
  virtual ~BmsMessage();

  BmsMessage(const BmsMessage& from);

  inline BmsMessage& operator=(const BmsMessage& from) {
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
  static const BmsMessage& default_instance();

  void Swap(BmsMessage* other);

  // implements Message ----------------------------------------------

  BmsMessage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BmsMessage& from);
  void MergeFrom(const BmsMessage& from);
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

  // optional int32 Stat = 1;
  inline bool has_stat() const;
  inline void clear_stat();
  static const int kStatFieldNumber = 1;
  inline ::google::protobuf::int32 stat() const;
  inline void set_stat(::google::protobuf::int32 value);

  // optional int32 BMS_SOC = 2;
  inline bool has_bms_soc() const;
  inline void clear_bms_soc();
  static const int kBMSSOCFieldNumber = 2;
  inline ::google::protobuf::int32 bms_soc() const;
  inline void set_bms_soc(::google::protobuf::int32 value);

  // optional float BMS_Voltage = 3;
  inline bool has_bms_voltage() const;
  inline void clear_bms_voltage();
  static const int kBMSVoltageFieldNumber = 3;
  inline float bms_voltage() const;
  inline void set_bms_voltage(float value);

  // optional float BMS_sys_Current = 4;
  inline bool has_bms_sys_current() const;
  inline void clear_bms_sys_current();
  static const int kBMSSysCurrentFieldNumber = 4;
  inline float bms_sys_current() const;
  inline void set_bms_sys_current(float value);

  // @@protoc_insertion_point(class_scope:BmsMessage)
 private:
  inline void set_has_stat();
  inline void clear_has_stat();
  inline void set_has_bms_soc();
  inline void clear_has_bms_soc();
  inline void set_has_bms_voltage();
  inline void clear_has_bms_voltage();
  inline void set_has_bms_sys_current();
  inline void clear_has_bms_sys_current();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 stat_;
  ::google::protobuf::int32 bms_soc_;
  float bms_voltage_;
  float bms_sys_current_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_BMSMessage_2eproto();
  friend void protobuf_AssignDesc_BMSMessage_2eproto();
  friend void protobuf_ShutdownFile_BMSMessage_2eproto();

  void InitAsDefaultInstance();
  static BmsMessage* default_instance_;
};
// ===================================================================


// ===================================================================

// BmsMessage

// optional int32 Stat = 1;
inline bool BmsMessage::has_stat() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BmsMessage::set_has_stat() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BmsMessage::clear_has_stat() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BmsMessage::clear_stat() {
  stat_ = 0;
  clear_has_stat();
}
inline ::google::protobuf::int32 BmsMessage::stat() const {
  return stat_;
}
inline void BmsMessage::set_stat(::google::protobuf::int32 value) {
  set_has_stat();
  stat_ = value;
}

// optional int32 BMS_SOC = 2;
inline bool BmsMessage::has_bms_soc() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BmsMessage::set_has_bms_soc() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BmsMessage::clear_has_bms_soc() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BmsMessage::clear_bms_soc() {
  bms_soc_ = 0;
  clear_has_bms_soc();
}
inline ::google::protobuf::int32 BmsMessage::bms_soc() const {
  return bms_soc_;
}
inline void BmsMessage::set_bms_soc(::google::protobuf::int32 value) {
  set_has_bms_soc();
  bms_soc_ = value;
}

// optional float BMS_Voltage = 3;
inline bool BmsMessage::has_bms_voltage() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BmsMessage::set_has_bms_voltage() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BmsMessage::clear_has_bms_voltage() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BmsMessage::clear_bms_voltage() {
  bms_voltage_ = 0;
  clear_has_bms_voltage();
}
inline float BmsMessage::bms_voltage() const {
  return bms_voltage_;
}
inline void BmsMessage::set_bms_voltage(float value) {
  set_has_bms_voltage();
  bms_voltage_ = value;
}

// optional float BMS_sys_Current = 4;
inline bool BmsMessage::has_bms_sys_current() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BmsMessage::set_has_bms_sys_current() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BmsMessage::clear_has_bms_sys_current() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BmsMessage::clear_bms_sys_current() {
  bms_sys_current_ = 0;
  clear_has_bms_sys_current();
}
inline float BmsMessage::bms_sys_current() const {
  return bms_sys_current_;
}
inline void BmsMessage::set_bms_sys_current(float value) {
  set_has_bms_sys_current();
  bms_sys_current_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BMSMessage_2eproto__INCLUDED
