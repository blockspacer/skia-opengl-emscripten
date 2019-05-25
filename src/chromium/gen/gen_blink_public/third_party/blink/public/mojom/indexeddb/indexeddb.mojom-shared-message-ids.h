// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 237382273 value is based on sha256(salt + "IDBCallbacks1").
constexpr uint32_t kIDBCallbacks_Error_Name = 237382273;
// The 549676608 value is based on sha256(salt + "IDBCallbacks2").
constexpr uint32_t kIDBCallbacks_SuccessNamesAndVersionsList_Name = 549676608;
// The 429588683 value is based on sha256(salt + "IDBCallbacks3").
constexpr uint32_t kIDBCallbacks_SuccessStringList_Name = 429588683;
// The 1140562093 value is based on sha256(salt + "IDBCallbacks4").
constexpr uint32_t kIDBCallbacks_Blocked_Name = 1140562093;
// The 249571564 value is based on sha256(salt + "IDBCallbacks5").
constexpr uint32_t kIDBCallbacks_UpgradeNeeded_Name = 249571564;
// The 1674974227 value is based on sha256(salt + "IDBCallbacks6").
constexpr uint32_t kIDBCallbacks_SuccessDatabase_Name = 1674974227;
// The 1493145377 value is based on sha256(salt + "IDBCallbacks7").
constexpr uint32_t kIDBCallbacks_SuccessCursor_Name = 1493145377;
// The 1488080117 value is based on sha256(salt + "IDBCallbacks8").
constexpr uint32_t kIDBCallbacks_SuccessValue_Name = 1488080117;
// The 1227705158 value is based on sha256(salt + "IDBCallbacks9").
constexpr uint32_t kIDBCallbacks_SuccessArray_Name = 1227705158;
// The 782920099 value is based on sha256(salt + "IDBCallbacks10").
constexpr uint32_t kIDBCallbacks_SuccessKey_Name = 782920099;
// The 334528067 value is based on sha256(salt + "IDBCallbacks11").
constexpr uint32_t kIDBCallbacks_SuccessInteger_Name = 334528067;
// The 2082135511 value is based on sha256(salt + "IDBCallbacks12").
constexpr uint32_t kIDBCallbacks_Success_Name = 2082135511;
// The 2135509683 value is based on sha256(salt + "IDBDatabaseCallbacks1").
constexpr uint32_t kIDBDatabaseCallbacks_ForcedClose_Name = 2135509683;
// The 1317595475 value is based on sha256(salt + "IDBDatabaseCallbacks2").
constexpr uint32_t kIDBDatabaseCallbacks_VersionChange_Name = 1317595475;
// The 879481910 value is based on sha256(salt + "IDBDatabaseCallbacks3").
constexpr uint32_t kIDBDatabaseCallbacks_Abort_Name = 879481910;
// The 1574660624 value is based on sha256(salt + "IDBDatabaseCallbacks4").
constexpr uint32_t kIDBDatabaseCallbacks_Complete_Name = 1574660624;
// The 2024159172 value is based on sha256(salt + "IDBDatabaseCallbacks5").
constexpr uint32_t kIDBDatabaseCallbacks_Changes_Name = 2024159172;
// The 733208407 value is based on sha256(salt + "IDBCursor1").
constexpr uint32_t kIDBCursor_Advance_Name = 733208407;
// The 1540834748 value is based on sha256(salt + "IDBCursor2").
constexpr uint32_t kIDBCursor_CursorContinue_Name = 1540834748;
// The 1157494022 value is based on sha256(salt + "IDBCursor3").
constexpr uint32_t kIDBCursor_Prefetch_Name = 1157494022;
// The 1246683015 value is based on sha256(salt + "IDBCursor4").
constexpr uint32_t kIDBCursor_PrefetchReset_Name = 1246683015;
// The 1567481059 value is based on sha256(salt + "IDBTransaction1").
constexpr uint32_t kIDBTransaction_CreateObjectStore_Name = 1567481059;
// The 1961510228 value is based on sha256(salt + "IDBTransaction2").
constexpr uint32_t kIDBTransaction_DeleteObjectStore_Name = 1961510228;
// The 2054283088 value is based on sha256(salt + "IDBTransaction3").
constexpr uint32_t kIDBTransaction_Put_Name = 2054283088;
// The 575109632 value is based on sha256(salt + "IDBTransaction4").
constexpr uint32_t kIDBTransaction_Commit_Name = 575109632;
// The 181880699 value is based on sha256(salt + "IDBDatabase1").
constexpr uint32_t kIDBDatabase_RenameObjectStore_Name = 181880699;
// The 464672719 value is based on sha256(salt + "IDBDatabase2").
constexpr uint32_t kIDBDatabase_CreateTransaction_Name = 464672719;
// The 544681374 value is based on sha256(salt + "IDBDatabase3").
constexpr uint32_t kIDBDatabase_Close_Name = 544681374;
// The 1903717166 value is based on sha256(salt + "IDBDatabase4").
constexpr uint32_t kIDBDatabase_VersionChangeIgnored_Name = 1903717166;
// The 1989032992 value is based on sha256(salt + "IDBDatabase5").
constexpr uint32_t kIDBDatabase_AddObserver_Name = 1989032992;
// The 560933460 value is based on sha256(salt + "IDBDatabase6").
constexpr uint32_t kIDBDatabase_RemoveObservers_Name = 560933460;
// The 1804292743 value is based on sha256(salt + "IDBDatabase7").
constexpr uint32_t kIDBDatabase_Get_Name = 1804292743;
// The 554218405 value is based on sha256(salt + "IDBDatabase8").
constexpr uint32_t kIDBDatabase_GetAll_Name = 554218405;
// The 1520763349 value is based on sha256(salt + "IDBDatabase9").
constexpr uint32_t kIDBDatabase_SetIndexKeys_Name = 1520763349;
// The 831254038 value is based on sha256(salt + "IDBDatabase10").
constexpr uint32_t kIDBDatabase_SetIndexesReady_Name = 831254038;
// The 1691689314 value is based on sha256(salt + "IDBDatabase11").
constexpr uint32_t kIDBDatabase_OpenCursor_Name = 1691689314;
// The 816668190 value is based on sha256(salt + "IDBDatabase12").
constexpr uint32_t kIDBDatabase_Count_Name = 816668190;
// The 1536636117 value is based on sha256(salt + "IDBDatabase13").
constexpr uint32_t kIDBDatabase_DeleteRange_Name = 1536636117;
// The 645764454 value is based on sha256(salt + "IDBDatabase14").
constexpr uint32_t kIDBDatabase_GetKeyGeneratorCurrentNumber_Name = 645764454;
// The 779964867 value is based on sha256(salt + "IDBDatabase15").
constexpr uint32_t kIDBDatabase_Clear_Name = 779964867;
// The 304019749 value is based on sha256(salt + "IDBDatabase16").
constexpr uint32_t kIDBDatabase_CreateIndex_Name = 304019749;
// The 1647861881 value is based on sha256(salt + "IDBDatabase17").
constexpr uint32_t kIDBDatabase_DeleteIndex_Name = 1647861881;
// The 669619696 value is based on sha256(salt + "IDBDatabase18").
constexpr uint32_t kIDBDatabase_RenameIndex_Name = 669619696;
// The 375050629 value is based on sha256(salt + "IDBDatabase19").
constexpr uint32_t kIDBDatabase_Abort_Name = 375050629;
// The 1765100642 value is based on sha256(salt + "IDBFactory1").
constexpr uint32_t kIDBFactory_GetDatabaseInfo_Name = 1765100642;
// The 124373448 value is based on sha256(salt + "IDBFactory2").
constexpr uint32_t kIDBFactory_GetDatabaseNames_Name = 124373448;
// The 55701254 value is based on sha256(salt + "IDBFactory3").
constexpr uint32_t kIDBFactory_Open_Name = 55701254;
// The 1762021656 value is based on sha256(salt + "IDBFactory4").
constexpr uint32_t kIDBFactory_DeleteDatabase_Name = 1762021656;
// The 1695019728 value is based on sha256(salt + "IDBFactory5").
constexpr uint32_t kIDBFactory_AbortTransactionsAndCompactDatabase_Name = 1695019728;
// The 171384363 value is based on sha256(salt + "IDBFactory6").
constexpr uint32_t kIDBFactory_AbortTransactionsForDatabase_Name = 171384363;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_MESSAGE_IDS_H_