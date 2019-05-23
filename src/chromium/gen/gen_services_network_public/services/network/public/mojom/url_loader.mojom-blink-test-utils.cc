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


#include "services/network/public/mojom/url_loader.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"
#include "mojo/public/mojom/base/file_path.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "services/network/public/mojom/cors.mojom-blink.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-blink.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-blink.h"
#include "services/network/public/mojom/fetch_api.mojom-blink.h"
#include "services/network/public/mojom/http_request_headers.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/security_origin_struct_traits.h"
#include "third_party/blink/renderer/platform/network/encoded_form_data_mojom_traits.h"
#include "third_party/blink/renderer/platform/network/http_request_headers_mojom_traits.h"
#endif


namespace network {
namespace mojom {
namespace blink {


void URLLoaderInterceptorForTesting::FollowRedirect(const WTF::Vector<WTF::String>& removed_headers, const ::blink::HTTPHeaderMap& modified_headers, const base::Optional<::blink::KURL>& new_url) {
  GetForwardingInterface()->FollowRedirect(std::move(removed_headers), std::move(modified_headers), std::move(new_url));
}
void URLLoaderInterceptorForTesting::ProceedWithResponse() {
  GetForwardingInterface()->ProceedWithResponse();
}
void URLLoaderInterceptorForTesting::SetPriority(RequestPriority priority, int32_t intra_priority_value) {
  GetForwardingInterface()->SetPriority(std::move(priority), std::move(intra_priority_value));
}
void URLLoaderInterceptorForTesting::PauseReadingBodyFromNet() {
  GetForwardingInterface()->PauseReadingBodyFromNet();
}
void URLLoaderInterceptorForTesting::ResumeReadingBodyFromNet() {
  GetForwardingInterface()->ResumeReadingBodyFromNet();
}
URLLoaderAsyncWaiter::URLLoaderAsyncWaiter(
    URLLoader* proxy) : proxy_(proxy) {}

URLLoaderAsyncWaiter::~URLLoaderAsyncWaiter() = default;




void URLLoaderClientInterceptorForTesting::OnReceiveResponse(URLResponseHeadPtr head) {
  GetForwardingInterface()->OnReceiveResponse(std::move(head));
}
void URLLoaderClientInterceptorForTesting::OnReceiveRedirect(URLRequestRedirectInfoPtr redirect_info, URLResponseHeadPtr head) {
  GetForwardingInterface()->OnReceiveRedirect(std::move(redirect_info), std::move(head));
}
void URLLoaderClientInterceptorForTesting::OnUploadProgress(int64_t current_position, int64_t total_size, OnUploadProgressCallback callback) {
  GetForwardingInterface()->OnUploadProgress(std::move(current_position), std::move(total_size), std::move(callback));
}
void URLLoaderClientInterceptorForTesting::OnReceiveCachedMetadata(mojo_base::BigBuffer data) {
  GetForwardingInterface()->OnReceiveCachedMetadata(std::move(data));
}
void URLLoaderClientInterceptorForTesting::OnTransferSizeUpdated(int32_t transfer_size_diff) {
  GetForwardingInterface()->OnTransferSizeUpdated(std::move(transfer_size_diff));
}
void URLLoaderClientInterceptorForTesting::OnStartLoadingResponseBody(mojo::ScopedDataPipeConsumerHandle body) {
  GetForwardingInterface()->OnStartLoadingResponseBody(std::move(body));
}
void URLLoaderClientInterceptorForTesting::OnComplete(URLLoaderCompletionStatusPtr status) {
  GetForwardingInterface()->OnComplete(std::move(status));
}
URLLoaderClientAsyncWaiter::URLLoaderClientAsyncWaiter(
    URLLoaderClient* proxy) : proxy_(proxy) {}

URLLoaderClientAsyncWaiter::~URLLoaderClientAsyncWaiter() = default;

void URLLoaderClientAsyncWaiter::OnUploadProgress(
    int64_t current_position, int64_t total_size) {
  base::RunLoop loop;
  proxy_->OnUploadProgress(std::move(current_position),std::move(total_size),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif