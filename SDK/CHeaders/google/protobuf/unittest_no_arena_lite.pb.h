// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_no_arena_lite.proto

#ifndef PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto
#define PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
namespace protobuf_unittest_no_arena {
class ForeignMessageLite;
class ForeignMessageLiteDefaultTypeInternal;
extern ForeignMessageLiteDefaultTypeInternal _ForeignMessageLite_default_instance_;
}  // namespace protobuf_unittest_no_arena
namespace google {
namespace protobuf {
template<> ::protobuf_unittest_no_arena::ForeignMessageLite* Arena::CreateMaybeMessage<::protobuf_unittest_no_arena::ForeignMessageLite>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace protobuf_unittest_no_arena {

// ===================================================================

class ForeignMessageLite final :
    public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:protobuf_unittest_no_arena.ForeignMessageLite) */ {
 public:
  ForeignMessageLite();
  virtual ~ForeignMessageLite();

  ForeignMessageLite(const ForeignMessageLite& from);

  inline ForeignMessageLite& operator=(const ForeignMessageLite& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ForeignMessageLite(ForeignMessageLite&& from) noexcept
    : ForeignMessageLite() {
    *this = ::std::move(from);
  }

  inline ForeignMessageLite& operator=(ForeignMessageLite&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ForeignMessageLite& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ForeignMessageLite* internal_default_instance() {
    return reinterpret_cast<const ForeignMessageLite*>(
               &_ForeignMessageLite_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ForeignMessageLite* other);
  friend void swap(ForeignMessageLite& a, ForeignMessageLite& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ForeignMessageLite* New() const final {
    return CreateMaybeMessage<ForeignMessageLite>(nullptr);
  }

  ForeignMessageLite* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ForeignMessageLite>(arena);
  }
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    final;
  void CopyFrom(const ForeignMessageLite& from);
  void MergeFrom(const ForeignMessageLite& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ForeignMessageLite* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 c = 1;
  bool has_c() const;
  void clear_c();
  static const int kCFieldNumber = 1;
  ::google::protobuf::int32 c() const;
  void set_c(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protobuf_unittest_no_arena.ForeignMessageLite)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::int32 c_;
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ForeignMessageLite

// optional int32 c = 1;
inline bool ForeignMessageLite::has_c() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ForeignMessageLite::clear_c() {
  c_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::google::protobuf::int32 ForeignMessageLite::c() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest_no_arena.ForeignMessageLite.c)
  return c_;
}
inline void ForeignMessageLite::set_c(::google::protobuf::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  c_ = value;
  // @@protoc_insertion_point(field_set:protobuf_unittest_no_arena.ForeignMessageLite.c)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest_no_arena

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5farena_5flite_2eproto
