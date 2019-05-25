// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 646622797 value is based on sha256(salt + "FileSystemCancellableOperation1").
constexpr uint32_t kFileSystemCancellableOperation_Cancel_Name = 646622797;
// The 624881544 value is based on sha256(salt + "FileSystemOperationListener1").
constexpr uint32_t kFileSystemOperationListener_ResultsRetrieved_Name = 624881544;
// The 1023750338 value is based on sha256(salt + "FileSystemOperationListener2").
constexpr uint32_t kFileSystemOperationListener_DidWrite_Name = 1023750338;
// The 1889887803 value is based on sha256(salt + "FileSystemOperationListener3").
constexpr uint32_t kFileSystemOperationListener_ErrorOccurred_Name = 1889887803;
// The 1173720807 value is based on sha256(salt + "ReceivedSnapshotListener1").
constexpr uint32_t kReceivedSnapshotListener_DidReceiveSnapshotFile_Name = 1173720807;
// The 424442510 value is based on sha256(salt + "FileSystemManager1").
constexpr uint32_t kFileSystemManager_Open_Name = 424442510;
// The 593734101 value is based on sha256(salt + "FileSystemManager2").
constexpr uint32_t kFileSystemManager_ResolveURL_Name = 593734101;
// The 1076904189 value is based on sha256(salt + "FileSystemManager3").
constexpr uint32_t kFileSystemManager_Move_Name = 1076904189;
// The 1048852299 value is based on sha256(salt + "FileSystemManager4").
constexpr uint32_t kFileSystemManager_Copy_Name = 1048852299;
// The 421427835 value is based on sha256(salt + "FileSystemManager5").
constexpr uint32_t kFileSystemManager_Remove_Name = 421427835;
// The 1552887827 value is based on sha256(salt + "FileSystemManager6").
constexpr uint32_t kFileSystemManager_ReadMetadata_Name = 1552887827;
// The 1387634335 value is based on sha256(salt + "FileSystemManager7").
constexpr uint32_t kFileSystemManager_Create_Name = 1387634335;
// The 839813127 value is based on sha256(salt + "FileSystemManager8").
constexpr uint32_t kFileSystemManager_Exists_Name = 839813127;
// The 255663458 value is based on sha256(salt + "FileSystemManager9").
constexpr uint32_t kFileSystemManager_ReadDirectory_Name = 255663458;
// The 271940684 value is based on sha256(salt + "FileSystemManager10").
constexpr uint32_t kFileSystemManager_ReadDirectorySync_Name = 271940684;
// The 606591406 value is based on sha256(salt + "FileSystemManager11").
constexpr uint32_t kFileSystemManager_Write_Name = 606591406;
// The 2058032308 value is based on sha256(salt + "FileSystemManager12").
constexpr uint32_t kFileSystemManager_WriteSync_Name = 2058032308;
// The 1564669216 value is based on sha256(salt + "FileSystemManager13").
constexpr uint32_t kFileSystemManager_Truncate_Name = 1564669216;
// The 1694869304 value is based on sha256(salt + "FileSystemManager14").
constexpr uint32_t kFileSystemManager_TruncateSync_Name = 1694869304;
// The 1269219201 value is based on sha256(salt + "FileSystemManager15").
constexpr uint32_t kFileSystemManager_TouchFile_Name = 1269219201;
// The 1089022442 value is based on sha256(salt + "FileSystemManager16").
constexpr uint32_t kFileSystemManager_CreateSnapshotFile_Name = 1089022442;
// The 1917753493 value is based on sha256(salt + "FileSystemManager17").
constexpr uint32_t kFileSystemManager_GetPlatformPath_Name = 1917753493;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_