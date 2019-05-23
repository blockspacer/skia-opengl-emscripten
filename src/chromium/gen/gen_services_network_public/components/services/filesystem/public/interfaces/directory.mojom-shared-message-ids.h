// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace filesystem {
namespace mojom {

namespace internal {


// The 1091739834 value is based on sha256(salt + "Directory1").
constexpr uint32_t kDirectory_Read_Name = 1091739834;
// The 775183618 value is based on sha256(salt + "Directory2").
constexpr uint32_t kDirectory_OpenFile_Name = 775183618;
// The 2146427011 value is based on sha256(salt + "Directory3").
constexpr uint32_t kDirectory_OpenFileHandle_Name = 2146427011;
// The 2055378912 value is based on sha256(salt + "Directory4").
constexpr uint32_t kDirectory_OpenFileHandles_Name = 2055378912;
// The 1949310505 value is based on sha256(salt + "Directory5").
constexpr uint32_t kDirectory_OpenDirectory_Name = 1949310505;
// The 1026396982 value is based on sha256(salt + "Directory6").
constexpr uint32_t kDirectory_Rename_Name = 1026396982;
// The 596848821 value is based on sha256(salt + "Directory7").
constexpr uint32_t kDirectory_Replace_Name = 596848821;
// The 1973442205 value is based on sha256(salt + "Directory8").
constexpr uint32_t kDirectory_Delete_Name = 1973442205;
// The 416620570 value is based on sha256(salt + "Directory9").
constexpr uint32_t kDirectory_Exists_Name = 416620570;
// The 1554962961 value is based on sha256(salt + "Directory10").
constexpr uint32_t kDirectory_IsWritable_Name = 1554962961;
// The 209347559 value is based on sha256(salt + "Directory11").
constexpr uint32_t kDirectory_Flush_Name = 209347559;
// The 1411168742 value is based on sha256(salt + "Directory12").
constexpr uint32_t kDirectory_StatFile_Name = 1411168742;
// The 148542736 value is based on sha256(salt + "Directory13").
constexpr uint32_t kDirectory_Clone_Name = 148542736;
// The 1161764102 value is based on sha256(salt + "Directory14").
constexpr uint32_t kDirectory_ReadEntireFile_Name = 1161764102;
// The 717697237 value is based on sha256(salt + "Directory15").
constexpr uint32_t kDirectory_WriteFile_Name = 717697237;

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_DIRECTORY_MOJOM_SHARED_MESSAGE_IDS_H_