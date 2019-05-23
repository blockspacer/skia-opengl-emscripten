// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT IDBCallbacksInterceptorForTesting : public IDBCallbacks {
  virtual IDBCallbacks* GetForwardingInterface() = 0;
  void Error(int32_t code, const base::string16& message) override;
  void SuccessNamesAndVersionsList(std::vector<IDBNameAndVersionPtr> value) override;
  void SuccessStringList(const std::vector<base::string16>& value) override;
  void Blocked(int64_t existing_version) override;
  void UpgradeNeeded(IDBDatabaseAssociatedPtrInfo database, int64_t old_version, IDBDataLoss data_loss, const std::string& data_loss_message, const ::blink::IndexedDBDatabaseMetadata& db_metadata) override;
  void SuccessDatabase(IDBDatabaseAssociatedPtrInfo database, const ::blink::IndexedDBDatabaseMetadata& metadata) override;
  void SuccessCursor(IDBCursorAssociatedPtrInfo cursor, const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, IDBValuePtr value) override;
  void SuccessValue(IDBReturnValuePtr value) override;
  void SuccessArray(std::vector<IDBReturnValuePtr> values) override;
  void SuccessKey(const ::blink::IndexedDBKey& key) override;
  void SuccessInteger(int64_t value) override;
  void Success() override;
};
class BLINK_COMMON_EXPORT IDBCallbacksAsyncWaiter {
 public:
  explicit IDBCallbacksAsyncWaiter(IDBCallbacks* proxy);
  ~IDBCallbacksAsyncWaiter();

 private:
  IDBCallbacks* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBCallbacksAsyncWaiter);
};


class BLINK_COMMON_EXPORT IDBDatabaseCallbacksInterceptorForTesting : public IDBDatabaseCallbacks {
  virtual IDBDatabaseCallbacks* GetForwardingInterface() = 0;
  void ForcedClose() override;
  void VersionChange(int64_t old_version, int64_t new_version) override;
  void Abort(int64_t transaction_id, int32_t code, const base::string16& message) override;
  void Complete(int64_t transaction_id) override;
  void Changes(IDBObserverChangesPtr changes) override;
};
class BLINK_COMMON_EXPORT IDBDatabaseCallbacksAsyncWaiter {
 public:
  explicit IDBDatabaseCallbacksAsyncWaiter(IDBDatabaseCallbacks* proxy);
  ~IDBDatabaseCallbacksAsyncWaiter();

 private:
  IDBDatabaseCallbacks* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBDatabaseCallbacksAsyncWaiter);
};


class BLINK_COMMON_EXPORT IDBCursorInterceptorForTesting : public IDBCursor {
  virtual IDBCursor* GetForwardingInterface() = 0;
  void Advance(uint32_t count, AdvanceCallback callback) override;
  void CursorContinue(const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, CursorContinueCallback callback) override;
  void Prefetch(int32_t count, PrefetchCallback callback) override;
  void PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) override;
};
class BLINK_COMMON_EXPORT IDBCursorAsyncWaiter {
 public:
  explicit IDBCursorAsyncWaiter(IDBCursor* proxy);
  ~IDBCursorAsyncWaiter();
  void Advance(
      uint32_t count, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value);
  void CursorContinue(
      const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value);
  void Prefetch(
      int32_t count, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value);

 private:
  IDBCursor* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBCursorAsyncWaiter);
};


class BLINK_COMMON_EXPORT IDBTransactionInterceptorForTesting : public IDBTransaction {
  virtual IDBTransaction* GetForwardingInterface() = 0;
  void CreateObjectStore(int64_t object_store_id, const base::string16& name, const ::blink::IndexedDBKeyPath& key_path, bool auto_increment) override;
  void DeleteObjectStore(int64_t object_store_id) override;
  void Put(int64_t object_store_id, IDBValuePtr value, const ::blink::IndexedDBKey& key, IDBPutMode mode, const std::vector<::blink::IndexedDBIndexKeys>& index_keys, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void Commit(int64_t num_errors_handled) override;
};
class BLINK_COMMON_EXPORT IDBTransactionAsyncWaiter {
 public:
  explicit IDBTransactionAsyncWaiter(IDBTransaction* proxy);
  ~IDBTransactionAsyncWaiter();

 private:
  IDBTransaction* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBTransactionAsyncWaiter);
};


class BLINK_COMMON_EXPORT IDBDatabaseInterceptorForTesting : public IDBDatabase {
  virtual IDBDatabase* GetForwardingInterface() = 0;
  void RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& new_name) override;
  void CreateTransaction(IDBTransactionAssociatedRequest transaction_request, int64_t transaction_id, const std::vector<int64_t>& object_store_ids, IDBTransactionMode mode) override;
  void Close() override;
  void VersionChangeIgnored() override;
  void AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint32_t operation_types) override;
  void RemoveObservers(const std::vector<int32_t>& observers) override;
  void Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, bool key_only, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, bool key_only, int64_t max_count, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void SetIndexKeys(int64_t transaction_id, int64_t object_store_id, const ::blink::IndexedDBKey& primary_key, const std::vector<::blink::IndexedDBIndexKeys>& index_keys) override;
  void SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const std::vector<int64_t>& index_ids) override;
  void OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, IDBCursorDirection direction, bool key_only, IDBTaskType task_type, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void DeleteRange(int64_t transaction_id, int64_t object_store_id, const ::blink::IndexedDBKeyRange& key_range, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void GetKeyGeneratorCurrentNumber(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void Clear(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) override;
  void CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& name, const ::blink::IndexedDBKeyPath& key_path, bool unique, bool multi_entry) override;
  void DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) override;
  void RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& new_name) override;
  void Abort(int64_t transaction_id) override;
};
class BLINK_COMMON_EXPORT IDBDatabaseAsyncWaiter {
 public:
  explicit IDBDatabaseAsyncWaiter(IDBDatabase* proxy);
  ~IDBDatabaseAsyncWaiter();

 private:
  IDBDatabase* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(IDBDatabaseAsyncWaiter);
};


class BLINK_COMMON_EXPORT IDBFactoryInterceptorForTesting : public IDBFactory {
  virtual IDBFactory* GetForwardingInterface() = 0;
  void GetDatabaseInfo(IDBCallbacksAssociatedPtrInfo callbacks) override;
  void GetDatabaseNames(IDBCallbacksAssociatedPtrInfo callbacks) override;
  void Open(IDBCallbacksAssociatedPtrInfo callbacks, IDBDatabaseCallbacksAssociatedPtrInfo database_callbacks, const base::string16& name, int64_t version, IDBTransactionAssociatedRequest version_change_transaction_request, int64_t transaction_id) override;
  void DeleteDatabase(IDBCallbacksAssociatedPtrInfo callbacks, const base::string16& name, bool force_close) override;
  void AbortTransactionsAndCompactDatabase(AbortTransactionsAndCompactDatabaseCallback callback) override;
  void AbortTransactionsForDatabase(AbortTransactionsForDatabaseCallback callback) override;
};
class BLINK_COMMON_EXPORT IDBFactoryAsyncWaiter {
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




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_TEST_UTILS_H_