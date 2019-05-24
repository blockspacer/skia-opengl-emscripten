// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-blink.h"
#include "third_party/blink/renderer/modules/modules_export.h"


namespace blink {
namespace mojom {
namespace blink {


class MODULES_EXPORT IDBCallbacksInterceptorForTesting : public IDBCallbacks {
  virtual IDBCallbacks* GetForwardingInterface() = 0;
  void Error(int32_t code, const WTF::String& message) override;
  void SuccessNamesAndVersionsList(WTF::Vector<IDBNameAndVersionPtr> value) override;
  void SuccessStringList(const WTF::Vector<WTF::String>& value) override;
  void Blocked(int64_t existing_version) override;
  void UpgradeNeeded(IDBDatabaseAssociatedPtrInfo database, int64_t old_version, IDBDataLoss data_loss, const WTF::String& data_loss_message, const ::blink::IDBDatabaseMetadata& db_metadata) override;
  void SuccessDatabase(IDBDatabaseAssociatedPtrInfo database, const ::blink::IDBDatabaseMetadata& metadata) override;
  void SuccessCursor(IDBCursorAssociatedPtrInfo cursor, std::unique_ptr<::blink::IDBKey> key, std::unique_ptr<::blink::IDBKey> primary_key, base::Optional<std::unique_ptr<::blink::IDBValue>> value) override;
  void SuccessValue(IDBReturnValuePtr value) override;
  void SuccessArray(WTF::Vector<IDBReturnValuePtr> values) override;
  void SuccessKey(std::unique_ptr<::blink::IDBKey> key) override;
  void SuccessInteger(int64_t value) override;
  void Success() override;
};
class MODULES_EXPORT IDBCallbacksAsyncWaiter {
 public:
  explicit IDBCallbacksAsyncWaiter(IDBCallbacks* proxy);
  ~IDBCallbacksAsyncWaiter();

 private:
  IDBCallbacks* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBCallbacksAsyncWaiter);
};


class MODULES_EXPORT IDBDatabaseCallbacksInterceptorForTesting : public IDBDatabaseCallbacks {
  virtual IDBDatabaseCallbacks* GetForwardingInterface() = 0;
  void ForcedClose() override;
  void VersionChange(int64_t old_version, int64_t new_version) override;
  void Abort(int64_t transaction_id, int32_t code, const WTF::String& message) override;
  void Complete(int64_t transaction_id) override;
  void Changes(IDBObserverChangesPtr changes) override;
};
class MODULES_EXPORT IDBDatabaseCallbacksAsyncWaiter {
 public:
  explicit IDBDatabaseCallbacksAsyncWaiter(IDBDatabaseCallbacks* proxy);
  ~IDBDatabaseCallbacksAsyncWaiter();

 private:
  IDBDatabaseCallbacks* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBDatabaseCallbacksAsyncWaiter);
};


class MODULES_EXPORT IDBCursorInterceptorForTesting : public IDBCursor {
  virtual IDBCursor* GetForwardingInterface() = 0;
  void Advance(uint32_t count, AdvanceCallback callback) override;
  void CursorContinue(std::unique_ptr<::blink::IDBKey> key, std::unique_ptr<::blink::IDBKey> primary_key, CursorContinueCallback callback) override;
  void Prefetch(int32_t count, PrefetchCallback callback) override;
  void PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) override;
};
class MODULES_EXPORT IDBCursorAsyncWaiter {
 public:
  explicit IDBCursorAsyncWaiter(IDBCursor* proxy);
  ~IDBCursorAsyncWaiter();
  void Advance(
      uint32_t count, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value);
  void CursorContinue(
      std::unique_ptr<::blink::IDBKey> key, std::unique_ptr<::blink::IDBKey> primary_key, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value);
  void Prefetch(
      int32_t count, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value);

 private:
  IDBCursor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBCursorAsyncWaiter);
};


class MODULES_EXPORT IDBTransactionInterceptorForTesting : public IDBTransaction {
  virtual IDBTransaction* GetForwardingInterface() = 0;
  void CreateObjectStore(int64_t object_store_id, const WTF::String& name, const ::blink::IDBKeyPath& key_path, bool auto_increment) override;
  void DeleteObjectStore(int64_t object_store_id) override;
  void Put(int64_t object_store_id, std::unique_ptr<::blink::IDBValue> value, std::unique_ptr<::blink::IDBKey> key, IDBPutMode mode, WTF::Vector<::blink::IDBIndexKeys> index_keys, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void Commit(int64_t num_errors_handled) override;
};
class MODULES_EXPORT IDBTransactionAsyncWaiter {
 public:
  explicit IDBTransactionAsyncWaiter(IDBTransaction* proxy);
  ~IDBTransactionAsyncWaiter();

 private:
  IDBTransaction* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBTransactionAsyncWaiter);
};


class MODULES_EXPORT IDBDatabaseInterceptorForTesting : public IDBDatabase {
  virtual IDBDatabase* GetForwardingInterface() = 0;
  void RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const WTF::String& new_name) override;
  void CreateTransaction(IDBTransactionAssociatedRequest transaction_request, int64_t transaction_id, const WTF::Vector<int64_t>& object_store_ids, IDBTransactionMode mode) override;
  void Close() override;
  void VersionChangeIgnored() override;
  void AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint32_t operation_types) override;
  void RemoveObservers(const WTF::Vector<int32_t>& observers) override;
  void Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, IDBKeyRangePtr key_range, bool key_only, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, IDBKeyRangePtr key_range, bool key_only, int64_t max_count, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void SetIndexKeys(int64_t transaction_id, int64_t object_store_id, std::unique_ptr<::blink::IDBKey> primary_key, WTF::Vector<::blink::IDBIndexKeys> index_keys) override;
  void SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const WTF::Vector<int64_t>& index_ids) override;
  void OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, IDBKeyRangePtr key_range, IDBCursorDirection direction, bool key_only, IDBTaskType task_type, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, IDBKeyRangePtr key_range, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void DeleteRange(int64_t transaction_id, int64_t object_store_id, IDBKeyRangePtr key_range, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void GetKeyGeneratorCurrentNumber(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void Clear(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const WTF::String& name, const ::blink::IDBKeyPath& key_path, bool unique, bool multi_entry) override;
  void DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) override;
  void RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const WTF::String& new_name) override;
  void Abort(int64_t transaction_id) override;
};
class MODULES_EXPORT IDBDatabaseAsyncWaiter {
 public:
  explicit IDBDatabaseAsyncWaiter(IDBDatabase* proxy);
  ~IDBDatabaseAsyncWaiter();

 private:
  IDBDatabase* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBDatabaseAsyncWaiter);
};


class MODULES_EXPORT IDBFactoryInterceptorForTesting : public IDBFactory {
  virtual IDBFactory* GetForwardingInterface() = 0;
  void GetDatabaseInfo(IDBCallbacksAssociatedPtrInfo callbacks) override;
  void GetDatabaseNames(IDBCallbacksAssociatedPtrInfo callbacks) override;
  void Open(IDBCallbacksAssociatedPtrInfo callbacks, IDBDatabaseCallbacksAssociatedPtrInfo database_callbacks, const WTF::String& name, int64_t version, IDBTransactionAssociatedRequest version_change_transaction_request, int64_t transaction_id) override;
  void DeleteDatabase(IDBCallbacksAssociatedPtrInfo callbacks, const WTF::String& name, bool force_close) override;
  void AbortTransactionsAndCompactDatabase(AbortTransactionsAndCompactDatabaseCallback callback) override;
  void AbortTransactionsForDatabase(AbortTransactionsForDatabaseCallback callback) override;
};
class MODULES_EXPORT IDBFactoryAsyncWaiter {
 public:
  explicit IDBFactoryAsyncWaiter(IDBFactory* proxy);
  ~IDBFactoryAsyncWaiter();
  void AbortTransactionsAndCompactDatabase(
      IDBStatus* out_status);
  void AbortTransactionsForDatabase(
      IDBStatus* out_status);

 private:
  IDBFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBFactoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_BLINK_TEST_UTILS_H_