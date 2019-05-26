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


#include "components/services/filesystem/public/interfaces/file_system.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/services/filesystem/public/interfaces/directory.mojom.h"
#include "mojo/public/mojom/base/file_error.mojom.h"


#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_JUMBO_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#endif


namespace filesystem {
namespace mojom {


void FileSystemInterceptorForTesting::OpenTempDirectory(::filesystem::mojom::DirectoryRequest directory, OpenTempDirectoryCallback callback) {
  GetForwardingInterface()->OpenTempDirectory(std::move(directory), std::move(callback));
}
void FileSystemInterceptorForTesting::OpenPersistentFileSystem(::filesystem::mojom::DirectoryRequest directory, OpenPersistentFileSystemCallback callback) {
  GetForwardingInterface()->OpenPersistentFileSystem(std::move(directory), std::move(callback));
}
FileSystemAsyncWaiter::FileSystemAsyncWaiter(
    FileSystem* proxy) : proxy_(proxy) {}

FileSystemAsyncWaiter::~FileSystemAsyncWaiter() = default;

void FileSystemAsyncWaiter::OpenTempDirectory(
    ::filesystem::mojom::DirectoryRequest directory, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->OpenTempDirectory(std::move(directory),
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
void FileSystemAsyncWaiter::OpenPersistentFileSystem(
    ::filesystem::mojom::DirectoryRequest directory, ::base::File::Error* out_error) {
  base::RunLoop loop;
  proxy_->OpenPersistentFileSystem(std::move(directory),
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