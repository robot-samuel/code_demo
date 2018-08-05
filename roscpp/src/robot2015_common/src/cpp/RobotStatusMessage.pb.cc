// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RobotStatusMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RobotStatusMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* RobotStatusMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RobotStatusMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* RobotStatusMessage_camera_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RobotStatusMessage_camera_reflection_ = NULL;
const ::google::protobuf::Descriptor* RobotStatusMessage_infredcamera_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RobotStatusMessage_infredcamera_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RobotStatusMessage_2eproto() {
  protobuf_AddDesc_RobotStatusMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RobotStatusMessage.proto");
  GOOGLE_CHECK(file != NULL);
  RobotStatusMessage_descriptor_ = file->message_type(0);
  static const int RobotStatusMessage_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage, stat_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage, controller_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage, cameramsg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage, infredcameramsg_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage, pantlitmsg_),
  };
  RobotStatusMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RobotStatusMessage_descriptor_,
      RobotStatusMessage::default_instance_,
      RobotStatusMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RobotStatusMessage));
  RobotStatusMessage_camera_descriptor_ = RobotStatusMessage_descriptor_->nested_type(0);
  static const int RobotStatusMessage_camera_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage_camera, online_),
  };
  RobotStatusMessage_camera_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RobotStatusMessage_camera_descriptor_,
      RobotStatusMessage_camera::default_instance_,
      RobotStatusMessage_camera_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage_camera, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage_camera, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RobotStatusMessage_camera));
  RobotStatusMessage_infredcamera_descriptor_ = RobotStatusMessage_descriptor_->nested_type(1);
  static const int RobotStatusMessage_infredcamera_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage_infredcamera, online_),
  };
  RobotStatusMessage_infredcamera_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RobotStatusMessage_infredcamera_descriptor_,
      RobotStatusMessage_infredcamera::default_instance_,
      RobotStatusMessage_infredcamera_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage_infredcamera, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RobotStatusMessage_infredcamera, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RobotStatusMessage_infredcamera));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RobotStatusMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RobotStatusMessage_descriptor_, &RobotStatusMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RobotStatusMessage_camera_descriptor_, &RobotStatusMessage_camera::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RobotStatusMessage_infredcamera_descriptor_, &RobotStatusMessage_infredcamera::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RobotStatusMessage_2eproto() {
  delete RobotStatusMessage::default_instance_;
  delete RobotStatusMessage_reflection_;
  delete RobotStatusMessage_camera::default_instance_;
  delete RobotStatusMessage_camera_reflection_;
  delete RobotStatusMessage_infredcamera::default_instance_;
  delete RobotStatusMessage_infredcamera_reflection_;
}

void protobuf_AddDesc_RobotStatusMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_ControllerMessage_2eproto();
  ::protobuf_AddDesc_pantiltMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030RobotStatusMessage.proto\032\027ControllerMe"
    "ssage.proto\032\024pantiltMessage.proto\"\223\002\n\022Ro"
    "botStatusMessage\022\014\n\004Stat\030\001 \001(\005\022&\n\nContro"
    "ller\030\002 \001(\0132\022.ControllerMessage\022-\n\tcamera"
    "msg\030\003 \001(\0132\032.RobotStatusMessage.camera\0229\n"
    "\017infredcameramsg\030\004 \001(\0132 .RobotStatusMess"
    "age.infredcamera\022#\n\npantlitmsg\030\005 \001(\0132\017.p"
    "antiltMessage\032\030\n\006camera\022\016\n\006online\030\001 \001(\005\032"
    "\036\n\014infredcamera\022\016\n\006online\030\001 \001(\005", 351);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RobotStatusMessage.proto", &protobuf_RegisterTypes);
  RobotStatusMessage::default_instance_ = new RobotStatusMessage();
  RobotStatusMessage_camera::default_instance_ = new RobotStatusMessage_camera();
  RobotStatusMessage_infredcamera::default_instance_ = new RobotStatusMessage_infredcamera();
  RobotStatusMessage::default_instance_->InitAsDefaultInstance();
  RobotStatusMessage_camera::default_instance_->InitAsDefaultInstance();
  RobotStatusMessage_infredcamera::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RobotStatusMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RobotStatusMessage_2eproto {
  StaticDescriptorInitializer_RobotStatusMessage_2eproto() {
    protobuf_AddDesc_RobotStatusMessage_2eproto();
  }
} static_descriptor_initializer_RobotStatusMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RobotStatusMessage_camera::kOnlineFieldNumber;
#endif  // !_MSC_VER

RobotStatusMessage_camera::RobotStatusMessage_camera()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RobotStatusMessage_camera::InitAsDefaultInstance() {
}

RobotStatusMessage_camera::RobotStatusMessage_camera(const RobotStatusMessage_camera& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RobotStatusMessage_camera::SharedCtor() {
  _cached_size_ = 0;
  online_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RobotStatusMessage_camera::~RobotStatusMessage_camera() {
  SharedDtor();
}

void RobotStatusMessage_camera::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RobotStatusMessage_camera::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RobotStatusMessage_camera::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RobotStatusMessage_camera_descriptor_;
}

const RobotStatusMessage_camera& RobotStatusMessage_camera::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RobotStatusMessage_2eproto();
  return *default_instance_;
}

RobotStatusMessage_camera* RobotStatusMessage_camera::default_instance_ = NULL;

RobotStatusMessage_camera* RobotStatusMessage_camera::New() const {
  return new RobotStatusMessage_camera;
}

void RobotStatusMessage_camera::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    online_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RobotStatusMessage_camera::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 online = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &online_)));
          set_has_online();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RobotStatusMessage_camera::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 online = 1;
  if (has_online()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->online(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RobotStatusMessage_camera::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 online = 1;
  if (has_online()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->online(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RobotStatusMessage_camera::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 online = 1;
    if (has_online()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->online());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RobotStatusMessage_camera::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RobotStatusMessage_camera* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RobotStatusMessage_camera*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RobotStatusMessage_camera::MergeFrom(const RobotStatusMessage_camera& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_online()) {
      set_online(from.online());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RobotStatusMessage_camera::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotStatusMessage_camera::CopyFrom(const RobotStatusMessage_camera& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotStatusMessage_camera::IsInitialized() const {

  return true;
}

void RobotStatusMessage_camera::Swap(RobotStatusMessage_camera* other) {
  if (other != this) {
    std::swap(online_, other->online_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RobotStatusMessage_camera::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RobotStatusMessage_camera_descriptor_;
  metadata.reflection = RobotStatusMessage_camera_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int RobotStatusMessage_infredcamera::kOnlineFieldNumber;
#endif  // !_MSC_VER

RobotStatusMessage_infredcamera::RobotStatusMessage_infredcamera()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RobotStatusMessage_infredcamera::InitAsDefaultInstance() {
}

RobotStatusMessage_infredcamera::RobotStatusMessage_infredcamera(const RobotStatusMessage_infredcamera& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RobotStatusMessage_infredcamera::SharedCtor() {
  _cached_size_ = 0;
  online_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RobotStatusMessage_infredcamera::~RobotStatusMessage_infredcamera() {
  SharedDtor();
}

void RobotStatusMessage_infredcamera::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RobotStatusMessage_infredcamera::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RobotStatusMessage_infredcamera::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RobotStatusMessage_infredcamera_descriptor_;
}

const RobotStatusMessage_infredcamera& RobotStatusMessage_infredcamera::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RobotStatusMessage_2eproto();
  return *default_instance_;
}

RobotStatusMessage_infredcamera* RobotStatusMessage_infredcamera::default_instance_ = NULL;

RobotStatusMessage_infredcamera* RobotStatusMessage_infredcamera::New() const {
  return new RobotStatusMessage_infredcamera;
}

void RobotStatusMessage_infredcamera::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    online_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RobotStatusMessage_infredcamera::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 online = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &online_)));
          set_has_online();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RobotStatusMessage_infredcamera::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 online = 1;
  if (has_online()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->online(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RobotStatusMessage_infredcamera::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 online = 1;
  if (has_online()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->online(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RobotStatusMessage_infredcamera::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 online = 1;
    if (has_online()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->online());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RobotStatusMessage_infredcamera::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RobotStatusMessage_infredcamera* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RobotStatusMessage_infredcamera*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RobotStatusMessage_infredcamera::MergeFrom(const RobotStatusMessage_infredcamera& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_online()) {
      set_online(from.online());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RobotStatusMessage_infredcamera::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotStatusMessage_infredcamera::CopyFrom(const RobotStatusMessage_infredcamera& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotStatusMessage_infredcamera::IsInitialized() const {

  return true;
}

void RobotStatusMessage_infredcamera::Swap(RobotStatusMessage_infredcamera* other) {
  if (other != this) {
    std::swap(online_, other->online_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RobotStatusMessage_infredcamera::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RobotStatusMessage_infredcamera_descriptor_;
  metadata.reflection = RobotStatusMessage_infredcamera_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int RobotStatusMessage::kStatFieldNumber;
const int RobotStatusMessage::kControllerFieldNumber;
const int RobotStatusMessage::kCameramsgFieldNumber;
const int RobotStatusMessage::kInfredcameramsgFieldNumber;
const int RobotStatusMessage::kPantlitmsgFieldNumber;
#endif  // !_MSC_VER

RobotStatusMessage::RobotStatusMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RobotStatusMessage::InitAsDefaultInstance() {
  controller_ = const_cast< ::ControllerMessage*>(&::ControllerMessage::default_instance());
  cameramsg_ = const_cast< ::RobotStatusMessage_camera*>(&::RobotStatusMessage_camera::default_instance());
  infredcameramsg_ = const_cast< ::RobotStatusMessage_infredcamera*>(&::RobotStatusMessage_infredcamera::default_instance());
  pantlitmsg_ = const_cast< ::pantiltMessage*>(&::pantiltMessage::default_instance());
}

RobotStatusMessage::RobotStatusMessage(const RobotStatusMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RobotStatusMessage::SharedCtor() {
  _cached_size_ = 0;
  stat_ = 0;
  controller_ = NULL;
  cameramsg_ = NULL;
  infredcameramsg_ = NULL;
  pantlitmsg_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RobotStatusMessage::~RobotStatusMessage() {
  SharedDtor();
}

void RobotStatusMessage::SharedDtor() {
  if (this != default_instance_) {
    delete controller_;
    delete cameramsg_;
    delete infredcameramsg_;
    delete pantlitmsg_;
  }
}

void RobotStatusMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RobotStatusMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RobotStatusMessage_descriptor_;
}

const RobotStatusMessage& RobotStatusMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RobotStatusMessage_2eproto();
  return *default_instance_;
}

RobotStatusMessage* RobotStatusMessage::default_instance_ = NULL;

RobotStatusMessage* RobotStatusMessage::New() const {
  return new RobotStatusMessage;
}

void RobotStatusMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    stat_ = 0;
    if (has_controller()) {
      if (controller_ != NULL) controller_->::ControllerMessage::Clear();
    }
    if (has_cameramsg()) {
      if (cameramsg_ != NULL) cameramsg_->::RobotStatusMessage_camera::Clear();
    }
    if (has_infredcameramsg()) {
      if (infredcameramsg_ != NULL) infredcameramsg_->::RobotStatusMessage_infredcamera::Clear();
    }
    if (has_pantlitmsg()) {
      if (pantlitmsg_ != NULL) pantlitmsg_->::pantiltMessage::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RobotStatusMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 Stat = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &stat_)));
          set_has_stat();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_Controller;
        break;
      }

      // optional .ControllerMessage Controller = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_Controller:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_controller()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_cameramsg;
        break;
      }

      // optional .RobotStatusMessage.camera cameramsg = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_cameramsg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cameramsg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_infredcameramsg;
        break;
      }

      // optional .RobotStatusMessage.infredcamera infredcameramsg = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_infredcameramsg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_infredcameramsg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_pantlitmsg;
        break;
      }

      // optional .pantiltMessage pantlitmsg = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pantlitmsg:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_pantlitmsg()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RobotStatusMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 Stat = 1;
  if (has_stat()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->stat(), output);
  }

  // optional .ControllerMessage Controller = 2;
  if (has_controller()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->controller(), output);
  }

  // optional .RobotStatusMessage.camera cameramsg = 3;
  if (has_cameramsg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->cameramsg(), output);
  }

  // optional .RobotStatusMessage.infredcamera infredcameramsg = 4;
  if (has_infredcameramsg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->infredcameramsg(), output);
  }

  // optional .pantiltMessage pantlitmsg = 5;
  if (has_pantlitmsg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->pantlitmsg(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RobotStatusMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 Stat = 1;
  if (has_stat()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->stat(), target);
  }

  // optional .ControllerMessage Controller = 2;
  if (has_controller()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->controller(), target);
  }

  // optional .RobotStatusMessage.camera cameramsg = 3;
  if (has_cameramsg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->cameramsg(), target);
  }

  // optional .RobotStatusMessage.infredcamera infredcameramsg = 4;
  if (has_infredcameramsg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->infredcameramsg(), target);
  }

  // optional .pantiltMessage pantlitmsg = 5;
  if (has_pantlitmsg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->pantlitmsg(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RobotStatusMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 Stat = 1;
    if (has_stat()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->stat());
    }

    // optional .ControllerMessage Controller = 2;
    if (has_controller()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->controller());
    }

    // optional .RobotStatusMessage.camera cameramsg = 3;
    if (has_cameramsg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->cameramsg());
    }

    // optional .RobotStatusMessage.infredcamera infredcameramsg = 4;
    if (has_infredcameramsg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->infredcameramsg());
    }

    // optional .pantiltMessage pantlitmsg = 5;
    if (has_pantlitmsg()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->pantlitmsg());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RobotStatusMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RobotStatusMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RobotStatusMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RobotStatusMessage::MergeFrom(const RobotStatusMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_stat()) {
      set_stat(from.stat());
    }
    if (from.has_controller()) {
      mutable_controller()->::ControllerMessage::MergeFrom(from.controller());
    }
    if (from.has_cameramsg()) {
      mutable_cameramsg()->::RobotStatusMessage_camera::MergeFrom(from.cameramsg());
    }
    if (from.has_infredcameramsg()) {
      mutable_infredcameramsg()->::RobotStatusMessage_infredcamera::MergeFrom(from.infredcameramsg());
    }
    if (from.has_pantlitmsg()) {
      mutable_pantlitmsg()->::pantiltMessage::MergeFrom(from.pantlitmsg());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RobotStatusMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RobotStatusMessage::CopyFrom(const RobotStatusMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RobotStatusMessage::IsInitialized() const {

  return true;
}

void RobotStatusMessage::Swap(RobotStatusMessage* other) {
  if (other != this) {
    std::swap(stat_, other->stat_);
    std::swap(controller_, other->controller_);
    std::swap(cameramsg_, other->cameramsg_);
    std::swap(infredcameramsg_, other->infredcameramsg_);
    std::swap(pantlitmsg_, other->pantlitmsg_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RobotStatusMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RobotStatusMessage_descriptor_;
  metadata.reflection = RobotStatusMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
