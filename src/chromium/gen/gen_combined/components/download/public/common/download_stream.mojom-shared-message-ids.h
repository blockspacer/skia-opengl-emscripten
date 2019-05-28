// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_
#define COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace download {
namespace mojom {

namespace internal {


// The 1830275460 value is based on sha256(salt + "DownloadStreamClient1").
constexpr uint32_t kDownloadStreamClient_OnStreamCompleted_Name = 1830275460;

}  // namespace internal
}  // namespace mojom
}  // namespace download

#endif  // COMPONENTS_DOWNLOAD_PUBLIC_COMMON_DOWNLOAD_STREAM_MOJOM_SHARED_MESSAGE_IDS_H_