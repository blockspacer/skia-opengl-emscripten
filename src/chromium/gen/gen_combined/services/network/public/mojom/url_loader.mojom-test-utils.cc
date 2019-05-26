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


#include "services/network/public/mojom/url_loader.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "mojo/public/mojom/base/file.mojom.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/cors.mojom.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom.h"
#include "services/network/public/mojom/data_pipe_getter.mojom.h"
#include "services/network/public/mojom/fetch_api.mojom.h"
#include "services/network/public/mojom/http_request_headers.mojom.h"
#include "services/network/public/mojom/network_param.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_JUMBO_H_
#include "mojo/public/cpp/base/big_buffer_mojom_traits.h"
#include "mojo/public/cpp/base/file_mojom_traits.h"
#include "mojo/public/cpp/base/file_path_mojom_traits.h"
#include "mojo/public/cpp/base/time_mojom_traits.h"
#include "mojo/public/cpp/base/unguessable_token_mojom_traits.h"
#include "services/network/public/cpp/http_request_headers_mojom_traits.h"
#include "services/network/public/cpp/network_ipc_param_traits.h"
#include "services/network/public/cpp/url_request_mojom_traits.h"
#include "url/mojom/origin_mojom_traits.h"
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace network {
namespace mojom {


void URLLoaderInterceptorForTesting::FollowRedirect(const std::vector<std::string>& removed_headers, const net::HttpRequestHeaders& modified_headers, const base::Optional<GURL>& new_url) {
  GetForwardingInterface()->FollowRedirect(std::move(removed_headers), std::move(modified_headers), std::move(new_url));
}
void URLLoaderInterceptorForTesting::ProceedWithResponse() {
  GetForwardingInterface()->ProceedWithResponse();
}
void URLLoaderInterceptorForTesting::SetPriority(net::RequestPriority priority, int32_t intra_priority_value) {
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




void URLLoaderClientInterceptorForTesting::OnReceiveResponse(const network::ResourceResponseHead& head) {
  GetForwardingInterface()->OnReceiveResponse(std::move(head));
}
void URLLoaderClientInterceptorForTesting::OnReceiveRedirect(const net::RedirectInfo& redirect_info, const network::ResourceResponseHead& head) {
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
void URLLoaderClientInterceptorForTesting::OnComplete(const network::URLLoaderCompletionStatus& status) {
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





}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif