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


#include "components/services/leveldb/public/interfaces/leveldb.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/services/filesystem/public/interfaces/directory.mojom.h"
#include "mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"


#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_JUMBO_H_
#include "components/services/leveldb/leveldb_struct_traits.h"
#include "mojo/public/cpp/base/memory_allocator_dump_cross_process_uid_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#endif


namespace leveldb {
namespace mojom {


void LevelDBServiceInterceptorForTesting::Open(::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, OpenCallback callback) {
  GetForwardingInterface()->Open(std::move(directory), std::move(dbname), std::move(memory_dump_id), std::move(database), std::move(callback));
}
void LevelDBServiceInterceptorForTesting::OpenWithOptions(const ::leveldb_env::Options& options, ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, OpenWithOptionsCallback callback) {
  GetForwardingInterface()->OpenWithOptions(std::move(options), std::move(directory), std::move(dbname), std::move(memory_dump_id), std::move(database), std::move(callback));
}
void LevelDBServiceInterceptorForTesting::OpenInMemory(const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, const std::string& tracking_name, LevelDBDatabaseAssociatedRequest database, OpenInMemoryCallback callback) {
  GetForwardingInterface()->OpenInMemory(std::move(memory_dump_id), std::move(tracking_name), std::move(database), std::move(callback));
}
void LevelDBServiceInterceptorForTesting::Destroy(::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, DestroyCallback callback) {
  GetForwardingInterface()->Destroy(std::move(directory), std::move(dbname), std::move(callback));
}
LevelDBServiceAsyncWaiter::LevelDBServiceAsyncWaiter(
    LevelDBService* proxy) : proxy_(proxy) {}

LevelDBServiceAsyncWaiter::~LevelDBServiceAsyncWaiter() = default;

void LevelDBServiceAsyncWaiter::Open(
    ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->Open(std::move(directory),std::move(dbname),std::move(memory_dump_id),std::move(database),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBServiceAsyncWaiter::OpenWithOptions(
    const ::leveldb_env::Options& options, ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->OpenWithOptions(std::move(options),std::move(directory),std::move(dbname),std::move(memory_dump_id),std::move(database),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBServiceAsyncWaiter::OpenInMemory(
    const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, const std::string& tracking_name, LevelDBDatabaseAssociatedRequest database, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->OpenInMemory(std::move(memory_dump_id),std::move(tracking_name),std::move(database),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBServiceAsyncWaiter::Destroy(
    ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->Destroy(std::move(directory),std::move(dbname),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}



void LevelDBDatabaseInterceptorForTesting::Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, PutCallback callback) {
  GetForwardingInterface()->Put(std::move(key), std::move(value), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::Delete(const std::vector<uint8_t>& key, DeleteCallback callback) {
  GetForwardingInterface()->Delete(std::move(key), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::DeletePrefixed(const std::vector<uint8_t>& key_prefix, DeletePrefixedCallback callback) {
  GetForwardingInterface()->DeletePrefixed(std::move(key_prefix), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::RewriteDB(RewriteDBCallback callback) {
  GetForwardingInterface()->RewriteDB(std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::Write(std::vector<BatchedOperationPtr> operations, WriteCallback callback) {
  GetForwardingInterface()->Write(std::move(operations), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::Get(const std::vector<uint8_t>& key, GetCallback callback) {
  GetForwardingInterface()->Get(std::move(key), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::GetPrefixed(const std::vector<uint8_t>& key_prefix, GetPrefixedCallback callback) {
  GetForwardingInterface()->GetPrefixed(std::move(key_prefix), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::CopyPrefixed(const std::vector<uint8_t>& source_key_prefix, const std::vector<uint8_t>& destination_key_prefix, CopyPrefixedCallback callback) {
  GetForwardingInterface()->CopyPrefixed(std::move(source_key_prefix), std::move(destination_key_prefix), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::GetSnapshot(GetSnapshotCallback callback) {
  GetForwardingInterface()->GetSnapshot(std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::ReleaseSnapshot(const base::UnguessableToken& snapshot) {
  GetForwardingInterface()->ReleaseSnapshot(std::move(snapshot));
}
void LevelDBDatabaseInterceptorForTesting::GetFromSnapshot(const base::UnguessableToken& snapshot, const std::vector<uint8_t>& key, GetFromSnapshotCallback callback) {
  GetForwardingInterface()->GetFromSnapshot(std::move(snapshot), std::move(key), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::NewIterator(NewIteratorCallback callback) {
  GetForwardingInterface()->NewIterator(std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::NewIteratorFromSnapshot(const base::UnguessableToken& snapshot, NewIteratorFromSnapshotCallback callback) {
  GetForwardingInterface()->NewIteratorFromSnapshot(std::move(snapshot), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::ReleaseIterator(const base::UnguessableToken& iterator) {
  GetForwardingInterface()->ReleaseIterator(std::move(iterator));
}
void LevelDBDatabaseInterceptorForTesting::IteratorSeekToFirst(const base::UnguessableToken& iterator, IteratorSeekToFirstCallback callback) {
  GetForwardingInterface()->IteratorSeekToFirst(std::move(iterator), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::IteratorSeekToLast(const base::UnguessableToken& iterator, IteratorSeekToLastCallback callback) {
  GetForwardingInterface()->IteratorSeekToLast(std::move(iterator), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::IteratorSeek(const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, IteratorSeekCallback callback) {
  GetForwardingInterface()->IteratorSeek(std::move(iterator), std::move(target), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::IteratorNext(const base::UnguessableToken& iterator, IteratorNextCallback callback) {
  GetForwardingInterface()->IteratorNext(std::move(iterator), std::move(callback));
}
void LevelDBDatabaseInterceptorForTesting::IteratorPrev(const base::UnguessableToken& iterator, IteratorPrevCallback callback) {
  GetForwardingInterface()->IteratorPrev(std::move(iterator), std::move(callback));
}
LevelDBDatabaseAsyncWaiter::LevelDBDatabaseAsyncWaiter(
    LevelDBDatabase* proxy) : proxy_(proxy) {}

LevelDBDatabaseAsyncWaiter::~LevelDBDatabaseAsyncWaiter() = default;

void LevelDBDatabaseAsyncWaiter::Put(
    const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->Put(std::move(key),std::move(value),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::Delete(
    const std::vector<uint8_t>& key, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->Delete(std::move(key),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::DeletePrefixed(
    const std::vector<uint8_t>& key_prefix, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->DeletePrefixed(std::move(key_prefix),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::RewriteDB(
    DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->RewriteDB(
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::Write(
    std::vector<BatchedOperationPtr> operations, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->Write(std::move(operations),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::Get(
    const std::vector<uint8_t>& key, DatabaseError* out_status, std::vector<uint8_t>* out_value) {
  base::RunLoop loop;
  proxy_->Get(std::move(key),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             std::vector<uint8_t>* out_value
,
             DatabaseError status,
             const std::vector<uint8_t>& value) {*out_status = std::move(status);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_status,
          out_value));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::GetPrefixed(
    const std::vector<uint8_t>& key_prefix, DatabaseError* out_status, std::vector<KeyValuePtr>* out_data) {
  base::RunLoop loop;
  proxy_->GetPrefixed(std::move(key_prefix),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             std::vector<KeyValuePtr>* out_data
,
             DatabaseError status,
             std::vector<KeyValuePtr> data) {*out_status = std::move(status);*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_status,
          out_data));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::CopyPrefixed(
    const std::vector<uint8_t>& source_key_prefix, const std::vector<uint8_t>& destination_key_prefix, DatabaseError* out_status) {
  base::RunLoop loop;
  proxy_->CopyPrefixed(std::move(source_key_prefix),std::move(destination_key_prefix),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             DatabaseError status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::GetSnapshot(
    base::UnguessableToken* out_snapshot) {
  base::RunLoop loop;
  proxy_->GetSnapshot(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_snapshot
,
             const base::UnguessableToken& snapshot) {*out_snapshot = std::move(snapshot);
            loop->Quit();
          },
          &loop,
          out_snapshot));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::GetFromSnapshot(
    const base::UnguessableToken& snapshot, const std::vector<uint8_t>& key, DatabaseError* out_status, std::vector<uint8_t>* out_value) {
  base::RunLoop loop;
  proxy_->GetFromSnapshot(std::move(snapshot),std::move(key),
      base::BindOnce(
          [](base::RunLoop* loop,
             DatabaseError* out_status
,
             std::vector<uint8_t>* out_value
,
             DatabaseError status,
             const std::vector<uint8_t>& value) {*out_status = std::move(status);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_status,
          out_value));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::NewIterator(
    base::UnguessableToken* out_iterator) {
  base::RunLoop loop;
  proxy_->NewIterator(
      base::BindOnce(
          [](base::RunLoop* loop,
             base::UnguessableToken* out_iterator
,
             const base::UnguessableToken& iterator) {*out_iterator = std::move(iterator);
            loop->Quit();
          },
          &loop,
          out_iterator));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::NewIteratorFromSnapshot(
    const base::UnguessableToken& snapshot, base::Optional<base::UnguessableToken>* out_iterator) {
  base::RunLoop loop;
  proxy_->NewIteratorFromSnapshot(std::move(snapshot),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::Optional<base::UnguessableToken>* out_iterator
,
             const base::Optional<base::UnguessableToken>& iterator) {*out_iterator = std::move(iterator);
            loop->Quit();
          },
          &loop,
          out_iterator));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::IteratorSeekToFirst(
    const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->IteratorSeekToFirst(std::move(iterator),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_valid
,
             DatabaseError* out_status
,
             base::Optional<std::vector<uint8_t>>* out_key
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             bool valid,
             DatabaseError status,
             const base::Optional<std::vector<uint8_t>>& key,
             const base::Optional<std::vector<uint8_t>>& value) {*out_valid = std::move(valid);*out_status = std::move(status);*out_key = std::move(key);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_valid,
          out_status,
          out_key,
          out_value));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::IteratorSeekToLast(
    const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->IteratorSeekToLast(std::move(iterator),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_valid
,
             DatabaseError* out_status
,
             base::Optional<std::vector<uint8_t>>* out_key
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             bool valid,
             DatabaseError status,
             const base::Optional<std::vector<uint8_t>>& key,
             const base::Optional<std::vector<uint8_t>>& value) {*out_valid = std::move(valid);*out_status = std::move(status);*out_key = std::move(key);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_valid,
          out_status,
          out_key,
          out_value));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::IteratorSeek(
    const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->IteratorSeek(std::move(iterator),std::move(target),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_valid
,
             DatabaseError* out_status
,
             base::Optional<std::vector<uint8_t>>* out_key
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             bool valid,
             DatabaseError status,
             const base::Optional<std::vector<uint8_t>>& key,
             const base::Optional<std::vector<uint8_t>>& value) {*out_valid = std::move(valid);*out_status = std::move(status);*out_key = std::move(key);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_valid,
          out_status,
          out_key,
          out_value));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::IteratorNext(
    const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->IteratorNext(std::move(iterator),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_valid
,
             DatabaseError* out_status
,
             base::Optional<std::vector<uint8_t>>* out_key
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             bool valid,
             DatabaseError status,
             const base::Optional<std::vector<uint8_t>>& key,
             const base::Optional<std::vector<uint8_t>>& value) {*out_valid = std::move(valid);*out_status = std::move(status);*out_key = std::move(key);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_valid,
          out_status,
          out_key,
          out_value));
  loop.Run();
}
void LevelDBDatabaseAsyncWaiter::IteratorPrev(
    const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value) {
  base::RunLoop loop;
  proxy_->IteratorPrev(std::move(iterator),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_valid
,
             DatabaseError* out_status
,
             base::Optional<std::vector<uint8_t>>* out_key
,
             base::Optional<std::vector<uint8_t>>* out_value
,
             bool valid,
             DatabaseError status,
             const base::Optional<std::vector<uint8_t>>& key,
             const base::Optional<std::vector<uint8_t>>& value) {*out_valid = std::move(valid);*out_status = std::move(status);*out_key = std::move(key);*out_value = std::move(value);
            loop->Quit();
          },
          &loop,
          out_valid,
          out_status,
          out_key,
          out_value));
  loop.Run();
}





}  // namespace mojom
}  // namespace leveldb

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif