// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif


#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "url/mojom/origin.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_WORKER_CONTENT_SETTINGS_PROXY_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void WorkerContentSettingsProxyInterceptorForTesting::AllowIndexedDB(AllowIndexedDBCallback callback) {
  GetForwardingInterface()->AllowIndexedDB(std::move(callback));
}
void WorkerContentSettingsProxyInterceptorForTesting::AllowCacheStorage(AllowCacheStorageCallback callback) {
  GetForwardingInterface()->AllowCacheStorage(std::move(callback));
}
void WorkerContentSettingsProxyInterceptorForTesting::RequestFileSystemAccessSync(RequestFileSystemAccessSyncCallback callback) {
  GetForwardingInterface()->RequestFileSystemAccessSync(std::move(callback));
}
WorkerContentSettingsProxyAsyncWaiter::WorkerContentSettingsProxyAsyncWaiter(
    WorkerContentSettingsProxy* proxy) : proxy_(proxy) {}

WorkerContentSettingsProxyAsyncWaiter::~WorkerContentSettingsProxyAsyncWaiter() = default;

void WorkerContentSettingsProxyAsyncWaiter::AllowIndexedDB(
    bool* out_result) {
  base::RunLoop loop;
  proxy_->AllowIndexedDB(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WorkerContentSettingsProxyAsyncWaiter::AllowCacheStorage(
    bool* out_result) {
  base::RunLoop loop;
  proxy_->AllowCacheStorage(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WorkerContentSettingsProxyAsyncWaiter::RequestFileSystemAccessSync(
    bool* out_result) {
  base::RunLoop loop;
  proxy_->RequestFileSystemAccessSync(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif