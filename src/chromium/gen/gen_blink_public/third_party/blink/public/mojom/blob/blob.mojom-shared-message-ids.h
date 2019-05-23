// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kBlobReaderClient_OnCalculatedSize_Name = 0;
constexpr uint32_t kBlobReaderClient_OnComplete_Name = 1;
constexpr uint32_t kBlob_Clone_Name = 0;
constexpr uint32_t kBlob_AsDataPipeGetter_Name = 1;
constexpr uint32_t kBlob_ReadAll_Name = 2;
constexpr uint32_t kBlob_ReadRange_Name = 3;
constexpr uint32_t kBlob_ReadSideData_Name = 4;
constexpr uint32_t kBlob_GetInternalUUID_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_MOJOM_SHARED_MESSAGE_IDS_H_