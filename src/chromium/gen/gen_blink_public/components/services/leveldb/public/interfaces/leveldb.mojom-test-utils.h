// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_TEST_UTILS_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_TEST_UTILS_H_

#include "components/services/leveldb/public/interfaces/leveldb.mojom.h"


namespace leveldb {
namespace mojom {


class  LevelDBServiceInterceptorForTesting : public LevelDBService {
  virtual LevelDBService* GetForwardingInterface() = 0;
  void Open(::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, OpenCallback callback) override;
  void OpenWithOptions(const ::leveldb_env::Options& options, ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, OpenWithOptionsCallback callback) override;
  void OpenInMemory(const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, const std::string& tracking_name, LevelDBDatabaseAssociatedRequest database, OpenInMemoryCallback callback) override;
  void Destroy(::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, DestroyCallback callback) override;
};
class  LevelDBServiceAsyncWaiter {
 public:
  explicit LevelDBServiceAsyncWaiter(LevelDBService* proxy);
  ~LevelDBServiceAsyncWaiter();
  void Open(
      ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, DatabaseError* out_status);
  void OpenWithOptions(
      const ::leveldb_env::Options& options, ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, LevelDBDatabaseAssociatedRequest database, DatabaseError* out_status);
  void OpenInMemory(
      const base::Optional<base::trace_event::MemoryAllocatorDumpGuid>& memory_dump_id, const std::string& tracking_name, LevelDBDatabaseAssociatedRequest database, DatabaseError* out_status);
  void Destroy(
      ::filesystem::mojom::DirectoryPtr directory, const std::string& dbname, DatabaseError* out_status);

 private:
  LevelDBService* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBServiceAsyncWaiter);
};


class  LevelDBDatabaseInterceptorForTesting : public LevelDBDatabase {
  virtual LevelDBDatabase* GetForwardingInterface() = 0;
  void Put(const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, PutCallback callback) override;
  void Delete(const std::vector<uint8_t>& key, DeleteCallback callback) override;
  void DeletePrefixed(const std::vector<uint8_t>& key_prefix, DeletePrefixedCallback callback) override;
  void RewriteDB(RewriteDBCallback callback) override;
  void Write(std::vector<BatchedOperationPtr> operations, WriteCallback callback) override;
  void Get(const std::vector<uint8_t>& key, GetCallback callback) override;
  void GetPrefixed(const std::vector<uint8_t>& key_prefix, GetPrefixedCallback callback) override;
  void CopyPrefixed(const std::vector<uint8_t>& source_key_prefix, const std::vector<uint8_t>& destination_key_prefix, CopyPrefixedCallback callback) override;
  void GetSnapshot(GetSnapshotCallback callback) override;
  void ReleaseSnapshot(const base::UnguessableToken& snapshot) override;
  void GetFromSnapshot(const base::UnguessableToken& snapshot, const std::vector<uint8_t>& key, GetFromSnapshotCallback callback) override;
  void NewIterator(NewIteratorCallback callback) override;
  void NewIteratorFromSnapshot(const base::UnguessableToken& snapshot, NewIteratorFromSnapshotCallback callback) override;
  void ReleaseIterator(const base::UnguessableToken& iterator) override;
  void IteratorSeekToFirst(const base::UnguessableToken& iterator, IteratorSeekToFirstCallback callback) override;
  void IteratorSeekToLast(const base::UnguessableToken& iterator, IteratorSeekToLastCallback callback) override;
  void IteratorSeek(const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, IteratorSeekCallback callback) override;
  void IteratorNext(const base::UnguessableToken& iterator, IteratorNextCallback callback) override;
  void IteratorPrev(const base::UnguessableToken& iterator, IteratorPrevCallback callback) override;
};
class  LevelDBDatabaseAsyncWaiter {
 public:
  explicit LevelDBDatabaseAsyncWaiter(LevelDBDatabase* proxy);
  ~LevelDBDatabaseAsyncWaiter();
  void Put(
      const std::vector<uint8_t>& key, const std::vector<uint8_t>& value, DatabaseError* out_status);
  void Delete(
      const std::vector<uint8_t>& key, DatabaseError* out_status);
  void DeletePrefixed(
      const std::vector<uint8_t>& key_prefix, DatabaseError* out_status);
  void RewriteDB(
      DatabaseError* out_status);
  void Write(
      std::vector<BatchedOperationPtr> operations, DatabaseError* out_status);
  void Get(
      const std::vector<uint8_t>& key, DatabaseError* out_status, std::vector<uint8_t>* out_value);
  void GetPrefixed(
      const std::vector<uint8_t>& key_prefix, DatabaseError* out_status, std::vector<KeyValuePtr>* out_data);
  void CopyPrefixed(
      const std::vector<uint8_t>& source_key_prefix, const std::vector<uint8_t>& destination_key_prefix, DatabaseError* out_status);
  void GetSnapshot(
      base::UnguessableToken* out_snapshot);
  void GetFromSnapshot(
      const base::UnguessableToken& snapshot, const std::vector<uint8_t>& key, DatabaseError* out_status, std::vector<uint8_t>* out_value);
  void NewIterator(
      base::UnguessableToken* out_iterator);
  void NewIteratorFromSnapshot(
      const base::UnguessableToken& snapshot, base::Optional<base::UnguessableToken>* out_iterator);
  void IteratorSeekToFirst(
      const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);
  void IteratorSeekToLast(
      const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);
  void IteratorSeek(
      const base::UnguessableToken& iterator, const std::vector<uint8_t>& target, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);
  void IteratorNext(
      const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);
  void IteratorPrev(
      const base::UnguessableToken& iterator, bool* out_valid, DatabaseError* out_status, base::Optional<std::vector<uint8_t>>* out_key, base::Optional<std::vector<uint8_t>>* out_value);

 private:
  LevelDBDatabase* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(LevelDBDatabaseAsyncWaiter);
};




}  // namespace mojom
}  // namespace leveldb

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_TEST_UTILS_H_