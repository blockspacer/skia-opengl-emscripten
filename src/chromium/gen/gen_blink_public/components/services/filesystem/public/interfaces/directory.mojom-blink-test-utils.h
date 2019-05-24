// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_BLINK_TEST_UTILS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_BLINK_TEST_UTILS_H_

#include "components/services/filesystem/public/interfaces/directory.mojom-blink.h"


namespace filesystem {
namespace mojom {
namespace blink {


class  DirectoryInterceptorForTesting : public Directory {
  virtual Directory* GetForwardingInterface() = 0;
  void Read(ReadCallback callback) override;
  void OpenFile(const WTF::String& path, ::filesystem::mojom::blink::FileRequest file, uint32_t open_flags, OpenFileCallback callback) override;
  void OpenFileHandle(const WTF::String& path, uint32_t open_flags, OpenFileHandleCallback callback) override;
  void OpenFileHandles(WTF::Vector<FileOpenDetailsPtr> files, OpenFileHandlesCallback callback) override;
  void OpenDirectory(const WTF::String& path, DirectoryRequest directory, uint32_t open_flags, OpenDirectoryCallback callback) override;
  void Rename(const WTF::String& path, const WTF::String& new_path, RenameCallback callback) override;
  void Replace(const WTF::String& path, const WTF::String& new_path, ReplaceCallback callback) override;
  void Delete(const WTF::String& path, uint32_t delete_flags, DeleteCallback callback) override;
  void Exists(const WTF::String& path, ExistsCallback callback) override;
  void IsWritable(const WTF::String& path, IsWritableCallback callback) override;
  void Flush(FlushCallback callback) override;
  void StatFile(const WTF::String& path, StatFileCallback callback) override;
  void Clone(DirectoryRequest directory) override;
  void ReadEntireFile(const WTF::String& path, ReadEntireFileCallback callback) override;
  void WriteFile(const WTF::String& path, const WTF::Vector<uint8_t>& data, WriteFileCallback callback) override;
};
class  DirectoryAsyncWaiter {
 public:
  explicit DirectoryAsyncWaiter(Directory* proxy);
  ~DirectoryAsyncWaiter();
  void Read(
      ::base::File::Error* out_error, base::Optional<WTF::Vector<::filesystem::mojom::blink::DirectoryEntryPtr>>* out_directory_contents);
  void OpenFile(
      const WTF::String& path, ::filesystem::mojom::blink::FileRequest file, uint32_t open_flags, ::base::File::Error* out_error);
  void OpenFileHandle(
      const WTF::String& path, uint32_t open_flags, ::base::File::Error* out_error, base::File* out_file_handle);
  void OpenFileHandles(
      WTF::Vector<FileOpenDetailsPtr> files, WTF::Vector<FileOpenResultPtr>* out_results);
  void OpenDirectory(
      const WTF::String& path, DirectoryRequest directory, uint32_t open_flags, ::base::File::Error* out_error);
  void Rename(
      const WTF::String& path, const WTF::String& new_path, ::base::File::Error* out_error);
  void Replace(
      const WTF::String& path, const WTF::String& new_path, ::base::File::Error* out_error);
  void Delete(
      const WTF::String& path, uint32_t delete_flags, ::base::File::Error* out_error);
  void Exists(
      const WTF::String& path, ::base::File::Error* out_error, bool* out_exists);
  void IsWritable(
      const WTF::String& path, ::base::File::Error* out_error, bool* out_is_writable);
  void Flush(
      ::base::File::Error* out_error);
  void StatFile(
      const WTF::String& path, ::base::File::Error* out_error, ::filesystem::mojom::blink::FileInformationPtr* out_file_information);
  void ReadEntireFile(
      const WTF::String& path, ::base::File::Error* out_error, WTF::Vector<uint8_t>* out_data);
  void WriteFile(
      const WTF::String& path, const WTF::Vector<uint8_t>& data, ::base::File::Error* out_error);

 private:
  Directory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(DirectoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_BLINK_TEST_UTILS_H_