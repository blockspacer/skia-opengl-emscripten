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


#include "components/services/filesystem/public/interfaces/directory.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/services/filesystem/public/interfaces/file.mojom.h"
#include "components/services/filesystem/public/interfaces/types.mojom.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/file_error.mojom.h"


#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#endif


namespace filesystem {
namespace mojom {


void DirectoryInterceptorForTesting::Read(ReadCallback callback) {
  GetForwardingInterface()->Read(std::move(callback));
}
void DirectoryInterceptorForTesting::OpenFile(const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, OpenFileCallback callback) {
  GetForwardingInterface()->OpenFile(std::move(path), std::move(file), std::move(open_flags), std::move(callback));
}
void DirectoryInterceptorForTesting::OpenFileHandle(const std::string& path, uint32_t open_flags, OpenFileHandleCallback callback) {
  GetForwardingInterface()->OpenFileHandle(std::move(path), std::move(open_flags), std::move(callback));
}
void DirectoryInterceptorForTesting::OpenFileHandles(std::vector<FileOpenDetailsPtr> files, OpenFileHandlesCallback callback) {
  GetForwardingInterface()->OpenFileHandles(std::move(files), std::move(callback));
}
void DirectoryInterceptorForTesting::OpenDirectory(const std::string& path, DirectoryRequest directory, uint32_t open_flags, OpenDirectoryCallback callback) {
  GetForwardingInterface()->OpenDirectory(std::move(path), std::move(directory), std::move(open_flags), std::move(callback));
}
void DirectoryInterceptorForTesting::Rename(const std::string& path, const std::string& new_path, RenameCallback callback) {
  GetForwardingInterface()->Rename(std::move(path), std::move(new_path), std::move(callback));
}
void DirectoryInterceptorForTesting::Replace(const std::string& path, const std::string& new_path, ReplaceCallback callback) {
  GetForwardingInterface()->Replace(std::move(path), std::move(new_path), std::move(callback));
}
void DirectoryInterceptorForTesting::Delete(const std::string& path, uint32_t delete_flags, DeleteCallback callback) {
  GetForwardingInterface()->Delete(std::move(path), std::move(delete_flags), std::move(callback));
}
void DirectoryInterceptorForTesting::Exists(const std::string& path, ExistsCallback callback) {
  GetForwardingInterface()->Exists(std::move(path), std::move(callback));
}
void DirectoryInterceptorForTesting::IsWritable(const std::string& path, IsWritableCallback callback) {
  GetForwardingInterface()->IsWritable(std::move(path), std::move(callback));
}
void DirectoryInterceptorForTesting::Flush(FlushCallback callback) {
  GetForwardingInterface()->Flush(std::move(callback));
}
void DirectoryInterceptorForTesting::StatFile(const std::string& path, StatFileCallback callback) {
  GetForwardingInterface()->StatFile(std::move(path), std::move(callback));
}
void DirectoryInterceptorForTesting::Clone(DirectoryRequest directory) {
  GetForwardingInterface()->Clone(std::move(directory));
}
void DirectoryInterceptorForTesting::ReadEntireFile(const std::string& path, ReadEntireFileCallback callback) {
  GetForwardingInterface()->ReadEntireFile(std::move(path), std::move(callback));
}
void DirectoryInterceptorForTesting::WriteFile(const std::string& path, const std::vector<uint8_t>& data, WriteFileCallback callback) {
  GetForwardingInterface()->WriteFile(std::move(path), std::move(data), std::move(callback));
}
DirectoryAsyncWaiter::DirectoryAsyncWaiter(
    Directory* proxy) : proxy_(proxy) {}

DirectoryAsyncWaiter::~DirectoryAsyncWaiter() = default;

void DirectoryAsyncWaiter::Read(
    ::base::File::Error* out_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_directory_contents) {
  base::RunLoop loop;
  proxy_->Read(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_directory_contents
,
             ::base::File::Error error,
             base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>> directory_contents) {*out_error = std::move(error);*out_directory_contents = std::move(directory_contents);
            loop->Quit();
          },
          &loop,
          out_error,
          out_directory_contents));
  loop.Run();
}
void DirectoryAsyncWaiter::OpenFile(
    const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->OpenFile(std::move(path),std::move(file),std::move(open_flags),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void DirectoryAsyncWaiter::OpenFileHandle(
    const std::string& path, uint32_t open_flags, ::base::File::Error* out_error, base::File* out_file_handle) {
  base::RunLoop loop;
  proxy_->OpenFileHandle(std::move(path),std::move(open_flags),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             base::File* out_file_handle
,
             ::base::File::Error error,
             base::File file_handle) {*out_error = std::move(error);*out_file_handle = std::move(file_handle);
            loop->Quit();
          },
          &loop,
          out_error,
          out_file_handle));
  loop.Run();
}
void DirectoryAsyncWaiter::OpenFileHandles(
    std::vector<FileOpenDetailsPtr> files, std::vector<FileOpenResultPtr>* out_results) {
  base::RunLoop loop;
  proxy_->OpenFileHandles(std::move(files),
      base::BindOnce(
          [](base::RunLoop* loop,
             std::vector<FileOpenResultPtr>* out_results
,
             std::vector<FileOpenResultPtr> results) {*out_results = std::move(results);
            loop->Quit();
          },
          &loop,
          out_results));
  loop.Run();
}
void DirectoryAsyncWaiter::OpenDirectory(
    const std::string& path, DirectoryRequest directory, uint32_t open_flags, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->OpenDirectory(std::move(path),std::move(directory),std::move(open_flags),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void DirectoryAsyncWaiter::Rename(
    const std::string& path, const std::string& new_path, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Rename(std::move(path),std::move(new_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void DirectoryAsyncWaiter::Replace(
    const std::string& path, const std::string& new_path, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Replace(std::move(path),std::move(new_path),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void DirectoryAsyncWaiter::Delete(
    const std::string& path, uint32_t delete_flags, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Delete(std::move(path),std::move(delete_flags),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void DirectoryAsyncWaiter::Exists(
    const std::string& path, ::base::File::Error* out_error, bool* out_exists) {
  base::RunLoop loop;
  proxy_->Exists(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             bool* out_exists
,
             ::base::File::Error error,
             bool exists) {*out_error = std::move(error);*out_exists = std::move(exists);
            loop->Quit();
          },
          &loop,
          out_error,
          out_exists));
  loop.Run();
}
void DirectoryAsyncWaiter::IsWritable(
    const std::string& path, ::base::File::Error* out_error, bool* out_is_writable) {
  base::RunLoop loop;
  proxy_->IsWritable(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             bool* out_is_writable
,
             ::base::File::Error error,
             bool is_writable) {*out_error = std::move(error);*out_is_writable = std::move(is_writable);
            loop->Quit();
          },
          &loop,
          out_error,
          out_is_writable));
  loop.Run();
}
void DirectoryAsyncWaiter::Flush(
    ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->Flush(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}
void DirectoryAsyncWaiter::StatFile(
    const std::string& path, ::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information) {
  base::RunLoop loop;
  proxy_->StatFile(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::filesystem::mojom::FileInformationPtr* out_file_information
,
             ::base::File::Error error,
             ::filesystem::mojom::FileInformationPtr file_information) {*out_error = std::move(error);*out_file_information = std::move(file_information);
            loop->Quit();
          },
          &loop,
          out_error,
          out_file_information));
  loop.Run();
}
void DirectoryAsyncWaiter::ReadEntireFile(
    const std::string& path, ::base::File::Error* out_error, std::vector<uint8_t>* out_data) {
  base::RunLoop loop;
  proxy_->ReadEntireFile(std::move(path),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             std::vector<uint8_t>* out_data
,
             ::base::File::Error error,
             const std::vector<uint8_t>& data) {*out_error = std::move(error);*out_data = std::move(data);
            loop->Quit();
          },
          &loop,
          out_error,
          out_data));
  loop.Run();
}
void DirectoryAsyncWaiter::WriteFile(
    const std::string& path, const std::vector<uint8_t>& data, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->WriteFile(std::move(path),std::move(data),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_error
,
             ::base::File::Error error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}





}  // namespace mojom
}  // namespace filesystem

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif