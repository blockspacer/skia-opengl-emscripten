// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_H_

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
#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-shared.h"
#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-forward.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "url/mojom/origin.mojom.h"
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
#include "third_party/blink/public/common/indexeddb/indexeddb_key.h"
#include "third_party/blink/public/common/indexeddb/indexeddb_key_path.h"
#include "third_party/blink/public/common/indexeddb/indexeddb_key_range.h"
#include "third_party/blink/public/common/indexeddb/indexeddb_metadata.h"
#include "third_party/blink/public/common/indexeddb/web_idb_types.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class IDBCallbacksProxy;

template <typename ImplRefTraits>
class IDBCallbacksStub;

class IDBCallbacksRequestValidator;


class BLINK_COMMON_EXPORT IDBCallbacks
    : public IDBCallbacksInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IDBCallbacksInterfaceBase;
  using Proxy_ = IDBCallbacksProxy;

  template <typename ImplRefTraits>
  using Stub_ = IDBCallbacksStub<ImplRefTraits>;

  using RequestValidator_ = IDBCallbacksRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kErrorMinVersion = 0,
    kSuccessNamesAndVersionsListMinVersion = 0,
    kSuccessStringListMinVersion = 0,
    kBlockedMinVersion = 0,
    kUpgradeNeededMinVersion = 0,
    kSuccessDatabaseMinVersion = 0,
    kSuccessCursorMinVersion = 0,
    kSuccessValueMinVersion = 0,
    kSuccessArrayMinVersion = 0,
    kSuccessKeyMinVersion = 0,
    kSuccessIntegerMinVersion = 0,
    kSuccessMinVersion = 0,
  };
  virtual ~IDBCallbacks() {}

  
  virtual void Error(int32_t code, const base::string16& message) = 0;

  
  virtual void SuccessNamesAndVersionsList(std::vector<IDBNameAndVersionPtr> value) = 0;

  
  virtual void SuccessStringList(const std::vector<base::string16>& value) = 0;

  
  virtual void Blocked(int64_t existing_version) = 0;

  
  virtual void UpgradeNeeded(IDBDatabaseAssociatedPtrInfo database, int64_t old_version, IDBDataLoss data_loss, const std::string& data_loss_message, const ::blink::IndexedDBDatabaseMetadata& db_metadata) = 0;

  
  virtual void SuccessDatabase(IDBDatabaseAssociatedPtrInfo database, const ::blink::IndexedDBDatabaseMetadata& metadata) = 0;

  
  virtual void SuccessCursor(IDBCursorAssociatedPtrInfo cursor, const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, IDBValuePtr value) = 0;

  
  virtual void SuccessValue(IDBReturnValuePtr value) = 0;

  
  virtual void SuccessArray(std::vector<IDBReturnValuePtr> values) = 0;

  
  virtual void SuccessKey(const ::blink::IndexedDBKey& key) = 0;

  
  virtual void SuccessInteger(int64_t value) = 0;

  
  virtual void Success() = 0;
};

class IDBDatabaseCallbacksProxy;

template <typename ImplRefTraits>
class IDBDatabaseCallbacksStub;

class IDBDatabaseCallbacksRequestValidator;


class BLINK_COMMON_EXPORT IDBDatabaseCallbacks
    : public IDBDatabaseCallbacksInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IDBDatabaseCallbacksInterfaceBase;
  using Proxy_ = IDBDatabaseCallbacksProxy;

  template <typename ImplRefTraits>
  using Stub_ = IDBDatabaseCallbacksStub<ImplRefTraits>;

  using RequestValidator_ = IDBDatabaseCallbacksRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kForcedCloseMinVersion = 0,
    kVersionChangeMinVersion = 0,
    kAbortMinVersion = 0,
    kCompleteMinVersion = 0,
    kChangesMinVersion = 0,
  };
  virtual ~IDBDatabaseCallbacks() {}

  
  virtual void ForcedClose() = 0;

  
  virtual void VersionChange(int64_t old_version, int64_t new_version) = 0;

  
  virtual void Abort(int64_t transaction_id, int32_t code, const base::string16& message) = 0;

  
  virtual void Complete(int64_t transaction_id) = 0;

  
  virtual void Changes(IDBObserverChangesPtr changes) = 0;
};

class IDBCursorProxy;

template <typename ImplRefTraits>
class IDBCursorStub;

class IDBCursorRequestValidator;
class IDBCursorResponseValidator;


class BLINK_COMMON_EXPORT IDBCursor
    : public IDBCursorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IDBCursorInterfaceBase;
  using Proxy_ = IDBCursorProxy;

  template <typename ImplRefTraits>
  using Stub_ = IDBCursorStub<ImplRefTraits>;

  using RequestValidator_ = IDBCursorRequestValidator;
  using ResponseValidator_ = IDBCursorResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAdvanceMinVersion = 0,
    kCursorContinueMinVersion = 0,
    kPrefetchMinVersion = 0,
    kPrefetchResetMinVersion = 0,
  };
  virtual ~IDBCursor() {}


  using AdvanceCallback = base::OnceCallback<void(IDBErrorPtr, IDBCursorValuePtr)>;
  
  virtual void Advance(uint32_t count, AdvanceCallback callback) = 0;


  using CursorContinueCallback = base::OnceCallback<void(IDBErrorPtr, IDBCursorValuePtr)>;
  
  virtual void CursorContinue(const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, CursorContinueCallback callback) = 0;


  using PrefetchCallback = base::OnceCallback<void(IDBErrorPtr, IDBCursorValuePtr)>;
  
  virtual void Prefetch(int32_t count, PrefetchCallback callback) = 0;

  
  virtual void PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) = 0;
};

class IDBTransactionProxy;

template <typename ImplRefTraits>
class IDBTransactionStub;

class IDBTransactionRequestValidator;


class BLINK_COMMON_EXPORT IDBTransaction
    : public IDBTransactionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IDBTransactionInterfaceBase;
  using Proxy_ = IDBTransactionProxy;

  template <typename ImplRefTraits>
  using Stub_ = IDBTransactionStub<ImplRefTraits>;

  using RequestValidator_ = IDBTransactionRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateObjectStoreMinVersion = 0,
    kDeleteObjectStoreMinVersion = 0,
    kPutMinVersion = 0,
    kCommitMinVersion = 0,
  };
  virtual ~IDBTransaction() {}

  
  virtual void CreateObjectStore(int64_t object_store_id, const base::string16& name, const ::blink::IndexedDBKeyPath& key_path, bool auto_increment) = 0;

  
  virtual void DeleteObjectStore(int64_t object_store_id) = 0;

  
  virtual void Put(int64_t object_store_id, IDBValuePtr value, const ::blink::IndexedDBKey& key, IDBPutMode mode, const std::vector<::blink::IndexedDBIndexKeys>& index_keys, IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void Commit(int64_t num_errors_handled) = 0;
};

class IDBDatabaseProxy;

template <typename ImplRefTraits>
class IDBDatabaseStub;

class IDBDatabaseRequestValidator;


class BLINK_COMMON_EXPORT IDBDatabase
    : public IDBDatabaseInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IDBDatabaseInterfaceBase;
  using Proxy_ = IDBDatabaseProxy;

  template <typename ImplRefTraits>
  using Stub_ = IDBDatabaseStub<ImplRefTraits>;

  using RequestValidator_ = IDBDatabaseRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRenameObjectStoreMinVersion = 0,
    kCreateTransactionMinVersion = 0,
    kCloseMinVersion = 0,
    kVersionChangeIgnoredMinVersion = 0,
    kAddObserverMinVersion = 0,
    kRemoveObserversMinVersion = 0,
    kGetMinVersion = 0,
    kGetAllMinVersion = 0,
    kSetIndexKeysMinVersion = 0,
    kSetIndexesReadyMinVersion = 0,
    kOpenCursorMinVersion = 0,
    kCountMinVersion = 0,
    kDeleteRangeMinVersion = 0,
    kGetKeyGeneratorCurrentNumberMinVersion = 0,
    kClearMinVersion = 0,
    kCreateIndexMinVersion = 0,
    kDeleteIndexMinVersion = 0,
    kRenameIndexMinVersion = 0,
    kAbortMinVersion = 0,
  };
  virtual ~IDBDatabase() {}

  
  virtual void RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& new_name) = 0;

  
  virtual void CreateTransaction(IDBTransactionAssociatedRequest transaction_request, int64_t transaction_id, const std::vector<int64_t>& object_store_ids, IDBTransactionMode mode) = 0;

  
  virtual void Close() = 0;

  
  virtual void VersionChangeIgnored() = 0;

  
  virtual void AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint32_t operation_types) = 0;

  
  virtual void RemoveObservers(const std::vector<int32_t>& observers) = 0;

  
  virtual void Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, bool key_only, IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, bool key_only, int64_t max_count, IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void SetIndexKeys(int64_t transaction_id, int64_t object_store_id, const ::blink::IndexedDBKey& primary_key, const std::vector<::blink::IndexedDBIndexKeys>& index_keys) = 0;

  
  virtual void SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const std::vector<int64_t>& index_ids) = 0;

  
  virtual void OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, IDBCursorDirection direction, bool key_only, IDBTaskType task_type, IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void DeleteRange(int64_t transaction_id, int64_t object_store_id, const ::blink::IndexedDBKeyRange& key_range, IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void GetKeyGeneratorCurrentNumber(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void Clear(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& name, const ::blink::IndexedDBKeyPath& key_path, bool unique, bool multi_entry) = 0;

  
  virtual void DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) = 0;

  
  virtual void RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& new_name) = 0;

  
  virtual void Abort(int64_t transaction_id) = 0;
};

class IDBFactoryProxy;

template <typename ImplRefTraits>
class IDBFactoryStub;

class IDBFactoryRequestValidator;
class IDBFactoryResponseValidator;


class BLINK_COMMON_EXPORT IDBFactory
    : public IDBFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = IDBFactoryInterfaceBase;
  using Proxy_ = IDBFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = IDBFactoryStub<ImplRefTraits>;

  using RequestValidator_ = IDBFactoryRequestValidator;
  using ResponseValidator_ = IDBFactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetDatabaseInfoMinVersion = 0,
    kGetDatabaseNamesMinVersion = 0,
    kOpenMinVersion = 0,
    kDeleteDatabaseMinVersion = 0,
    kAbortTransactionsAndCompactDatabaseMinVersion = 0,
    kAbortTransactionsForDatabaseMinVersion = 0,
  };
  virtual ~IDBFactory() {}

  
  virtual void GetDatabaseInfo(IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void GetDatabaseNames(IDBCallbacksAssociatedPtrInfo callbacks) = 0;

  
  virtual void Open(IDBCallbacksAssociatedPtrInfo callbacks, IDBDatabaseCallbacksAssociatedPtrInfo database_callbacks, const base::string16& name, int64_t version, IDBTransactionAssociatedRequest version_change_transaction_request, int64_t transaction_id) = 0;

  
  virtual void DeleteDatabase(IDBCallbacksAssociatedPtrInfo callbacks, const base::string16& name, bool force_close) = 0;


  using AbortTransactionsAndCompactDatabaseCallback = base::OnceCallback<void(IDBStatus)>;
  
  virtual void AbortTransactionsAndCompactDatabase(AbortTransactionsAndCompactDatabaseCallback callback) = 0;


  using AbortTransactionsForDatabaseCallback = base::OnceCallback<void(IDBStatus)>;
  
  virtual void AbortTransactionsForDatabase(AbortTransactionsForDatabaseCallback callback) = 0;
};

class BLINK_COMMON_EXPORT IDBCallbacksProxy
    : public IDBCallbacks {
 public:
  using InterfaceType = IDBCallbacks;

  explicit IDBCallbacksProxy(mojo::MessageReceiverWithResponder* receiver);
  void Error(int32_t code, const base::string16& message) final;
  void SuccessNamesAndVersionsList(std::vector<IDBNameAndVersionPtr> value) final;
  void SuccessStringList(const std::vector<base::string16>& value) final;
  void Blocked(int64_t existing_version) final;
  void UpgradeNeeded(IDBDatabaseAssociatedPtrInfo database, int64_t old_version, IDBDataLoss data_loss, const std::string& data_loss_message, const ::blink::IndexedDBDatabaseMetadata& db_metadata) final;
  void SuccessDatabase(IDBDatabaseAssociatedPtrInfo database, const ::blink::IndexedDBDatabaseMetadata& metadata) final;
  void SuccessCursor(IDBCursorAssociatedPtrInfo cursor, const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, IDBValuePtr value) final;
  void SuccessValue(IDBReturnValuePtr value) final;
  void SuccessArray(std::vector<IDBReturnValuePtr> values) final;
  void SuccessKey(const ::blink::IndexedDBKey& key) final;
  void SuccessInteger(int64_t value) final;
  void Success() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT IDBDatabaseCallbacksProxy
    : public IDBDatabaseCallbacks {
 public:
  using InterfaceType = IDBDatabaseCallbacks;

  explicit IDBDatabaseCallbacksProxy(mojo::MessageReceiverWithResponder* receiver);
  void ForcedClose() final;
  void VersionChange(int64_t old_version, int64_t new_version) final;
  void Abort(int64_t transaction_id, int32_t code, const base::string16& message) final;
  void Complete(int64_t transaction_id) final;
  void Changes(IDBObserverChangesPtr changes) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT IDBCursorProxy
    : public IDBCursor {
 public:
  using InterfaceType = IDBCursor;

  explicit IDBCursorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Advance(uint32_t count, AdvanceCallback callback) final;
  void CursorContinue(const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, CursorContinueCallback callback) final;
  void Prefetch(int32_t count, PrefetchCallback callback) final;
  void PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT IDBTransactionProxy
    : public IDBTransaction {
 public:
  using InterfaceType = IDBTransaction;

  explicit IDBTransactionProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateObjectStore(int64_t object_store_id, const base::string16& name, const ::blink::IndexedDBKeyPath& key_path, bool auto_increment) final;
  void DeleteObjectStore(int64_t object_store_id) final;
  void Put(int64_t object_store_id, IDBValuePtr value, const ::blink::IndexedDBKey& key, IDBPutMode mode, const std::vector<::blink::IndexedDBIndexKeys>& index_keys, IDBCallbacksAssociatedPtrInfo callbacks) final;
  void Commit(int64_t num_errors_handled) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT IDBDatabaseProxy
    : public IDBDatabase {
 public:
  using InterfaceType = IDBDatabase;

  explicit IDBDatabaseProxy(mojo::MessageReceiverWithResponder* receiver);
  void RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& new_name) final;
  void CreateTransaction(IDBTransactionAssociatedRequest transaction_request, int64_t transaction_id, const std::vector<int64_t>& object_store_ids, IDBTransactionMode mode) final;
  void Close() final;
  void VersionChangeIgnored() final;
  void AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint32_t operation_types) final;
  void RemoveObservers(const std::vector<int32_t>& observers) final;
  void Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, bool key_only, IDBCallbacksAssociatedPtrInfo callbacks) final;
  void GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, bool key_only, int64_t max_count, IDBCallbacksAssociatedPtrInfo callbacks) final;
  void SetIndexKeys(int64_t transaction_id, int64_t object_store_id, const ::blink::IndexedDBKey& primary_key, const std::vector<::blink::IndexedDBIndexKeys>& index_keys) final;
  void SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const std::vector<int64_t>& index_ids) final;
  void OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, IDBCursorDirection direction, bool key_only, IDBTaskType task_type, IDBCallbacksAssociatedPtrInfo callbacks) final;
  void Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, IDBCallbacksAssociatedPtrInfo callbacks) final;
  void DeleteRange(int64_t transaction_id, int64_t object_store_id, const ::blink::IndexedDBKeyRange& key_range, IDBCallbacksAssociatedPtrInfo callbacks) final;
  void GetKeyGeneratorCurrentNumber(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) final;
  void Clear(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) final;
  void CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& name, const ::blink::IndexedDBKeyPath& key_path, bool unique, bool multi_entry) final;
  void DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) final;
  void RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& new_name) final;
  void Abort(int64_t transaction_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT IDBFactoryProxy
    : public IDBFactory {
 public:
  using InterfaceType = IDBFactory;

  explicit IDBFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDatabaseInfo(IDBCallbacksAssociatedPtrInfo callbacks) final;
  void GetDatabaseNames(IDBCallbacksAssociatedPtrInfo callbacks) final;
  void Open(IDBCallbacksAssociatedPtrInfo callbacks, IDBDatabaseCallbacksAssociatedPtrInfo database_callbacks, const base::string16& name, int64_t version, IDBTransactionAssociatedRequest version_change_transaction_request, int64_t transaction_id) final;
  void DeleteDatabase(IDBCallbacksAssociatedPtrInfo callbacks, const base::string16& name, bool force_close) final;
  void AbortTransactionsAndCompactDatabase(AbortTransactionsAndCompactDatabaseCallback callback) final;
  void AbortTransactionsForDatabase(AbortTransactionsForDatabaseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT IDBCallbacksStubDispatch {
 public:
  static bool Accept(IDBCallbacks* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IDBCallbacks* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IDBCallbacks>>
class IDBCallbacksStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IDBCallbacksStub() {}
  ~IDBCallbacksStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBCallbacksStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBCallbacksStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT IDBDatabaseCallbacksStubDispatch {
 public:
  static bool Accept(IDBDatabaseCallbacks* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IDBDatabaseCallbacks* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IDBDatabaseCallbacks>>
class IDBDatabaseCallbacksStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IDBDatabaseCallbacksStub() {}
  ~IDBDatabaseCallbacksStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBDatabaseCallbacksStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBDatabaseCallbacksStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT IDBCursorStubDispatch {
 public:
  static bool Accept(IDBCursor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IDBCursor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IDBCursor>>
class IDBCursorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IDBCursorStub() {}
  ~IDBCursorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBCursorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBCursorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT IDBTransactionStubDispatch {
 public:
  static bool Accept(IDBTransaction* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IDBTransaction* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IDBTransaction>>
class IDBTransactionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IDBTransactionStub() {}
  ~IDBTransactionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBTransactionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBTransactionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT IDBDatabaseStubDispatch {
 public:
  static bool Accept(IDBDatabase* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IDBDatabase* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IDBDatabase>>
class IDBDatabaseStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IDBDatabaseStub() {}
  ~IDBDatabaseStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBDatabaseStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBDatabaseStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT IDBFactoryStubDispatch {
 public:
  static bool Accept(IDBFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      IDBFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<IDBFactory>>
class IDBFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  IDBFactoryStub() {}
  ~IDBFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return IDBFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT IDBCallbacksRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IDBDatabaseCallbacksRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IDBCursorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IDBTransactionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IDBDatabaseRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IDBFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IDBCursorResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT IDBFactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






















class BLINK_COMMON_EXPORT IDBKeyData {
 public:
  using DataView = IDBKeyDataDataView;
  using Data_ = internal::IDBKeyData_Data;
  using Tag = Data_::IDBKeyData_Tag;

  static IDBKeyDataPtr New() {
    return IDBKeyDataPtr(base::in_place);
  }
  // Construct an instance holding |key_array|.
  static IDBKeyDataPtr
  NewKeyArray(
      const std::vector<::blink::IndexedDBKey>& key_array) {
    auto result = IDBKeyDataPtr(base::in_place);
    result->set_key_array(std::move(key_array));
    return result;
  }
  // Construct an instance holding |binary|.
  static IDBKeyDataPtr
  NewBinary(
      const std::vector<uint8_t>& binary) {
    auto result = IDBKeyDataPtr(base::in_place);
    result->set_binary(std::move(binary));
    return result;
  }
  // Construct an instance holding |string|.
  static IDBKeyDataPtr
  NewString(
      const base::string16& string) {
    auto result = IDBKeyDataPtr(base::in_place);
    result->set_string(std::move(string));
    return result;
  }
  // Construct an instance holding |date|.
  static IDBKeyDataPtr
  NewDate(
      double date) {
    auto result = IDBKeyDataPtr(base::in_place);
    result->set_date(std::move(date));
    return result;
  }
  // Construct an instance holding |number|.
  static IDBKeyDataPtr
  NewNumber(
      double number) {
    auto result = IDBKeyDataPtr(base::in_place);
    result->set_number(std::move(number));
    return result;
  }
  // Construct an instance holding |other_invalid|.
  static IDBKeyDataPtr
  NewOtherInvalid(
      bool other_invalid) {
    auto result = IDBKeyDataPtr(base::in_place);
    result->set_other_invalid(std::move(other_invalid));
    return result;
  }
  // Construct an instance holding |other_null|.
  static IDBKeyDataPtr
  NewOtherNull(
      bool other_null) {
    auto result = IDBKeyDataPtr(base::in_place);
    result->set_other_null(std::move(other_null));
    return result;
  }

  template <typename U>
  static IDBKeyDataPtr From(const U& u) {
    return mojo::TypeConverter<IDBKeyDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBKeyData>::Convert(*this);
  }

  IDBKeyData();
  ~IDBKeyData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = IDBKeyDataPtr>
  IDBKeyDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBKeyData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_key_array() const { return tag_ == Tag::KEY_ARRAY; }

  
  std::vector<::blink::IndexedDBKey>& get_key_array() const {
    DCHECK(tag_ == Tag::KEY_ARRAY);
    return *(data_.key_array);
  }

  
  void set_key_array(
      const std::vector<::blink::IndexedDBKey>& key_array);
  
  bool is_binary() const { return tag_ == Tag::BINARY; }

  
  std::vector<uint8_t>& get_binary() const {
    DCHECK(tag_ == Tag::BINARY);
    return *(data_.binary);
  }

  
  void set_binary(
      const std::vector<uint8_t>& binary);
  
  bool is_string() const { return tag_ == Tag::STRING; }

  
  base::string16& get_string() const {
    DCHECK(tag_ == Tag::STRING);
    return *(data_.string);
  }

  
  void set_string(
      const base::string16& string);
  
  bool is_date() const { return tag_ == Tag::DATE; }

  
  double get_date() const {
    DCHECK(tag_ == Tag::DATE);
    return data_.date;
  }

  
  void set_date(
      double date);
  
  bool is_number() const { return tag_ == Tag::NUMBER; }

  
  double get_number() const {
    DCHECK(tag_ == Tag::NUMBER);
    return data_.number;
  }

  
  void set_number(
      double number);
  
  bool is_other_invalid() const { return tag_ == Tag::OTHER_INVALID; }

  
  bool get_other_invalid() const {
    DCHECK(tag_ == Tag::OTHER_INVALID);
    return data_.other_invalid;
  }

  
  void set_other_invalid(
      bool other_invalid);
  
  bool is_other_null() const { return tag_ == Tag::OTHER_NULL; }

  
  bool get_other_null() const {
    DCHECK(tag_ == Tag::OTHER_NULL);
    return data_.other_null;
  }

  
  void set_other_null(
      bool other_null);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBKeyData::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<IDBKeyData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    std::vector<::blink::IndexedDBKey>* key_array;
    std::vector<uint8_t>* binary;
    base::string16* string;
    double date;
    double number;
    bool other_invalid;
    bool other_null;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class BLINK_COMMON_EXPORT IDBKeyPathData {
 public:
  using DataView = IDBKeyPathDataDataView;
  using Data_ = internal::IDBKeyPathData_Data;
  using Tag = Data_::IDBKeyPathData_Tag;

  static IDBKeyPathDataPtr New() {
    return IDBKeyPathDataPtr(base::in_place);
  }
  // Construct an instance holding |string|.
  static IDBKeyPathDataPtr
  NewString(
      const base::string16& string) {
    auto result = IDBKeyPathDataPtr(base::in_place);
    result->set_string(std::move(string));
    return result;
  }
  // Construct an instance holding |string_array|.
  static IDBKeyPathDataPtr
  NewStringArray(
      const std::vector<base::string16>& string_array) {
    auto result = IDBKeyPathDataPtr(base::in_place);
    result->set_string_array(std::move(string_array));
    return result;
  }

  template <typename U>
  static IDBKeyPathDataPtr From(const U& u) {
    return mojo::TypeConverter<IDBKeyPathDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBKeyPathData>::Convert(*this);
  }

  IDBKeyPathData();
  ~IDBKeyPathData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = IDBKeyPathDataPtr>
  IDBKeyPathDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBKeyPathData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  
  bool is_string() const { return tag_ == Tag::STRING; }

  
  base::string16& get_string() const {
    DCHECK(tag_ == Tag::STRING);
    return *(data_.string);
  }

  
  void set_string(
      const base::string16& string);
  
  bool is_string_array() const { return tag_ == Tag::STRING_ARRAY; }

  
  std::vector<base::string16>& get_string_array() const {
    DCHECK(tag_ == Tag::STRING_ARRAY);
    return *(data_.string_array);
  }

  
  void set_string_array(
      const std::vector<base::string16>& string_array);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBKeyPathData::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<IDBKeyPathData::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

 private:
  union Union_ {
    Union_() {}
    ~Union_() {}
    base::string16* string;
    std::vector<base::string16>* string_array;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};





class BLINK_COMMON_EXPORT IDBKey {
 public:
  using DataView = IDBKeyDataView;
  using Data_ = internal::IDBKey_Data;

  template <typename... Args>
  static IDBKeyPtr New(Args&&... args) {
    return IDBKeyPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBKeyPtr From(const U& u) {
    return mojo::TypeConverter<IDBKeyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBKey>::Convert(*this);
  }


  IDBKey();

  explicit IDBKey(
      IDBKeyDataPtr data);

  ~IDBKey();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBKeyPtr>
  IDBKeyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBKey>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBKey::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBKey::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBKey_UnserializedMessageContext<
            UserType, IDBKey::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBKey::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBKey::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBKey_UnserializedMessageContext<
            UserType, IDBKey::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBKey::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  IDBKeyDataPtr data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IDBKey);
};





class BLINK_COMMON_EXPORT IDBKeyPath {
 public:
  using DataView = IDBKeyPathDataView;
  using Data_ = internal::IDBKeyPath_Data;

  template <typename... Args>
  static IDBKeyPathPtr New(Args&&... args) {
    return IDBKeyPathPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBKeyPathPtr From(const U& u) {
    return mojo::TypeConverter<IDBKeyPathPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBKeyPath>::Convert(*this);
  }


  IDBKeyPath();

  explicit IDBKeyPath(
      IDBKeyPathDataPtr data);

  ~IDBKeyPath();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBKeyPathPtr>
  IDBKeyPathPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBKeyPath>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBKeyPath::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBKeyPath::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBKeyPath_UnserializedMessageContext<
            UserType, IDBKeyPath::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBKeyPath::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBKeyPath::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBKeyPath_UnserializedMessageContext<
            UserType, IDBKeyPath::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBKeyPath::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  IDBKeyPathDataPtr data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IDBKeyPath);
};





class BLINK_COMMON_EXPORT IDBKeyRange {
 public:
  using DataView = IDBKeyRangeDataView;
  using Data_ = internal::IDBKeyRange_Data;

  template <typename... Args>
  static IDBKeyRangePtr New(Args&&... args) {
    return IDBKeyRangePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBKeyRangePtr From(const U& u) {
    return mojo::TypeConverter<IDBKeyRangePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBKeyRange>::Convert(*this);
  }


  IDBKeyRange();

  IDBKeyRange(
      const ::blink::IndexedDBKey& lower,
      const ::blink::IndexedDBKey& upper,
      bool lower_open,
      bool upper_open);

  ~IDBKeyRange();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBKeyRangePtr>
  IDBKeyRangePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBKeyRange>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBKeyRange::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBKeyRange::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBKeyRange_UnserializedMessageContext<
            UserType, IDBKeyRange::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBKeyRange::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBKeyRange::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBKeyRange_UnserializedMessageContext<
            UserType, IDBKeyRange::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBKeyRange::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::IndexedDBKey lower;
  
  ::blink::IndexedDBKey upper;
  
  bool lower_open;
  
  bool upper_open;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBIndexMetadata {
 public:
  using DataView = IDBIndexMetadataDataView;
  using Data_ = internal::IDBIndexMetadata_Data;

  template <typename... Args>
  static IDBIndexMetadataPtr New(Args&&... args) {
    return IDBIndexMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBIndexMetadataPtr From(const U& u) {
    return mojo::TypeConverter<IDBIndexMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBIndexMetadata>::Convert(*this);
  }


  IDBIndexMetadata();

  IDBIndexMetadata(
      int64_t id,
      const base::string16& name,
      const ::blink::IndexedDBKeyPath& key_path,
      bool unique,
      bool multi_entry);

  ~IDBIndexMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBIndexMetadataPtr>
  IDBIndexMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBIndexMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBIndexMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBIndexMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBIndexMetadata_UnserializedMessageContext<
            UserType, IDBIndexMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBIndexMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBIndexMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBIndexMetadata_UnserializedMessageContext<
            UserType, IDBIndexMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBIndexMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t id;
  
  base::string16 name;
  
  ::blink::IndexedDBKeyPath key_path;
  
  bool unique;
  
  bool multi_entry;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBObjectStoreMetadata {
 public:
  using DataView = IDBObjectStoreMetadataDataView;
  using Data_ = internal::IDBObjectStoreMetadata_Data;

  template <typename... Args>
  static IDBObjectStoreMetadataPtr New(Args&&... args) {
    return IDBObjectStoreMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBObjectStoreMetadataPtr From(const U& u) {
    return mojo::TypeConverter<IDBObjectStoreMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBObjectStoreMetadata>::Convert(*this);
  }


  IDBObjectStoreMetadata();

  IDBObjectStoreMetadata(
      int64_t id,
      const base::string16& name,
      const ::blink::IndexedDBKeyPath& key_path,
      bool auto_increment,
      int64_t max_index_id,
      const base::flat_map<int64_t, ::blink::IndexedDBIndexMetadata>& indexes);

  ~IDBObjectStoreMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBObjectStoreMetadataPtr>
  IDBObjectStoreMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBObjectStoreMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBObjectStoreMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBObjectStoreMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBObjectStoreMetadata_UnserializedMessageContext<
            UserType, IDBObjectStoreMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBObjectStoreMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBObjectStoreMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBObjectStoreMetadata_UnserializedMessageContext<
            UserType, IDBObjectStoreMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBObjectStoreMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t id;
  
  base::string16 name;
  
  ::blink::IndexedDBKeyPath key_path;
  
  bool auto_increment;
  
  int64_t max_index_id;
  
  base::flat_map<int64_t, ::blink::IndexedDBIndexMetadata> indexes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBDatabaseMetadata {
 public:
  using DataView = IDBDatabaseMetadataDataView;
  using Data_ = internal::IDBDatabaseMetadata_Data;

  template <typename... Args>
  static IDBDatabaseMetadataPtr New(Args&&... args) {
    return IDBDatabaseMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBDatabaseMetadataPtr From(const U& u) {
    return mojo::TypeConverter<IDBDatabaseMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBDatabaseMetadata>::Convert(*this);
  }


  IDBDatabaseMetadata();

  IDBDatabaseMetadata(
      int64_t id,
      const base::string16& name,
      int64_t version,
      int64_t max_object_store_id,
      const base::flat_map<int64_t, ::blink::IndexedDBObjectStoreMetadata>& object_stores);

  ~IDBDatabaseMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBDatabaseMetadataPtr>
  IDBDatabaseMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBDatabaseMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBDatabaseMetadata::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBDatabaseMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBDatabaseMetadata_UnserializedMessageContext<
            UserType, IDBDatabaseMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBDatabaseMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBDatabaseMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBDatabaseMetadata_UnserializedMessageContext<
            UserType, IDBDatabaseMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBDatabaseMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t id;
  
  base::string16 name;
  
  int64_t version;
  
  int64_t max_object_store_id;
  
  base::flat_map<int64_t, ::blink::IndexedDBObjectStoreMetadata> object_stores;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBNameAndVersion {
 public:
  using DataView = IDBNameAndVersionDataView;
  using Data_ = internal::IDBNameAndVersion_Data;

  template <typename... Args>
  static IDBNameAndVersionPtr New(Args&&... args) {
    return IDBNameAndVersionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBNameAndVersionPtr From(const U& u) {
    return mojo::TypeConverter<IDBNameAndVersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBNameAndVersion>::Convert(*this);
  }


  IDBNameAndVersion();

  IDBNameAndVersion(
      const base::string16& name,
      int64_t version);

  ~IDBNameAndVersion();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBNameAndVersionPtr>
  IDBNameAndVersionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBNameAndVersion>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBNameAndVersion::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBNameAndVersion::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBNameAndVersion_UnserializedMessageContext<
            UserType, IDBNameAndVersion::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBNameAndVersion::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBNameAndVersion::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBNameAndVersion_UnserializedMessageContext<
            UserType, IDBNameAndVersion::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBNameAndVersion::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::string16 name;
  
  int64_t version;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBIndexKeys {
 public:
  using DataView = IDBIndexKeysDataView;
  using Data_ = internal::IDBIndexKeys_Data;

  template <typename... Args>
  static IDBIndexKeysPtr New(Args&&... args) {
    return IDBIndexKeysPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBIndexKeysPtr From(const U& u) {
    return mojo::TypeConverter<IDBIndexKeysPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBIndexKeys>::Convert(*this);
  }


  IDBIndexKeys();

  IDBIndexKeys(
      int64_t index_id,
      const std::vector<::blink::IndexedDBKey>& index_keys);

  ~IDBIndexKeys();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBIndexKeysPtr>
  IDBIndexKeysPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBIndexKeys>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBIndexKeys::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBIndexKeys::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBIndexKeys_UnserializedMessageContext<
            UserType, IDBIndexKeys::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBIndexKeys::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBIndexKeys::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBIndexKeys_UnserializedMessageContext<
            UserType, IDBIndexKeys::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBIndexKeys::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t index_id;
  
  std::vector<::blink::IndexedDBKey> index_keys;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBFileInfo {
 public:
  using DataView = IDBFileInfoDataView;
  using Data_ = internal::IDBFileInfo_Data;

  template <typename... Args>
  static IDBFileInfoPtr New(Args&&... args) {
    return IDBFileInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBFileInfoPtr From(const U& u) {
    return mojo::TypeConverter<IDBFileInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBFileInfo>::Convert(*this);
  }


  IDBFileInfo();

  IDBFileInfo(
      const base::FilePath& path,
      const base::string16& name,
      base::Time last_modified);

  ~IDBFileInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBFileInfoPtr>
  IDBFileInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBFileInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBFileInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBFileInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBFileInfo_UnserializedMessageContext<
            UserType, IDBFileInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBFileInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBFileInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBFileInfo_UnserializedMessageContext<
            UserType, IDBFileInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBFileInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::FilePath path;
  
  base::string16 name;
  
  base::Time last_modified;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBBlobInfo {
 public:
  using DataView = IDBBlobInfoDataView;
  using Data_ = internal::IDBBlobInfo_Data;

  template <typename... Args>
  static IDBBlobInfoPtr New(Args&&... args) {
    return IDBBlobInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBBlobInfoPtr From(const U& u) {
    return mojo::TypeConverter<IDBBlobInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBBlobInfo>::Convert(*this);
  }


  IDBBlobInfo();

  IDBBlobInfo(
      ::blink::mojom::BlobPtrInfo blob,
      const std::string& uuid,
      const base::string16& mime_type,
      int64_t size,
      IDBFileInfoPtr file);

  ~IDBBlobInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBBlobInfoPtr>
  IDBBlobInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBBlobInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBBlobInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBBlobInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBBlobInfo_UnserializedMessageContext<
            UserType, IDBBlobInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBBlobInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBBlobInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBBlobInfo_UnserializedMessageContext<
            UserType, IDBBlobInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBBlobInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::mojom::BlobPtrInfo blob;
  
  std::string uuid;
  
  base::string16 mime_type;
  
  int64_t size;
  
  IDBFileInfoPtr file;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IDBBlobInfo);
};





class BLINK_COMMON_EXPORT IDBValue {
 public:
  using DataView = IDBValueDataView;
  using Data_ = internal::IDBValue_Data;

  template <typename... Args>
  static IDBValuePtr New(Args&&... args) {
    return IDBValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBValuePtr From(const U& u) {
    return mojo::TypeConverter<IDBValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBValue>::Convert(*this);
  }


  IDBValue();

  IDBValue(
      const std::vector<uint8_t>& bits,
      std::vector<IDBBlobInfoPtr> blob_or_file_info);

  ~IDBValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBValuePtr>
  IDBValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBValue_UnserializedMessageContext<
            UserType, IDBValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBValue_UnserializedMessageContext<
            UserType, IDBValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<uint8_t> bits;
  
  std::vector<IDBBlobInfoPtr> blob_or_file_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IDBValue);
};





class BLINK_COMMON_EXPORT IDBReturnValue {
 public:
  using DataView = IDBReturnValueDataView;
  using Data_ = internal::IDBReturnValue_Data;

  template <typename... Args>
  static IDBReturnValuePtr New(Args&&... args) {
    return IDBReturnValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBReturnValuePtr From(const U& u) {
    return mojo::TypeConverter<IDBReturnValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBReturnValue>::Convert(*this);
  }


  IDBReturnValue();

  IDBReturnValue(
      IDBValuePtr value,
      const ::blink::IndexedDBKey& primary_key,
      const ::blink::IndexedDBKeyPath& key_path);

  ~IDBReturnValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBReturnValuePtr>
  IDBReturnValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBReturnValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBReturnValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBReturnValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBReturnValue_UnserializedMessageContext<
            UserType, IDBReturnValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBReturnValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBReturnValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBReturnValue_UnserializedMessageContext<
            UserType, IDBReturnValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBReturnValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  IDBValuePtr value;
  
  ::blink::IndexedDBKey primary_key;
  
  ::blink::IndexedDBKeyPath key_path;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IDBReturnValue);
};





class BLINK_COMMON_EXPORT IDBObservation {
 public:
  using DataView = IDBObservationDataView;
  using Data_ = internal::IDBObservation_Data;

  template <typename... Args>
  static IDBObservationPtr New(Args&&... args) {
    return IDBObservationPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBObservationPtr From(const U& u) {
    return mojo::TypeConverter<IDBObservationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBObservation>::Convert(*this);
  }


  IDBObservation();

  IDBObservation(
      int64_t object_store_id,
      IDBOperationType type,
      const ::blink::IndexedDBKeyRange& key_range,
      IDBValuePtr value);

  ~IDBObservation();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBObservationPtr>
  IDBObservationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBObservation>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBObservation::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBObservation::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBObservation_UnserializedMessageContext<
            UserType, IDBObservation::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBObservation::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBObservation::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBObservation_UnserializedMessageContext<
            UserType, IDBObservation::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBObservation::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t object_store_id;
  
  IDBOperationType type;
  
  ::blink::IndexedDBKeyRange key_range;
  
  IDBValuePtr value;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IDBObservation);
};





class BLINK_COMMON_EXPORT IDBObserverTransaction {
 public:
  using DataView = IDBObserverTransactionDataView;
  using Data_ = internal::IDBObserverTransaction_Data;

  template <typename... Args>
  static IDBObserverTransactionPtr New(Args&&... args) {
    return IDBObserverTransactionPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBObserverTransactionPtr From(const U& u) {
    return mojo::TypeConverter<IDBObserverTransactionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBObserverTransaction>::Convert(*this);
  }


  IDBObserverTransaction();

  IDBObserverTransaction(
      int64_t id,
      const std::vector<int64_t>& scope);

  ~IDBObserverTransaction();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBObserverTransactionPtr>
  IDBObserverTransactionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBObserverTransaction>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBObserverTransaction::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBObserverTransaction::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBObserverTransaction_UnserializedMessageContext<
            UserType, IDBObserverTransaction::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBObserverTransaction::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBObserverTransaction::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBObserverTransaction_UnserializedMessageContext<
            UserType, IDBObserverTransaction::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBObserverTransaction::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int64_t id;
  
  std::vector<int64_t> scope;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBObserverChanges {
 public:
  using DataView = IDBObserverChangesDataView;
  using Data_ = internal::IDBObserverChanges_Data;

  template <typename... Args>
  static IDBObserverChangesPtr New(Args&&... args) {
    return IDBObserverChangesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBObserverChangesPtr From(const U& u) {
    return mojo::TypeConverter<IDBObserverChangesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBObserverChanges>::Convert(*this);
  }


  IDBObserverChanges();

  IDBObserverChanges(
      const base::flat_map<int32_t, std::vector<int32_t>>& observation_index_map,
      base::flat_map<int32_t, IDBObserverTransactionPtr> transaction_map,
      std::vector<IDBObservationPtr> observations);

  ~IDBObserverChanges();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBObserverChangesPtr>
  IDBObserverChangesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBObserverChanges>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBObserverChanges::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBObserverChanges::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBObserverChanges_UnserializedMessageContext<
            UserType, IDBObserverChanges::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBObserverChanges::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBObserverChanges::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBObserverChanges_UnserializedMessageContext<
            UserType, IDBObserverChanges::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBObserverChanges::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  base::flat_map<int32_t, std::vector<int32_t>> observation_index_map;
  
  base::flat_map<int32_t, IDBObserverTransactionPtr> transaction_map;
  
  std::vector<IDBObservationPtr> observations;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IDBObserverChanges);
};





class BLINK_COMMON_EXPORT IDBError {
 public:
  using DataView = IDBErrorDataView;
  using Data_ = internal::IDBError_Data;

  template <typename... Args>
  static IDBErrorPtr New(Args&&... args) {
    return IDBErrorPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBErrorPtr From(const U& u) {
    return mojo::TypeConverter<IDBErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBError>::Convert(*this);
  }


  IDBError();

  IDBError(
      int32_t error_code,
      const base::string16& error_message);

  ~IDBError();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBErrorPtr>
  IDBErrorPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBError>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBError::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBError::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBError_UnserializedMessageContext<
            UserType, IDBError::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBError::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBError::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBError_UnserializedMessageContext<
            UserType, IDBError::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBError::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t error_code;
  
  base::string16 error_message;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_COMMON_EXPORT IDBCursorValue {
 public:
  using DataView = IDBCursorValueDataView;
  using Data_ = internal::IDBCursorValue_Data;

  template <typename... Args>
  static IDBCursorValuePtr New(Args&&... args) {
    return IDBCursorValuePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IDBCursorValuePtr From(const U& u) {
    return mojo::TypeConverter<IDBCursorValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IDBCursorValue>::Convert(*this);
  }


  IDBCursorValue();

  IDBCursorValue(
      const std::vector<::blink::IndexedDBKey>& keys,
      const std::vector<::blink::IndexedDBKey>& primary_keys,
      std::vector<IDBValuePtr> values);

  ~IDBCursorValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IDBCursorValuePtr>
  IDBCursorValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IDBCursorValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IDBCursorValue::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IDBCursorValue::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IDBCursorValue_UnserializedMessageContext<
            UserType, IDBCursorValue::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<IDBCursorValue::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return IDBCursorValue::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IDBCursorValue_UnserializedMessageContext<
            UserType, IDBCursorValue::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IDBCursorValue::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  std::vector<::blink::IndexedDBKey> keys;
  
  std::vector<::blink::IndexedDBKey> primary_keys;
  
  std::vector<IDBValuePtr> values;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(IDBCursorValue);
};

template <typename UnionPtrType>
IDBKeyDataPtr IDBKeyData::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::KEY_ARRAY:
      rv->set_key_array(mojo::Clone(*data_.key_array));
      break;
    case Tag::BINARY:
      rv->set_binary(mojo::Clone(*data_.binary));
      break;
    case Tag::STRING:
      rv->set_string(mojo::Clone(*data_.string));
      break;
    case Tag::DATE:
      rv->set_date(mojo::Clone(data_.date));
      break;
    case Tag::NUMBER:
      rv->set_number(mojo::Clone(data_.number));
      break;
    case Tag::OTHER_INVALID:
      rv->set_other_invalid(mojo::Clone(data_.other_invalid));
      break;
    case Tag::OTHER_NULL:
      rv->set_other_null(mojo::Clone(data_.other_null));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBKeyData>::value>::type*>
bool IDBKeyData::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::KEY_ARRAY:
      return mojo::Equals(*(data_.key_array), *(other.data_.key_array));
    case Tag::BINARY:
      return mojo::Equals(*(data_.binary), *(other.data_.binary));
    case Tag::STRING:
      return mojo::Equals(*(data_.string), *(other.data_.string));
    case Tag::DATE:
      return mojo::Equals(data_.date, other.data_.date);
    case Tag::NUMBER:
      return mojo::Equals(data_.number, other.data_.number);
    case Tag::OTHER_INVALID:
      return mojo::Equals(data_.other_invalid, other.data_.other_invalid);
    case Tag::OTHER_NULL:
      return mojo::Equals(data_.other_null, other.data_.other_null);
  }

  return false;
}
template <typename UnionPtrType>
IDBKeyPathDataPtr IDBKeyPathData::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::STRING:
      rv->set_string(mojo::Clone(*data_.string));
      break;
    case Tag::STRING_ARRAY:
      rv->set_string_array(mojo::Clone(*data_.string_array));
      break;
  }
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBKeyPathData>::value>::type*>
bool IDBKeyPathData::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::STRING:
      return mojo::Equals(*(data_.string), *(other.data_.string));
    case Tag::STRING_ARRAY:
      return mojo::Equals(*(data_.string_array), *(other.data_.string_array));
  }

  return false;
}
template <typename StructPtrType>
IDBKeyPtr IDBKey::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBKey>::value>::type*>
bool IDBKey::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
IDBKeyPathPtr IDBKeyPath::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBKeyPath>::value>::type*>
bool IDBKeyPath::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}
template <typename StructPtrType>
IDBKeyRangePtr IDBKeyRange::Clone() const {
  return New(
      mojo::Clone(lower),
      mojo::Clone(upper),
      mojo::Clone(lower_open),
      mojo::Clone(upper_open)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBKeyRange>::value>::type*>
bool IDBKeyRange::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->lower, other_struct.lower))
    return false;
  if (!mojo::Equals(this->upper, other_struct.upper))
    return false;
  if (!mojo::Equals(this->lower_open, other_struct.lower_open))
    return false;
  if (!mojo::Equals(this->upper_open, other_struct.upper_open))
    return false;
  return true;
}
template <typename StructPtrType>
IDBIndexMetadataPtr IDBIndexMetadata::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(key_path),
      mojo::Clone(unique),
      mojo::Clone(multi_entry)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBIndexMetadata>::value>::type*>
bool IDBIndexMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->key_path, other_struct.key_path))
    return false;
  if (!mojo::Equals(this->unique, other_struct.unique))
    return false;
  if (!mojo::Equals(this->multi_entry, other_struct.multi_entry))
    return false;
  return true;
}
template <typename StructPtrType>
IDBObjectStoreMetadataPtr IDBObjectStoreMetadata::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(key_path),
      mojo::Clone(auto_increment),
      mojo::Clone(max_index_id),
      mojo::Clone(indexes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBObjectStoreMetadata>::value>::type*>
bool IDBObjectStoreMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->key_path, other_struct.key_path))
    return false;
  if (!mojo::Equals(this->auto_increment, other_struct.auto_increment))
    return false;
  if (!mojo::Equals(this->max_index_id, other_struct.max_index_id))
    return false;
  if (!mojo::Equals(this->indexes, other_struct.indexes))
    return false;
  return true;
}
template <typename StructPtrType>
IDBDatabaseMetadataPtr IDBDatabaseMetadata::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(version),
      mojo::Clone(max_object_store_id),
      mojo::Clone(object_stores)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBDatabaseMetadata>::value>::type*>
bool IDBDatabaseMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  if (!mojo::Equals(this->max_object_store_id, other_struct.max_object_store_id))
    return false;
  if (!mojo::Equals(this->object_stores, other_struct.object_stores))
    return false;
  return true;
}
template <typename StructPtrType>
IDBNameAndVersionPtr IDBNameAndVersion::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(version)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBNameAndVersion>::value>::type*>
bool IDBNameAndVersion::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  return true;
}
template <typename StructPtrType>
IDBIndexKeysPtr IDBIndexKeys::Clone() const {
  return New(
      mojo::Clone(index_id),
      mojo::Clone(index_keys)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBIndexKeys>::value>::type*>
bool IDBIndexKeys::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->index_id, other_struct.index_id))
    return false;
  if (!mojo::Equals(this->index_keys, other_struct.index_keys))
    return false;
  return true;
}
template <typename StructPtrType>
IDBFileInfoPtr IDBFileInfo::Clone() const {
  return New(
      mojo::Clone(path),
      mojo::Clone(name),
      mojo::Clone(last_modified)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBFileInfo>::value>::type*>
bool IDBFileInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->path, other_struct.path))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->last_modified, other_struct.last_modified))
    return false;
  return true;
}
template <typename StructPtrType>
IDBBlobInfoPtr IDBBlobInfo::Clone() const {
  return New(
      mojo::Clone(blob),
      mojo::Clone(uuid),
      mojo::Clone(mime_type),
      mojo::Clone(size),
      mojo::Clone(file)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBBlobInfo>::value>::type*>
bool IDBBlobInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->blob, other_struct.blob))
    return false;
  if (!mojo::Equals(this->uuid, other_struct.uuid))
    return false;
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->size, other_struct.size))
    return false;
  if (!mojo::Equals(this->file, other_struct.file))
    return false;
  return true;
}
template <typename StructPtrType>
IDBValuePtr IDBValue::Clone() const {
  return New(
      mojo::Clone(bits),
      mojo::Clone(blob_or_file_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBValue>::value>::type*>
bool IDBValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bits, other_struct.bits))
    return false;
  if (!mojo::Equals(this->blob_or_file_info, other_struct.blob_or_file_info))
    return false;
  return true;
}
template <typename StructPtrType>
IDBReturnValuePtr IDBReturnValue::Clone() const {
  return New(
      mojo::Clone(value),
      mojo::Clone(primary_key),
      mojo::Clone(key_path)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBReturnValue>::value>::type*>
bool IDBReturnValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->primary_key, other_struct.primary_key))
    return false;
  if (!mojo::Equals(this->key_path, other_struct.key_path))
    return false;
  return true;
}
template <typename StructPtrType>
IDBObservationPtr IDBObservation::Clone() const {
  return New(
      mojo::Clone(object_store_id),
      mojo::Clone(type),
      mojo::Clone(key_range),
      mojo::Clone(value)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBObservation>::value>::type*>
bool IDBObservation::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->object_store_id, other_struct.object_store_id))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->key_range, other_struct.key_range))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}
template <typename StructPtrType>
IDBObserverTransactionPtr IDBObserverTransaction::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(scope)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBObserverTransaction>::value>::type*>
bool IDBObserverTransaction::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->scope, other_struct.scope))
    return false;
  return true;
}
template <typename StructPtrType>
IDBObserverChangesPtr IDBObserverChanges::Clone() const {
  return New(
      mojo::Clone(observation_index_map),
      mojo::Clone(transaction_map),
      mojo::Clone(observations)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBObserverChanges>::value>::type*>
bool IDBObserverChanges::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->observation_index_map, other_struct.observation_index_map))
    return false;
  if (!mojo::Equals(this->transaction_map, other_struct.transaction_map))
    return false;
  if (!mojo::Equals(this->observations, other_struct.observations))
    return false;
  return true;
}
template <typename StructPtrType>
IDBErrorPtr IDBError::Clone() const {
  return New(
      mojo::Clone(error_code),
      mojo::Clone(error_message)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBError>::value>::type*>
bool IDBError::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->error_code, other_struct.error_code))
    return false;
  if (!mojo::Equals(this->error_message, other_struct.error_message))
    return false;
  return true;
}
template <typename StructPtrType>
IDBCursorValuePtr IDBCursorValue::Clone() const {
  return New(
      mojo::Clone(keys),
      mojo::Clone(primary_keys),
      mojo::Clone(values)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IDBCursorValue>::value>::type*>
bool IDBCursorValue::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->keys, other_struct.keys))
    return false;
  if (!mojo::Equals(this->primary_keys, other_struct.primary_keys))
    return false;
  if (!mojo::Equals(this->values, other_struct.values))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBKey::DataView,
                                         ::blink::mojom::IDBKeyPtr> {
  static bool IsNull(const ::blink::mojom::IDBKeyPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBKeyPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IDBKey::data)& data(
      const ::blink::mojom::IDBKeyPtr& input) {
    return input->data;
  }

  static bool Read(::blink::mojom::IDBKey::DataView input, ::blink::mojom::IDBKeyPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBKeyPath::DataView,
                                         ::blink::mojom::IDBKeyPathPtr> {
  static bool IsNull(const ::blink::mojom::IDBKeyPathPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBKeyPathPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IDBKeyPath::data)& data(
      const ::blink::mojom::IDBKeyPathPtr& input) {
    return input->data;
  }

  static bool Read(::blink::mojom::IDBKeyPath::DataView input, ::blink::mojom::IDBKeyPathPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBKeyRange::DataView,
                                         ::blink::mojom::IDBKeyRangePtr> {
  static bool IsNull(const ::blink::mojom::IDBKeyRangePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBKeyRangePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IDBKeyRange::lower)& lower(
      const ::blink::mojom::IDBKeyRangePtr& input) {
    return input->lower;
  }

  static const decltype(::blink::mojom::IDBKeyRange::upper)& upper(
      const ::blink::mojom::IDBKeyRangePtr& input) {
    return input->upper;
  }

  static decltype(::blink::mojom::IDBKeyRange::lower_open) lower_open(
      const ::blink::mojom::IDBKeyRangePtr& input) {
    return input->lower_open;
  }

  static decltype(::blink::mojom::IDBKeyRange::upper_open) upper_open(
      const ::blink::mojom::IDBKeyRangePtr& input) {
    return input->upper_open;
  }

  static bool Read(::blink::mojom::IDBKeyRange::DataView input, ::blink::mojom::IDBKeyRangePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBIndexMetadata::DataView,
                                         ::blink::mojom::IDBIndexMetadataPtr> {
  static bool IsNull(const ::blink::mojom::IDBIndexMetadataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBIndexMetadataPtr* output) { output->reset(); }

  static decltype(::blink::mojom::IDBIndexMetadata::id) id(
      const ::blink::mojom::IDBIndexMetadataPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::IDBIndexMetadata::name)& name(
      const ::blink::mojom::IDBIndexMetadataPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::IDBIndexMetadata::key_path)& key_path(
      const ::blink::mojom::IDBIndexMetadataPtr& input) {
    return input->key_path;
  }

  static decltype(::blink::mojom::IDBIndexMetadata::unique) unique(
      const ::blink::mojom::IDBIndexMetadataPtr& input) {
    return input->unique;
  }

  static decltype(::blink::mojom::IDBIndexMetadata::multi_entry) multi_entry(
      const ::blink::mojom::IDBIndexMetadataPtr& input) {
    return input->multi_entry;
  }

  static bool Read(::blink::mojom::IDBIndexMetadata::DataView input, ::blink::mojom::IDBIndexMetadataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBObjectStoreMetadata::DataView,
                                         ::blink::mojom::IDBObjectStoreMetadataPtr> {
  static bool IsNull(const ::blink::mojom::IDBObjectStoreMetadataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBObjectStoreMetadataPtr* output) { output->reset(); }

  static decltype(::blink::mojom::IDBObjectStoreMetadata::id) id(
      const ::blink::mojom::IDBObjectStoreMetadataPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::IDBObjectStoreMetadata::name)& name(
      const ::blink::mojom::IDBObjectStoreMetadataPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::IDBObjectStoreMetadata::key_path)& key_path(
      const ::blink::mojom::IDBObjectStoreMetadataPtr& input) {
    return input->key_path;
  }

  static decltype(::blink::mojom::IDBObjectStoreMetadata::auto_increment) auto_increment(
      const ::blink::mojom::IDBObjectStoreMetadataPtr& input) {
    return input->auto_increment;
  }

  static decltype(::blink::mojom::IDBObjectStoreMetadata::max_index_id) max_index_id(
      const ::blink::mojom::IDBObjectStoreMetadataPtr& input) {
    return input->max_index_id;
  }

  static const decltype(::blink::mojom::IDBObjectStoreMetadata::indexes)& indexes(
      const ::blink::mojom::IDBObjectStoreMetadataPtr& input) {
    return input->indexes;
  }

  static bool Read(::blink::mojom::IDBObjectStoreMetadata::DataView input, ::blink::mojom::IDBObjectStoreMetadataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBDatabaseMetadata::DataView,
                                         ::blink::mojom::IDBDatabaseMetadataPtr> {
  static bool IsNull(const ::blink::mojom::IDBDatabaseMetadataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBDatabaseMetadataPtr* output) { output->reset(); }

  static decltype(::blink::mojom::IDBDatabaseMetadata::id) id(
      const ::blink::mojom::IDBDatabaseMetadataPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::IDBDatabaseMetadata::name)& name(
      const ::blink::mojom::IDBDatabaseMetadataPtr& input) {
    return input->name;
  }

  static decltype(::blink::mojom::IDBDatabaseMetadata::version) version(
      const ::blink::mojom::IDBDatabaseMetadataPtr& input) {
    return input->version;
  }

  static decltype(::blink::mojom::IDBDatabaseMetadata::max_object_store_id) max_object_store_id(
      const ::blink::mojom::IDBDatabaseMetadataPtr& input) {
    return input->max_object_store_id;
  }

  static const decltype(::blink::mojom::IDBDatabaseMetadata::object_stores)& object_stores(
      const ::blink::mojom::IDBDatabaseMetadataPtr& input) {
    return input->object_stores;
  }

  static bool Read(::blink::mojom::IDBDatabaseMetadata::DataView input, ::blink::mojom::IDBDatabaseMetadataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBNameAndVersion::DataView,
                                         ::blink::mojom::IDBNameAndVersionPtr> {
  static bool IsNull(const ::blink::mojom::IDBNameAndVersionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBNameAndVersionPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IDBNameAndVersion::name)& name(
      const ::blink::mojom::IDBNameAndVersionPtr& input) {
    return input->name;
  }

  static decltype(::blink::mojom::IDBNameAndVersion::version) version(
      const ::blink::mojom::IDBNameAndVersionPtr& input) {
    return input->version;
  }

  static bool Read(::blink::mojom::IDBNameAndVersion::DataView input, ::blink::mojom::IDBNameAndVersionPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBIndexKeys::DataView,
                                         ::blink::mojom::IDBIndexKeysPtr> {
  static bool IsNull(const ::blink::mojom::IDBIndexKeysPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBIndexKeysPtr* output) { output->reset(); }

  static decltype(::blink::mojom::IDBIndexKeys::index_id) index_id(
      const ::blink::mojom::IDBIndexKeysPtr& input) {
    return input->index_id;
  }

  static const decltype(::blink::mojom::IDBIndexKeys::index_keys)& index_keys(
      const ::blink::mojom::IDBIndexKeysPtr& input) {
    return input->index_keys;
  }

  static bool Read(::blink::mojom::IDBIndexKeys::DataView input, ::blink::mojom::IDBIndexKeysPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBFileInfo::DataView,
                                         ::blink::mojom::IDBFileInfoPtr> {
  static bool IsNull(const ::blink::mojom::IDBFileInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBFileInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IDBFileInfo::path)& path(
      const ::blink::mojom::IDBFileInfoPtr& input) {
    return input->path;
  }

  static const decltype(::blink::mojom::IDBFileInfo::name)& name(
      const ::blink::mojom::IDBFileInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::IDBFileInfo::last_modified)& last_modified(
      const ::blink::mojom::IDBFileInfoPtr& input) {
    return input->last_modified;
  }

  static bool Read(::blink::mojom::IDBFileInfo::DataView input, ::blink::mojom::IDBFileInfoPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBBlobInfo::DataView,
                                         ::blink::mojom::IDBBlobInfoPtr> {
  static bool IsNull(const ::blink::mojom::IDBBlobInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBBlobInfoPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::IDBBlobInfo::blob)& blob(
       ::blink::mojom::IDBBlobInfoPtr& input) {
    return input->blob;
  }

  static const decltype(::blink::mojom::IDBBlobInfo::uuid)& uuid(
      const ::blink::mojom::IDBBlobInfoPtr& input) {
    return input->uuid;
  }

  static const decltype(::blink::mojom::IDBBlobInfo::mime_type)& mime_type(
      const ::blink::mojom::IDBBlobInfoPtr& input) {
    return input->mime_type;
  }

  static decltype(::blink::mojom::IDBBlobInfo::size) size(
      const ::blink::mojom::IDBBlobInfoPtr& input) {
    return input->size;
  }

  static const decltype(::blink::mojom::IDBBlobInfo::file)& file(
      const ::blink::mojom::IDBBlobInfoPtr& input) {
    return input->file;
  }

  static bool Read(::blink::mojom::IDBBlobInfo::DataView input, ::blink::mojom::IDBBlobInfoPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBValue::DataView,
                                         ::blink::mojom::IDBValuePtr> {
  static bool IsNull(const ::blink::mojom::IDBValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBValuePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IDBValue::bits)& bits(
      const ::blink::mojom::IDBValuePtr& input) {
    return input->bits;
  }

  static  decltype(::blink::mojom::IDBValue::blob_or_file_info)& blob_or_file_info(
       ::blink::mojom::IDBValuePtr& input) {
    return input->blob_or_file_info;
  }

  static bool Read(::blink::mojom::IDBValue::DataView input, ::blink::mojom::IDBValuePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBReturnValue::DataView,
                                         ::blink::mojom::IDBReturnValuePtr> {
  static bool IsNull(const ::blink::mojom::IDBReturnValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBReturnValuePtr* output) { output->reset(); }

  static  decltype(::blink::mojom::IDBReturnValue::value)& value(
       ::blink::mojom::IDBReturnValuePtr& input) {
    return input->value;
  }

  static const decltype(::blink::mojom::IDBReturnValue::primary_key)& primary_key(
      const ::blink::mojom::IDBReturnValuePtr& input) {
    return input->primary_key;
  }

  static const decltype(::blink::mojom::IDBReturnValue::key_path)& key_path(
      const ::blink::mojom::IDBReturnValuePtr& input) {
    return input->key_path;
  }

  static bool Read(::blink::mojom::IDBReturnValue::DataView input, ::blink::mojom::IDBReturnValuePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBObservation::DataView,
                                         ::blink::mojom::IDBObservationPtr> {
  static bool IsNull(const ::blink::mojom::IDBObservationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBObservationPtr* output) { output->reset(); }

  static decltype(::blink::mojom::IDBObservation::object_store_id) object_store_id(
      const ::blink::mojom::IDBObservationPtr& input) {
    return input->object_store_id;
  }

  static decltype(::blink::mojom::IDBObservation::type) type(
      const ::blink::mojom::IDBObservationPtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::IDBObservation::key_range)& key_range(
      const ::blink::mojom::IDBObservationPtr& input) {
    return input->key_range;
  }

  static  decltype(::blink::mojom::IDBObservation::value)& value(
       ::blink::mojom::IDBObservationPtr& input) {
    return input->value;
  }

  static bool Read(::blink::mojom::IDBObservation::DataView input, ::blink::mojom::IDBObservationPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBObserverTransaction::DataView,
                                         ::blink::mojom::IDBObserverTransactionPtr> {
  static bool IsNull(const ::blink::mojom::IDBObserverTransactionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBObserverTransactionPtr* output) { output->reset(); }

  static decltype(::blink::mojom::IDBObserverTransaction::id) id(
      const ::blink::mojom::IDBObserverTransactionPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::IDBObserverTransaction::scope)& scope(
      const ::blink::mojom::IDBObserverTransactionPtr& input) {
    return input->scope;
  }

  static bool Read(::blink::mojom::IDBObserverTransaction::DataView input, ::blink::mojom::IDBObserverTransactionPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBObserverChanges::DataView,
                                         ::blink::mojom::IDBObserverChangesPtr> {
  static bool IsNull(const ::blink::mojom::IDBObserverChangesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBObserverChangesPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IDBObserverChanges::observation_index_map)& observation_index_map(
      const ::blink::mojom::IDBObserverChangesPtr& input) {
    return input->observation_index_map;
  }

  static const decltype(::blink::mojom::IDBObserverChanges::transaction_map)& transaction_map(
      const ::blink::mojom::IDBObserverChangesPtr& input) {
    return input->transaction_map;
  }

  static  decltype(::blink::mojom::IDBObserverChanges::observations)& observations(
       ::blink::mojom::IDBObserverChangesPtr& input) {
    return input->observations;
  }

  static bool Read(::blink::mojom::IDBObserverChanges::DataView input, ::blink::mojom::IDBObserverChangesPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBError::DataView,
                                         ::blink::mojom::IDBErrorPtr> {
  static bool IsNull(const ::blink::mojom::IDBErrorPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBErrorPtr* output) { output->reset(); }

  static decltype(::blink::mojom::IDBError::error_code) error_code(
      const ::blink::mojom::IDBErrorPtr& input) {
    return input->error_code;
  }

  static const decltype(::blink::mojom::IDBError::error_message)& error_message(
      const ::blink::mojom::IDBErrorPtr& input) {
    return input->error_message;
  }

  static bool Read(::blink::mojom::IDBError::DataView input, ::blink::mojom::IDBErrorPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::IDBCursorValue::DataView,
                                         ::blink::mojom::IDBCursorValuePtr> {
  static bool IsNull(const ::blink::mojom::IDBCursorValuePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBCursorValuePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::IDBCursorValue::keys)& keys(
      const ::blink::mojom::IDBCursorValuePtr& input) {
    return input->keys;
  }

  static const decltype(::blink::mojom::IDBCursorValue::primary_keys)& primary_keys(
      const ::blink::mojom::IDBCursorValuePtr& input) {
    return input->primary_keys;
  }

  static  decltype(::blink::mojom::IDBCursorValue::values)& values(
       ::blink::mojom::IDBCursorValuePtr& input) {
    return input->values;
  }

  static bool Read(::blink::mojom::IDBCursorValue::DataView input, ::blink::mojom::IDBCursorValuePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT UnionTraits<::blink::mojom::IDBKeyData::DataView,
                                        ::blink::mojom::IDBKeyDataPtr> {
  static bool IsNull(const ::blink::mojom::IDBKeyDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBKeyDataPtr* output) { output->reset(); }

  static ::blink::mojom::IDBKeyData::Tag GetTag(const ::blink::mojom::IDBKeyDataPtr& input) {
    return input->which();
  }

  static const std::vector<::blink::IndexedDBKey>& key_array(const ::blink::mojom::IDBKeyDataPtr& input) {
    return input->get_key_array();
  }

  static const std::vector<uint8_t>& binary(const ::blink::mojom::IDBKeyDataPtr& input) {
    return input->get_binary();
  }

  static const base::string16& string(const ::blink::mojom::IDBKeyDataPtr& input) {
    return input->get_string();
  }

  static  double date(const ::blink::mojom::IDBKeyDataPtr& input) {
    return input->get_date();
  }

  static  double number(const ::blink::mojom::IDBKeyDataPtr& input) {
    return input->get_number();
  }

  static  bool other_invalid(const ::blink::mojom::IDBKeyDataPtr& input) {
    return input->get_other_invalid();
  }

  static  bool other_null(const ::blink::mojom::IDBKeyDataPtr& input) {
    return input->get_other_null();
  }

  static bool Read(::blink::mojom::IDBKeyData::DataView input, ::blink::mojom::IDBKeyDataPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT UnionTraits<::blink::mojom::IDBKeyPathData::DataView,
                                        ::blink::mojom::IDBKeyPathDataPtr> {
  static bool IsNull(const ::blink::mojom::IDBKeyPathDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::IDBKeyPathDataPtr* output) { output->reset(); }

  static ::blink::mojom::IDBKeyPathData::Tag GetTag(const ::blink::mojom::IDBKeyPathDataPtr& input) {
    return input->which();
  }

  static const base::string16& string(const ::blink::mojom::IDBKeyPathDataPtr& input) {
    return input->get_string();
  }

  static const std::vector<base::string16>& string_array(const ::blink::mojom::IDBKeyPathDataPtr& input) {
    return input->get_string_array();
  }

  static bool Read(::blink::mojom::IDBKeyPathData::DataView input, ::blink::mojom::IDBKeyPathDataPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_H_