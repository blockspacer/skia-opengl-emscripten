// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_BLINK_TEST_UTILS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_BLINK_TEST_UTILS_H_

#include "components/services/filesystem/public/interfaces/file_system.mojom-blink.h"


namespace filesystem {
namespace mojom {
namespace blink {


class  FileSystemInterceptorForTesting : public FileSystem {
  virtual FileSystem* GetForwardingInterface() = 0;
  void OpenTempDirectory(::filesystem::mojom::blink::DirectoryRequest directory, OpenTempDirectoryCallback callback) override;
  void OpenPersistentFileSystem(::filesystem::mojom::blink::DirectoryRequest directory, OpenPersistentFileSystemCallback callback) override;
};
class  FileSystemAsyncWaiter {
 public:
  explicit FileSystemAsyncWaiter(FileSystem* proxy);
  ~FileSystemAsyncWaiter();
  void OpenTempDirectory(
      ::filesystem::mojom::blink::DirectoryRequest directory, ::base::File::Error* out_error);
  void OpenPersistentFileSystem(
      ::filesystem::mojom::blink::DirectoryRequest directory, ::base::File::Error* out_error);

 private:
  FileSystem* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_SYSTEM_MOJOM_BLINK_TEST_UTILS_H_