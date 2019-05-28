// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_TEST_UTILS_H_
#define SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_TEST_UTILS_H_

#include "services/file/public/mojom/file_system.mojom.h"


namespace file {
namespace mojom {


class  FileSystemInterceptorForTesting : public FileSystem {
  virtual FileSystem* GetForwardingInterface() = 0;
  void GetDirectory(::filesystem::mojom::DirectoryRequest dir, GetDirectoryCallback callback) override;
  void GetSubDirectory(const std::string& dir_path, ::filesystem::mojom::DirectoryRequest dir, GetSubDirectoryCallback callback) override;
};
class  FileSystemAsyncWaiter {
 public:
  explicit FileSystemAsyncWaiter(FileSystem* proxy);
  ~FileSystemAsyncWaiter();
  void GetDirectory(
      ::filesystem::mojom::DirectoryRequest dir);
  void GetSubDirectory(
      const std::string& dir_path, ::filesystem::mojom::DirectoryRequest dir, ::base::File::Error* out_err);

 private:
  FileSystem* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FileSystemAsyncWaiter);
};




}  // namespace mojom
}  // namespace file

#endif  // SERVICES_FILE_PUBLIC_MOJOM_FILE_SYSTEM_MOJOM_TEST_UTILS_H_