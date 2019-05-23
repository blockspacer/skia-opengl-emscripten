// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/indexeddb/indexeddb.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "third_party/blink/public/mojom/blob/blob.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/bindings/array_traits_span.h"
#include "third_party/blink/public/common/indexeddb/indexed_db_default_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void IDBCallbacksInterceptorForTesting::Error(int32_t code, const base::string16& message) {
  GetForwardingInterface()->Error(std::move(code), std::move(message));
}
void IDBCallbacksInterceptorForTesting::SuccessNamesAndVersionsList(std::vector<IDBNameAndVersionPtr> value) {
  GetForwardingInterface()->SuccessNamesAndVersionsList(std::move(value));
}
void IDBCallbacksInterceptorForTesting::SuccessStringList(const std::vector<base::string16>& value) {
  GetForwardingInterface()->SuccessStringList(std::move(value));
}
void IDBCallbacksInterceptorForTesting::Blocked(int64_t existing_version) {
  GetForwardingInterface()->Blocked(std::move(existing_version));
}
void IDBCallbacksInterceptorForTesting::UpgradeNeeded(IDBDatabaseAssociatedPtrInfo database, int64_t old_version, IDBDataLoss data_loss, const std::string& data_loss_message, const ::blink::IndexedDBDatabaseMetadata& db_metadata) {
  GetForwardingInterface()->UpgradeNeeded(std::move(database), std::move(old_version), std::move(data_loss), std::move(data_loss_message), std::move(db_metadata));
}
void IDBCallbacksInterceptorForTesting::SuccessDatabase(IDBDatabaseAssociatedPtrInfo database, const ::blink::IndexedDBDatabaseMetadata& metadata) {
  GetForwardingInterface()->SuccessDatabase(std::move(database), std::move(metadata));
}
void IDBCallbacksInterceptorForTesting::SuccessCursor(IDBCursorAssociatedPtrInfo cursor, const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, IDBValuePtr value) {
  GetForwardingInterface()->SuccessCursor(std::move(cursor), std::move(key), std::move(primary_key), std::move(value));
}
void IDBCallbacksInterceptorForTesting::SuccessValue(IDBReturnValuePtr value) {
  GetForwardingInterface()->SuccessValue(std::move(value));
}
void IDBCallbacksInterceptorForTesting::SuccessArray(std::vector<IDBReturnValuePtr> values) {
  GetForwardingInterface()->SuccessArray(std::move(values));
}
void IDBCallbacksInterceptorForTesting::SuccessKey(const ::blink::IndexedDBKey& key) {
  GetForwardingInterface()->SuccessKey(std::move(key));
}
void IDBCallbacksInterceptorForTesting::SuccessInteger(int64_t value) {
  GetForwardingInterface()->SuccessInteger(std::move(value));
}
void IDBCallbacksInterceptorForTesting::Success() {
  GetForwardingInterface()->Success();
}
IDBCallbacksAsyncWaiter::IDBCallbacksAsyncWaiter(
    IDBCallbacks* proxy) : proxy_(proxy) {}

IDBCallbacksAsyncWaiter::~IDBCallbacksAsyncWaiter() = default;




void IDBDatabaseCallbacksInterceptorForTesting::ForcedClose() {
  GetForwardingInterface()->ForcedClose();
}
void IDBDatabaseCallbacksInterceptorForTesting::VersionChange(int64_t old_version, int64_t new_version) {
  GetForwardingInterface()->VersionChange(std::move(old_version), std::move(new_version));
}
void IDBDatabaseCallbacksInterceptorForTesting::Abort(int64_t transaction_id, int32_t code, const base::string16& message) {
  GetForwardingInterface()->Abort(std::move(transaction_id), std::move(code), std::move(message));
}
void IDBDatabaseCallbacksInterceptorForTesting::Complete(int64_t transaction_id) {
  GetForwardingInterface()->Complete(std::move(transaction_id));
}
void IDBDatabaseCallbacksInterceptorForTesting::Changes(IDBObserverChangesPtr changes) {
  GetForwardingInterface()->Changes(std::move(changes));
}
IDBDatabaseCallbacksAsyncWaiter::IDBDatabaseCallbacksAsyncWaiter(
    IDBDatabaseCallbacks* proxy) : proxy_(proxy) {}

IDBDatabaseCallbacksAsyncWaiter::~IDBDatabaseCallbacksAsyncWaiter() = default;




void IDBCursorInterceptorForTesting::Advance(uint32_t count, AdvanceCallback callback) {
  GetForwardingInterface()->Advance(std::move(count), std::move(callback));
}
void IDBCursorInterceptorForTesting::CursorContinue(const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, CursorContinueCallback callback) {
  GetForwardingInterface()->CursorContinue(std::move(key), std::move(primary_key), std::move(callback));
}
void IDBCursorInterceptorForTesting::Prefetch(int32_t count, PrefetchCallback callback) {
  GetForwardingInterface()->Prefetch(std::move(count), std::move(callback));
}
void IDBCursorInterceptorForTesting::PrefetchReset(int32_t used_prefetches, int32_t unused_prefetches) {
  GetForwardingInterface()->PrefetchReset(std::move(used_prefetches), std::move(unused_prefetches));
}
IDBCursorAsyncWaiter::IDBCursorAsyncWaiter(
    IDBCursor* proxy) : proxy_(proxy) {}

IDBCursorAsyncWaiter::~IDBCursorAsyncWaiter() = default;

void IDBCursorAsyncWaiter::Advance(
    uint32_t count, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value) {
  base::RunLoop loop;
  proxy_->Advance(std::move(count),
      base::BindOnce(
          [](base::RunLoop* loop,
             IDBErrorPtr* out_error
,
             IDBCursorValuePtr* out_value
,
             IDBErrorPtr error,
             IDBCursorValuePtr value) {*out_error = std::move(error);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_error,
          out_value));
  loop.Run();
}
void IDBCursorAsyncWaiter::CursorContinue(
    const ::blink::IndexedDBKey& key, const ::blink::IndexedDBKey& primary_key, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value) {
  base::RunLoop loop;
  proxy_->CursorContinue(std::move(key),std::move(primary_key),
      base::BindOnce(
          [](base::RunLoop* loop,
             IDBErrorPtr* out_error
,
             IDBCursorValuePtr* out_value
,
             IDBErrorPtr error,
             IDBCursorValuePtr value) {*out_error = std::move(error);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_error,
          out_value));
  loop.Run();
}
void IDBCursorAsyncWaiter::Prefetch(
    int32_t count, IDBErrorPtr* out_error, IDBCursorValuePtr* out_value) {
  base::RunLoop loop;
  proxy_->Prefetch(std::move(count),
      base::BindOnce(
          [](base::RunLoop* loop,
             IDBErrorPtr* out_error
,
             IDBCursorValuePtr* out_value
,
             IDBErrorPtr error,
             IDBCursorValuePtr value) {*out_error = std::move(error);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_error,
          out_value));
  loop.Run();
}



void IDBTransactionInterceptorForTesting::CreateObjectStore(int64_t object_store_id, const base::string16& name, const ::blink::IndexedDBKeyPath& key_path, bool auto_increment) {
  GetForwardingInterface()->CreateObjectStore(std::move(object_store_id), std::move(name), std::move(key_path), std::move(auto_increment));
}
void IDBTransactionInterceptorForTesting::DeleteObjectStore(int64_t object_store_id) {
  GetForwardingInterface()->DeleteObjectStore(std::move(object_store_id));
}
void IDBTransactionInterceptorForTesting::Put(int64_t object_store_id, IDBValuePtr value, const ::blink::IndexedDBKey& key, IDBPutMode mode, const std::vector<::blink::IndexedDBIndexKeys>& index_keys, IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Put(std::move(object_store_id), std::move(value), std::move(key), std::move(mode), std::move(index_keys), std::move(callbacks));
}
void IDBTransactionInterceptorForTesting::Commit(int64_t num_errors_handled) {
  GetForwardingInterface()->Commit(std::move(num_errors_handled));
}
IDBTransactionAsyncWaiter::IDBTransactionAsyncWaiter(
    IDBTransaction* proxy) : proxy_(proxy) {}

IDBTransactionAsyncWaiter::~IDBTransactionAsyncWaiter() = default;




void IDBDatabaseInterceptorForTesting::RenameObjectStore(int64_t transaction_id, int64_t object_store_id, const base::string16& new_name) {
  GetForwardingInterface()->RenameObjectStore(std::move(transaction_id), std::move(object_store_id), std::move(new_name));
}
void IDBDatabaseInterceptorForTesting::CreateTransaction(IDBTransactionAssociatedRequest transaction_request, int64_t transaction_id, const std::vector<int64_t>& object_store_ids, IDBTransactionMode mode) {
  GetForwardingInterface()->CreateTransaction(std::move(transaction_request), std::move(transaction_id), std::move(object_store_ids), std::move(mode));
}
void IDBDatabaseInterceptorForTesting::Close() {
  GetForwardingInterface()->Close();
}
void IDBDatabaseInterceptorForTesting::VersionChangeIgnored() {
  GetForwardingInterface()->VersionChangeIgnored();
}
void IDBDatabaseInterceptorForTesting::AddObserver(int64_t transaction_id, int32_t observer_id, bool include_transaction, bool no_records, bool values, uint32_t operation_types) {
  GetForwardingInterface()->AddObserver(std::move(transaction_id), std::move(observer_id), std::move(include_transaction), std::move(no_records), std::move(values), std::move(operation_types));
}
void IDBDatabaseInterceptorForTesting::RemoveObservers(const std::vector<int32_t>& observers) {
  GetForwardingInterface()->RemoveObservers(std::move(observers));
}
void IDBDatabaseInterceptorForTesting::Get(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, bool key_only, IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Get(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(key_range), std::move(key_only), std::move(callbacks));
}
void IDBDatabaseInterceptorForTesting::GetAll(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, bool key_only, int64_t max_count, IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->GetAll(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(key_range), std::move(key_only), std::move(max_count), std::move(callbacks));
}
void IDBDatabaseInterceptorForTesting::SetIndexKeys(int64_t transaction_id, int64_t object_store_id, const ::blink::IndexedDBKey& primary_key, const std::vector<::blink::IndexedDBIndexKeys>& index_keys) {
  GetForwardingInterface()->SetIndexKeys(std::move(transaction_id), std::move(object_store_id), std::move(primary_key), std::move(index_keys));
}
void IDBDatabaseInterceptorForTesting::SetIndexesReady(int64_t transaction_id, int64_t object_store_id, const std::vector<int64_t>& index_ids) {
  GetForwardingInterface()->SetIndexesReady(std::move(transaction_id), std::move(object_store_id), std::move(index_ids));
}
void IDBDatabaseInterceptorForTesting::OpenCursor(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, IDBCursorDirection direction, bool key_only, IDBTaskType task_type, IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->OpenCursor(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(key_range), std::move(direction), std::move(key_only), std::move(task_type), std::move(callbacks));
}
void IDBDatabaseInterceptorForTesting::Count(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const ::blink::IndexedDBKeyRange& key_range, IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Count(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(key_range), std::move(callbacks));
}
void IDBDatabaseInterceptorForTesting::DeleteRange(int64_t transaction_id, int64_t object_store_id, const ::blink::IndexedDBKeyRange& key_range, IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->DeleteRange(std::move(transaction_id), std::move(object_store_id), std::move(key_range), std::move(callbacks));
}
void IDBDatabaseInterceptorForTesting::GetKeyGeneratorCurrentNumber(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->GetKeyGeneratorCurrentNumber(std::move(transaction_id), std::move(object_store_id), std::move(callbacks));
}
void IDBDatabaseInterceptorForTesting::Clear(int64_t transaction_id, int64_t object_store_id, IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->Clear(std::move(transaction_id), std::move(object_store_id), std::move(callbacks));
}
void IDBDatabaseInterceptorForTesting::CreateIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& name, const ::blink::IndexedDBKeyPath& key_path, bool unique, bool multi_entry) {
  GetForwardingInterface()->CreateIndex(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(name), std::move(key_path), std::move(unique), std::move(multi_entry));
}
void IDBDatabaseInterceptorForTesting::DeleteIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id) {
  GetForwardingInterface()->DeleteIndex(std::move(transaction_id), std::move(object_store_id), std::move(index_id));
}
void IDBDatabaseInterceptorForTesting::RenameIndex(int64_t transaction_id, int64_t object_store_id, int64_t index_id, const base::string16& new_name) {
  GetForwardingInterface()->RenameIndex(std::move(transaction_id), std::move(object_store_id), std::move(index_id), std::move(new_name));
}
void IDBDatabaseInterceptorForTesting::Abort(int64_t transaction_id) {
  GetForwardingInterface()->Abort(std::move(transaction_id));
}
IDBDatabaseAsyncWaiter::IDBDatabaseAsyncWaiter(
    IDBDatabase* proxy) : proxy_(proxy) {}

IDBDatabaseAsyncWaiter::~IDBDatabaseAsyncWaiter() = default;




void IDBFactoryInterceptorForTesting::GetDatabaseInfo(IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->GetDatabaseInfo(std::move(callbacks));
}
void IDBFactoryInterceptorForTesting::GetDatabaseNames(IDBCallbacksAssociatedPtrInfo callbacks) {
  GetForwardingInterface()->GetDatabaseNames(std::move(callbacks));
}
void IDBFactoryInterceptorForTesting::Open(IDBCallbacksAssociatedPtrInfo callbacks, IDBDatabaseCallbacksAssociatedPtrInfo database_callbacks, const base::string16& name, int64_t version, IDBTransactionAssociatedRequest version_change_transaction_request, int64_t transaction_id) {
  GetForwardingInterface()->Open(std::move(callbacks), std::move(database_callbacks), std::move(name), std::move(version), std::move(version_change_transaction_request), std::move(transaction_id));
}
void IDBFactoryInterceptorForTesting::DeleteDatabase(IDBCallbacksAssociatedPtrInfo callbacks, const base::string16& name, bool force_close) {
  GetForwardingInterface()->DeleteDatabase(std::move(callbacks), std::move(name), std::move(force_close));
}
void IDBFactoryInterceptorForTesting::AbortTransactionsAndCompactDatabase(AbortTransactionsAndCompactDatabaseCallback callback) {
  GetForwardingInterface()->AbortTransactionsAndCompactDatabase(std::move(callback));
}
void IDBFactoryInterceptorForTesting::AbortTransactionsForDatabase(AbortTransactionsForDatabaseCallback callback) {
  GetForwardingInterface()->AbortTransactionsForDatabase(std::move(callback));
}
IDBFactoryAsyncWaiter::IDBFactoryAsyncWaiter(
    IDBFactory* proxy) : proxy_(proxy) {}

IDBFactoryAsyncWaiter::~IDBFactoryAsyncWaiter() = default;

void IDBFactoryAsyncWaiter::AbortTransactionsAndCompactDatabase(
    IDBStatus* out_status) {
  base::RunLoop loop;
  proxy_->AbortTransactionsAndCompactDatabase(
      base::BindOnce(
          [](base::RunLoop* loop,
             IDBStatus* out_status
,
             IDBStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void IDBFactoryAsyncWaiter::AbortTransactionsForDatabase(
    IDBStatus* out_status) {
  base::RunLoop loop;
  proxy_->AbortTransactionsForDatabase(
      base::BindOnce(
          [](base::RunLoop* loop,
             IDBStatus* out_status
,
             IDBStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif