// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: friend.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_friend_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_friend_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/service.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_friend_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_friend_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_friend_2eproto;
namespace fixbug {
class GetFriendListRequest;
class GetFriendListRequestDefaultTypeInternal;
extern GetFriendListRequestDefaultTypeInternal _GetFriendListRequest_default_instance_;
class GetFriendListResponse;
class GetFriendListResponseDefaultTypeInternal;
extern GetFriendListResponseDefaultTypeInternal _GetFriendListResponse_default_instance_;
class ResultCode1;
class ResultCode1DefaultTypeInternal;
extern ResultCode1DefaultTypeInternal _ResultCode1_default_instance_;
}  // namespace fixbug
PROTOBUF_NAMESPACE_OPEN
template<> ::fixbug::GetFriendListRequest* Arena::CreateMaybeMessage<::fixbug::GetFriendListRequest>(Arena*);
template<> ::fixbug::GetFriendListResponse* Arena::CreateMaybeMessage<::fixbug::GetFriendListResponse>(Arena*);
template<> ::fixbug::ResultCode1* Arena::CreateMaybeMessage<::fixbug::ResultCode1>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace fixbug {

// ===================================================================

class ResultCode1 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.ResultCode1) */ {
 public:
  ResultCode1();
  virtual ~ResultCode1();

  ResultCode1(const ResultCode1& from);
  ResultCode1(ResultCode1&& from) noexcept
    : ResultCode1() {
    *this = ::std::move(from);
  }

  inline ResultCode1& operator=(const ResultCode1& from) {
    CopyFrom(from);
    return *this;
  }
  inline ResultCode1& operator=(ResultCode1&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ResultCode1& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ResultCode1* internal_default_instance() {
    return reinterpret_cast<const ResultCode1*>(
               &_ResultCode1_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ResultCode1& a, ResultCode1& b) {
    a.Swap(&b);
  }
  inline void Swap(ResultCode1* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ResultCode1* New() const final {
    return CreateMaybeMessage<ResultCode1>(nullptr);
  }

  ResultCode1* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ResultCode1>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ResultCode1& from);
  void MergeFrom(const ResultCode1& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ResultCode1* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.ResultCode1";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friend_2eproto);
    return ::descriptor_table_friend_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrmsgFieldNumber = 2,
    kErrcodeFieldNumber = 1,
  };
  // bytes errmsg = 2;
  void clear_errmsg();
  const std::string& errmsg() const;
  void set_errmsg(const std::string& value);
  void set_errmsg(std::string&& value);
  void set_errmsg(const char* value);
  void set_errmsg(const void* value, size_t size);
  std::string* mutable_errmsg();
  std::string* release_errmsg();
  void set_allocated_errmsg(std::string* errmsg);
  private:
  const std::string& _internal_errmsg() const;
  void _internal_set_errmsg(const std::string& value);
  std::string* _internal_mutable_errmsg();
  public:

  // int32 errcode = 1;
  void clear_errcode();
  ::PROTOBUF_NAMESPACE_ID::int32 errcode() const;
  void set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_errcode() const;
  void _internal_set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:fixbug.ResultCode1)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr errmsg_;
  ::PROTOBUF_NAMESPACE_ID::int32 errcode_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// -------------------------------------------------------------------

class GetFriendListRequest :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.GetFriendListRequest) */ {
 public:
  GetFriendListRequest();
  virtual ~GetFriendListRequest();

  GetFriendListRequest(const GetFriendListRequest& from);
  GetFriendListRequest(GetFriendListRequest&& from) noexcept
    : GetFriendListRequest() {
    *this = ::std::move(from);
  }

  inline GetFriendListRequest& operator=(const GetFriendListRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetFriendListRequest& operator=(GetFriendListRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetFriendListRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetFriendListRequest* internal_default_instance() {
    return reinterpret_cast<const GetFriendListRequest*>(
               &_GetFriendListRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetFriendListRequest& a, GetFriendListRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetFriendListRequest* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetFriendListRequest* New() const final {
    return CreateMaybeMessage<GetFriendListRequest>(nullptr);
  }

  GetFriendListRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetFriendListRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetFriendListRequest& from);
  void MergeFrom(const GetFriendListRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetFriendListRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.GetFriendListRequest";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friend_2eproto);
    return ::descriptor_table_friend_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserIdFieldNumber = 1,
  };
  // uint32 user_id = 1;
  void clear_user_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 user_id() const;
  void set_user_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_user_id() const;
  void _internal_set_user_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:fixbug.GetFriendListRequest)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint32 user_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// -------------------------------------------------------------------

class GetFriendListResponse :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:fixbug.GetFriendListResponse) */ {
 public:
  GetFriendListResponse();
  virtual ~GetFriendListResponse();

  GetFriendListResponse(const GetFriendListResponse& from);
  GetFriendListResponse(GetFriendListResponse&& from) noexcept
    : GetFriendListResponse() {
    *this = ::std::move(from);
  }

  inline GetFriendListResponse& operator=(const GetFriendListResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetFriendListResponse& operator=(GetFriendListResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetFriendListResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetFriendListResponse* internal_default_instance() {
    return reinterpret_cast<const GetFriendListResponse*>(
               &_GetFriendListResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(GetFriendListResponse& a, GetFriendListResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GetFriendListResponse* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetFriendListResponse* New() const final {
    return CreateMaybeMessage<GetFriendListResponse>(nullptr);
  }

  GetFriendListResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetFriendListResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetFriendListResponse& from);
  void MergeFrom(const GetFriendListResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetFriendListResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "fixbug.GetFriendListResponse";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_friend_2eproto);
    return ::descriptor_table_friend_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFriendsFieldNumber = 1,
    kResultFieldNumber = 2,
    kSuccessFieldNumber = 3,
  };
  // repeated bytes friends = 1;
  int friends_size() const;
  private:
  int _internal_friends_size() const;
  public:
  void clear_friends();
  const std::string& friends(int index) const;
  std::string* mutable_friends(int index);
  void set_friends(int index, const std::string& value);
  void set_friends(int index, std::string&& value);
  void set_friends(int index, const char* value);
  void set_friends(int index, const void* value, size_t size);
  std::string* add_friends();
  void add_friends(const std::string& value);
  void add_friends(std::string&& value);
  void add_friends(const char* value);
  void add_friends(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& friends() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_friends();
  private:
  const std::string& _internal_friends(int index) const;
  std::string* _internal_add_friends();
  public:

  // .fixbug.ResultCode1 result = 2;
  bool has_result() const;
  private:
  bool _internal_has_result() const;
  public:
  void clear_result();
  const ::fixbug::ResultCode1& result() const;
  ::fixbug::ResultCode1* release_result();
  ::fixbug::ResultCode1* mutable_result();
  void set_allocated_result(::fixbug::ResultCode1* result);
  private:
  const ::fixbug::ResultCode1& _internal_result() const;
  ::fixbug::ResultCode1* _internal_mutable_result();
  public:

  // bool success = 3;
  void clear_success();
  bool success() const;
  void set_success(bool value);
  private:
  bool _internal_success() const;
  void _internal_set_success(bool value);
  public:

  // @@protoc_insertion_point(class_scope:fixbug.GetFriendListResponse)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> friends_;
  ::fixbug::ResultCode1* result_;
  bool success_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_friend_2eproto;
};
// ===================================================================

class GetFriendListServiceRpc_Stub;

class GetFriendListServiceRpc : public ::PROTOBUF_NAMESPACE_ID::Service {
 protected:
  // This class should be treated as an abstract interface.
  inline GetFriendListServiceRpc() {};
 public:
  virtual ~GetFriendListServiceRpc();

  typedef GetFriendListServiceRpc_Stub Stub;

  static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* descriptor();

  virtual void GetFriendList(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::fixbug::GetFriendListRequest* request,
                       ::fixbug::GetFriendListResponse* response,
                       ::google::protobuf::Closure* done);

  // implements Service ----------------------------------------------

  const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* GetDescriptor();
  void CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                  ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                  const ::PROTOBUF_NAMESPACE_ID::Message* request,
                  ::PROTOBUF_NAMESPACE_ID::Message* response,
                  ::google::protobuf::Closure* done);
  const ::PROTOBUF_NAMESPACE_ID::Message& GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;
  const ::PROTOBUF_NAMESPACE_ID::Message& GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const;

 private:
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(GetFriendListServiceRpc);
};

class GetFriendListServiceRpc_Stub : public GetFriendListServiceRpc {
 public:
  GetFriendListServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel);
  GetFriendListServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
                   ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership);
  ~GetFriendListServiceRpc_Stub();

  inline ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel() { return channel_; }

  // implements GetFriendListServiceRpc ------------------------------------------

  void GetFriendList(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                       const ::fixbug::GetFriendListRequest* request,
                       ::fixbug::GetFriendListResponse* response,
                       ::google::protobuf::Closure* done);
 private:
  ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel_;
  bool owns_channel_;
  GOOGLE_DISALLOW_EVIL_CONSTRUCTORS(GetFriendListServiceRpc_Stub);
};


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ResultCode1

// int32 errcode = 1;
inline void ResultCode1::clear_errcode() {
  errcode_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ResultCode1::_internal_errcode() const {
  return errcode_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ResultCode1::errcode() const {
  // @@protoc_insertion_point(field_get:fixbug.ResultCode1.errcode)
  return _internal_errcode();
}
inline void ResultCode1::_internal_set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  errcode_ = value;
}
inline void ResultCode1::set_errcode(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_errcode(value);
  // @@protoc_insertion_point(field_set:fixbug.ResultCode1.errcode)
}

// bytes errmsg = 2;
inline void ResultCode1::clear_errmsg() {
  errmsg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ResultCode1::errmsg() const {
  // @@protoc_insertion_point(field_get:fixbug.ResultCode1.errmsg)
  return _internal_errmsg();
}
inline void ResultCode1::set_errmsg(const std::string& value) {
  _internal_set_errmsg(value);
  // @@protoc_insertion_point(field_set:fixbug.ResultCode1.errmsg)
}
inline std::string* ResultCode1::mutable_errmsg() {
  // @@protoc_insertion_point(field_mutable:fixbug.ResultCode1.errmsg)
  return _internal_mutable_errmsg();
}
inline const std::string& ResultCode1::_internal_errmsg() const {
  return errmsg_.GetNoArena();
}
inline void ResultCode1::_internal_set_errmsg(const std::string& value) {
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ResultCode1::set_errmsg(std::string&& value) {
  
  errmsg_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:fixbug.ResultCode1.errmsg)
}
inline void ResultCode1::set_errmsg(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:fixbug.ResultCode1.errmsg)
}
inline void ResultCode1::set_errmsg(const void* value, size_t size) {
  
  errmsg_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:fixbug.ResultCode1.errmsg)
}
inline std::string* ResultCode1::_internal_mutable_errmsg() {
  
  return errmsg_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ResultCode1::release_errmsg() {
  // @@protoc_insertion_point(field_release:fixbug.ResultCode1.errmsg)
  
  return errmsg_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ResultCode1::set_allocated_errmsg(std::string* errmsg) {
  if (errmsg != nullptr) {
    
  } else {
    
  }
  errmsg_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), errmsg);
  // @@protoc_insertion_point(field_set_allocated:fixbug.ResultCode1.errmsg)
}

// -------------------------------------------------------------------

// GetFriendListRequest

// uint32 user_id = 1;
inline void GetFriendListRequest::clear_user_id() {
  user_id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GetFriendListRequest::_internal_user_id() const {
  return user_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GetFriendListRequest::user_id() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendListRequest.user_id)
  return _internal_user_id();
}
inline void GetFriendListRequest::_internal_set_user_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  user_id_ = value;
}
inline void GetFriendListRequest::set_user_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_user_id(value);
  // @@protoc_insertion_point(field_set:fixbug.GetFriendListRequest.user_id)
}

// -------------------------------------------------------------------

// GetFriendListResponse

// repeated bytes friends = 1;
inline int GetFriendListResponse::_internal_friends_size() const {
  return friends_.size();
}
inline int GetFriendListResponse::friends_size() const {
  return _internal_friends_size();
}
inline void GetFriendListResponse::clear_friends() {
  friends_.Clear();
}
inline std::string* GetFriendListResponse::add_friends() {
  // @@protoc_insertion_point(field_add_mutable:fixbug.GetFriendListResponse.friends)
  return _internal_add_friends();
}
inline const std::string& GetFriendListResponse::_internal_friends(int index) const {
  return friends_.Get(index);
}
inline const std::string& GetFriendListResponse::friends(int index) const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendListResponse.friends)
  return _internal_friends(index);
}
inline std::string* GetFriendListResponse::mutable_friends(int index) {
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendListResponse.friends)
  return friends_.Mutable(index);
}
inline void GetFriendListResponse::set_friends(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:fixbug.GetFriendListResponse.friends)
  friends_.Mutable(index)->assign(value);
}
inline void GetFriendListResponse::set_friends(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:fixbug.GetFriendListResponse.friends)
  friends_.Mutable(index)->assign(std::move(value));
}
inline void GetFriendListResponse::set_friends(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  friends_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:fixbug.GetFriendListResponse.friends)
}
inline void GetFriendListResponse::set_friends(int index, const void* value, size_t size) {
  friends_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:fixbug.GetFriendListResponse.friends)
}
inline std::string* GetFriendListResponse::_internal_add_friends() {
  return friends_.Add();
}
inline void GetFriendListResponse::add_friends(const std::string& value) {
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:fixbug.GetFriendListResponse.friends)
}
inline void GetFriendListResponse::add_friends(std::string&& value) {
  friends_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:fixbug.GetFriendListResponse.friends)
}
inline void GetFriendListResponse::add_friends(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  friends_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:fixbug.GetFriendListResponse.friends)
}
inline void GetFriendListResponse::add_friends(const void* value, size_t size) {
  friends_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:fixbug.GetFriendListResponse.friends)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
GetFriendListResponse::friends() const {
  // @@protoc_insertion_point(field_list:fixbug.GetFriendListResponse.friends)
  return friends_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
GetFriendListResponse::mutable_friends() {
  // @@protoc_insertion_point(field_mutable_list:fixbug.GetFriendListResponse.friends)
  return &friends_;
}

// .fixbug.ResultCode1 result = 2;
inline bool GetFriendListResponse::_internal_has_result() const {
  return this != internal_default_instance() && result_ != nullptr;
}
inline bool GetFriendListResponse::has_result() const {
  return _internal_has_result();
}
inline void GetFriendListResponse::clear_result() {
  if (GetArenaNoVirtual() == nullptr && result_ != nullptr) {
    delete result_;
  }
  result_ = nullptr;
}
inline const ::fixbug::ResultCode1& GetFriendListResponse::_internal_result() const {
  const ::fixbug::ResultCode1* p = result_;
  return p != nullptr ? *p : *reinterpret_cast<const ::fixbug::ResultCode1*>(
      &::fixbug::_ResultCode1_default_instance_);
}
inline const ::fixbug::ResultCode1& GetFriendListResponse::result() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendListResponse.result)
  return _internal_result();
}
inline ::fixbug::ResultCode1* GetFriendListResponse::release_result() {
  // @@protoc_insertion_point(field_release:fixbug.GetFriendListResponse.result)
  
  ::fixbug::ResultCode1* temp = result_;
  result_ = nullptr;
  return temp;
}
inline ::fixbug::ResultCode1* GetFriendListResponse::_internal_mutable_result() {
  
  if (result_ == nullptr) {
    auto* p = CreateMaybeMessage<::fixbug::ResultCode1>(GetArenaNoVirtual());
    result_ = p;
  }
  return result_;
}
inline ::fixbug::ResultCode1* GetFriendListResponse::mutable_result() {
  // @@protoc_insertion_point(field_mutable:fixbug.GetFriendListResponse.result)
  return _internal_mutable_result();
}
inline void GetFriendListResponse::set_allocated_result(::fixbug::ResultCode1* result) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete result_;
  }
  if (result) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      result = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, result, submessage_arena);
    }
    
  } else {
    
  }
  result_ = result;
  // @@protoc_insertion_point(field_set_allocated:fixbug.GetFriendListResponse.result)
}

// bool success = 3;
inline void GetFriendListResponse::clear_success() {
  success_ = false;
}
inline bool GetFriendListResponse::_internal_success() const {
  return success_;
}
inline bool GetFriendListResponse::success() const {
  // @@protoc_insertion_point(field_get:fixbug.GetFriendListResponse.success)
  return _internal_success();
}
inline void GetFriendListResponse::_internal_set_success(bool value) {
  
  success_ = value;
}
inline void GetFriendListResponse::set_success(bool value) {
  _internal_set_success(value);
  // @@protoc_insertion_point(field_set:fixbug.GetFriendListResponse.success)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace fixbug

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_friend_2eproto