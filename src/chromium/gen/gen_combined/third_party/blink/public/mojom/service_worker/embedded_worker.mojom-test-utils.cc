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


#include "third_party/blink/public/mojom/service_worker/embedded_worker.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/url_loader_factory.mojom.h"
#include "third_party/blink/public/mojom/devtools/console_message.mojom.h"
#include "third_party/blink/public/mojom/devtools/devtools_agent.mojom.h"
#include "third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom.h"
#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom.h"
#include "third_party/blink/public/mojom/renderer_preferences.mojom.h"
#include "third_party/blink/public/mojom/script/script_type.mojom.h"
#include "third_party/blink/public/mojom/service_worker/controller_service_worker.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_installed_scripts_manager.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_event_status.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_provider.mojom.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration.mojom.h"
#include "third_party/blink/public/mojom/v8_cache_options.mojom.h"
#include "third_party/blink/public/mojom/worker/worker_content_settings_proxy.mojom.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_EMBEDDED_WORKER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/string16_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/public/common/loader/url_loader_factory_bundle_mojom_traits.h"
#include "ui/gfx/mojo/font_render_params_struct_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void EmbeddedWorkerInstanceClientInterceptorForTesting::StartWorker(EmbeddedWorkerStartParamsPtr params) {
  GetForwardingInterface()->StartWorker(std::move(params));
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::StopWorker() {
  GetForwardingInterface()->StopWorker();
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::ResumeAfterDownload() {
  GetForwardingInterface()->ResumeAfterDownload();
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::AddMessageToConsole(::blink::mojom::ConsoleMessageLevel level, const std::string& message) {
  GetForwardingInterface()->AddMessageToConsole(std::move(level), std::move(message));
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::BindDevToolsAgent(::blink::mojom::DevToolsAgentHostAssociatedPtrInfo agent_host, ::blink::mojom::DevToolsAgentAssociatedRequest agent) {
  GetForwardingInterface()->BindDevToolsAgent(std::move(agent_host), std::move(agent));
}
void EmbeddedWorkerInstanceClientInterceptorForTesting::UpdateSubresourceLoaderFactories(std::unique_ptr<blink::URLLoaderFactoryBundleInfo> subresource_loader_factories) {
  GetForwardingInterface()->UpdateSubresourceLoaderFactories(std::move(subresource_loader_factories));
}
EmbeddedWorkerInstanceClientAsyncWaiter::EmbeddedWorkerInstanceClientAsyncWaiter(
    EmbeddedWorkerInstanceClient* proxy) : proxy_(proxy) {}

EmbeddedWorkerInstanceClientAsyncWaiter::~EmbeddedWorkerInstanceClientAsyncWaiter() = default;




void EmbeddedWorkerInstanceHostInterceptorForTesting::RequestTermination(RequestTerminationCallback callback) {
  GetForwardingInterface()->RequestTermination(std::move(callback));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::CountFeature(::blink::mojom::WebFeature feature) {
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
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnStarted(::blink::mojom::ServiceWorkerStartStatus status, int32_t thread_id, EmbeddedWorkerStartTimingPtr start_timing) {
  GetForwardingInterface()->OnStarted(std::move(status), std::move(thread_id), std::move(start_timing));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnReportException(const base::string16& error_message, int32_t line_number, int32_t column_number, const GURL& source_url) {
  GetForwardingInterface()->OnReportException(std::move(error_message), std::move(line_number), std::move(column_number), std::move(source_url));
}
void EmbeddedWorkerInstanceHostInterceptorForTesting::OnReportConsoleMessage(::blink::mojom::ConsoleMessageSource source, ::blink::mojom::ConsoleMessageLevel message_level, const base::string16& message, int32_t line_number, const GURL& source_url) {
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





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif