// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 564751454 value is based on sha256(salt + "NativeFileSystemDirectoryHandle1").
constexpr uint32_t kNativeFileSystemDirectoryHandle_GetFile_Name = 564751454;
// The 1133930125 value is based on sha256(salt + "NativeFileSystemDirectoryHandle2").
constexpr uint32_t kNativeFileSystemDirectoryHandle_GetDirectory_Name = 1133930125;
// The 1181969782 value is based on sha256(salt + "NativeFileSystemDirectoryHandle3").
constexpr uint32_t kNativeFileSystemDirectoryHandle_GetEntries_Name = 1181969782;
// The 737935815 value is based on sha256(salt + "NativeFileSystemDirectoryHandle4").
constexpr uint32_t kNativeFileSystemDirectoryHandle_MoveFrom_Name = 737935815;
// The 138018802 value is based on sha256(salt + "NativeFileSystemDirectoryHandle5").
constexpr uint32_t kNativeFileSystemDirectoryHandle_CopyFrom_Name = 138018802;
// The 1208263418 value is based on sha256(salt + "NativeFileSystemDirectoryHandle6").
constexpr uint32_t kNativeFileSystemDirectoryHandle_Remove_Name = 1208263418;
// The 746877257 value is based on sha256(salt + "NativeFileSystemDirectoryHandle7").
constexpr uint32_t kNativeFileSystemDirectoryHandle_Transfer_Name = 746877257;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_