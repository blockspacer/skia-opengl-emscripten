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


#include "third_party/blink/public/mojom/appcache/appcache.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/mojom/appcache/appcache_info.mojom-blink.h"
#include "third_party/blink/public/mojom/devtools/console_message.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"
#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APPCACHE_APPCACHE_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void AppCacheBackendInterceptorForTesting::RegisterHost(AppCacheHostRequest host_request, AppCacheFrontendPtr frontend, int32_t host_id, int32_t render_frame_id) {
  GetForwardingInterface()->RegisterHost(std::move(host_request), std::move(frontend), std::move(host_id), std::move(render_frame_id));
}
AppCacheBackendAsyncWaiter::AppCacheBackendAsyncWaiter(
    AppCacheBackend* proxy) : proxy_(proxy) {}

AppCacheBackendAsyncWaiter::~AppCacheBackendAsyncWaiter() = default;




void AppCacheHostInterceptorForTesting::SetSpawningHostId(int32_t spawning_host_id) {
  GetForwardingInterface()->SetSpawningHostId(std::move(spawning_host_id));
}
void AppCacheHostInterceptorForTesting::SelectCache(const ::blink::KURL& document_url, int64_t appcache_document_was_loaded_from, const ::blink::KURL& opt_manifest_url) {
  GetForwardingInterface()->SelectCache(std::move(document_url), std::move(appcache_document_was_loaded_from), std::move(opt_manifest_url));
}
void AppCacheHostInterceptorForTesting::SelectCacheForSharedWorker(int64_t appcache_id) {
  GetForwardingInterface()->SelectCacheForSharedWorker(std::move(appcache_id));
}
void AppCacheHostInterceptorForTesting::MarkAsForeignEntry(const ::blink::KURL& document_url, int64_t appcache_document_was_loaded_from) {
  GetForwardingInterface()->MarkAsForeignEntry(std::move(document_url), std::move(appcache_document_was_loaded_from));
}
void AppCacheHostInterceptorForTesting::GetStatus(GetStatusCallback callback) {
  GetForwardingInterface()->GetStatus(std::move(callback));
}
void AppCacheHostInterceptorForTesting::StartUpdate(StartUpdateCallback callback) {
  GetForwardingInterface()->StartUpdate(std::move(callback));
}
void AppCacheHostInterceptorForTesting::SwapCache(SwapCacheCallback callback) {
  GetForwardingInterface()->SwapCache(std::move(callback));
}
void AppCacheHostInterceptorForTesting::GetResourceList(GetResourceListCallback callback) {
  GetForwardingInterface()->GetResourceList(std::move(callback));
}
AppCacheHostAsyncWaiter::AppCacheHostAsyncWaiter(
    AppCacheHost* proxy) : proxy_(proxy) {}

AppCacheHostAsyncWaiter::~AppCacheHostAsyncWaiter() = default;

void AppCacheHostAsyncWaiter::GetStatus(
    ::blink::mojom::blink::AppCacheStatus* out_status) {
  base::RunLoop loop;
  proxy_->GetStatus(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::blink::AppCacheStatus* out_status
,
             ::blink::mojom::blink::AppCacheStatus status) {*out_status = std::move(status);
            loop->Quit();
          },
          &loop,
          out_status));
  loop.Run();
}
void AppCacheHostAsyncWaiter::StartUpdate(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->StartUpdate(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void AppCacheHostAsyncWaiter::SwapCache(
    bool* out_success) {
  base::RunLoop loop;
  proxy_->SwapCache(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}
void AppCacheHostAsyncWaiter::GetResourceList(
    WTF::Vector<AppCacheResourceInfoPtr>* out_resources) {
  base::RunLoop loop;
  proxy_->GetResourceList(
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::Vector<AppCacheResourceInfoPtr>* out_resources
,
             WTF::Vector<AppCacheResourceInfoPtr> resources) {*out_resources = std::move(resources);
            loop->Quit();
          },
          &loop,
          out_resources));
  loop.Run();
}



void AppCacheFrontendInterceptorForTesting::CacheSelected(::blink::mojom::blink::AppCacheInfoPtr info) {
  GetForwardingInterface()->CacheSelected(std::move(info));
}
void AppCacheFrontendInterceptorForTesting::EventRaised(AppCacheEventID event_id) {
  GetForwardingInterface()->EventRaised(std::move(event_id));
}
void AppCacheFrontendInterceptorForTesting::ProgressEventRaised(const ::blink::KURL& url, int32_t total, int32_t complete) {
  GetForwardingInterface()->ProgressEventRaised(std::move(url), std::move(total), std::move(complete));
}
void AppCacheFrontendInterceptorForTesting::ErrorEventRaised(AppCacheErrorDetailsPtr error_details) {
  GetForwardingInterface()->ErrorEventRaised(std::move(error_details));
}
void AppCacheFrontendInterceptorForTesting::LogMessage(::blink::mojom::blink::ConsoleMessageLevel log_level, const WTF::String& message) {
  GetForwardingInterface()->LogMessage(std::move(log_level), std::move(message));
}
void AppCacheFrontendInterceptorForTesting::SetSubresourceFactory(::network::mojom::blink::URLLoaderFactoryPtr url_loader_factory) {
  GetForwardingInterface()->SetSubresourceFactory(std::move(url_loader_factory));
}
AppCacheFrontendAsyncWaiter::AppCacheFrontendAsyncWaiter(
    AppCacheFrontend* proxy) : proxy_(proxy) {}

AppCacheFrontendAsyncWaiter::~AppCacheFrontendAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif