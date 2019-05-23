// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace filesystem {
namespace mojom {

namespace internal {


// The 1605830984 value is based on sha256(salt + "File1").
constexpr uint32_t kFile_Close_Name = 1605830984;
// The 1092517874 value is based on sha256(salt + "File2").
constexpr uint32_t kFile_Read_Name = 1092517874;
// The 2022640444 value is based on sha256(salt + "File3").
constexpr uint32_t kFile_Write_Name = 2022640444;
// The 1090034252 value is based on sha256(salt + "File4").
constexpr uint32_t kFile_Tell_Name = 1090034252;
// The 129647020 value is based on sha256(salt + "File5").
constexpr uint32_t kFile_Seek_Name = 129647020;
// The 333637558 value is based on sha256(salt + "File6").
constexpr uint32_t kFile_Stat_Name = 333637558;
// The 1194988137 value is based on sha256(salt + "File7").
constexpr uint32_t kFile_Truncate_Name = 1194988137;
// The 1381666860 value is based on sha256(salt + "File8").
constexpr uint32_t kFile_Touch_Name = 1381666860;
// The 293126438 value is based on sha256(salt + "File9").
constexpr uint32_t kFile_Dup_Name = 293126438;
// The 889736415 value is based on sha256(salt + "File10").
constexpr uint32_t kFile_Flush_Name = 889736415;
// The 1767914073 value is based on sha256(salt + "File11").
constexpr uint32_t kFile_Lock_Name = 1767914073;
// The 726559354 value is based on sha256(salt + "File12").
constexpr uint32_t kFile_Unlock_Name = 726559354;
// The 674972823 value is based on sha256(salt + "File13").
constexpr uint32_t kFile_AsHandle_Name = 674972823;

}  // namespace internal
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_INTERFACES_FILE_MOJOM_SHARED_MESSAGE_IDS_H_