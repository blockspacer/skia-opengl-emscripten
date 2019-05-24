// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace leveldb {
namespace mojom {

namespace internal {


// The 772735219 value is based on sha256(salt + "LevelDBService1").
constexpr uint32_t kLevelDBService_Open_Name = 772735219;
// The 997521011 value is based on sha256(salt + "LevelDBService2").
constexpr uint32_t kLevelDBService_OpenWithOptions_Name = 997521011;
// The 395199395 value is based on sha256(salt + "LevelDBService3").
constexpr uint32_t kLevelDBService_OpenInMemory_Name = 395199395;
// The 152125399 value is based on sha256(salt + "LevelDBService4").
constexpr uint32_t kLevelDBService_Destroy_Name = 152125399;
// The 25372756 value is based on sha256(salt + "LevelDBDatabase1").
constexpr uint32_t kLevelDBDatabase_Put_Name = 25372756;
// The 313891622 value is based on sha256(salt + "LevelDBDatabase2").
constexpr uint32_t kLevelDBDatabase_Delete_Name = 313891622;
// The 1124848641 value is based on sha256(salt + "LevelDBDatabase3").
constexpr uint32_t kLevelDBDatabase_DeletePrefixed_Name = 1124848641;
// The 756471624 value is based on sha256(salt + "LevelDBDatabase4").
constexpr uint32_t kLevelDBDatabase_RewriteDB_Name = 756471624;
// The 487092864 value is based on sha256(salt + "LevelDBDatabase5").
constexpr uint32_t kLevelDBDatabase_Write_Name = 487092864;
// The 396421518 value is based on sha256(salt + "LevelDBDatabase6").
constexpr uint32_t kLevelDBDatabase_Get_Name = 396421518;
// The 1973990256 value is based on sha256(salt + "LevelDBDatabase7").
constexpr uint32_t kLevelDBDatabase_GetPrefixed_Name = 1973990256;
// The 2136401790 value is based on sha256(salt + "LevelDBDatabase8").
constexpr uint32_t kLevelDBDatabase_CopyPrefixed_Name = 2136401790;
// The 688491113 value is based on sha256(salt + "LevelDBDatabase9").
constexpr uint32_t kLevelDBDatabase_GetSnapshot_Name = 688491113;
// The 951621550 value is based on sha256(salt + "LevelDBDatabase10").
constexpr uint32_t kLevelDBDatabase_ReleaseSnapshot_Name = 951621550;
// The 1378397050 value is based on sha256(salt + "LevelDBDatabase11").
constexpr uint32_t kLevelDBDatabase_GetFromSnapshot_Name = 1378397050;
// The 1769489902 value is based on sha256(salt + "LevelDBDatabase12").
constexpr uint32_t kLevelDBDatabase_NewIterator_Name = 1769489902;
// The 904037637 value is based on sha256(salt + "LevelDBDatabase13").
constexpr uint32_t kLevelDBDatabase_NewIteratorFromSnapshot_Name = 904037637;
// The 2130856689 value is based on sha256(salt + "LevelDBDatabase14").
constexpr uint32_t kLevelDBDatabase_ReleaseIterator_Name = 2130856689;
// The 1088359819 value is based on sha256(salt + "LevelDBDatabase15").
constexpr uint32_t kLevelDBDatabase_IteratorSeekToFirst_Name = 1088359819;
// The 767792429 value is based on sha256(salt + "LevelDBDatabase16").
constexpr uint32_t kLevelDBDatabase_IteratorSeekToLast_Name = 767792429;
// The 727424965 value is based on sha256(salt + "LevelDBDatabase17").
constexpr uint32_t kLevelDBDatabase_IteratorSeek_Name = 727424965;
// The 1189847880 value is based on sha256(salt + "LevelDBDatabase18").
constexpr uint32_t kLevelDBDatabase_IteratorNext_Name = 1189847880;
// The 741588404 value is based on sha256(salt + "LevelDBDatabase19").
constexpr uint32_t kLevelDBDatabase_IteratorPrev_Name = 741588404;

}  // namespace internal
}  // namespace mojom
}  // namespace leveldb

#endif  // COMPONENTS_SERVICES_LEVELDB_PUBLIC_INTERFACES_LEVELDB_MOJOM_SHARED_MESSAGE_IDS_H_