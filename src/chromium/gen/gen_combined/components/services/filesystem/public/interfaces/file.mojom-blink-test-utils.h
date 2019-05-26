// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_BLINK_TEST_UTILS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_BLINK_TEST_UTILS_H_

#include "components/services/filesystem/public/interfaces/file.mojom-blink.h"


namespace filesystem {
namespace mojom {
namespace blink {


class  FileInterceptorForTesting : public File {
  virtual File* GetForwardingInterface() = 0;
  void Close(CloseCallback callback) override;
  void Read(uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::blink::Whence whence, ReadCallback callback) override;
  void Write(const WTF::Vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::blink::Whence whence, WriteCallback callback) override;
  void Tell(TellCallback callback) override;
  void Seek(int64_t offset, ::filesystem::mojom::blink::Whence whence, SeekCallback callback) override;
  void Stat(StatCallback callback) override;
  void Truncate(int64_t size, TruncateCallback callback) override;
  void Touch(::filesystem::mojom::blink::TimespecOrNowPtr atime, ::filesystem::mojom::blink::TimespecOrNowPtr mtime, TouchCallback callback) override;
  void Dup(FileRequest file, DupCallback callback) override;
  void Flush(FlushCallback callback) override;
  void Lock(LockCallback callback) override;
  void Unlock(UnlockCallback callback) override;
  void AsHandle(AsHandleCallback callback) override;
};
class  FileAsyncWaiter {
 public:
  explicit FileAsyncWaiter(File* proxy);
  ~FileAsyncWaiter();
  void Close(
      ::base::File::Error* out_err);
  void Read(
      uint32_t num_bytes_to_read, int64_t offset, ::filesystem::mojom::blink::Whence whence, ::base::File::Error* out_error, base::Optional<WTF::Vector<uint8_t>>* out_bytes_read);
  void Write(
      const WTF::Vector<uint8_t>& bytes_to_write, int64_t offset, ::filesystem::mojom::blink::Whence whence, ::base::File::Error* out_error, uint32_t* out_num_bytes_written);
  void Tell(
      ::base::File::Error* out_error, int64_t* out_position);
  void Seek(
      int64_t offset, ::filesystem::mojom::blink::Whence whence, ::base::File::Error* out_error, int64_t* out_position);
  void Stat(
      ::base::File::Error* out_error, ::filesystem::mojom::blink::FileInformationPtr* out_file_information);
  void Truncate(
      int64_t size, ::base::File::Error* out_error);
  void Touch(
      ::filesystem::mojom::blink::TimespecOrNowPtr atime, ::filesystem::mojom::blink::TimespecOrNowPtr mtime, ::base::File::Error* out_error);
  void Dup(
      FileRequest file, ::base::File::Error* out_error);
  void Flush(
      ::base::File::Error* out_error);
  void Lock(
      ::base::File::Error* out_error);
  void Unlock(
      ::base::File::Error* out_error);
  void AsHandle(
      ::base::File::Error* out_error, base::File* out_file_handle);

 private:
  File* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(FileAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_BLINK_TEST_UTILS_H_