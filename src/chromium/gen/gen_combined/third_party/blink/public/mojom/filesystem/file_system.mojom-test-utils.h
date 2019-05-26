// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/filesystem/file_system.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT FileSystemCancellableOperationInterceptorForTesting : public FileSystemCancellableOperation {
  virtual FileSystemCancellableOperation* GetForwardingInterface() = 0;
  void Cancel(CancelCallback callback) override;
};
class BLINK_COMMON_EXPORT FileSystemCancellableOperationAsyncWaiter {
 public:
  explicit FileSystemCancellableOperationAsyncWaiter(FileSystemCancellableOperation* proxy);
  ~FileSystemCancellableOperationAsyncWaiter();
  void Cancel(
      ::base::File::Error* out_error_code);

 private:
  FileSystemCancellableOperation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemCancellableOperationAsyncWaiter);
};


class BLINK_COMMON_EXPORT FileSystemOperationListenerInterceptorForTesting : public FileSystemOperationListener {
  virtual FileSystemOperationListener* GetForwardingInterface() = 0;
  void ResultsRetrieved(std::vector<::filesystem::mojom::DirectoryEntryPtr> entries, bool has_more) override;
  void DidWrite(int64_t byte_count, bool complete) override;
  void ErrorOccurred(::base::File::Error error_code) override;
};
class BLINK_COMMON_EXPORT FileSystemOperationListenerAsyncWaiter {
 public:
  explicit FileSystemOperationListenerAsyncWaiter(FileSystemOperationListener* proxy);
  ~FileSystemOperationListenerAsyncWaiter();

 private:
  FileSystemOperationListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemOperationListenerAsyncWaiter);
};


class BLINK_COMMON_EXPORT ReceivedSnapshotListenerInterceptorForTesting : public ReceivedSnapshotListener {
  virtual ReceivedSnapshotListener* GetForwardingInterface() = 0;
  void DidReceiveSnapshotFile() override;
};
class BLINK_COMMON_EXPORT ReceivedSnapshotListenerAsyncWaiter {
 public:
  explicit ReceivedSnapshotListenerAsyncWaiter(ReceivedSnapshotListener* proxy);
  ~ReceivedSnapshotListenerAsyncWaiter();

 private:
  ReceivedSnapshotListener* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ReceivedSnapshotListenerAsyncWaiter);
};


class BLINK_COMMON_EXPORT FileSystemManagerInterceptorForTesting : public FileSystemManager {
  virtual FileSystemManager* GetForwardingInterface() = 0;
  void Open(const url::Origin& origin, FileSystemType file_system_type, OpenCallback callback) override;
  void ResolveURL(const GURL& filesystem_url, ResolveURLCallback callback) override;
  void Move(const GURL& src_path, const GURL& dest_path, MoveCallback callback) override;
  void Copy(const GURL& src_path, const GURL& dest_path, CopyCallback callback) override;
  void Remove(const GURL& path, bool recursive, RemoveCallback callback) override;
  void ReadMetadata(const GURL& path, ReadMetadataCallback callback) override;
  void Create(const GURL& path, bool exclusive, bool is_directory, bool recursive, CreateCallback callback) override;
  void Exists(const GURL& path, bool is_directory, ExistsCallback callback) override;
  void ReadDirectory(const GURL& path, FileSystemOperationListenerPtr listener) override;
  void ReadDirectorySync(const GURL& path, ReadDirectorySyncCallback callback) override;
  void Write(const GURL& file_path, const std::string& blob_uuid, int64_t position, FileSystemCancellableOperationRequest op_request, FileSystemOperationListenerPtr listener) override;
  void WriteSync(const GURL& file_path, const std::string& blob_uuid, int64_t position, WriteSyncCallback callback) override;
  void Truncate(const GURL& file_path, int64_t length, FileSystemCancellableOperationRequest op_request, TruncateCallback callback) override;
  void TruncateSync(const GURL& file_path, int64_t length, TruncateSyncCallback callback) override;
  void TouchFile(const GURL& path, base::Time last_access_time, base::Time last_modified_time, TouchFileCallback callback) override;
  void CreateSnapshotFile(const GURL& file_path, CreateSnapshotFileCallback callback) override;
  void GetPlatformPath(const GURL& file_path, GetPlatformPathCallback callback) override;
};
class BLINK_COMMON_EXPORT FileSystemManagerAsyncWaiter {
 public:
  explicit FileSystemManagerAsyncWaiter(FileSystemManager* proxy);
  ~FileSystemManagerAsyncWaiter();
  void Open(
      const url::Origin& origin, FileSystemType file_system_type, std::string* out_name, GURL* out_root_url, ::base::File::Error* out_error_code);
  void ResolveURL(
      const GURL& filesystem_url, FileSystemInfoPtr* out_info, base::FilePath* out_file_path, bool* out_is_directory, ::base::File::Error* out_error_code);
  void Move(
      const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code);
  void Copy(
      const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code);
  void Remove(
      const GURL& path, bool recursive, ::base::File::Error* out_error_code);
  void ReadMetadata(
      const GURL& path, base::File::Info* out_file_info, ::base::File::Error* out_error_code);
  void Create(
      const GURL& path, bool exclusive, bool is_directory, bool recursive, ::base::File::Error* out_error_code);
  void Exists(
      const GURL& path, bool is_directory, ::base::File::Error* out_error_code);
  void ReadDirectorySync(
      const GURL& path, std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_entries, ::base::File::Error* out_error_code);
  void WriteSync(
      const GURL& file_path, const std::string& blob_uuid, int64_t position, int64_t* out_byte_count, ::base::File::Error* out_error_code);
  void Truncate(
      const GURL& file_path, int64_t length, FileSystemCancellableOperationRequest op_request, ::base::File::Error* out_error_code);
  void TruncateSync(
      const GURL& file_path, int64_t length, ::base::File::Error* out_error_code);
  void TouchFile(
      const GURL& path, base::Time last_access_time, base::Time last_modified_time, ::base::File::Error* out_error_code);
  void CreateSnapshotFile(
      const GURL& file_path, base::File::Info* out_file_info, base::FilePath* out_platform_path, ::base::File::Error* out_error_code, ReceivedSnapshotListenerPtr* out_snapshot_listener);
  void GetPlatformPath(
      const GURL& file_path, base::FilePath* out_platform_path);

 private:
  FileSystemManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_TEST_UTILS_H_