// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/native_file_system/native_file_system_manager.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT NativeFileSystemManagerInterceptorForTesting : public NativeFileSystemManager {
  virtual NativeFileSystemManager* GetForwardingInterface() = 0;
  void GetSandboxedFileSystem(GetSandboxedFileSystemCallback callback) override;
  void ChooseEntries(ChooseFileSystemEntryType type, WTF::Vector<ChooseFileSystemEntryAcceptsOptionPtr> accepts, bool include_accepts_all, ChooseEntriesCallback callback) override;
};
class PLATFORM_EXPORT NativeFileSystemManagerAsyncWaiter {
 public:
  explicit NativeFileSystemManagerAsyncWaiter(NativeFileSystemManager* proxy);
  ~NativeFileSystemManagerAsyncWaiter();
  void GetSandboxedFileSystem(
      ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, ::blink::mojom::blink::NativeFileSystemDirectoryHandlePtr* out_directory);
  void ChooseEntries(
      ChooseFileSystemEntryType type, WTF::Vector<ChooseFileSystemEntryAcceptsOptionPtr> accepts, bool include_accepts_all, ::blink::mojom::blink::NativeFileSystemErrorPtr* out_result, WTF::Vector<::blink::mojom::blink::NativeFileSystemEntryPtr>* out_entries);

 private:
  NativeFileSystemManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(NativeFileSystemManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_MANAGER_MOJOM_BLINK_TEST_UTILS_H_