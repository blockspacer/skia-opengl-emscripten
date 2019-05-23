// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1394963460 value is based on sha256(salt + "WorkerContentSettingsProxy1").
constexpr uint32_t kWorkerContentSettingsProxy_AllowIndexedDB_Name = 1394963460;
// The 620180654 value is based on sha256(salt + "WorkerContentSettingsProxy2").
constexpr uint32_t kWorkerContentSettingsProxy_AllowCacheStorage_Name = 620180654;
// The 262264467 value is based on sha256(salt + "WorkerContentSettingsProxy3").
constexpr uint32_t kWorkerContentSettingsProxy_RequestFileSystemAccessSync_Name = 262264467;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_SHARED_MESSAGE_IDS_H_