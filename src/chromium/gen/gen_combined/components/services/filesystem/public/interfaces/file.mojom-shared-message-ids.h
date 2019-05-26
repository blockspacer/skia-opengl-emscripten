// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace filesystem {
namespace mojom {

namespace internal {


// The 1181012721 value is based on sha256(salt + "File1").
constexpr uint32_t kFile_Close_Name = 1181012721;
// The 60837203 value is based on sha256(salt + "File2").
constexpr uint32_t kFile_Read_Name = 60837203;
// The 1208360887 value is based on sha256(salt + "File3").
constexpr uint32_t kFile_Write_Name = 1208360887;
// The 1006782990 value is based on sha256(salt + "File4").
constexpr uint32_t kFile_Tell_Name = 1006782990;
// The 1237737966 value is based on sha256(salt + "File5").
constexpr uint32_t kFile_Seek_Name = 1237737966;
// The 184588069 value is based on sha256(salt + "File6").
constexpr uint32_t kFile_Stat_Name = 184588069;
// The 1437162847 value is based on sha256(salt + "File7").
constexpr uint32_t kFile_Truncate_Name = 1437162847;
// The 1010494713 value is based on sha256(salt + "File8").
constexpr uint32_t kFile_Touch_Name = 1010494713;
// The 1651580235 value is based on sha256(salt + "File9").
constexpr uint32_t kFile_Dup_Name = 1651580235;
// The 1696995397 value is based on sha256(salt + "File10").
constexpr uint32_t kFile_Flush_Name = 1696995397;
// The 512930350 value is based on sha256(salt + "File11").
constexpr uint32_t kFile_Lock_Name = 512930350;
// The 988374617 value is based on sha256(salt + "File12").
constexpr uint32_t kFile_Unlock_Name = 988374617;
// The 43499531 value is based on sha256(salt + "File13").
constexpr uint32_t kFile_AsHandle_Name = 43499531;

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_