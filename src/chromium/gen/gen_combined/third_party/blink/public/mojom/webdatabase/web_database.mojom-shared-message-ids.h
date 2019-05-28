// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 662077461 value is based on sha256(salt + "WebDatabase1").
constexpr uint32_t kWebDatabase_UpdateSize_Name = 662077461;
// The 1716864929 value is based on sha256(salt + "WebDatabase2").
constexpr uint32_t kWebDatabase_CloseImmediately_Name = 1716864929;
// The 2040137975 value is based on sha256(salt + "WebDatabaseHost1").
constexpr uint32_t kWebDatabaseHost_OpenFile_Name = 2040137975;
// The 1737616915 value is based on sha256(salt + "WebDatabaseHost2").
constexpr uint32_t kWebDatabaseHost_DeleteFile_Name = 1737616915;
// The 1471820757 value is based on sha256(salt + "WebDatabaseHost3").
constexpr uint32_t kWebDatabaseHost_GetFileAttributes_Name = 1471820757;
// The 1332972258 value is based on sha256(salt + "WebDatabaseHost4").
constexpr uint32_t kWebDatabaseHost_GetFileSize_Name = 1332972258;
// The 778921661 value is based on sha256(salt + "WebDatabaseHost5").
constexpr uint32_t kWebDatabaseHost_SetFileSize_Name = 778921661;
// The 1876594004 value is based on sha256(salt + "WebDatabaseHost6").
constexpr uint32_t kWebDatabaseHost_GetSpaceAvailable_Name = 1876594004;
// The 1832119787 value is based on sha256(salt + "WebDatabaseHost7").
constexpr uint32_t kWebDatabaseHost_Opened_Name = 1832119787;
// The 2142998840 value is based on sha256(salt + "WebDatabaseHost8").
constexpr uint32_t kWebDatabaseHost_Modified_Name = 2142998840;
// The 1338060535 value is based on sha256(salt + "WebDatabaseHost9").
constexpr uint32_t kWebDatabaseHost_Closed_Name = 1338060535;
// The 1318460334 value is based on sha256(salt + "WebDatabaseHost10").
constexpr uint32_t kWebDatabaseHost_HandleSqliteError_Name = 1318460334;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBDATABASE_WEB_DATABASE_MOJOM_SHARED_MESSAGE_IDS_H_