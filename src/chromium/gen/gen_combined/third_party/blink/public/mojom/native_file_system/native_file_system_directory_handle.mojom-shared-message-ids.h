// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 88168815 value is based on sha256(salt + "NativeFileSystemDirectoryHandle1").
constexpr uint32_t kNativeFileSystemDirectoryHandle_GetFile_Name = 88168815;
// The 572454418 value is based on sha256(salt + "NativeFileSystemDirectoryHandle2").
constexpr uint32_t kNativeFileSystemDirectoryHandle_GetDirectory_Name = 572454418;
// The 852550949 value is based on sha256(salt + "NativeFileSystemDirectoryHandle3").
constexpr uint32_t kNativeFileSystemDirectoryHandle_GetEntries_Name = 852550949;
// The 49767694 value is based on sha256(salt + "NativeFileSystemDirectoryHandle4").
constexpr uint32_t kNativeFileSystemDirectoryHandle_MoveFrom_Name = 49767694;
// The 1048919653 value is based on sha256(salt + "NativeFileSystemDirectoryHandle5").
constexpr uint32_t kNativeFileSystemDirectoryHandle_CopyFrom_Name = 1048919653;
// The 1046483108 value is based on sha256(salt + "NativeFileSystemDirectoryHandle6").
constexpr uint32_t kNativeFileSystemDirectoryHandle_Remove_Name = 1046483108;
// The 423690898 value is based on sha256(salt + "NativeFileSystemDirectoryHandle7").
constexpr uint32_t kNativeFileSystemDirectoryHandle_Transfer_Name = 423690898;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_DIRECTORY_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_