// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1680123320 value is based on sha256(salt + "WebDatabase1").
constexpr uint32_t kWebDatabase_UpdateSize_Name = 1680123320;
// The 1264179273 value is based on sha256(salt + "WebDatabase2").
constexpr uint32_t kWebDatabase_CloseImmediately_Name = 1264179273;
// The 819801806 value is based on sha256(salt + "WebDatabaseHost1").
constexpr uint32_t kWebDatabaseHost_OpenFile_Name = 819801806;
// The 311097874 value is based on sha256(salt + "WebDatabaseHost2").
constexpr uint32_t kWebDatabaseHost_DeleteFile_Name = 311097874;
// The 388300518 value is based on sha256(salt + "WebDatabaseHost3").
constexpr uint32_t kWebDatabaseHost_GetFileAttributes_Name = 388300518;
// The 1410327381 value is based on sha256(salt + "WebDatabaseHost4").
constexpr uint32_t kWebDatabaseHost_GetFileSize_Name = 1410327381;
// The 774490925 value is based on sha256(salt + "WebDatabaseHost5").
constexpr uint32_t kWebDatabaseHost_SetFileSize_Name = 774490925;
// The 802161675 value is based on sha256(salt + "WebDatabaseHost6").
constexpr uint32_t kWebDatabaseHost_GetSpaceAvailable_Name = 802161675;
// The 1278084261 value is based on sha256(salt + "WebDatabaseHost7").
constexpr uint32_t kWebDatabaseHost_Opened_Name = 1278084261;
// The 1087684051 value is based on sha256(salt + "WebDatabaseHost8").
constexpr uint32_t kWebDatabaseHost_Modified_Name = 1087684051;
// The 1800521637 value is based on sha256(salt + "WebDatabaseHost9").
constexpr uint32_t kWebDatabaseHost_Closed_Name = 1800521637;
// The 1452899435 value is based on sha256(salt + "WebDatabaseHost10").
constexpr uint32_t kWebDatabaseHost_HandleSqliteError_Name = 1452899435;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_