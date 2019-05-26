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


#include "third_party/blink/public/mojom/filesystem/file_system.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/services/filesystem/public/interfaces/types.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include "mojo/public/mojom/base/file_error.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/file_info.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "mojo/public/cpp/base/file_info_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void FileSystemCancellableOperationInterceptorForTesting::Cancel(CancelCallback callback) {
  GetForwardingInterface()->Cancel(std::move(callback));
}
FileSystemCancellableOperationAsyncWaiter::FileSystemCancellableOperationAsyncWaiter(
    FileSystemCancellableOperation* proxy) : proxy_(proxy) {}

FileSystemCancellableOperationAsyncWaiter::~FileSystemCancellableOperationAsyncWaiter() = default;

void FileSystemCancellableOperationAsyncWaiter::Cancel(
    ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->Cancel(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}



void FileSystemOperationListenerInterceptorForTesting::ResultsRetrieved(std::vector<::filesystem::mojom::DirectoryEntryPtr> entries, bool has_more) {
  GetForwardingInterface()->ResultsRetrieved(std::move(entries), std::move(has_more));
}
void FileSystemOperationListenerInterceptorForTesting::DidWrite(int64_t byte_count, bool complete) {
  GetForwardingInterface()->DidWrite(std::move(byte_count), std::move(complete));
}
void FileSystemOperationListenerInterceptorForTesting::ErrorOccurred(::base::File::Error error_code) {
  GetForwardingInterface()->ErrorOccurred(std::move(error_code));
}
FileSystemOperationListenerAsyncWaiter::FileSystemOperationListenerAsyncWaiter(
    FileSystemOperationListener* proxy) : proxy_(proxy) {}

FileSystemOperationListenerAsyncWaiter::~FileSystemOperationListenerAsyncWaiter() = default;




void ReceivedSnapshotListenerInterceptorForTesting::DidReceiveSnapshotFile() {
  GetForwardingInterface()->DidReceiveSnapshotFile();
}
ReceivedSnapshotListenerAsyncWaiter::ReceivedSnapshotListenerAsyncWaiter(
    ReceivedSnapshotListener* proxy) : proxy_(proxy) {}

ReceivedSnapshotListenerAsyncWaiter::~ReceivedSnapshotListenerAsyncWaiter() = default;




void FileSystemManagerInterceptorForTesting::Open(const url::Origin& origin, FileSystemType file_system_type, OpenCallback callback) {
  GetForwardingInterface()->Open(std::move(origin), std::move(file_system_type), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::ResolveURL(const GURL& filesystem_url, ResolveURLCallback callback) {
  GetForwardingInterface()->ResolveURL(std::move(filesystem_url), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::Move(const GURL& src_path, const GURL& dest_path, MoveCallback callback) {
  GetForwardingInterface()->Move(std::move(src_path), std::move(dest_path), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::Copy(const GURL& src_path, const GURL& dest_path, CopyCallback callback) {
  GetForwardingInterface()->Copy(std::move(src_path), std::move(dest_path), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::Remove(const GURL& path, bool recursive, RemoveCallback callback) {
  GetForwardingInterface()->Remove(std::move(path), std::move(recursive), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::ReadMetadata(const GURL& path, ReadMetadataCallback callback) {
  GetForwardingInterface()->ReadMetadata(std::move(path), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::Create(const GURL& path, bool exclusive, bool is_directory, bool recursive, CreateCallback callback) {
  GetForwardingInterface()->Create(std::move(path), std::move(exclusive), std::move(is_directory), std::move(recursive), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::Exists(const GURL& path, bool is_directory, ExistsCallback callback) {
  GetForwardingInterface()->Exists(std::move(path), std::move(is_directory), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::ReadDirectory(const GURL& path, FileSystemOperationListenerPtr listener) {
  GetForwardingInterface()->ReadDirectory(std::move(path), std::move(listener));
}
void FileSystemManagerInterceptorForTesting::ReadDirectorySync(const GURL& path, ReadDirectorySyncCallback callback) {
  GetForwardingInterface()->ReadDirectorySync(std::move(path), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::Write(const GURL& file_path, const std::string& blob_uuid, int64_t position, FileSystemCancellableOperationRequest op_request, FileSystemOperationListenerPtr listener) {
  GetForwardingInterface()->Write(std::move(file_path), std::move(blob_uuid), std::move(position), std::move(op_request), std::move(listener));
}
void FileSystemManagerInterceptorForTesting::WriteSync(const GURL& file_path, const std::string& blob_uuid, int64_t position, WriteSyncCallback callback) {
  GetForwardingInterface()->WriteSync(std::move(file_path), std::move(blob_uuid), std::move(position), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::Truncate(const GURL& file_path, int64_t length, FileSystemCancellableOperationRequest op_request, TruncateCallback callback) {
  GetForwardingInterface()->Truncate(std::move(file_path), std::move(length), std::move(op_request), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::TruncateSync(const GURL& file_path, int64_t length, TruncateSyncCallback callback) {
  GetForwardingInterface()->TruncateSync(std::move(file_path), std::move(length), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::TouchFile(const GURL& path, base::Time last_access_time, base::Time last_modified_time, TouchFileCallback callback) {
  GetForwardingInterface()->TouchFile(std::move(path), std::move(last_access_time), std::move(last_modified_time), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::CreateSnapshotFile(const GURL& file_path, CreateSnapshotFileCallback callback) {
  GetForwardingInterface()->CreateSnapshotFile(std::move(file_path), std::move(callback));
}
void FileSystemManagerInterceptorForTesting::GetPlatformPath(const GURL& file_path, GetPlatformPathCallback callback) {
  GetForwardingInterface()->GetPlatformPath(std::move(file_path), std::move(callback));
}
FileSystemManagerAsyncWaiter::FileSystemManagerAsyncWaiter(
    FileSystemManager* proxy) : proxy_(proxy) {}

FileSystemManagerAsyncWaiter::~FileSystemManagerAsyncWaiter() = default;

void FileSystemManagerAsyncWaiter::Open(
    const url::Origin& origin, FileSystemType file_system_type, std::string* out_name, GURL* out_root_url, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->Open(std::move(origin),std::move(file_system_type),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_name
,
             GURL* out_root_url
,
             ::base::File::Error* out_error_code
,
             const std::string& name,
             const GURL& root_url,
             ::base::File::Error error_code) {*out_name = std::move(name);*out_root_url = std::move(root_url);*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_name,
          out_root_url,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::ResolveURL(
    const GURL& filesystem_url, FileSystemInfoPtr* out_info, base::FilePath* out_file_path, bool* out_is_directory, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->ResolveURL(std::move(filesystem_url),
      base::BindOnce(
          [](base::RunLoop* loop,
             FileSystemInfoPtr* out_info
,
             base::FilePath* out_file_path
,
             bool* out_is_directory
,
             ::base::File::Error* out_error_code
,
             FileSystemInfoPtr info,
             const base::FilePath& file_path,
             bool is_directory,
             ::base::File::Error error_code) {*out_info = std::move(info);*out_file_path = std::move(file_path);*out_is_directory = std::move(is_directory);*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_info,
          out_file_path,
          out_is_directory,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::Move(
    const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->Move(std::move(src_path),std::move(dest_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::Copy(
    const GURL& src_path, const GURL& dest_path, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->Copy(std::move(src_path),std::move(dest_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::Remove(
    const GURL& path, bool recursive, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->Remove(std::move(path),std::move(recursive),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::ReadMetadata(
    const GURL& path, base::File::Info* out_file_info, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->ReadMetadata(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File::Info* out_file_info
,
             ::base::File::Error* out_error_code
,
             const base::File::Info& file_info,
             ::base::File::Error error_code) {*out_file_info = std::move(file_info);*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_file_info,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::Create(
    const GURL& path, bool exclusive, bool is_directory, bool recursive, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->Create(std::move(path),std::move(exclusive),std::move(is_directory),std::move(recursive),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::Exists(
    const GURL& path, bool is_directory, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->Exists(std::move(path),std::move(is_directory),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::ReadDirectorySync(
    const GURL& path, std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_entries, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->ReadDirectorySync(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<::filesystem::mojom::DirectoryEntryPtr>* out_entries
,
             ::base::File::Error* out_error_code
,
             std::vector<::filesystem::mojom::DirectoryEntryPtr> entries,
             ::base::File::Error error_code) {*out_entries = std::move(entries);*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_entries,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::WriteSync(
    const GURL& file_path, const std::string& blob_uuid, int64_t position, int64_t* out_byte_count, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->WriteSync(std::move(file_path),std::move(blob_uuid),std::move(position),
      base::BindOnce(
          [](base::RunLoop* loop,
             int64_t* out_byte_count
,
             ::base::File::Error* out_error_code
,
             int64_t byte_count,
             ::base::File::Error error_code) {*out_byte_count = std::move(byte_count);*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_byte_count,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::Truncate(
    const GURL& file_path, int64_t length, FileSystemCancellableOperationRequest op_request, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->Truncate(std::move(file_path),std::move(length),std::move(op_request),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::TruncateSync(
    const GURL& file_path, int64_t length, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->TruncateSync(std::move(file_path),std::move(length),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::TouchFile(
    const GURL& path, base::Time last_access_time, base::Time last_modified_time, ::base::File::Error* out_error_code) {
  base::RunLoop loop;
  proxy_->TouchFile(std::move(path),std::move(last_access_time),std::move(last_modified_time),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error_code
,
             ::base::File::Error error_code) {*out_error_code = std::move(error_code);
            loop->Quit();
          },
          &loop,
          out_error_code));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::CreateSnapshotFile(
    const GURL& file_path, base::File::Info* out_file_info, base::FilePath* out_platform_path, ::base::File::Error* out_error_code, ReceivedSnapshotListenerPtr* out_snapshot_listener) {
  base::RunLoop loop;
  proxy_->CreateSnapshotFile(std::move(file_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File::Info* out_file_info
,
             base::FilePath* out_platform_path
,
             ::base::File::Error* out_error_code
,
             ReceivedSnapshotListenerPtr* out_snapshot_listener
,
             const base::File::Info& file_info,
             const base::FilePath& platform_path,
             ::base::File::Error error_code,
             ReceivedSnapshotListenerPtr snapshot_listener) {*out_file_info = std::move(file_info);*out_platform_path = std::move(platform_path);*out_error_code = std::move(error_code);*out_snapshot_listener = std::move(snapshot_listener);
            loop->Quit();
          },
          &loop,
          out_file_info,
          out_platform_path,
          out_error_code,
          out_snapshot_listener));
  loop.Run();
}
void FileSystemManagerAsyncWaiter::GetPlatformPath(
    const GURL& file_path, base::FilePath* out_platform_path) {
  base::RunLoop loop;
  proxy_->GetPlatformPath(std::move(file_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::FilePath* out_platform_path
,
             const base::FilePath& platform_path) {*out_platform_path = std::move(platform_path);
            loop->Quit();
          },
          &loop,
          out_platform_path));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif