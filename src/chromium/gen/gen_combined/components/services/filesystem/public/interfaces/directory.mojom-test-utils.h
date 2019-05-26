// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_TEST_UTILS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_TEST_UTILS_H_

#include "components/services/filesystem/public/interfaces/directory.mojom.h"


namespace filesystem {
namespace mojom {


class  DirectoryInterceptorForTesting : public Directory {
  virtual Directory* GetForwardingInterface() = 0;
  void Read(ReadCallback callback) override;
  void OpenFile(const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, OpenFileCallback callback) override;
  void OpenFileHandle(const std::string& path, uint32_t open_flags, OpenFileHandleCallback callback) override;
  void OpenFileHandles(std::vector<FileOpenDetailsPtr> files, OpenFileHandlesCallback callback) override;
  void OpenDirectory(const std::string& path, DirectoryRequest directory, uint32_t open_flags, OpenDirectoryCallback callback) override;
  void Rename(const std::string& path, const std::string& new_path, RenameCallback callback) override;
  void Replace(const std::string& path, const std::string& new_path, ReplaceCallback callback) override;
  void Delete(const std::string& path, uint32_t delete_flags, DeleteCallback callback) override;
  void Exists(const std::string& path, ExistsCallback callback) override;
  void IsWritable(const std::string& path, IsWritableCallback callback) override;
  void Flush(FlushCallback callback) override;
  void StatFile(const std::string& path, StatFileCallback callback) override;
  void Clone(DirectoryRequest directory) override;
  void ReadEntireFile(const std::string& path, ReadEntireFileCallback callback) override;
  void WriteFile(const std::string& path, const std::vector<uint8_t>& data, WriteFileCallback callback) override;
};
class  DirectoryAsyncWaiter {
 public:
  explicit DirectoryAsyncWaiter(Directory* proxy);
  ~DirectoryAsyncWaiter();
  void Read(
      ::base::File::Error* out_error, base::Optional<std::vector<::filesystem::mojom::DirectoryEntryPtr>>* out_directory_contents);
  void OpenFile(
      const std::string& path, ::filesystem::mojom::FileRequest file, uint32_t open_flags, ::base::File::Error* out_error);
  void OpenFileHandle(
      const std::string& path, uint32_t open_flags, ::base::File::Error* out_error, base::File* out_file_handle);
  void OpenFileHandles(
      std::vector<FileOpenDetailsPtr> files, std::vector<FileOpenResultPtr>* out_results);
  void OpenDirectory(
      const std::string& path, DirectoryRequest directory, uint32_t open_flags, ::base::File::Error* out_error);
  void Rename(
      const std::string& path, const std::string& new_path, ::base::File::Error* out_error);
  void Replace(
      const std::string& path, const std::string& new_path, ::base::File::Error* out_error);
  void Delete(
      const std::string& path, uint32_t delete_flags, ::base::File::Error* out_error);
  void Exists(
      const std::string& path, ::base::File::Error* out_error, bool* out_exists);
  void IsWritable(
      const std::string& path, ::base::File::Error* out_error, bool* out_is_writable);
  void Flush(
      ::base::File::Error* out_error);
  void StatFile(
      const std::string& path, ::base::File::Error* out_error, ::filesystem::mojom::FileInformationPtr* out_file_information);
  void ReadEntireFile(
      const std::string& path, ::base::File::Error* out_error, std::vector<uint8_t>* out_data);
  void WriteFile(
      const std::string& path, const std::vector<uint8_t>& data, ::base::File::Error* out_error);

 private:
  Directory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DirectoryAsyncWaiter);
};




}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_TEST_UTILS_H_