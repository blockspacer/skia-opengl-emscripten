// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace filesystem {
namespace mojom {

namespace internal {


// The 1127367501 value is based on sha256(salt + "Directory1").
constexpr uint32_t kDirectory_Read_Name = 1127367501;
// The 1530990825 value is based on sha256(salt + "Directory2").
constexpr uint32_t kDirectory_OpenFile_Name = 1530990825;
// The 433220669 value is based on sha256(salt + "Directory3").
constexpr uint32_t kDirectory_OpenFileHandle_Name = 433220669;
// The 1489932753 value is based on sha256(salt + "Directory4").
constexpr uint32_t kDirectory_OpenFileHandles_Name = 1489932753;
// The 1311304010 value is based on sha256(salt + "Directory5").
constexpr uint32_t kDirectory_OpenDirectory_Name = 1311304010;
// The 2041744727 value is based on sha256(salt + "Directory6").
constexpr uint32_t kDirectory_Rename_Name = 2041744727;
// The 526715993 value is based on sha256(salt + "Directory7").
constexpr uint32_t kDirectory_Replace_Name = 526715993;
// The 177049058 value is based on sha256(salt + "Directory8").
constexpr uint32_t kDirectory_Delete_Name = 177049058;
// The 908527938 value is based on sha256(salt + "Directory9").
constexpr uint32_t kDirectory_Exists_Name = 908527938;
// The 1217871483 value is based on sha256(salt + "Directory10").
constexpr uint32_t kDirectory_IsWritable_Name = 1217871483;
// The 244112403 value is based on sha256(salt + "Directory11").
constexpr uint32_t kDirectory_Flush_Name = 244112403;
// The 1922795792 value is based on sha256(salt + "Directory12").
constexpr uint32_t kDirectory_StatFile_Name = 1922795792;
// The 373196855 value is based on sha256(salt + "Directory13").
constexpr uint32_t kDirectory_Clone_Name = 373196855;
// The 185643801 value is based on sha256(salt + "Directory14").
constexpr uint32_t kDirectory_ReadEntireFile_Name = 185643801;
// The 856236741 value is based on sha256(salt + "Directory15").
constexpr uint32_t kDirectory_WriteFile_Name = 856236741;

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_