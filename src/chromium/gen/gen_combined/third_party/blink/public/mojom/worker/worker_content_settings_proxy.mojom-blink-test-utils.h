// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT WorkerContentSettingsProxyInterceptorForTesting : public WorkerContentSettingsProxy {
  virtual WorkerContentSettingsProxy* GetForwardingInterface() = 0;
  void AllowIndexedDB(AllowIndexedDBCallback callback) override;
  void AllowCacheStorage(AllowCacheStorageCallback callback) override;
  void RequestFileSystemAccessSync(RequestFileSystemAccessSyncCallback callback) override;
};
class PLATFORM_EXPORT WorkerContentSettingsProxyAsyncWaiter {
 public:
  explicit WorkerContentSettingsProxyAsyncWaiter(WorkerContentSettingsProxy* proxy);
  ~WorkerContentSettingsProxyAsyncWaiter();
  void AllowIndexedDB(
      bool* out_result);
  void AllowCacheStorage(
      bool* out_result);
  void RequestFileSystemAccessSync(
      bool* out_result);

 private:
  WorkerContentSettingsProxy* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(WorkerContentSettingsProxyAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_BLINK_TEST_UTILS_H_