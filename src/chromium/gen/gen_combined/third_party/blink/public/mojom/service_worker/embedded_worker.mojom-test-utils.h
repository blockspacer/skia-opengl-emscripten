// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceClientInterceptorForTesting : public EmbeddedWorkerInstanceClient {
  virtual EmbeddedWorkerInstanceClient* GetForwardingInterface() = 0;
  void StartWorker(EmbeddedWorkerStartParamsPtr params) override;
  void StopWorker() override;
  void ResumeAfterDownload() override;
  void AddMessageToConsole(::blink::mojom::ConsoleMessageLevel level, const std::string& message) override;
  void BindDevToolsAgent(::blink::mojom::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::DevToolsAgentAssociatedRequest agent) override;
  void UpdateSubresourceLoaderFactories(std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories) override;
};
class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceClientAsyncWaiter {
 public:
  explicit EmbeddedWorkerInstanceClientAsyncWaiter(EmbeddedWorkerInstanceClient* proxy);
  ~EmbeddedWorkerInstanceClientAsyncWaiter();

 private:
  EmbeddedWorkerInstanceClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedWorkerInstanceClientAsyncWaiter);
};


class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceHostInterceptorForTesting : public EmbeddedWorkerInstanceHost {
  virtual EmbeddedWorkerInstanceHost* GetForwardingInterface() = 0;
  void RequestTermination(RequestTerminationCallback callback) override;
  void CountFeature(::blink::mojom::WebFeature feature) override;
  void OnReadyForInspection() override;
  void OnScriptLoaded() override;
  void OnScriptEvaluationStart() override;
  void OnStarted(::blink::mojom::ServiceWorkerStartStatus status, int32_t thread_id, EmbeddedWorkerStartTimingPtr start_timing) override;
  void OnReportException(const base::string16& error_message, int32_t line_number, int32_t column_number, const GURL& source_url) override;
  void OnReportConsoleMessage(::blink::mojom::ConsoleMessageSource source, ::blink::mojom::ConsoleMessageLevel message_level, const base::string16& message, int32_t line_number, const GURL& source_url) override;
  void OnStopped() override;
};
class BLINK_COMMON_EXPORT EmbeddedWorkerInstanceHostAsyncWaiter {
 public:
  explicit EmbeddedWorkerInstanceHostAsyncWaiter(EmbeddedWorkerInstanceHost* proxy);
  ~EmbeddedWorkerInstanceHostAsyncWaiter();
  void RequestTermination(
      bool* out_will_be_terminated);

 private:
  EmbeddedWorkerInstanceHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(EmbeddedWorkerInstanceHostAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_TEST_UTILS_H_