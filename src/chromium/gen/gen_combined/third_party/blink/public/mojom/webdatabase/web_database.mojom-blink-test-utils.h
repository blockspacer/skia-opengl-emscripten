// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/webdatabase/web_database.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT WebDatabaseInterceptorForTesting : public WebDatabase {
  virtual WebDatabase* GetForwardingInterface() = 0;
  void UpdateSize(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name, int64_t size) override;
  void CloseImmediately(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& name) override;
};
class PLATFORM_EXPORT WebDatabaseAsyncWaiter {
 public:
  explicit WebDatabaseAsyncWaiter(WebDatabase* proxy);
  ~WebDatabaseAsyncWaiter();

 private:
  WebDatabase* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseAsyncWaiter);
};


class PLATFORM_EXPORT WebDatabaseHostInterceptorForTesting : public WebDatabaseHost {
  virtual WebDatabaseHost* GetForwardingInterface() = 0;
  void OpenFile(const WTF::String& vfs_file_name, int32_t desired_flags, OpenFileCallback callback) override;
  void DeleteFile(const WTF::String& vfs_file_name, bool sync_dir, DeleteFileCallback callback) override;
  void GetFileAttributes(const WTF::String& vfs_file_name, GetFileAttributesCallback callback) override;
  void GetFileSize(const WTF::String& vfs_file_name, GetFileSizeCallback callback) override;
  void SetFileSize(const WTF::String& vfs_file_name, int64_t expected_size, SetFileSizeCallback callback) override;
  void GetSpaceAvailable(const scoped_refptr<const ::blink::SecurityOrigin>& origin, GetSpaceAvailableCallback callback) override;
  void Opened(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name, const WTF::String& database_description, int64_t estimated_size) override;
  void Modified(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name) override;
  void Closed(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name) override;
  void HandleSqliteError(const scoped_refptr<const ::blink::SecurityOrigin>& origin, const WTF::String& database_name, int32_t error) override;
};
class PLATFORM_EXPORT WebDatabaseHostAsyncWaiter {
 public:
  explicit WebDatabaseHostAsyncWaiter(WebDatabaseHost* proxy);
  ~WebDatabaseHostAsyncWaiter();
  void OpenFile(
      const WTF::String& vfs_file_name, int32_t desired_flags, base::File* out_file);
  void DeleteFile(
      const WTF::String& vfs_file_name, bool sync_dir, int32_t* out_sqlite_error_code);
  void GetFileAttributes(
      const WTF::String& vfs_file_name, int32_t* out_attributes);
  void GetFileSize(
      const WTF::String& vfs_file_name, int64_t* out_size);
  void SetFileSize(
      const WTF::String& vfs_file_name, int64_t expected_size, bool* out_success);
  void GetSpaceAvailable(
      const scoped_refptr<const ::blink::SecurityOrigin>& origin, int64_t* out_space_available);

 private:
  WebDatabaseHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WebDatabaseHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_BLINK_TEST_UTILS_H_