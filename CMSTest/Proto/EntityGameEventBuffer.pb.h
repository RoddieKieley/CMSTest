// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EntityGameEventBuffer.proto

#ifndef PROTOBUF_EntityGameEventBuffer_2eproto__INCLUDED
#define PROTOBUF_EntityGameEventBuffer_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "box2d.pb.h"
// @@protoc_insertion_point(includes)

namespace usx {
namespace geofactions {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_EntityGameEventBuffer_2eproto();
void protobuf_AssignDesc_EntityGameEventBuffer_2eproto();
void protobuf_ShutdownFile_EntityGameEventBuffer_2eproto();

class EntityGameEventBuffer;

enum EntityGameEventBuffer_EntityGameEventBufferType {
  EntityGameEventBuffer_EntityGameEventBufferType_UNKNOWN = 0,
  EntityGameEventBuffer_EntityGameEventBufferType_CREATE = 1,
  EntityGameEventBuffer_EntityGameEventBufferType_RETRIEVE = 2,
  EntityGameEventBuffer_EntityGameEventBufferType_UPDATE = 3,
  EntityGameEventBuffer_EntityGameEventBufferType_DESTROY = 4
};
bool EntityGameEventBuffer_EntityGameEventBufferType_IsValid(int value);
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MIN = EntityGameEventBuffer_EntityGameEventBufferType_UNKNOWN;
const EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MAX = EntityGameEventBuffer_EntityGameEventBufferType_DESTROY;
const int EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_ARRAYSIZE = EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MAX + 1;

const ::google::protobuf::EnumDescriptor* EntityGameEventBuffer_EntityGameEventBufferType_descriptor();
inline const ::std::string& EntityGameEventBuffer_EntityGameEventBufferType_Name(EntityGameEventBuffer_EntityGameEventBufferType value) {
  return ::google::protobuf::internal::NameOfEnum(
    EntityGameEventBuffer_EntityGameEventBufferType_descriptor(), value);
}
inline bool EntityGameEventBuffer_EntityGameEventBufferType_Parse(
    const ::std::string& name, EntityGameEventBuffer_EntityGameEventBufferType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EntityGameEventBuffer_EntityGameEventBufferType>(
    EntityGameEventBuffer_EntityGameEventBufferType_descriptor(), name, value);
}
// ===================================================================

class EntityGameEventBuffer : public ::google::protobuf::Message {
 public:
  EntityGameEventBuffer();
  virtual ~EntityGameEventBuffer();

  EntityGameEventBuffer(const EntityGameEventBuffer& from);

  inline EntityGameEventBuffer& operator=(const EntityGameEventBuffer& from) {
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
  static const EntityGameEventBuffer& default_instance();

  void Swap(EntityGameEventBuffer* other);

  // implements Message ----------------------------------------------

  EntityGameEventBuffer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EntityGameEventBuffer& from);
  void MergeFrom(const EntityGameEventBuffer& from);
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

  typedef EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBufferType;
  static const EntityGameEventBufferType UNKNOWN = EntityGameEventBuffer_EntityGameEventBufferType_UNKNOWN;
  static const EntityGameEventBufferType CREATE = EntityGameEventBuffer_EntityGameEventBufferType_CREATE;
  static const EntityGameEventBufferType RETRIEVE = EntityGameEventBuffer_EntityGameEventBufferType_RETRIEVE;
  static const EntityGameEventBufferType UPDATE = EntityGameEventBuffer_EntityGameEventBufferType_UPDATE;
  static const EntityGameEventBufferType DESTROY = EntityGameEventBuffer_EntityGameEventBufferType_DESTROY;
  static inline bool EntityGameEventBufferType_IsValid(int value) {
    return EntityGameEventBuffer_EntityGameEventBufferType_IsValid(value);
  }
  static const EntityGameEventBufferType EntityGameEventBufferType_MIN =
    EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MIN;
  static const EntityGameEventBufferType EntityGameEventBufferType_MAX =
    EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_MAX;
  static const int EntityGameEventBufferType_ARRAYSIZE =
    EntityGameEventBuffer_EntityGameEventBufferType_EntityGameEventBufferType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  EntityGameEventBufferType_descriptor() {
    return EntityGameEventBuffer_EntityGameEventBufferType_descriptor();
  }
  static inline const ::std::string& EntityGameEventBufferType_Name(EntityGameEventBufferType value) {
    return EntityGameEventBuffer_EntityGameEventBufferType_Name(value);
  }
  static inline bool EntityGameEventBufferType_Parse(const ::std::string& name,
      EntityGameEventBufferType* value) {
    return EntityGameEventBuffer_EntityGameEventBufferType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .usx.geofactions.EntityGameEventBuffer.EntityGameEventBufferType type = 1 [default = UNKNOWN];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType type() const;
  inline void set_type(::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType value);

  // required uint64 entityTag = 2;
  inline bool has_entitytag() const;
  inline void clear_entitytag();
  static const int kEntityTagFieldNumber = 2;
  inline ::google::protobuf::uint64 entitytag() const;
  inline void set_entitytag(::google::protobuf::uint64 value);

  // optional string UUID = 3;
  inline bool has_uuid() const;
  inline void clear_uuid();
  static const int kUUIDFieldNumber = 3;
  inline const ::std::string& uuid() const;
  inline void set_uuid(const ::std::string& value);
  inline void set_uuid(const char* value);
  inline void set_uuid(const char* value, size_t size);
  inline ::std::string* mutable_uuid();
  inline ::std::string* release_uuid();
  inline void set_allocated_uuid(::std::string* uuid);

  // optional .box2d.PbBody body = 4;
  inline bool has_body() const;
  inline void clear_body();
  static const int kBodyFieldNumber = 4;
  inline const ::box2d::PbBody& body() const;
  inline ::box2d::PbBody* mutable_body();
  inline ::box2d::PbBody* release_body();
  inline void set_allocated_body(::box2d::PbBody* body);

  // @@protoc_insertion_point(class_scope:usx.geofactions.EntityGameEventBuffer)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_entitytag();
  inline void clear_has_entitytag();
  inline void set_has_uuid();
  inline void clear_has_uuid();
  inline void set_has_body();
  inline void clear_has_body();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 entitytag_;
  ::std::string* uuid_;
  ::box2d::PbBody* body_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_EntityGameEventBuffer_2eproto();
  friend void protobuf_AssignDesc_EntityGameEventBuffer_2eproto();
  friend void protobuf_ShutdownFile_EntityGameEventBuffer_2eproto();

  void InitAsDefaultInstance();
  static EntityGameEventBuffer* default_instance_;
};
// ===================================================================


// ===================================================================

// EntityGameEventBuffer

// required .usx.geofactions.EntityGameEventBuffer.EntityGameEventBufferType type = 1 [default = UNKNOWN];
inline bool EntityGameEventBuffer::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void EntityGameEventBuffer::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void EntityGameEventBuffer::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void EntityGameEventBuffer::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType EntityGameEventBuffer::type() const {
  return static_cast< ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType >(type_);
}
inline void EntityGameEventBuffer::set_type(::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType value) {
  assert(::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType_IsValid(value));
  set_has_type();
  type_ = value;
}

// required uint64 entityTag = 2;
inline bool EntityGameEventBuffer::has_entitytag() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void EntityGameEventBuffer::set_has_entitytag() {
  _has_bits_[0] |= 0x00000002u;
}
inline void EntityGameEventBuffer::clear_has_entitytag() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void EntityGameEventBuffer::clear_entitytag() {
  entitytag_ = GOOGLE_ULONGLONG(0);
  clear_has_entitytag();
}
inline ::google::protobuf::uint64 EntityGameEventBuffer::entitytag() const {
  return entitytag_;
}
inline void EntityGameEventBuffer::set_entitytag(::google::protobuf::uint64 value) {
  set_has_entitytag();
  entitytag_ = value;
}

// optional string UUID = 3;
inline bool EntityGameEventBuffer::has_uuid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void EntityGameEventBuffer::set_has_uuid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void EntityGameEventBuffer::clear_has_uuid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void EntityGameEventBuffer::clear_uuid() {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    uuid_->clear();
  }
  clear_has_uuid();
}
inline const ::std::string& EntityGameEventBuffer::uuid() const {
  return *uuid_;
}
inline void EntityGameEventBuffer::set_uuid(const ::std::string& value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void EntityGameEventBuffer::set_uuid(const char* value) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(value);
}
inline void EntityGameEventBuffer::set_uuid(const char* value, size_t size) {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  uuid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* EntityGameEventBuffer::mutable_uuid() {
  set_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    uuid_ = new ::std::string;
  }
  return uuid_;
}
inline ::std::string* EntityGameEventBuffer::release_uuid() {
  clear_has_uuid();
  if (uuid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = uuid_;
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void EntityGameEventBuffer::set_allocated_uuid(::std::string* uuid) {
  if (uuid_ != &::google::protobuf::internal::kEmptyString) {
    delete uuid_;
  }
  if (uuid) {
    set_has_uuid();
    uuid_ = uuid;
  } else {
    clear_has_uuid();
    uuid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .box2d.PbBody body = 4;
inline bool EntityGameEventBuffer::has_body() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void EntityGameEventBuffer::set_has_body() {
  _has_bits_[0] |= 0x00000008u;
}
inline void EntityGameEventBuffer::clear_has_body() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void EntityGameEventBuffer::clear_body() {
  if (body_ != NULL) body_->::box2d::PbBody::Clear();
  clear_has_body();
}
inline const ::box2d::PbBody& EntityGameEventBuffer::body() const {
  return body_ != NULL ? *body_ : *default_instance_->body_;
}
inline ::box2d::PbBody* EntityGameEventBuffer::mutable_body() {
  set_has_body();
  if (body_ == NULL) body_ = new ::box2d::PbBody;
  return body_;
}
inline ::box2d::PbBody* EntityGameEventBuffer::release_body() {
  clear_has_body();
  ::box2d::PbBody* temp = body_;
  body_ = NULL;
  return temp;
}
inline void EntityGameEventBuffer::set_allocated_body(::box2d::PbBody* body) {
  delete body_;
  body_ = body;
  if (body) {
    set_has_body();
  } else {
    clear_has_body();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace geofactions
}  // namespace usx

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType>() {
  return ::usx::geofactions::EntityGameEventBuffer_EntityGameEventBufferType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_EntityGameEventBuffer_2eproto__INCLUDED
