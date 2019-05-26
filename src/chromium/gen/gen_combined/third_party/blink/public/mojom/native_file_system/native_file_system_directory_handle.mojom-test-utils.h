// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT NativeFileSystemDirectoryHandleInterceptorForTesting : public NativeFileSystemDirectoryHandle {
  virtual NativeFileSystemDirectoryHandle* GetForwardingInterface() = 0;
  void GetFile(const std::string& name, bool create, GetFileCallback callback) override;
  void GetDirectory(const std::string& name, bool create, GetDirectoryCallback callback) override;
  void GetEntries(GetEntriesCallback callback) override;
  void MoveFrom(::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, MoveFromCallback callback) override;
  void CopyFrom(::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, CopyFromCallback callback) override;
  void Remove(bool recurse, RemoveCallback callback) override;
  void Transfer(::blink::mojom::NativeFileSystemTransferTokenRequest token) override;
};
class BLINK_COMMON_EXPORT NativeFileSystemDirectoryHandleAsyncWaiter {
 public:
  explicit NativeFileSystemDirectoryHandleAsyncWaiter(NativeFileSystemDirectoryHandle* proxy);
  ~NativeFileSystemDirectoryHandleAsyncWaiter();
  void GetFile(
      const std::string& name, bool create, ::blink::mojom::NativeFileSystemErrorPtr* out_result, ::blink::mojom::NativeFileSystemFileHandlePtr* out_file);
  void GetDirectory(
      const std::string& name, bool create, ::blink::mojom::NativeFileSystemErrorPtr* out_result, NativeFileSystemDirectoryHandlePtr* out_directory);
  void GetEntries(
      ::blink::mojom::NativeFileSystemErrorPtr* out_result, std::vector<NativeFileSystemEntryPtr>* out_entries);
  void MoveFrom(
      ::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, ::blink::mojom::NativeFileSystemErrorPtr* out_result, NativeFileSystemEntryPtr* out_entry);
  void CopyFrom(
      ::blink::mojom::NativeFileSystemTransferTokenPtr source, const std::string& name, ::blink::mojom::NativeFileSystemErrorPtr* out_result, NativeFileSystemEntryPtr* out_entry);
  void Remove(
      bool recurse, ::blink::mojom::NativeFileSystemErrorPtr* out_result);

 private:
  NativeFileSystemDirectoryHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandleAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_TEST_UTILS_H_