// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UltrasoundMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "UltrasoundMessage.pb.h"

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

const ::google::protobuf::Descriptor* UltrasoundMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UltrasoundMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_UltrasoundMessage_2eproto() {
  protobuf_AddDesc_UltrasoundMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "UltrasoundMessage.proto");
  GOOGLE_CHECK(file != NULL);
  UltrasoundMessage_descriptor_ = file->message_type(0);
  static const int UltrasoundMessage_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UltrasoundMessage, online_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UltrasoundMessage, ldistance_ultrasonic_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UltrasoundMessage, rdistance_ultrasonic_),
  };
  UltrasoundMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      UltrasoundMessage_descriptor_,
      UltrasoundMessage::default_instance_,
      UltrasoundMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UltrasoundMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UltrasoundMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(UltrasoundMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_UltrasoundMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    UltrasoundMessage_descriptor_, &UltrasoundMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_UltrasoundMessage_2eproto() {
  delete UltrasoundMessage::default_instance_;
  delete UltrasoundMessage_reflection_;
}

void protobuf_AddDesc_UltrasoundMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027UltrasoundMessage.proto\"_\n\021UltrasoundM"
    "essage\022\016\n\006online\030\001 \001(\005\022\034\n\024Ldistance_Ultr"
    "asonic\030\002 \001(\005\022\034\n\024Rdistance_Ultrasonic\030\003 \001"
    "(\005", 122);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "UltrasoundMessage.proto", &protobuf_RegisterTypes);
  UltrasoundMessage::default_instance_ = new UltrasoundMessage();
  UltrasoundMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_UltrasoundMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_UltrasoundMessage_2eproto {
  StaticDescriptorInitializer_UltrasoundMessage_2eproto() {
    protobuf_AddDesc_UltrasoundMessage_2eproto();
  }
} static_descriptor_initializer_UltrasoundMessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int UltrasoundMessage::kOnlineFieldNumber;
const int UltrasoundMessage::kLdistanceUltrasonicFieldNumber;
const int UltrasoundMessage::kRdistanceUltrasonicFieldNumber;
#endif  // !_MSC_VER

UltrasoundMessage::UltrasoundMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void UltrasoundMessage::InitAsDefaultInstance() {
}

UltrasoundMessage::UltrasoundMessage(const UltrasoundMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void UltrasoundMessage::SharedCtor() {
  _cached_size_ = 0;
  online_ = 0;
  ldistance_ultrasonic_ = 0;
  rdistance_ultrasonic_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UltrasoundMessage::~UltrasoundMessage() {
  SharedDtor();
}

void UltrasoundMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UltrasoundMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UltrasoundMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UltrasoundMessage_descriptor_;
}

const UltrasoundMessage& UltrasoundMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_UltrasoundMessage_2eproto();
  return *default_instance_;
}

UltrasoundMessage* UltrasoundMessage::default_instance_ = NULL;

UltrasoundMessage* UltrasoundMessage::New() const {
  return new UltrasoundMessage;
}

void UltrasoundMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    online_ = 0;
    ldistance_ultrasonic_ = 0;
    rdistance_ultrasonic_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool UltrasoundMessage::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_Ldistance_Ultrasonic;
        break;
      }

      // optional int32 Ldistance_Ultrasonic = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Ldistance_Ultrasonic:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ldistance_ultrasonic_)));
          set_has_ldistance_ultrasonic();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_Rdistance_Ultrasonic;
        break;
      }

      // optional int32 Rdistance_Ultrasonic = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Rdistance_Ultrasonic:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rdistance_ultrasonic_)));
          set_has_rdistance_ultrasonic();
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

void UltrasoundMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 online = 1;
  if (has_online()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->online(), output);
  }

  // optional int32 Ldistance_Ultrasonic = 2;
  if (has_ldistance_ultrasonic()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->ldistance_ultrasonic(), output);
  }

  // optional int32 Rdistance_Ultrasonic = 3;
  if (has_rdistance_ultrasonic()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->rdistance_ultrasonic(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* UltrasoundMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 online = 1;
  if (has_online()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->online(), target);
  }

  // optional int32 Ldistance_Ultrasonic = 2;
  if (has_ldistance_ultrasonic()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->ldistance_ultrasonic(), target);
  }

  // optional int32 Rdistance_Ultrasonic = 3;
  if (has_rdistance_ultrasonic()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->rdistance_ultrasonic(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int UltrasoundMessage::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 online = 1;
    if (has_online()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->online());
    }

    // optional int32 Ldistance_Ultrasonic = 2;
    if (has_ldistance_ultrasonic()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ldistance_ultrasonic());
    }

    // optional int32 Rdistance_Ultrasonic = 3;
    if (has_rdistance_ultrasonic()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rdistance_ultrasonic());
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

void UltrasoundMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const UltrasoundMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UltrasoundMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UltrasoundMessage::MergeFrom(const UltrasoundMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_online()) {
      set_online(from.online());
    }
    if (from.has_ldistance_ultrasonic()) {
      set_ldistance_ultrasonic(from.ldistance_ultrasonic());
    }
    if (from.has_rdistance_ultrasonic()) {
      set_rdistance_ultrasonic(from.rdistance_ultrasonic());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void UltrasoundMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UltrasoundMessage::CopyFrom(const UltrasoundMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UltrasoundMessage::IsInitialized() const {

  return true;
}

void UltrasoundMessage::Swap(UltrasoundMessage* other) {
  if (other != this) {
    std::swap(online_, other->online_);
    std::swap(ldistance_ultrasonic_, other->ldistance_ultrasonic_);
    std::swap(rdistance_ultrasonic_, other->rdistance_ultrasonic_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata UltrasoundMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UltrasoundMessage_descriptor_;
  metadata.reflection = UltrasoundMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
