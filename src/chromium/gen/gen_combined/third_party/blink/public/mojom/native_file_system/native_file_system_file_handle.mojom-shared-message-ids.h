// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1836239481 value is based on sha256(salt + "NativeFileSystemFileHandle1").
constexpr uint32_t kNativeFileSystemFileHandle_AsBlob_Name = 1836239481;
// The 89220491 value is based on sha256(salt + "NativeFileSystemFileHandle2").
constexpr uint32_t kNativeFileSystemFileHandle_Remove_Name = 89220491;
// The 9407164 value is based on sha256(salt + "NativeFileSystemFileHandle3").
constexpr uint32_t kNativeFileSystemFileHandle_Write_Name = 9407164;
// The 1818812267 value is based on sha256(salt + "NativeFileSystemFileHandle4").
constexpr uint32_t kNativeFileSystemFileHandle_WriteStream_Name = 1818812267;
// The 625118647 value is based on sha256(salt + "NativeFileSystemFileHandle5").
constexpr uint32_t kNativeFileSystemFileHandle_Truncate_Name = 625118647;
// The 1608017678 value is based on sha256(salt + "NativeFileSystemFileHandle6").
constexpr uint32_t kNativeFileSystemFileHandle_Transfer_Name = 1608017678;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NATIVE_FILE_SYSTEM_NATIVE_FILE_SYSTEM_FILE_HANDLE_MOJOM_SHARED_MESSAGE_IDS_H_