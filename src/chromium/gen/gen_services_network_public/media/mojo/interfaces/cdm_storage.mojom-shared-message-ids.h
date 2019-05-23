// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media {
namespace mojom {

namespace internal {


// The 1084640690 value is based on sha256(salt + "CdmStorage1").
constexpr uint32_t kCdmStorage_Open_Name = 1084640690;
// The 1286126947 value is based on sha256(salt + "CdmFile1").
constexpr uint32_t kCdmFile_OpenFileForWriting_Name = 1286126947;
// The 1147543207 value is based on sha256(salt + "CdmFile2").
constexpr uint32_t kCdmFile_CommitWrite_Name = 1147543207;

}  // namespace internal
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_CDM_STORAGE_MOJOM_SHARED_MESSAGE_IDS_H_