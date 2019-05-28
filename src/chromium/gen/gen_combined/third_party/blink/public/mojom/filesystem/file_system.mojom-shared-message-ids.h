// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1080231115 value is based on sha256(salt + "FileSystemCancellableOperation1").
constexpr uint32_t kFileSystemCancellableOperation_Cancel_Name = 1080231115;
// The 1153835763 value is based on sha256(salt + "FileSystemOperationListener1").
constexpr uint32_t kFileSystemOperationListener_ResultsRetrieved_Name = 1153835763;
// The 1436143968 value is based on sha256(salt + "FileSystemOperationListener2").
constexpr uint32_t kFileSystemOperationListener_DidWrite_Name = 1436143968;
// The 361089215 value is based on sha256(salt + "FileSystemOperationListener3").
constexpr uint32_t kFileSystemOperationListener_ErrorOccurred_Name = 361089215;
// The 822944946 value is based on sha256(salt + "ReceivedSnapshotListener1").
constexpr uint32_t kReceivedSnapshotListener_DidReceiveSnapshotFile_Name = 822944946;
// The 1308245768 value is based on sha256(salt + "FileSystemManager1").
constexpr uint32_t kFileSystemManager_Open_Name = 1308245768;
// The 43258719 value is based on sha256(salt + "FileSystemManager2").
constexpr uint32_t kFileSystemManager_ResolveURL_Name = 43258719;
// The 396800860 value is based on sha256(salt + "FileSystemManager3").
constexpr uint32_t kFileSystemManager_Move_Name = 396800860;
// The 861458201 value is based on sha256(salt + "FileSystemManager4").
constexpr uint32_t kFileSystemManager_Copy_Name = 861458201;
// The 428435343 value is based on sha256(salt + "FileSystemManager5").
constexpr uint32_t kFileSystemManager_Remove_Name = 428435343;
// The 1514550776 value is based on sha256(salt + "FileSystemManager6").
constexpr uint32_t kFileSystemManager_ReadMetadata_Name = 1514550776;
// The 1253444424 value is based on sha256(salt + "FileSystemManager7").
constexpr uint32_t kFileSystemManager_Create_Name = 1253444424;
// The 877094937 value is based on sha256(salt + "FileSystemManager8").
constexpr uint32_t kFileSystemManager_Exists_Name = 877094937;
// The 913091071 value is based on sha256(salt + "FileSystemManager9").
constexpr uint32_t kFileSystemManager_ReadDirectory_Name = 913091071;
// The 1727365545 value is based on sha256(salt + "FileSystemManager10").
constexpr uint32_t kFileSystemManager_ReadDirectorySync_Name = 1727365545;
// The 1701199780 value is based on sha256(salt + "FileSystemManager11").
constexpr uint32_t kFileSystemManager_Write_Name = 1701199780;
// The 576513466 value is based on sha256(salt + "FileSystemManager12").
constexpr uint32_t kFileSystemManager_WriteSync_Name = 576513466;
// The 1654767185 value is based on sha256(salt + "FileSystemManager13").
constexpr uint32_t kFileSystemManager_Truncate_Name = 1654767185;
// The 938039821 value is based on sha256(salt + "FileSystemManager14").
constexpr uint32_t kFileSystemManager_TruncateSync_Name = 938039821;
// The 1436069644 value is based on sha256(salt + "FileSystemManager15").
constexpr uint32_t kFileSystemManager_TouchFile_Name = 1436069644;
// The 165064310 value is based on sha256(salt + "FileSystemManager16").
constexpr uint32_t kFileSystemManager_CreateSnapshotFile_Name = 165064310;
// The 1827587212 value is based on sha256(salt + "FileSystemManager17").
constexpr uint32_t kFileSystemManager_GetPlatformPath_Name = 1827587212;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_SHARED_MESSAGE_IDS_H_