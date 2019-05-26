// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ServiceWorkerInstalledScriptsManagerHostInterceptorForTesting : public ServiceWorkerInstalledScriptsManagerHost {
  virtual ServiceWorkerInstalledScriptsManagerHost* GetForwardingInterface() = 0;
  void RequestInstalledScript(const ::blink::KURL& script_url) override;
};
class PLATFORM_EXPORT ServiceWorkerInstalledScriptsManagerHostAsyncWaiter {
 public:
  explicit ServiceWorkerInstalledScriptsManagerHostAsyncWaiter(ServiceWorkerInstalledScriptsManagerHost* proxy);
  ~ServiceWorkerInstalledScriptsManagerHostAsyncWaiter();

 private:
  ServiceWorkerInstalledScriptsManagerHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerInstalledScriptsManagerHostAsyncWaiter);
};


class PLATFORM_EXPORT ServiceWorkerInstalledScriptsManagerInterceptorForTesting : public ServiceWorkerInstalledScriptsManager {
  virtual ServiceWorkerInstalledScriptsManager* GetForwardingInterface() = 0;
  void TransferInstalledScript(ServiceWorkerScriptInfoPtr script_info) override;
};
class PLATFORM_EXPORT ServiceWorkerInstalledScriptsManagerAsyncWaiter {
 public:
  explicit ServiceWorkerInstalledScriptsManagerAsyncWaiter(ServiceWorkerInstalledScriptsManager* proxy);
  ~ServiceWorkerInstalledScriptsManagerAsyncWaiter();

 private:
  ServiceWorkerInstalledScriptsManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ServiceWorkerInstalledScriptsManagerAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_INSTALLED_SCRIPTS_MANAGER_MOJOM_BLINK_TEST_UTILS_H_