// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GameEventBuffer.proto

#ifndef PROTOBUF_GameEventBuffer_2eproto__INCLUDED
#define PROTOBUF_GameEventBuffer_2eproto__INCLUDED

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
#include "EntityGameEventBuffer.pb.h"
// @@protoc_insertion_point(includes)

namespace usx {
namespace geofactions {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_GameEventBuffer_2eproto();
void protobuf_AssignDesc_GameEventBuffer_2eproto();
void protobuf_ShutdownFile_GameEventBuffer_2eproto();

class GameEventBuffer;

enum GameEventBuffer_GameEventBufferType {
  GameEventBuffer_GameEventBufferType_UNKNOWN = 0,
  GameEventBuffer_GameEventBufferType_ENTITY = 1
};
bool GameEventBuffer_GameEventBufferType_IsValid(int value);
const GameEventBuffer_GameEventBufferType GameEventBuffer_GameEventBufferType_GameEventBufferType_MIN = GameEventBuffer_GameEventBufferType_UNKNOWN;
const GameEventBuffer_GameEventBufferType GameEventBuffer_GameEventBufferType_GameEventBufferType_MAX = GameEventBuffer_GameEventBufferType_ENTITY;
const int GameEventBuffer_GameEventBufferType_GameEventBufferType_ARRAYSIZE = GameEventBuffer_GameEventBufferType_GameEventBufferType_MAX + 1;

const ::google::protobuf::EnumDescriptor* GameEventBuffer_GameEventBufferType_descriptor();
inline const ::std::string& GameEventBuffer_GameEventBufferType_Name(GameEventBuffer_GameEventBufferType value) {
  return ::google::protobuf::internal::NameOfEnum(
    GameEventBuffer_GameEventBufferType_descriptor(), value);
}
inline bool GameEventBuffer_GameEventBufferType_Parse(
    const ::std::string& name, GameEventBuffer_GameEventBufferType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<GameEventBuffer_GameEventBufferType>(
    GameEventBuffer_GameEventBufferType_descriptor(), name, value);
}
// ===================================================================

class GameEventBuffer : public ::google::protobuf::Message {
 public:
  GameEventBuffer();
  virtual ~GameEventBuffer();

  GameEventBuffer(const GameEventBuffer& from);

  inline GameEventBuffer& operator=(const GameEventBuffer& from) {
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
  static const GameEventBuffer& default_instance();

  void Swap(GameEventBuffer* other);

  // implements Message ----------------------------------------------

  GameEventBuffer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GameEventBuffer& from);
  void MergeFrom(const GameEventBuffer& from);
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

  typedef GameEventBuffer_GameEventBufferType GameEventBufferType;
  static const GameEventBufferType UNKNOWN = GameEventBuffer_GameEventBufferType_UNKNOWN;
  static const GameEventBufferType ENTITY = GameEventBuffer_GameEventBufferType_ENTITY;
  static inline bool GameEventBufferType_IsValid(int value) {
    return GameEventBuffer_GameEventBufferType_IsValid(value);
  }
  static const GameEventBufferType GameEventBufferType_MIN =
    GameEventBuffer_GameEventBufferType_GameEventBufferType_MIN;
  static const GameEventBufferType GameEventBufferType_MAX =
    GameEventBuffer_GameEventBufferType_GameEventBufferType_MAX;
  static const int GameEventBufferType_ARRAYSIZE =
    GameEventBuffer_GameEventBufferType_GameEventBufferType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  GameEventBufferType_descriptor() {
    return GameEventBuffer_GameEventBufferType_descriptor();
  }
  static inline const ::std::string& GameEventBufferType_Name(GameEventBufferType value) {
    return GameEventBuffer_GameEventBufferType_Name(value);
  }
  static inline bool GameEventBufferType_Parse(const ::std::string& name,
      GameEventBufferType* value) {
    return GameEventBuffer_GameEventBufferType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .usx.geofactions.GameEventBuffer.GameEventBufferType type = 1 [default = UNKNOWN];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::usx::geofactions::GameEventBuffer_GameEventBufferType type() const;
  inline void set_type(::usx::geofactions::GameEventBuffer_GameEventBufferType value);

  // optional .usx.geofactions.EntityGameEventBuffer entityGameEventBuffer = 2;
  inline bool has_entitygameeventbuffer() const;
  inline void clear_entitygameeventbuffer();
  static const int kEntityGameEventBufferFieldNumber = 2;
  inline const ::usx::geofactions::EntityGameEventBuffer& entitygameeventbuffer() const;
  inline ::usx::geofactions::EntityGameEventBuffer* mutable_entitygameeventbuffer();
  inline ::usx::geofactions::EntityGameEventBuffer* release_entitygameeventbuffer();
  inline void set_allocated_entitygameeventbuffer(::usx::geofactions::EntityGameEventBuffer* entitygameeventbuffer);

  // @@protoc_insertion_point(class_scope:usx.geofactions.GameEventBuffer)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_entitygameeventbuffer();
  inline void clear_has_entitygameeventbuffer();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::usx::geofactions::EntityGameEventBuffer* entitygameeventbuffer_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_GameEventBuffer_2eproto();
  friend void protobuf_AssignDesc_GameEventBuffer_2eproto();
  friend void protobuf_ShutdownFile_GameEventBuffer_2eproto();

  void InitAsDefaultInstance();
  static GameEventBuffer* default_instance_;
};
// ===================================================================


// ===================================================================

// GameEventBuffer

// required .usx.geofactions.GameEventBuffer.GameEventBufferType type = 1 [default = UNKNOWN];
inline bool GameEventBuffer::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GameEventBuffer::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GameEventBuffer::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GameEventBuffer::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::usx::geofactions::GameEventBuffer_GameEventBufferType GameEventBuffer::type() const {
  return static_cast< ::usx::geofactions::GameEventBuffer_GameEventBufferType >(type_);
}
inline void GameEventBuffer::set_type(::usx::geofactions::GameEventBuffer_GameEventBufferType value) {
  assert(::usx::geofactions::GameEventBuffer_GameEventBufferType_IsValid(value));
  set_has_type();
  type_ = value;
}

// optional .usx.geofactions.EntityGameEventBuffer entityGameEventBuffer = 2;
inline bool GameEventBuffer::has_entitygameeventbuffer() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GameEventBuffer::set_has_entitygameeventbuffer() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GameEventBuffer::clear_has_entitygameeventbuffer() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GameEventBuffer::clear_entitygameeventbuffer() {
  if (entitygameeventbuffer_ != NULL) entitygameeventbuffer_->::usx::geofactions::EntityGameEventBuffer::Clear();
  clear_has_entitygameeventbuffer();
}
inline const ::usx::geofactions::EntityGameEventBuffer& GameEventBuffer::entitygameeventbuffer() const {
  return entitygameeventbuffer_ != NULL ? *entitygameeventbuffer_ : *default_instance_->entitygameeventbuffer_;
}
inline ::usx::geofactions::EntityGameEventBuffer* GameEventBuffer::mutable_entitygameeventbuffer() {
  set_has_entitygameeventbuffer();
  if (entitygameeventbuffer_ == NULL) entitygameeventbuffer_ = new ::usx::geofactions::EntityGameEventBuffer;
  return entitygameeventbuffer_;
}
inline ::usx::geofactions::EntityGameEventBuffer* GameEventBuffer::release_entitygameeventbuffer() {
  clear_has_entitygameeventbuffer();
  ::usx::geofactions::EntityGameEventBuffer* temp = entitygameeventbuffer_;
  entitygameeventbuffer_ = NULL;
  return temp;
}
inline void GameEventBuffer::set_allocated_entitygameeventbuffer(::usx::geofactions::EntityGameEventBuffer* entitygameeventbuffer) {
  delete entitygameeventbuffer_;
  entitygameeventbuffer_ = entitygameeventbuffer;
  if (entitygameeventbuffer) {
    set_has_entitygameeventbuffer();
  } else {
    clear_has_entitygameeventbuffer();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace geofactions
}  // namespace usx

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::usx::geofactions::GameEventBuffer_GameEventBufferType>() {
  return ::usx::geofactions::GameEventBuffer_GameEventBufferType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_GameEventBuffer_2eproto__INCLUDED
