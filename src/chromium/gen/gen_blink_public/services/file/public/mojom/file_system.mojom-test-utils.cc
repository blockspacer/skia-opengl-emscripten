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


#include "services/file/public/mojom/file_system.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "components/services/filesystem/public/interfaces/directory.mojom.h"
#include "mojo/public/mojom/base/file_error.mojom.h"


#ifndef SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_JUMBO_H_
#define SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/file_error_mojom_traits.h"
#endif


namespace file {
namespace mojom {


void FileSystemInterceptorForTesting::GetDirectory(::filesystem::mojom::DirectoryRequest dir, GetDirectoryCallback callback) {
  GetForwardingInterface()->GetDirectory(std::move(dir), std::move(callback));
}
void FileSystemInterceptorForTesting::GetSubDirectory(const std::string& dir_path, ::filesystem::mojom::DirectoryRequest dir, GetSubDirectoryCallback callback) {
  GetForwardingInterface()->GetSubDirectory(std::move(dir_path), std::move(dir), std::move(callback));
}
FileSystemAsyncWaiter::FileSystemAsyncWaiter(
    FileSystem* proxy) : proxy_(proxy) {}

FileSystemAsyncWaiter::~FileSystemAsyncWaiter() = default;

void FileSystemAsyncWaiter::GetDirectory(
    ::filesystem::mojom::DirectoryRequest dir) {
  base::RunLoop loop;
  proxy_->GetDirectory(std::move(dir),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void FileSystemAsyncWaiter::GetSubDirectory(
    const std::string& dir_path, ::filesystem::mojom::DirectoryRequest dir, ::base::File::Error* out_err) {
  base::RunLoop loop;
  proxy_->GetSubDirectory(std::move(dir_path),std::move(dir),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::base::File::Error* out_err
,
             ::base::File::Error err) {*out_err = std::move(err);
            loop->Quit();
          },
          &loop,
          out_err));
  loop.Run();
}





}  // namespace mojom
}  // namespace file

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif