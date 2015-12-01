// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cdti.proto

#ifndef PROTOBUF_cdti_2eproto__INCLUDED
#define PROTOBUF_cdti_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cdti_2eproto();
void protobuf_AssignDesc_cdti_2eproto();
void protobuf_ShutdownFile_cdti_2eproto();

class Vector;
class CDTIPlane;
class CDTIReport;

enum CDTIPlane_Severity {
  CDTIPlane_Severity_PROXIMATE = 0,
  CDTIPlane_Severity_TRAFFIC = 1,
  CDTIPlane_Severity_RESOLUTION = 2
};
bool CDTIPlane_Severity_IsValid(int value);
const CDTIPlane_Severity CDTIPlane_Severity_Severity_MIN = CDTIPlane_Severity_PROXIMATE;
const CDTIPlane_Severity CDTIPlane_Severity_Severity_MAX = CDTIPlane_Severity_RESOLUTION;
const int CDTIPlane_Severity_Severity_ARRAYSIZE = CDTIPlane_Severity_Severity_MAX + 1;

const ::google::protobuf::EnumDescriptor* CDTIPlane_Severity_descriptor();
inline const ::std::string& CDTIPlane_Severity_Name(CDTIPlane_Severity value) {
  return ::google::protobuf::internal::NameOfEnum(
    CDTIPlane_Severity_descriptor(), value);
}
inline bool CDTIPlane_Severity_Parse(
    const ::std::string& name, CDTIPlane_Severity* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CDTIPlane_Severity>(
    CDTIPlane_Severity_descriptor(), name, value);
}
enum CDTIReport_Severity {
  CDTIReport_Severity_PROXIMATE = 0,
  CDTIReport_Severity_TRAFFIC = 1,
  CDTIReport_Severity_RESOLUTION = 2
};
bool CDTIReport_Severity_IsValid(int value);
const CDTIReport_Severity CDTIReport_Severity_Severity_MIN = CDTIReport_Severity_PROXIMATE;
const CDTIReport_Severity CDTIReport_Severity_Severity_MAX = CDTIReport_Severity_RESOLUTION;
const int CDTIReport_Severity_Severity_ARRAYSIZE = CDTIReport_Severity_Severity_MAX + 1;

const ::google::protobuf::EnumDescriptor* CDTIReport_Severity_descriptor();
inline const ::std::string& CDTIReport_Severity_Name(CDTIReport_Severity value) {
  return ::google::protobuf::internal::NameOfEnum(
    CDTIReport_Severity_descriptor(), value);
}
inline bool CDTIReport_Severity_Parse(
    const ::std::string& name, CDTIReport_Severity* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CDTIReport_Severity>(
    CDTIReport_Severity_descriptor(), name, value);
}
// ===================================================================

class Vector : public ::google::protobuf::Message {
 public:
  Vector();
  virtual ~Vector();

  Vector(const Vector& from);

  inline Vector& operator=(const Vector& from) {
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
  static const Vector& default_instance();

  void Swap(Vector* other);

  // implements Message ----------------------------------------------

  Vector* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Vector& from);
  void MergeFrom(const Vector& from);
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

  // required float X = 1;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 1;
  inline float x() const;
  inline void set_x(float value);

  // required float Y = 2;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 2;
  inline float y() const;
  inline void set_y(float value);

  // required float Z = 3;
  inline bool has_z() const;
  inline void clear_z();
  static const int kZFieldNumber = 3;
  inline float z() const;
  inline void set_z(float value);

  // @@protoc_insertion_point(class_scope:Vector)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_z();
  inline void clear_has_z();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float x_;
  float y_;
  float z_;
  friend void  protobuf_AddDesc_cdti_2eproto();
  friend void protobuf_AssignDesc_cdti_2eproto();
  friend void protobuf_ShutdownFile_cdti_2eproto();

  void InitAsDefaultInstance();
  static Vector* default_instance_;
};
// -------------------------------------------------------------------

class CDTIPlane : public ::google::protobuf::Message {
 public:
  CDTIPlane();
  virtual ~CDTIPlane();

  CDTIPlane(const CDTIPlane& from);

  inline CDTIPlane& operator=(const CDTIPlane& from) {
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
  static const CDTIPlane& default_instance();

  void Swap(CDTIPlane* other);

  // implements Message ----------------------------------------------

  CDTIPlane* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDTIPlane& from);
  void MergeFrom(const CDTIPlane& from);
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

  typedef CDTIPlane_Severity Severity;
  static const Severity PROXIMATE = CDTIPlane_Severity_PROXIMATE;
  static const Severity TRAFFIC = CDTIPlane_Severity_TRAFFIC;
  static const Severity RESOLUTION = CDTIPlane_Severity_RESOLUTION;
  static inline bool Severity_IsValid(int value) {
    return CDTIPlane_Severity_IsValid(value);
  }
  static const Severity Severity_MIN =
    CDTIPlane_Severity_Severity_MIN;
  static const Severity Severity_MAX =
    CDTIPlane_Severity_Severity_MAX;
  static const int Severity_ARRAYSIZE =
    CDTIPlane_Severity_Severity_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Severity_descriptor() {
    return CDTIPlane_Severity_descriptor();
  }
  static inline const ::std::string& Severity_Name(Severity value) {
    return CDTIPlane_Severity_Name(value);
  }
  static inline bool Severity_Parse(const ::std::string& name,
      Severity* value) {
    return CDTIPlane_Severity_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // required .Vector position = 2;
  inline bool has_position() const;
  inline void clear_position();
  static const int kPositionFieldNumber = 2;
  inline const ::Vector& position() const;
  inline ::Vector* mutable_position();
  inline ::Vector* release_position();
  inline void set_allocated_position(::Vector* position);

  // required .Vector velocity = 3;
  inline bool has_velocity() const;
  inline void clear_velocity();
  static const int kVelocityFieldNumber = 3;
  inline const ::Vector& velocity() const;
  inline ::Vector* mutable_velocity();
  inline ::Vector* release_velocity();
  inline void set_allocated_velocity(::Vector* velocity);

  // required .CDTIPlane.Severity severity = 4;
  inline bool has_severity() const;
  inline void clear_severity();
  static const int kSeverityFieldNumber = 4;
  inline ::CDTIPlane_Severity severity() const;
  inline void set_severity(::CDTIPlane_Severity value);

  // @@protoc_insertion_point(class_scope:CDTIPlane)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_position();
  inline void clear_has_position();
  inline void set_has_velocity();
  inline void clear_has_velocity();
  inline void set_has_severity();
  inline void clear_has_severity();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* id_;
  ::Vector* position_;
  ::Vector* velocity_;
  int severity_;
  friend void  protobuf_AddDesc_cdti_2eproto();
  friend void protobuf_AssignDesc_cdti_2eproto();
  friend void protobuf_ShutdownFile_cdti_2eproto();

  void InitAsDefaultInstance();
  static CDTIPlane* default_instance_;
};
// -------------------------------------------------------------------

class CDTIReport : public ::google::protobuf::Message {
 public:
  CDTIReport();
  virtual ~CDTIReport();

  CDTIReport(const CDTIReport& from);

  inline CDTIReport& operator=(const CDTIReport& from) {
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
  static const CDTIReport& default_instance();

  void Swap(CDTIReport* other);

  // implements Message ----------------------------------------------

  CDTIReport* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDTIReport& from);
  void MergeFrom(const CDTIReport& from);
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

  typedef CDTIReport_Severity Severity;
  static const Severity PROXIMATE = CDTIReport_Severity_PROXIMATE;
  static const Severity TRAFFIC = CDTIReport_Severity_TRAFFIC;
  static const Severity RESOLUTION = CDTIReport_Severity_RESOLUTION;
  static inline bool Severity_IsValid(int value) {
    return CDTIReport_Severity_IsValid(value);
  }
  static const Severity Severity_MIN =
    CDTIReport_Severity_Severity_MIN;
  static const Severity Severity_MAX =
    CDTIReport_Severity_Severity_MAX;
  static const int Severity_ARRAYSIZE =
    CDTIReport_Severity_Severity_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Severity_descriptor() {
    return CDTIReport_Severity_descriptor();
  }
  static inline const ::std::string& Severity_Name(Severity value) {
    return CDTIReport_Severity_Name(value);
  }
  static inline bool Severity_Parse(const ::std::string& name,
      Severity* value) {
    return CDTIReport_Severity_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required sfixed64 timestamp = 1;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 1;
  inline ::google::protobuf::int64 timestamp() const;
  inline void set_timestamp(::google::protobuf::int64 value);

  // required .CDTIPlane ownship = 2;
  inline bool has_ownship() const;
  inline void clear_ownship();
  static const int kOwnshipFieldNumber = 2;
  inline const ::CDTIPlane& ownship() const;
  inline ::CDTIPlane* mutable_ownship();
  inline ::CDTIPlane* release_ownship();
  inline void set_allocated_ownship(::CDTIPlane* ownship);

  // optional string advisoryMessage = 3;
  inline bool has_advisorymessage() const;
  inline void clear_advisorymessage();
  static const int kAdvisoryMessageFieldNumber = 3;
  inline const ::std::string& advisorymessage() const;
  inline void set_advisorymessage(const ::std::string& value);
  inline void set_advisorymessage(const char* value);
  inline void set_advisorymessage(const char* value, size_t size);
  inline ::std::string* mutable_advisorymessage();
  inline ::std::string* release_advisorymessage();
  inline void set_allocated_advisorymessage(::std::string* advisorymessage);

  // optional .CDTIReport.Severity advisoryLevel = 4;
  inline bool has_advisorylevel() const;
  inline void clear_advisorylevel();
  static const int kAdvisoryLevelFieldNumber = 4;
  inline ::CDTIReport_Severity advisorylevel() const;
  inline void set_advisorylevel(::CDTIReport_Severity value);

  // repeated .CDTIPlane planes = 5;
  inline int planes_size() const;
  inline void clear_planes();
  static const int kPlanesFieldNumber = 5;
  inline const ::CDTIPlane& planes(int index) const;
  inline ::CDTIPlane* mutable_planes(int index);
  inline ::CDTIPlane* add_planes();
  inline const ::google::protobuf::RepeatedPtrField< ::CDTIPlane >&
      planes() const;
  inline ::google::protobuf::RepeatedPtrField< ::CDTIPlane >*
      mutable_planes();

  // @@protoc_insertion_point(class_scope:CDTIReport)
 private:
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_ownship();
  inline void clear_has_ownship();
  inline void set_has_advisorymessage();
  inline void clear_has_advisorymessage();
  inline void set_has_advisorylevel();
  inline void clear_has_advisorylevel();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 timestamp_;
  ::CDTIPlane* ownship_;
  ::std::string* advisorymessage_;
  ::google::protobuf::RepeatedPtrField< ::CDTIPlane > planes_;
  int advisorylevel_;
  friend void  protobuf_AddDesc_cdti_2eproto();
  friend void protobuf_AssignDesc_cdti_2eproto();
  friend void protobuf_ShutdownFile_cdti_2eproto();

  void InitAsDefaultInstance();
  static CDTIReport* default_instance_;
};
// ===================================================================


// ===================================================================

// Vector

// required float X = 1;
inline bool Vector::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Vector::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Vector::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Vector::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float Vector::x() const {
  // @@protoc_insertion_point(field_get:Vector.X)
  return x_;
}
inline void Vector::set_x(float value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:Vector.X)
}

// required float Y = 2;
inline bool Vector::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Vector::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Vector::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Vector::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float Vector::y() const {
  // @@protoc_insertion_point(field_get:Vector.Y)
  return y_;
}
inline void Vector::set_y(float value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:Vector.Y)
}

// required float Z = 3;
inline bool Vector::has_z() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Vector::set_has_z() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Vector::clear_has_z() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Vector::clear_z() {
  z_ = 0;
  clear_has_z();
}
inline float Vector::z() const {
  // @@protoc_insertion_point(field_get:Vector.Z)
  return z_;
}
inline void Vector::set_z(float value) {
  set_has_z();
  z_ = value;
  // @@protoc_insertion_point(field_set:Vector.Z)
}

// -------------------------------------------------------------------

// CDTIPlane

// required string id = 1;
inline bool CDTIPlane::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDTIPlane::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDTIPlane::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDTIPlane::clear_id() {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& CDTIPlane::id() const {
  // @@protoc_insertion_point(field_get:CDTIPlane.id)
  return *id_;
}
inline void CDTIPlane::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
  // @@protoc_insertion_point(field_set:CDTIPlane.id)
}
inline void CDTIPlane::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(value);
  // @@protoc_insertion_point(field_set_char:CDTIPlane.id)
}
inline void CDTIPlane::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:CDTIPlane.id)
}
inline ::std::string* CDTIPlane::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    id_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:CDTIPlane.id)
  return id_;
}
inline ::std::string* CDTIPlane::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CDTIPlane::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:CDTIPlane.id)
}

// required .Vector position = 2;
inline bool CDTIPlane::has_position() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDTIPlane::set_has_position() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDTIPlane::clear_has_position() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDTIPlane::clear_position() {
  if (position_ != NULL) position_->::Vector::Clear();
  clear_has_position();
}
inline const ::Vector& CDTIPlane::position() const {
  // @@protoc_insertion_point(field_get:CDTIPlane.position)
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
inline ::Vector* CDTIPlane::mutable_position() {
  set_has_position();
  if (position_ == NULL) position_ = new ::Vector;
  // @@protoc_insertion_point(field_mutable:CDTIPlane.position)
  return position_;
}
inline ::Vector* CDTIPlane::release_position() {
  clear_has_position();
  ::Vector* temp = position_;
  position_ = NULL;
  return temp;
}
inline void CDTIPlane::set_allocated_position(::Vector* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
  // @@protoc_insertion_point(field_set_allocated:CDTIPlane.position)
}

// required .Vector velocity = 3;
inline bool CDTIPlane::has_velocity() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDTIPlane::set_has_velocity() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDTIPlane::clear_has_velocity() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDTIPlane::clear_velocity() {
  if (velocity_ != NULL) velocity_->::Vector::Clear();
  clear_has_velocity();
}
inline const ::Vector& CDTIPlane::velocity() const {
  // @@protoc_insertion_point(field_get:CDTIPlane.velocity)
  return velocity_ != NULL ? *velocity_ : *default_instance_->velocity_;
}
inline ::Vector* CDTIPlane::mutable_velocity() {
  set_has_velocity();
  if (velocity_ == NULL) velocity_ = new ::Vector;
  // @@protoc_insertion_point(field_mutable:CDTIPlane.velocity)
  return velocity_;
}
inline ::Vector* CDTIPlane::release_velocity() {
  clear_has_velocity();
  ::Vector* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline void CDTIPlane::set_allocated_velocity(::Vector* velocity) {
  delete velocity_;
  velocity_ = velocity;
  if (velocity) {
    set_has_velocity();
  } else {
    clear_has_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:CDTIPlane.velocity)
}

// required .CDTIPlane.Severity severity = 4;
inline bool CDTIPlane::has_severity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CDTIPlane::set_has_severity() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CDTIPlane::clear_has_severity() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CDTIPlane::clear_severity() {
  severity_ = 0;
  clear_has_severity();
}
inline ::CDTIPlane_Severity CDTIPlane::severity() const {
  // @@protoc_insertion_point(field_get:CDTIPlane.severity)
  return static_cast< ::CDTIPlane_Severity >(severity_);
}
inline void CDTIPlane::set_severity(::CDTIPlane_Severity value) {
  assert(::CDTIPlane_Severity_IsValid(value));
  set_has_severity();
  severity_ = value;
  // @@protoc_insertion_point(field_set:CDTIPlane.severity)
}

// -------------------------------------------------------------------

// CDTIReport

// required sfixed64 timestamp = 1;
inline bool CDTIReport::has_timestamp() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDTIReport::set_has_timestamp() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDTIReport::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDTIReport::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp();
}
inline ::google::protobuf::int64 CDTIReport::timestamp() const {
  // @@protoc_insertion_point(field_get:CDTIReport.timestamp)
  return timestamp_;
}
inline void CDTIReport::set_timestamp(::google::protobuf::int64 value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:CDTIReport.timestamp)
}

// required .CDTIPlane ownship = 2;
inline bool CDTIReport::has_ownship() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDTIReport::set_has_ownship() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDTIReport::clear_has_ownship() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDTIReport::clear_ownship() {
  if (ownship_ != NULL) ownship_->::CDTIPlane::Clear();
  clear_has_ownship();
}
inline const ::CDTIPlane& CDTIReport::ownship() const {
  // @@protoc_insertion_point(field_get:CDTIReport.ownship)
  return ownship_ != NULL ? *ownship_ : *default_instance_->ownship_;
}
inline ::CDTIPlane* CDTIReport::mutable_ownship() {
  set_has_ownship();
  if (ownship_ == NULL) ownship_ = new ::CDTIPlane;
  // @@protoc_insertion_point(field_mutable:CDTIReport.ownship)
  return ownship_;
}
inline ::CDTIPlane* CDTIReport::release_ownship() {
  clear_has_ownship();
  ::CDTIPlane* temp = ownship_;
  ownship_ = NULL;
  return temp;
}
inline void CDTIReport::set_allocated_ownship(::CDTIPlane* ownship) {
  delete ownship_;
  ownship_ = ownship;
  if (ownship) {
    set_has_ownship();
  } else {
    clear_has_ownship();
  }
  // @@protoc_insertion_point(field_set_allocated:CDTIReport.ownship)
}

// optional string advisoryMessage = 3;
inline bool CDTIReport::has_advisorymessage() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDTIReport::set_has_advisorymessage() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDTIReport::clear_has_advisorymessage() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDTIReport::clear_advisorymessage() {
  if (advisorymessage_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    advisorymessage_->clear();
  }
  clear_has_advisorymessage();
}
inline const ::std::string& CDTIReport::advisorymessage() const {
  // @@protoc_insertion_point(field_get:CDTIReport.advisoryMessage)
  return *advisorymessage_;
}
inline void CDTIReport::set_advisorymessage(const ::std::string& value) {
  set_has_advisorymessage();
  if (advisorymessage_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    advisorymessage_ = new ::std::string;
  }
  advisorymessage_->assign(value);
  // @@protoc_insertion_point(field_set:CDTIReport.advisoryMessage)
}
inline void CDTIReport::set_advisorymessage(const char* value) {
  set_has_advisorymessage();
  if (advisorymessage_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    advisorymessage_ = new ::std::string;
  }
  advisorymessage_->assign(value);
  // @@protoc_insertion_point(field_set_char:CDTIReport.advisoryMessage)
}
inline void CDTIReport::set_advisorymessage(const char* value, size_t size) {
  set_has_advisorymessage();
  if (advisorymessage_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    advisorymessage_ = new ::std::string;
  }
  advisorymessage_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:CDTIReport.advisoryMessage)
}
inline ::std::string* CDTIReport::mutable_advisorymessage() {
  set_has_advisorymessage();
  if (advisorymessage_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    advisorymessage_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:CDTIReport.advisoryMessage)
  return advisorymessage_;
}
inline ::std::string* CDTIReport::release_advisorymessage() {
  clear_has_advisorymessage();
  if (advisorymessage_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = advisorymessage_;
    advisorymessage_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CDTIReport::set_allocated_advisorymessage(::std::string* advisorymessage) {
  if (advisorymessage_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete advisorymessage_;
  }
  if (advisorymessage) {
    set_has_advisorymessage();
    advisorymessage_ = advisorymessage;
  } else {
    clear_has_advisorymessage();
    advisorymessage_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:CDTIReport.advisoryMessage)
}

// optional .CDTIReport.Severity advisoryLevel = 4;
inline bool CDTIReport::has_advisorylevel() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CDTIReport::set_has_advisorylevel() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CDTIReport::clear_has_advisorylevel() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CDTIReport::clear_advisorylevel() {
  advisorylevel_ = 0;
  clear_has_advisorylevel();
}
inline ::CDTIReport_Severity CDTIReport::advisorylevel() const {
  // @@protoc_insertion_point(field_get:CDTIReport.advisoryLevel)
  return static_cast< ::CDTIReport_Severity >(advisorylevel_);
}
inline void CDTIReport::set_advisorylevel(::CDTIReport_Severity value) {
  assert(::CDTIReport_Severity_IsValid(value));
  set_has_advisorylevel();
  advisorylevel_ = value;
  // @@protoc_insertion_point(field_set:CDTIReport.advisoryLevel)
}

// repeated .CDTIPlane planes = 5;
inline int CDTIReport::planes_size() const {
  return planes_.size();
}
inline void CDTIReport::clear_planes() {
  planes_.Clear();
}
inline const ::CDTIPlane& CDTIReport::planes(int index) const {
  // @@protoc_insertion_point(field_get:CDTIReport.planes)
  return planes_.Get(index);
}
inline ::CDTIPlane* CDTIReport::mutable_planes(int index) {
  // @@protoc_insertion_point(field_mutable:CDTIReport.planes)
  return planes_.Mutable(index);
}
inline ::CDTIPlane* CDTIReport::add_planes() {
  // @@protoc_insertion_point(field_add:CDTIReport.planes)
  return planes_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::CDTIPlane >&
CDTIReport::planes() const {
  // @@protoc_insertion_point(field_list:CDTIReport.planes)
  return planes_;
}
inline ::google::protobuf::RepeatedPtrField< ::CDTIPlane >*
CDTIReport::mutable_planes() {
  // @@protoc_insertion_point(field_mutable_list:CDTIReport.planes)
  return &planes_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::CDTIPlane_Severity> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::CDTIPlane_Severity>() {
  return ::CDTIPlane_Severity_descriptor();
}
template <> struct is_proto_enum< ::CDTIReport_Severity> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::CDTIReport_Severity>() {
  return ::CDTIReport_Severity_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cdti_2eproto__INCLUDED
