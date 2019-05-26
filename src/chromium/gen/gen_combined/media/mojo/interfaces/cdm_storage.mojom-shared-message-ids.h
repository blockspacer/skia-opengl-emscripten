// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 142329108 value is based on sha256(salt + "CdmStorage1").
constexpr uint32_t kCdmStorage_Open_Name = 142329108;
// The 1194981230 value is based on sha256(salt + "CdmFile1").
constexpr uint32_t kCdmFile_OpenFileForWriting_Name = 1194981230;
// The 279369311 value is based on sha256(salt + "CdmFile2").
constexpr uint32_t kCdmFile_CommitWrite_Name = 279369311;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_