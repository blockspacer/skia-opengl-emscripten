// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/native_file_system/native_file_system_directory_handle.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT NativeFileSystemDirectoryHandleInterceptorForTesting : public NativeFileSystemDirectoryHandle {
  virtual NativeFileSystemDirectoryHandle* GetForwardingInterface() = 0;
  void GetFile(const WTF::String& name, bool create, GetFileCallback callback) override;
  void GetDirectory(const WTF::String& name, bool create, GetDirectoryCallback callback) override;
  void GetEntries(GetEntriesCallback callback) override;
  void MoveFrom(::blink::mojom::blink::NativeFileSystemTransferTokenPtr source, const WTF::String& name, MoveFromCallback callback) override;
  void CopyFrom(::blink::mojom::blink::NativeFileSystemTransferTokenPtr source, const WTF::String& name, CopyFromCallback callback) override;
  void Remove(bool recurse, RemoveCallback callback) override;
  void Transfer(::blink::mojom::blink::NativeFileSystemTransferTokenRequest token) override;
};
class PLATFORM_EXPORT NativeFileSystemDirectoryHandleAsyncWaiter {
 public:
  explicit NativeFileSystemDirectoryHandleAsyncWaiter(NativeFileSystemDirectoryHandle* proxy);
  ~NativeFileSystemDirectoryHandleAsyncWaiter();
  void GetFile(
      const WTF::String& name, bool create, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, ::blink::mojom::blink::NativeFileSystemFileHandlePtr* out_file);
  void GetDirectory(
      const WTF::String& name, bool create, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, NativeFileSystemDirectoryHandlePtr* out_directory);
  void GetEntries(
      ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, WTF::Vector<NativeFileSystemEntryPtr>* out_entries);
  void MoveFrom(
      ::blink::mojom::blink::NativeFileSystemTransferTokenPtr source, const WTF::String& name, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, NativeFileSystemEntryPtr* out_entry);
  void CopyFrom(
      ::blink::mojom::blink::NativeFileSystemTransferTokenPtr source, const WTF::String& name, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, NativeFileSystemEntryPtr* out_entry);
  void Remove(
      bool recurse, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result);

 private:
  NativeFileSystemDirectoryHandle* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemDirectoryHandleAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_BLINK_TEST_UTILS_H_