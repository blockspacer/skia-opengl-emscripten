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


#include "third_party/blink/public/mojom/webdatabase/web_database.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void WebDatabaseInterceptorForTesting::UpdateSize(const url::Origin& origin, const base::string16& name, int64_t size) {
  GetForwardingInterface()->UpdateSize(std::move(origin), std::move(name), std::move(size));
}
void WebDatabaseInterceptorForTesting::CloseImmediately(const url::Origin& origin, const base::string16& name) {
  GetForwardingInterface()->CloseImmediately(std::move(origin), std::move(name));
}
WebDatabaseAsyncWaiter::WebDatabaseAsyncWaiter(
    WebDatabase* proxy) : proxy_(proxy) {}

WebDatabaseAsyncWaiter::~WebDatabaseAsyncWaiter() = default;




void WebDatabaseHostInterceptorForTesting::OpenFile(const base::string16& vfs_file_name, int32_t desired_flags, OpenFileCallback callback) {
  GetForwardingInterface()->OpenFile(std::move(vfs_file_name), std::move(desired_flags), std::move(callback));
}
void WebDatabaseHostInterceptorForTesting::DeleteFile(const base::string16& vfs_file_name, bool sync_dir, DeleteFileCallback callback) {
  GetForwardingInterface()->DeleteFile(std::move(vfs_file_name), std::move(sync_dir), std::move(callback));
}
void WebDatabaseHostInterceptorForTesting::GetFileAttributes(const base::string16& vfs_file_name, GetFileAttributesCallback callback) {
  GetForwardingInterface()->GetFileAttributes(std::move(vfs_file_name), std::move(callback));
}
void WebDatabaseHostInterceptorForTesting::GetFileSize(const base::string16& vfs_file_name, GetFileSizeCallback callback) {
  GetForwardingInterface()->GetFileSize(std::move(vfs_file_name), std::move(callback));
}
void WebDatabaseHostInterceptorForTesting::SetFileSize(const base::string16& vfs_file_name, int64_t expected_size, SetFileSizeCallback callback) {
  GetForwardingInterface()->SetFileSize(std::move(vfs_file_name), std::move(expected_size), std::move(callback));
}
void WebDatabaseHostInterceptorForTesting::GetSpaceAvailable(const url::Origin& origin, GetSpaceAvailableCallback callback) {
  GetForwardingInterface()->GetSpaceAvailable(std::move(origin), std::move(callback));
}
void WebDatabaseHostInterceptorForTesting::Opened(const url::Origin& origin, const base::string16& database_name, const base::string16& database_description, int64_t estimated_size) {
  GetForwardingInterface()->Opened(std::move(origin), std::move(database_name), std::move(database_description), std::move(estimated_size));
}
void WebDatabaseHostInterceptorForTesting::Modified(const url::Origin& origin, const base::string16& database_name) {
  GetForwardingInterface()->Modified(std::move(origin), std::move(database_name));
}
void WebDatabaseHostInterceptorForTesting::Closed(const url::Origin& origin, const base::string16& database_name) {
  GetForwardingInterface()->Closed(std::move(origin), std::move(database_name));
}
void WebDatabaseHostInterceptorForTesting::HandleSqliteError(const url::Origin& origin, const base::string16& database_name, int32_t error) {
  GetForwardingInterface()->HandleSqliteError(std::move(origin), std::move(database_name), std::move(error));
}
WebDatabaseHostAsyncWaiter::WebDatabaseHostAsyncWaiter(
    WebDatabaseHost* proxy) : proxy_(proxy) {}

WebDatabaseHostAsyncWaiter::~WebDatabaseHostAsyncWaiter() = default;

void WebDatabaseHostAsyncWaiter::OpenFile(
    const base::string16& vfs_file_name, int32_t desired_flags, base::File* out_file) {
  base::RunLoop loop;
  proxy_->OpenFile(std::move(vfs_file_name),std::move(desired_flags),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File* out_file
,
             base::File file) {*out_file = std::move(file);
            loop->Quit();
          },
          &loop,
          out_file));
  loop.Run();
}
void WebDatabaseHostAsyncWaiter::DeleteFile(
    const base::string16& vfs_file_name, bool sync_dir, int32_t* out_sqlite_error_code) {
  base::RunLoop loop;
  proxy_->DeleteFile(std::move(vfs_file_name),std::move(sync_dir),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_sqlite_error_code
,
             int32_t sqlite_error_code) {*out_sqlite_error_code = std::move(sqlite_error_code);
            loop->Quit();
          },
          &loop,
          out_sqlite_error_code));
  loop.Run();
}
void WebDatabaseHostAsyncWaiter::GetFileAttributes(
    const base::string16& vfs_file_name, int32_t* out_attributes) {
  base::RunLoop loop;
  proxy_->GetFileAttributes(std::move(vfs_file_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             int32_t* out_attributes
,
             int32_t attributes) {*out_attributes = std::move(attributes);
            loop->Quit();
          },
          &loop,
          out_attributes));
  loop.Run();
}
void WebDatabaseHostAsyncWaiter::GetFileSize(
    const base::string16& vfs_file_name, int64_t* out_size) {
  base::RunLoop loop;
  proxy_->GetFileSize(std::move(vfs_file_name),
      base::BindOnce(
          [](base::RunLoop* loop,
             int64_t* out_size
,
             int64_t size) {*out_size = std::move(size);
            loop->Quit();
          },
          &loop,
          out_size));
  loop.Run();
}
void WebDatabaseHostAsyncWaiter::SetFileSize(
    const base::string16& vfs_file_name, int64_t expected_size, bool* out_success) {
  base::RunLoop loop;
  proxy_->SetFileSize(std::move(vfs_file_name),std::move(expected_size),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void WebDatabaseHostAsyncWaiter::GetSpaceAvailable(
    const url::Origin& origin, int64_t* out_space_available) {
  base::RunLoop loop;
  proxy_->GetSpaceAvailable(std::move(origin),
      base::BindOnce(
          [](base::RunLoop* loop,
             int64_t* out_space_available
,
             int64_t space_available) {*out_space_available = std::move(space_available);
            loop->Quit();
          },
          &loop,
          out_space_available));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif