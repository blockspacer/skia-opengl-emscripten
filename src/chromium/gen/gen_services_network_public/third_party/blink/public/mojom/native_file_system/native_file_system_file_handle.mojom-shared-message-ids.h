// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 286364983 value is based on sha256(salt + "NativeFileSystemFileHandle1").
constexpr uint32_t kNativeFileSystemFileHandle_AsBlob_Name = 286364983;
// The 386022324 value is based on sha256(salt + "NativeFileSystemFileHandle2").
constexpr uint32_t kNativeFileSystemFileHandle_Remove_Name = 386022324;
// The 1127460921 value is based on sha256(salt + "NativeFileSystemFileHandle3").
constexpr uint32_t kNativeFileSystemFileHandle_Write_Name = 1127460921;
// The 1761500533 value is based on sha256(salt + "NativeFileSystemFileHandle4").
constexpr uint32_t kNativeFileSystemFileHandle_WriteStream_Name = 1761500533;
// The 383708504 value is based on sha256(salt + "NativeFileSystemFileHandle5").
constexpr uint32_t kNativeFileSystemFileHandle_Truncate_Name = 383708504;
// The 1100271988 value is based on sha256(salt + "NativeFileSystemFileHandle6").
constexpr uint32_t kNativeFileSystemFileHandle_Transfer_Name = 1100271988;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_