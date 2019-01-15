// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DualStickRawInputCommandBuffer.proto

#ifndef PROTOBUF_DualStickRawInputCommandBuffer_2eproto__INCLUDED
#define PROTOBUF_DualStickRawInputCommandBuffer_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "box2d.pb.h"
// @@protoc_insertion_point(includes)

namespace usx {
namespace geofactions {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_DualStickRawInputCommandBuffer_2eproto();
void protobuf_AssignDesc_DualStickRawInputCommandBuffer_2eproto();
void protobuf_ShutdownFile_DualStickRawInputCommandBuffer_2eproto();

class DualStickRawInputCommandBuffer;

// ===================================================================

class DualStickRawInputCommandBuffer : public ::google::protobuf::Message {
 public:
  DualStickRawInputCommandBuffer();
  virtual ~DualStickRawInputCommandBuffer();

  DualStickRawInputCommandBuffer(const DualStickRawInputCommandBuffer& from);

  inline DualStickRawInputCommandBuffer& operator=(const DualStickRawInputCommandBuffer& from) {
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
  static const DualStickRawInputCommandBuffer& default_instance();

  void Swap(DualStickRawInputCommandBuffer* other);

  // implements Message ----------------------------------------------

  DualStickRawInputCommandBuffer* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DualStickRawInputCommandBuffer& from);
  void MergeFrom(const DualStickRawInputCommandBuffer& from);
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

  // required .box2d.PbVec2 pbv2Move = 1;
  inline bool has_pbv2move() const;
  inline void clear_pbv2move();
  static const int kPbv2MoveFieldNumber = 1;
  inline const ::box2d::PbVec2& pbv2move() const;
  inline ::box2d::PbVec2* mutable_pbv2move();
  inline ::box2d::PbVec2* release_pbv2move();
  inline void set_allocated_pbv2move(::box2d::PbVec2* pbv2move);

  // required .box2d.PbVec2 pbv2Shoot = 2;
  inline bool has_pbv2shoot() const;
  inline void clear_pbv2shoot();
  static const int kPbv2ShootFieldNumber = 2;
  inline const ::box2d::PbVec2& pbv2shoot() const;
  inline ::box2d::PbVec2* mutable_pbv2shoot();
  inline ::box2d::PbVec2* release_pbv2shoot();
  inline void set_allocated_pbv2shoot(::box2d::PbVec2* pbv2shoot);

  // @@protoc_insertion_point(class_scope:usx.geofactions.DualStickRawInputCommandBuffer)
 private:
  inline void set_has_pbv2move();
  inline void clear_has_pbv2move();
  inline void set_has_pbv2shoot();
  inline void clear_has_pbv2shoot();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::box2d::PbVec2* pbv2move_;
  ::box2d::PbVec2* pbv2shoot_;
  friend void  protobuf_AddDesc_DualStickRawInputCommandBuffer_2eproto();
  friend void protobuf_AssignDesc_DualStickRawInputCommandBuffer_2eproto();
  friend void protobuf_ShutdownFile_DualStickRawInputCommandBuffer_2eproto();

  void InitAsDefaultInstance();
  static DualStickRawInputCommandBuffer* default_instance_;
};
// ===================================================================


// ===================================================================

// DualStickRawInputCommandBuffer

// required .box2d.PbVec2 pbv2Move = 1;
inline bool DualStickRawInputCommandBuffer::has_pbv2move() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DualStickRawInputCommandBuffer::set_has_pbv2move() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DualStickRawInputCommandBuffer::clear_has_pbv2move() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DualStickRawInputCommandBuffer::clear_pbv2move() {
  if (pbv2move_ != NULL) pbv2move_->::box2d::PbVec2::Clear();
  clear_has_pbv2move();
}
inline const ::box2d::PbVec2& DualStickRawInputCommandBuffer::pbv2move() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.DualStickRawInputCommandBuffer.pbv2Move)
  return pbv2move_ != NULL ? *pbv2move_ : *default_instance_->pbv2move_;
}
inline ::box2d::PbVec2* DualStickRawInputCommandBuffer::mutable_pbv2move() {
  set_has_pbv2move();
  if (pbv2move_ == NULL) pbv2move_ = new ::box2d::PbVec2;
  // @@protoc_insertion_point(field_mutable:usx.geofactions.DualStickRawInputCommandBuffer.pbv2Move)
  return pbv2move_;
}
inline ::box2d::PbVec2* DualStickRawInputCommandBuffer::release_pbv2move() {
  clear_has_pbv2move();
  ::box2d::PbVec2* temp = pbv2move_;
  pbv2move_ = NULL;
  return temp;
}
inline void DualStickRawInputCommandBuffer::set_allocated_pbv2move(::box2d::PbVec2* pbv2move) {
  delete pbv2move_;
  pbv2move_ = pbv2move;
  if (pbv2move) {
    set_has_pbv2move();
  } else {
    clear_has_pbv2move();
  }
  // @@protoc_insertion_point(field_set_allocated:usx.geofactions.DualStickRawInputCommandBuffer.pbv2Move)
}

// required .box2d.PbVec2 pbv2Shoot = 2;
inline bool DualStickRawInputCommandBuffer::has_pbv2shoot() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DualStickRawInputCommandBuffer::set_has_pbv2shoot() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DualStickRawInputCommandBuffer::clear_has_pbv2shoot() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DualStickRawInputCommandBuffer::clear_pbv2shoot() {
  if (pbv2shoot_ != NULL) pbv2shoot_->::box2d::PbVec2::Clear();
  clear_has_pbv2shoot();
}
inline const ::box2d::PbVec2& DualStickRawInputCommandBuffer::pbv2shoot() const {
  // @@protoc_insertion_point(field_get:usx.geofactions.DualStickRawInputCommandBuffer.pbv2Shoot)
  return pbv2shoot_ != NULL ? *pbv2shoot_ : *default_instance_->pbv2shoot_;
}
inline ::box2d::PbVec2* DualStickRawInputCommandBuffer::mutable_pbv2shoot() {
  set_has_pbv2shoot();
  if (pbv2shoot_ == NULL) pbv2shoot_ = new ::box2d::PbVec2;
  // @@protoc_insertion_point(field_mutable:usx.geofactions.DualStickRawInputCommandBuffer.pbv2Shoot)
  return pbv2shoot_;
}
inline ::box2d::PbVec2* DualStickRawInputCommandBuffer::release_pbv2shoot() {
  clear_has_pbv2shoot();
  ::box2d::PbVec2* temp = pbv2shoot_;
  pbv2shoot_ = NULL;
  return temp;
}
inline void DualStickRawInputCommandBuffer::set_allocated_pbv2shoot(::box2d::PbVec2* pbv2shoot) {
  delete pbv2shoot_;
  pbv2shoot_ = pbv2shoot;
  if (pbv2shoot) {
    set_has_pbv2shoot();
  } else {
    clear_has_pbv2shoot();
  }
  // @@protoc_insertion_point(field_set_allocated:usx.geofactions.DualStickRawInputCommandBuffer.pbv2Shoot)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace geofactions
}  // namespace usx

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_DualStickRawInputCommandBuffer_2eproto__INCLUDED
