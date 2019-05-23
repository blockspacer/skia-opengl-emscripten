// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1944780122 value is based on sha256(salt + "IDBCallbacks1").
constexpr uint32_t kIDBCallbacks_Error_Name = 1944780122;
// The 1021749433 value is based on sha256(salt + "IDBCallbacks2").
constexpr uint32_t kIDBCallbacks_SuccessNamesAndVersionsList_Name = 1021749433;
// The 49726878 value is based on sha256(salt + "IDBCallbacks3").
constexpr uint32_t kIDBCallbacks_SuccessStringList_Name = 49726878;
// The 49356475 value is based on sha256(salt + "IDBCallbacks4").
constexpr uint32_t kIDBCallbacks_Blocked_Name = 49356475;
// The 1655930496 value is based on sha256(salt + "IDBCallbacks5").
constexpr uint32_t kIDBCallbacks_UpgradeNeeded_Name = 1655930496;
// The 394767480 value is based on sha256(salt + "IDBCallbacks6").
constexpr uint32_t kIDBCallbacks_SuccessDatabase_Name = 394767480;
// The 1124806211 value is based on sha256(salt + "IDBCallbacks7").
constexpr uint32_t kIDBCallbacks_SuccessCursor_Name = 1124806211;
// The 425839995 value is based on sha256(salt + "IDBCallbacks8").
constexpr uint32_t kIDBCallbacks_SuccessValue_Name = 425839995;
// The 615736574 value is based on sha256(salt + "IDBCallbacks9").
constexpr uint32_t kIDBCallbacks_SuccessArray_Name = 615736574;
// The 1292081789 value is based on sha256(salt + "IDBCallbacks10").
constexpr uint32_t kIDBCallbacks_SuccessKey_Name = 1292081789;
// The 989396308 value is based on sha256(salt + "IDBCallbacks11").
constexpr uint32_t kIDBCallbacks_SuccessInteger_Name = 989396308;
// The 1763149320 value is based on sha256(salt + "IDBCallbacks12").
constexpr uint32_t kIDBCallbacks_Success_Name = 1763149320;
// The 159563675 value is based on sha256(salt + "IDBDatabaseCallbacks1").
constexpr uint32_t kIDBDatabaseCallbacks_ForcedClose_Name = 159563675;
// The 1362768538 value is based on sha256(salt + "IDBDatabaseCallbacks2").
constexpr uint32_t kIDBDatabaseCallbacks_VersionChange_Name = 1362768538;
// The 1987586375 value is based on sha256(salt + "IDBDatabaseCallbacks3").
constexpr uint32_t kIDBDatabaseCallbacks_Abort_Name = 1987586375;
// The 224968767 value is based on sha256(salt + "IDBDatabaseCallbacks4").
constexpr uint32_t kIDBDatabaseCallbacks_Complete_Name = 224968767;
// The 679351373 value is based on sha256(salt + "IDBDatabaseCallbacks5").
constexpr uint32_t kIDBDatabaseCallbacks_Changes_Name = 679351373;
// The 1110346585 value is based on sha256(salt + "IDBCursor1").
constexpr uint32_t kIDBCursor_Advance_Name = 1110346585;
// The 1052207707 value is based on sha256(salt + "IDBCursor2").
constexpr uint32_t kIDBCursor_CursorContinue_Name = 1052207707;
// The 1706628101 value is based on sha256(salt + "IDBCursor3").
constexpr uint32_t kIDBCursor_Prefetch_Name = 1706628101;
// The 1773708508 value is based on sha256(salt + "IDBCursor4").
constexpr uint32_t kIDBCursor_PrefetchReset_Name = 1773708508;
// The 1857536647 value is based on sha256(salt + "IDBTransaction1").
constexpr uint32_t kIDBTransaction_CreateObjectStore_Name = 1857536647;
// The 1548853566 value is based on sha256(salt + "IDBTransaction2").
constexpr uint32_t kIDBTransaction_DeleteObjectStore_Name = 1548853566;
// The 1233710140 value is based on sha256(salt + "IDBTransaction3").
constexpr uint32_t kIDBTransaction_Put_Name = 1233710140;
// The 444180970 value is based on sha256(salt + "IDBTransaction4").
constexpr uint32_t kIDBTransaction_Commit_Name = 444180970;
// The 2041909076 value is based on sha256(salt + "IDBDatabase1").
constexpr uint32_t kIDBDatabase_RenameObjectStore_Name = 2041909076;
// The 1487239150 value is based on sha256(salt + "IDBDatabase2").
constexpr uint32_t kIDBDatabase_CreateTransaction_Name = 1487239150;
// The 417196782 value is based on sha256(salt + "IDBDatabase3").
constexpr uint32_t kIDBDatabase_Close_Name = 417196782;
// The 1887653154 value is based on sha256(salt + "IDBDatabase4").
constexpr uint32_t kIDBDatabase_VersionChangeIgnored_Name = 1887653154;
// The 1178711488 value is based on sha256(salt + "IDBDatabase5").
constexpr uint32_t kIDBDatabase_AddObserver_Name = 1178711488;
// The 1965283373 value is based on sha256(salt + "IDBDatabase6").
constexpr uint32_t kIDBDatabase_RemoveObservers_Name = 1965283373;
// The 1629567643 value is based on sha256(salt + "IDBDatabase7").
constexpr uint32_t kIDBDatabase_Get_Name = 1629567643;
// The 729360676 value is based on sha256(salt + "IDBDatabase8").
constexpr uint32_t kIDBDatabase_GetAll_Name = 729360676;
// The 474365898 value is based on sha256(salt + "IDBDatabase9").
constexpr uint32_t kIDBDatabase_SetIndexKeys_Name = 474365898;
// The 1494199697 value is based on sha256(salt + "IDBDatabase10").
constexpr uint32_t kIDBDatabase_SetIndexesReady_Name = 1494199697;
// The 689131423 value is based on sha256(salt + "IDBDatabase11").
constexpr uint32_t kIDBDatabase_OpenCursor_Name = 689131423;
// The 1070744150 value is based on sha256(salt + "IDBDatabase12").
constexpr uint32_t kIDBDatabase_Count_Name = 1070744150;
// The 657715609 value is based on sha256(salt + "IDBDatabase13").
constexpr uint32_t kIDBDatabase_DeleteRange_Name = 657715609;
// The 2104331626 value is based on sha256(salt + "IDBDatabase14").
constexpr uint32_t kIDBDatabase_GetKeyGeneratorCurrentNumber_Name = 2104331626;
// The 1926233401 value is based on sha256(salt + "IDBDatabase15").
constexpr uint32_t kIDBDatabase_Clear_Name = 1926233401;
// The 1512749872 value is based on sha256(salt + "IDBDatabase16").
constexpr uint32_t kIDBDatabase_CreateIndex_Name = 1512749872;
// The 1456631243 value is based on sha256(salt + "IDBDatabase17").
constexpr uint32_t kIDBDatabase_DeleteIndex_Name = 1456631243;
// The 1849352468 value is based on sha256(salt + "IDBDatabase18").
constexpr uint32_t kIDBDatabase_RenameIndex_Name = 1849352468;
// The 134017176 value is based on sha256(salt + "IDBDatabase19").
constexpr uint32_t kIDBDatabase_Abort_Name = 134017176;
// The 1418109224 value is based on sha256(salt + "IDBFactory1").
constexpr uint32_t kIDBFactory_GetDatabaseInfo_Name = 1418109224;
// The 1380872281 value is based on sha256(salt + "IDBFactory2").
constexpr uint32_t kIDBFactory_GetDatabaseNames_Name = 1380872281;
// The 737457944 value is based on sha256(salt + "IDBFactory3").
constexpr uint32_t kIDBFactory_Open_Name = 737457944;
// The 1787094372 value is based on sha256(salt + "IDBFactory4").
constexpr uint32_t kIDBFactory_DeleteDatabase_Name = 1787094372;
// The 1642376494 value is based on sha256(salt + "IDBFactory5").
constexpr uint32_t kIDBFactory_AbortTransactionsAndCompactDatabase_Name = 1642376494;
// The 1113568093 value is based on sha256(salt + "IDBFactory6").
constexpr uint32_t kIDBFactory_AbortTransactionsForDatabase_Name = 1113568093;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INDEXEDDB_INDEXEDDB_MOJOM_SHARED_MESSAGE_IDS_H_