// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "components/services/leveldb/public/interfaces/leveldb.mojom-shared.h"
#include "components/services/leveldb/public/interfaces/leveldb.mojom-forward.h"
#include "components/services/filesystem/public/interfaces/directory.mojom.h"
#include "mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/leveldatabase/env_chromium.h"




namespace leveldb {
namespace mojom {

class LevelDBServiceProxy;

template <typename ImplRefTraits>
class LevelDBServiceStub;

class LevelDBServiceRequestValidator;
class LevelDBServiceResponseValidator;


class  LevelDBService
    : public LevelDBServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = LevelDBServiceInterfaceBase;
  using Proxy_ = LevelDBServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = LevelDBServiceStub<ImplRefTraits>;

  using RequestValidator_ = LevelDBServiceRequestValidator;
  using ResponseValidator_ = LevelDBServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kOpenMinVersion = 0,
    kOpenWithOptionsMinVersion = 0,
    kOpenInMemoryMinVersion = 0,
    kDestroyMinVersion = 0,
  };
  virtual ~LevelDBService() {}


  using OpenCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void Open(::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, OpenCallback callback) = 0;


  using OpenWithOptionsCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void OpenWithOptions(const ::leveldb_env::Options& options, ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, OpenWithOptionsCallback callback) = 0;


  using OpenInMemoryCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void OpenInMemory(const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, const std::string& tracking_name, LevelDBDatabaseAssociatedRequest database, OpenInMemoryCallback callback) = 0;


  using DestroyCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void Destroy(::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, DestroyCallback callback) = 0;
};

class LevelDBDatabaseProxy;

template <typename ImplRefTraits>
class LevelDBDatabaseStub;

class LevelDBDatabaseRequestValidator;
class LevelDBDatabaseResponseValidator;


class  LevelDBDatabase
    : public LevelDBDatabaseInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = LevelDBDatabaseInterfaceBase;
  using Proxy_ = LevelDBDatabaseProxy;

  template <typename ImplRefTraits>
  using Stub_ = LevelDBDatabaseStub<ImplRefTraits>;

  using RequestValidator_ = LevelDBDatabaseRequestValidator;
  using ResponseValidator_ = LevelDBDatabaseResponseValidator;
  enum MethodMinVersions : uint32_t {
    kPutMinVersion = 0,
    kDeleteMinVersion = 0,
    kDeletePrefixedMinVersion = 0,
    kRewriteDBMinVersion = 0,
    kWriteMinVersion = 0,
    kGetMinVersion = 0,
    kGetPrefixedMinVersion = 0,
    kCopyPrefixedMinVersion = 0,
    kGetSnapshotMinVersion = 0,
    kReleaseSnapshotMinVersion = 0,
    kGetFromSnapshotMinVersion = 0,
    kNewIteratorMinVersion = 0,
    kNewIteratorFromSnapshotMinVersion = 0,
    kReleaseIteratorMinVersion = 0,
    kIteratorSeekToFirstMinVersion = 0,
    kIteratorSeekToLastMinVersion = 0,
    kIteratorSeekMinVersion = 0,
    kIteratorNextMinVersion = 0,
    kIteratorPrevMinVersion = 0,
  };
  virtual ~LevelDBDatabase() {}


  using PutCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, PutCallback callback) = 0;


  using DeleteCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void Delete(const std::vector<uint8_t>& key, DeleteCallback callback) = 0;


  using DeletePrefixedCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void DeletePrefixed(const std::vector<uint8_t>& key_prefix, DeletePrefixedCallback callback) = 0;


  using RewriteDBCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void RewriteDB(RewriteDBCallback callback) = 0;


  using WriteCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void Write(std::vector<BatchedOperationPtr> operations, WriteCallback callback) = 0;


  using GetCallback = base::OnceCallback<void(DatabaseError, const std::vector<uint8_t>&)>;
  
  virtual void Get(const std::vector<uint8_t>& key, GetCallback callback) = 0;


  using GetPrefixedCallback = base::OnceCallback<void(DatabaseError, std::vector<KeyValuePtr>)>;
  
  virtual void GetPrefixed(const std::vector<uint8_t>& key_prefix, GetPrefixedCallback callback) = 0;


  using CopyPrefixedCallback = base::OnceCallback<void(DatabaseError)>;
  
  virtual void CopyPrefixed(const std::vector<uint8_t>& source_key_prefix, const std::vector<uint8_t>& destination_key_prefix, CopyPrefixedCallback callback) = 0;


  using GetSnapshotCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void GetSnapshot(GetSnapshotCallback callback) = 0;

  
  virtual void ReleaseSnapshot(const base::UnguessableToken& snapshot) = 0;


  using GetFromSnapshotCallback = base::OnceCallback<void(DatabaseError, const std::vector<uint8_t>&)>;
  
  virtual void GetFromSnapshot(const base::UnguessableToken& snapshot, const std::vector<uint8_t>& key, GetFromSnapshotCallback callback) = 0;


  using NewIteratorCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void NewIterator(NewIteratorCallback callback) = 0;


  using NewIteratorFromSnapshotCallback = base::OnceCallback<void(const base::Optional<base::UnguessableToken>&)>;
  
  virtual void NewIteratorFromSnapshot(const base::UnguessableToken& snapshot, NewIteratorFromSnapshotCallback callback) = 0;

  
  virtual void ReleaseIterator(const base::UnguessableToken& iterator) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IteratorSeekToFirst(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);

  using IteratorSeekToFirstCallback = base::OnceCallback<void(bool, DatabaseError, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void IteratorSeekToFirst(const base::UnguessableToken& iterator, IteratorSeekToFirstCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IteratorSeekToLast(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);

  using IteratorSeekToLastCallback = base::OnceCallback<void(bool, DatabaseError, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void IteratorSeekToLast(const base::UnguessableToken& iterator, IteratorSeekToLastCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IteratorSeek(const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);

  using IteratorSeekCallback = base::OnceCallback<void(bool, DatabaseError, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void IteratorSeek(const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, IteratorSeekCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IteratorNext(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);

  using IteratorNextCallback = base::OnceCallback<void(bool, DatabaseError, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void IteratorNext(const base::UnguessableToken& iterator, IteratorNextCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IteratorPrev(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);

  using IteratorPrevCallback = base::OnceCallback<void(bool, DatabaseError, const base::Optional<std::vector<uint8_t>>&, const base::Optional<std::vector<uint8_t>>&)>;
  
  virtual void IteratorPrev(const base::UnguessableToken& iterator, IteratorPrevCallback callback) = 0;
};

class  LevelDBServiceProxy
    : public LevelDBService {
 public:
  using InterfaceType = LevelDBService;

  explicit LevelDBServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Open(::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, OpenCallback callback) final;
  void OpenWithOptions(const ::leveldb_env::Options& options, ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, OpenWithOptionsCallback callback) final;
  void OpenInMemory(const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, const std::string& tracking_name, LevelDBDatabaseAssociatedRequest database, OpenInMemoryCallback callback) final;
  void Destroy(::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, DestroyCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  LevelDBDatabaseProxy
    : public LevelDBDatabase {
 public:
  using InterfaceType = LevelDBDatabase;

  explicit LevelDBDatabaseProxy(mojo::MessageReceiverWithResponder* receiver);
  void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, PutCallback callback) final;
  void Delete(const std::vector<uint8_t>& key, DeleteCallback callback) final;
  void DeletePrefixed(const std::vector<uint8_t>& key_prefix, DeletePrefixedCallback callback) final;
  void RewriteDB(RewriteDBCallback callback) final;
  void Write(std::vector<BatchedOperationPtr> operations, WriteCallback callback) final;
  void Get(const std::vector<uint8_t>& key, GetCallback callback) final;
  void GetPrefixed(const std::vector<uint8_t>& key_prefix, GetPrefixedCallback callback) final;
  void CopyPrefixed(const std::vector<uint8_t>& source_key_prefix, const std::vector<uint8_t>& destination_key_prefix, CopyPrefixedCallback callback) final;
  void GetSnapshot(GetSnapshotCallback callback) final;
  void ReleaseSnapshot(const base::UnguessableToken& snapshot) final;
  void GetFromSnapshot(const base::UnguessableToken& snapshot, const std::vector<uint8_t>& key, GetFromSnapshotCallback callback) final;
  void NewIterator(NewIteratorCallback callback) final;
  void NewIteratorFromSnapshot(const base::UnguessableToken& snapshot, NewIteratorFromSnapshotCallback callback) final;
  void ReleaseIterator(const base::UnguessableToken& iterator) final;
  bool IteratorSeekToFirst(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) final;
  void IteratorSeekToFirst(const base::UnguessableToken& iterator, IteratorSeekToFirstCallback callback) final;
  bool IteratorSeekToLast(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) final;
  void IteratorSeekToLast(const base::UnguessableToken& iterator, IteratorSeekToLastCallback callback) final;
  bool IteratorSeek(const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) final;
  void IteratorSeek(const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, IteratorSeekCallback callback) final;
  bool IteratorNext(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) final;
  void IteratorNext(const base::UnguessableToken& iterator, IteratorNextCallback callback) final;
  bool IteratorPrev(const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) final;
  void IteratorPrev(const base::UnguessableToken& iterator, IteratorPrevCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  LevelDBServiceStubDispatch {
 public:
  static bool Accept(LevelDBService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LevelDBService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LevelDBService>>
class LevelDBServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LevelDBServiceStub() {}
  ~LevelDBServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  LevelDBDatabaseStubDispatch {
 public:
  static bool Accept(LevelDBDatabase* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LevelDBDatabase* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LevelDBDatabase>>
class LevelDBDatabaseStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LevelDBDatabaseStub() {}
  ~LevelDBDatabaseStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBDatabaseStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LevelDBDatabaseStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  LevelDBServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  LevelDBDatabaseRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  LevelDBServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  LevelDBDatabaseResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};










class  BatchedOperation {
 public:
  using DataView = BatchedOperationDataView;
  using Data_ = internal::BatchedOperation_Data;

  template <typename... Args>
  static BatchedOperationPtr New(Args&&... args) {
    return BatchedOperationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BatchedOperationPtr From(const U& u) {
    return mojo::TypeConverter<BatchedOperationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BatchedOperation>::Convert(*this);
  }


  BatchedOperation();

  BatchedOperation(
      BatchOperationType type,
      const std::vector<uint8_t>& key,
      const base::Optional<std::vector<uint8_t>>& value);

  ~BatchedOperation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BatchedOperationPtr>
  BatchedOperationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BatchedOperation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BatchedOperation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BatchedOperation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BatchedOperation_UnserializedMessageContext<
            UserType, BatchedOperation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<BatchedOperation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BatchedOperation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BatchedOperation_UnserializedMessageContext<
            UserType, BatchedOperation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BatchedOperation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  BatchOperationType type;
  
  std::vector<uint8_t> key;
  
  base::Optional<std::vector<uint8_t>> value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  KeyValue {
 public:
  using DataView = KeyValueDataView;
  using Data_ = internal::KeyValue_Data;

  template <typename... Args>
  static KeyValuePtr New(Args&&... args) {
    return KeyValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static KeyValuePtr From(const U& u) {
    return mojo::TypeConverter<KeyValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyValue>::Convert(*this);
  }


  KeyValue();

  KeyValue(
      const std::vector<uint8_t>& key,
      const std::vector<uint8_t>& value);

  ~KeyValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyValuePtr>
  KeyValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        KeyValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        KeyValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::KeyValue_UnserializedMessageContext<
            UserType, KeyValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<KeyValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return KeyValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::KeyValue_UnserializedMessageContext<
            UserType, KeyValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<KeyValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint8_t> key;
  
  std::vector<uint8_t> value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  OpenOptions {
 public:
  using DataView = OpenOptionsDataView;
  using Data_ = internal::OpenOptions_Data;

  template <typename... Args>
  static OpenOptionsPtr New(Args&&... args) {
    return OpenOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static OpenOptionsPtr From(const U& u) {
    return mojo::TypeConverter<OpenOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OpenOptions>::Convert(*this);
  }


  OpenOptions();

  OpenOptions(
      bool create_if_missing,
      bool error_if_exists,
      bool paranoid_checks,
      uint64_t write_buffer_size,
      int32_t max_open_files,
      SharedReadCache shared_block_read_cache);

  ~OpenOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OpenOptionsPtr>
  OpenOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OpenOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        OpenOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        OpenOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::OpenOptions_UnserializedMessageContext<
            UserType, OpenOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<OpenOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return OpenOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::OpenOptions_UnserializedMessageContext<
            UserType, OpenOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<OpenOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool create_if_missing;
  
  bool error_if_exists;
  
  bool paranoid_checks;
  
  uint64_t write_buffer_size;
  
  int32_t max_open_files;
  
  SharedReadCache shared_block_read_cache;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
BatchedOperationPtr BatchedOperation::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(key),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BatchedOperation>::value>::type*>
bool BatchedOperation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->key, other_struct.key))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
KeyValuePtr KeyValue::Clone() const {
  return New(
      mojo::Clone(key),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyValue>::value>::type*>
bool KeyValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->key, other_struct.key))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
OpenOptionsPtr OpenOptions::Clone() const {
  return New(
      mojo::Clone(create_if_missing),
      mojo::Clone(error_if_exists),
      mojo::Clone(paranoid_checks),
      mojo::Clone(write_buffer_size),
      mojo::Clone(max_open_files),
      mojo::Clone(shared_block_read_cache)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OpenOptions>::value>::type*>
bool OpenOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->create_if_missing, other_struct.create_if_missing))
    return false;
  if (!mojo::Equals(this->error_if_exists, other_struct.error_if_exists))
    return false;
  if (!mojo::Equals(this->paranoid_checks, other_struct.paranoid_checks))
    return false;
  if (!mojo::Equals(this->write_buffer_size, other_struct.write_buffer_size))
    return false;
  if (!mojo::Equals(this->max_open_files, other_struct.max_open_files))
    return false;
  if (!mojo::Equals(this->shared_block_read_cache, other_struct.shared_block_read_cache))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace leveldb

namespace mojo {


template <>
struct  StructTraits<::leveldb::mojom::BatchedOperation::DataView,
                                         ::leveldb::mojom::BatchedOperationPtr> {
  static bool IsNull(const ::leveldb::mojom::BatchedOperationPtr& input) { return !input; }
  static void SetToNull(::leveldb::mojom::BatchedOperationPtr* output) { output->reset(); }

  static decltype(::leveldb::mojom::BatchedOperation::type) type(
      const ::leveldb::mojom::BatchedOperationPtr& input) {
    return input->type;
  }

  static const decltype(::leveldb::mojom::BatchedOperation::key)& key(
      const ::leveldb::mojom::BatchedOperationPtr& input) {
    return input->key;
  }

  static const decltype(::leveldb::mojom::BatchedOperation::value)& value(
      const ::leveldb::mojom::BatchedOperationPtr& input) {
    return input->value;
  }

  static bool Read(::leveldb::mojom::BatchedOperation::DataView input, ::leveldb::mojom::BatchedOperationPtr* output);
};


template <>
struct  StructTraits<::leveldb::mojom::KeyValue::DataView,
                                         ::leveldb::mojom::KeyValuePtr> {
  static bool IsNull(const ::leveldb::mojom::KeyValuePtr& input) { return !input; }
  static void SetToNull(::leveldb::mojom::KeyValuePtr* output) { output->reset(); }

  static const decltype(::leveldb::mojom::KeyValue::key)& key(
      const ::leveldb::mojom::KeyValuePtr& input) {
    return input->key;
  }

  static const decltype(::leveldb::mojom::KeyValue::value)& value(
      const ::leveldb::mojom::KeyValuePtr& input) {
    return input->value;
  }

  static bool Read(::leveldb::mojom::KeyValue::DataView input, ::leveldb::mojom::KeyValuePtr* output);
};


template <>
struct  StructTraits<::leveldb::mojom::OpenOptions::DataView,
                                         ::leveldb::mojom::OpenOptionsPtr> {
  static bool IsNull(const ::leveldb::mojom::OpenOptionsPtr& input) { return !input; }
  static void SetToNull(::leveldb::mojom::OpenOptionsPtr* output) { output->reset(); }

  static decltype(::leveldb::mojom::OpenOptions::create_if_missing) create_if_missing(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->create_if_missing;
  }

  static decltype(::leveldb::mojom::OpenOptions::error_if_exists) error_if_exists(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->error_if_exists;
  }

  static decltype(::leveldb::mojom::OpenOptions::paranoid_checks) paranoid_checks(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->paranoid_checks;
  }

  static decltype(::leveldb::mojom::OpenOptions::write_buffer_size) write_buffer_size(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->write_buffer_size;
  }

  static decltype(::leveldb::mojom::OpenOptions::max_open_files) max_open_files(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->max_open_files;
  }

  static decltype(::leveldb::mojom::OpenOptions::shared_block_read_cache) shared_block_read_cache(
      const ::leveldb::mojom::OpenOptionsPtr& input) {
    return input->shared_block_read_cache;
  }

  static bool Read(::leveldb::mojom::OpenOptions::DataView input, ::leveldb::mojom::OpenOptionsPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_H_