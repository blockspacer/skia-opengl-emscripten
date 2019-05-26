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


#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"
#include "third_party/blink/public/mojom/devtools/console_message.mojom-blink.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom-blink.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-blink.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom-blink.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom-blink.h"
#include "third_party/blink/public/mojom/script/script_type.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom-blink.h"
#include "third_party/blink/public/mojom/v8_cache_options.mojom-blink.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom-blink.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/string16_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void EmbeddedWorkerInstanceClientInterceptorForTesting::StartWorker(EmbeddedWorkerStartParamsPtr params) {
  GetForwardingInterface()->StartWorker(std::move(params));
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::StopWorker() {
  GetForwardingInterface()->StopWorker();
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::ResumeAfterDownload() {
  GetForwardingInterface()->ResumeAfterDownload();
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::AddMessageToConsole(::blink::mojom::blink::ConsoleMessageLevel level, const WTF::String& message) {
  GetForwardingInterface()->AddMessageToConsole(std::move(level), std::move(message));
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::BindDevToolsAgent(::blink::mojom::blink::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::blink::DevToolsAgentAssociatedRequest agent) {
  GetForwardingInterface()->BindDevToolsAgent(std::move(agent_host), std::move(agent));
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::UpdateSubresourceLoaderFactories(::blink::mojom::blink::URLLoaderFactoryBundlePtr subresource_loader_factories) {
  GetForwardingInterface()->UpdateSubresourceLoaderFactories(std::move(subresource_loader_factories));
}
EmbeddedWorkerInstanceClientAsyncWaiter::EmbeddedWorkerInstanceClientAsyncWaiter(
    EmbeddedWorkerInstanceClient* proxy) : proxy_(proxy) {}

EmbeddedWorkerInstanceClientAsyncWaiter::~EmbeddedWorkerInstanceClientAsyncWaiter() = default;




void EmbeddedWorkerInstanceHostInterceptorForTesting::RequestTermination(RequestTerminationCallback callback) {
  GetForwardingInterface()->RequestTermination(std::move(callback));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::CountFeature(::blink::mojom::blink::WebFeature feature) {
  GetForwardingInterface()->CountFeature(std::move(feature));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnReadyForInspection() {
  GetForwardingInterface()->OnReadyForInspection();
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnScriptLoaded() {
  GetForwardingInterface()->OnScriptLoaded();
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnScriptEvaluationStart() {
  GetForwardingInterface()->OnScriptEvaluationStart();
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnStarted(::blink::mojom::blink::ServiceWorkerStartStatus status, int32_t thread_id, EmbeddedWorkerStartTimingPtr start_timing) {
  GetForwardingInterface()->OnStarted(std::move(status), std::move(thread_id), std::move(start_timing));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnReportException(const WTF::String& error_message, int32_t line_number, int32_t column_number, const ::blink::KURL& source_url) {
  GetForwardingInterface()->OnReportException(std::move(error_message), std::move(line_number), std::move(column_number), std::move(source_url));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnReportConsoleMessage(::blink::mojom::blink::ConsoleMessageSource source, ::blink::mojom::blink::ConsoleMessageLevel message_level, const WTF::String& message, int32_t line_number, const ::blink::KURL& source_url) {
  GetForwardingInterface()->OnReportConsoleMessage(std::move(source), std::move(message_level), std::move(message), std::move(line_number), std::move(source_url));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnStopped() {
  GetForwardingInterface()->OnStopped();
}
EmbeddedWorkerInstanceHostAsyncWaiter::EmbeddedWorkerInstanceHostAsyncWaiter(
    EmbeddedWorkerInstanceHost* proxy) : proxy_(proxy) {}

EmbeddedWorkerInstanceHostAsyncWaiter::~EmbeddedWorkerInstanceHostAsyncWaiter() = default;

void EmbeddedWorkerInstanceHostAsyncWaiter::RequestTermination(
    bool* out_will_be_terminated) {
  base::RunLoop loop;
  proxy_->RequestTermination(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_will_be_terminated
,
             bool will_be_terminated) {*out_will_be_terminated = std::move(will_be_terminated);
            loop->Quit();
          },
          &loop,
          out_will_be_terminated));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif