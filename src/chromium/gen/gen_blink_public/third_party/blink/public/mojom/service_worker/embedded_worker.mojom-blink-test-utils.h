// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT EmbeddedWorkerInstanceClientInterceptorForTesting : public EmbeddedWorkerInstanceClient {
  virtual EmbeddedWorkerInstanceClient* GetForwardingInterface() = 0;
  void StartWorker(EmbeddedWorkerStartParamsPtr params) override;
  void StopWorker() override;
  void ResumeAfterDownload() override;
  void AddMessageToConsole(::blink::mojom::blink::ConsoleMessageLevel level, const WTF::String& message) override;
  void BindDevToolsAgent(::blink::mojom::blink::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::blink::DevToolsAgentAssociatedRequest agent) override;
  void UpdateSubresourceLoaderFactories(::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories) override;
};
class CORE_EXPORT EmbeddedWorkerInstanceClientAsyncWaiter {
 public:
  explicit EmbeddedWorkerInstanceClientAsyncWaiter(EmbeddedWorkerInstanceClient* proxy);
  ~EmbeddedWorkerInstanceClientAsyncWaiter();

 private:
  EmbeddedWorkerInstanceClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedWorkerInstanceClientAsyncWaiter);
};


class CORE_EXPORT EmbeddedWorkerInstanceHostInterceptorForTesting : public EmbeddedWorkerInstanceHost {
  virtual EmbeddedWorkerInstanceHost* GetForwardingInterface() = 0;
  void RequestTermination(RequestTerminationCallback callback) override;
  void CountFeature(::blink::mojom::blink::WebFeature feature) override;
  void OnReadyForInspection() override;
  void OnScriptLoaded() override;
  void OnScriptEvaluationStart() override;
  void OnStarted(::blink::mojom::blink::ServiceWorkerStartStatus status, int32_t thread_id, EmbeddedWorkerStartTimingPtr start_timing) override;
  void OnReportException(const WTF::String& error_message, int32_t line_number, int32_t column_number, const ::blink::KURL& source_url) override;
  void OnReportConsoleMessage(::blink::mojom::blink::ConsoleMessageSource source, ::blink::mojom::blink::ConsoleMessageLevel message_level, const WTF::String& message, int32_t line_number, const ::blink::KURL& source_url) override;
  void OnStopped() override;
};
class CORE_EXPORT EmbeddedWorkerInstanceHostAsyncWaiter {
 public:
  explicit EmbeddedWorkerInstanceHostAsyncWaiter(EmbeddedWorkerInstanceHost* proxy);
  ~EmbeddedWorkerInstanceHostAsyncWaiter();
  void RequestTermination(
      bool* out_will_be_terminated);

 private:
  EmbeddedWorkerInstanceHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedWorkerInstanceHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_TEST_UTILS_H_