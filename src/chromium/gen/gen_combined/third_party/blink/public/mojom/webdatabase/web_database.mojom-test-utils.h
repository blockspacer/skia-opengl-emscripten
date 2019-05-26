// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/webdatabase/web_database.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT WebDatabaseInterceptorForTesting : public WebDatabase {
  virtual WebDatabase* GetForwardingInterface() = 0;
  void UpdateSize(const url::Origin& origin, const base::string16& name, int64_t size) override;
  void CloseImmediately(const url::Origin& origin, const base::string16& name) override;
};
class BLINK_COMMON_EXPORT WebDatabaseAsyncWaiter {
 public:
  explicit WebDatabaseAsyncWaiter(WebDatabase* proxy);
  ~WebDatabaseAsyncWaiter();

 private:
  WebDatabase* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseAsyncWaiter);
};


class BLINK_COMMON_EXPORT WebDatabaseHostInterceptorForTesting : public WebDatabaseHost {
  virtual WebDatabaseHost* GetForwardingInterface() = 0;
  void OpenFile(const base::string16& vfs_file_name, int32_t desired_flags, OpenFileCallback callback) override;
  void DeleteFile(const base::string16& vfs_file_name, bool sync_dir, DeleteFileCallback callback) override;
  void GetFileAttributes(const base::string16& vfs_file_name, GetFileAttributesCallback callback) override;
  void GetFileSize(const base::string16& vfs_file_name, GetFileSizeCallback callback) override;
  void SetFileSize(const base::string16& vfs_file_name, int64_t expected_size, SetFileSizeCallback callback) override;
  void GetSpaceAvailable(const url::Origin& origin, GetSpaceAvailableCallback callback) override;
  void Opened(const url::Origin& origin, const base::string16& database_name, const base::string16& database_description, int64_t estimated_size) override;
  void Modified(const url::Origin& origin, const base::string16& database_name) override;
  void Closed(const url::Origin& origin, const base::string16& database_name) override;
  void HandleSqliteError(const url::Origin& origin, const base::string16& database_name, int32_t error) override;
};
class BLINK_COMMON_EXPORT WebDatabaseHostAsyncWaiter {
 public:
  explicit WebDatabaseHostAsyncWaiter(WebDatabaseHost* proxy);
  ~WebDatabaseHostAsyncWaiter();
  void OpenFile(
      const base::string16& vfs_file_name, int32_t desired_flags, base::File* out_file);
  void DeleteFile(
      const base::string16& vfs_file_name, bool sync_dir, int32_t* out_sqlite_error_code);
  void GetFileAttributes(
      const base::string16& vfs_file_name, int32_t* out_attributes);
  void GetFileSize(
      const base::string16& vfs_file_name, int64_t* out_size);
  void SetFileSize(
      const base::string16& vfs_file_name, int64_t expected_size, bool* out_success);
  void GetSpaceAvailable(
      const url::Origin& origin, int64_t* out_space_available);

 private:
  WebDatabaseHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_TEST_UTILS_H_