// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommandBuffer.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CommandBuffer.pb.h"

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

namespace usx {
namespace geofactions {

namespace {

const ::google::protobuf::Descriptor* CommandBuffer_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CommandBuffer_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* CommandBuffer_CommandBufferType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_CommandBuffer_2eproto() {
  protobuf_AddDesc_CommandBuffer_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CommandBuffer.proto");
  GOOGLE_CHECK(file != NULL);
  CommandBuffer_descriptor_ = file->message_type(0);
  static const int CommandBuffer_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandBuffer, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandBuffer, securitycommandbuffer_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandBuffer, rawinputcommandbuffer_),
  };
  CommandBuffer_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CommandBuffer_descriptor_,
      CommandBuffer::default_instance_,
      CommandBuffer_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandBuffer, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommandBuffer, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CommandBuffer));
  CommandBuffer_CommandBufferType_descriptor_ = CommandBuffer_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CommandBuffer_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CommandBuffer_descriptor_, &CommandBuffer::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CommandBuffer_2eproto() {
  delete CommandBuffer::default_instance_;
  delete CommandBuffer_reflection_;
}

void protobuf_AddDesc_CommandBuffer_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::usx::geofactions::protobuf_AddDesc_SecurityCommandBuffer_2eproto();
  ::usx::geofactions::protobuf_AddDesc_RawInputCommandBuffer_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023CommandBuffer.proto\022\017usx.geofactions\032\033"
    "SecurityCommandBuffer.proto\032\033RawInputCom"
    "mandBuffer.proto\"\244\002\n\rCommandBuffer\022G\n\004ty"
    "pe\030\001 \002(\01620.usx.geofactions.CommandBuffer"
    ".CommandBufferType:\007UNKNOWN\022E\n\025securityC"
    "ommandBuffer\030\002 \001(\0132&.usx.geofactions.Sec"
    "urityCommandBuffer\022E\n\025rawInputCommandBuf"
    "fer\030\003 \001(\0132&.usx.geofactions.RawInputComm"
    "andBuffer\"<\n\021CommandBufferType\022\013\n\007UNKNOW"
    "N\020\000\022\014\n\010SECURITY\020\001\022\014\n\010RAWINPUT\020\002", 391);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CommandBuffer.proto", &protobuf_RegisterTypes);
  CommandBuffer::default_instance_ = new CommandBuffer();
  CommandBuffer::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CommandBuffer_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CommandBuffer_2eproto {
  StaticDescriptorInitializer_CommandBuffer_2eproto() {
    protobuf_AddDesc_CommandBuffer_2eproto();
  }
} static_descriptor_initializer_CommandBuffer_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* CommandBuffer_CommandBufferType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CommandBuffer_CommandBufferType_descriptor_;
}
bool CommandBuffer_CommandBufferType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const CommandBuffer_CommandBufferType CommandBuffer::UNKNOWN;
const CommandBuffer_CommandBufferType CommandBuffer::SECURITY;
const CommandBuffer_CommandBufferType CommandBuffer::RAWINPUT;
const CommandBuffer_CommandBufferType CommandBuffer::CommandBufferType_MIN;
const CommandBuffer_CommandBufferType CommandBuffer::CommandBufferType_MAX;
const int CommandBuffer::CommandBufferType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int CommandBuffer::kTypeFieldNumber;
const int CommandBuffer::kSecurityCommandBufferFieldNumber;
const int CommandBuffer::kRawInputCommandBufferFieldNumber;
#endif  // !_MSC_VER

CommandBuffer::CommandBuffer()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CommandBuffer::InitAsDefaultInstance() {
  securitycommandbuffer_ = const_cast< ::usx::geofactions::SecurityCommandBuffer*>(&::usx::geofactions::SecurityCommandBuffer::default_instance());
  rawinputcommandbuffer_ = const_cast< ::usx::geofactions::RawInputCommandBuffer*>(&::usx::geofactions::RawInputCommandBuffer::default_instance());
}

CommandBuffer::CommandBuffer(const CommandBuffer& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CommandBuffer::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  securitycommandbuffer_ = NULL;
  rawinputcommandbuffer_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CommandBuffer::~CommandBuffer() {
  SharedDtor();
}

void CommandBuffer::SharedDtor() {
  if (this != default_instance_) {
    delete securitycommandbuffer_;
    delete rawinputcommandbuffer_;
  }
}

void CommandBuffer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CommandBuffer::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CommandBuffer_descriptor_;
}

const CommandBuffer& CommandBuffer::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CommandBuffer_2eproto();
  return *default_instance_;
}

CommandBuffer* CommandBuffer::default_instance_ = NULL;

CommandBuffer* CommandBuffer::New() const {
  return new CommandBuffer;
}

void CommandBuffer::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    if (has_securitycommandbuffer()) {
      if (securitycommandbuffer_ != NULL) securitycommandbuffer_->::usx::geofactions::SecurityCommandBuffer::Clear();
    }
    if (has_rawinputcommandbuffer()) {
      if (rawinputcommandbuffer_ != NULL) rawinputcommandbuffer_->::usx::geofactions::RawInputCommandBuffer::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CommandBuffer::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .usx.geofactions.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::usx::geofactions::CommandBuffer_CommandBufferType_IsValid(value)) {
            set_type(static_cast< ::usx::geofactions::CommandBuffer_CommandBufferType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_securityCommandBuffer;
        break;
      }

      // optional .usx.geofactions.SecurityCommandBuffer securityCommandBuffer = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_securityCommandBuffer:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_securitycommandbuffer()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_rawInputCommandBuffer;
        break;
      }

      // optional .usx.geofactions.RawInputCommandBuffer rawInputCommandBuffer = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_rawInputCommandBuffer:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_rawinputcommandbuffer()));
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

void CommandBuffer::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .usx.geofactions.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional .usx.geofactions.SecurityCommandBuffer securityCommandBuffer = 2;
  if (has_securitycommandbuffer()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->securitycommandbuffer(), output);
  }

  // optional .usx.geofactions.RawInputCommandBuffer rawInputCommandBuffer = 3;
  if (has_rawinputcommandbuffer()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->rawinputcommandbuffer(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CommandBuffer::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .usx.geofactions.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional .usx.geofactions.SecurityCommandBuffer securityCommandBuffer = 2;
  if (has_securitycommandbuffer()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->securitycommandbuffer(), target);
  }

  // optional .usx.geofactions.RawInputCommandBuffer rawInputCommandBuffer = 3;
  if (has_rawinputcommandbuffer()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->rawinputcommandbuffer(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CommandBuffer::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .usx.geofactions.CommandBuffer.CommandBufferType type = 1 [default = UNKNOWN];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .usx.geofactions.SecurityCommandBuffer securityCommandBuffer = 2;
    if (has_securitycommandbuffer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->securitycommandbuffer());
    }

    // optional .usx.geofactions.RawInputCommandBuffer rawInputCommandBuffer = 3;
    if (has_rawinputcommandbuffer()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->rawinputcommandbuffer());
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

void CommandBuffer::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CommandBuffer* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CommandBuffer*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CommandBuffer::MergeFrom(const CommandBuffer& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_securitycommandbuffer()) {
      mutable_securitycommandbuffer()->::usx::geofactions::SecurityCommandBuffer::MergeFrom(from.securitycommandbuffer());
    }
    if (from.has_rawinputcommandbuffer()) {
      mutable_rawinputcommandbuffer()->::usx::geofactions::RawInputCommandBuffer::MergeFrom(from.rawinputcommandbuffer());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CommandBuffer::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommandBuffer::CopyFrom(const CommandBuffer& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommandBuffer::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_securitycommandbuffer()) {
    if (!this->securitycommandbuffer().IsInitialized()) return false;
  }
  if (has_rawinputcommandbuffer()) {
    if (!this->rawinputcommandbuffer().IsInitialized()) return false;
  }
  return true;
}

void CommandBuffer::Swap(CommandBuffer* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(securitycommandbuffer_, other->securitycommandbuffer_);
    std::swap(rawinputcommandbuffer_, other->rawinputcommandbuffer_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CommandBuffer::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CommandBuffer_descriptor_;
  metadata.reflection = CommandBuffer_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace geofactions
}  // namespace usx

// @@protoc_insertion_point(global_scope)
