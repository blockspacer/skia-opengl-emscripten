// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/url_loader.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT URLLoaderInterceptorForTesting : public URLLoader {
  virtual URLLoader* GetForwardingInterface() = 0;
  void FollowRedirect(const WTF::Vector<WTF::String>& removed_headers, const ::blink::HTTPHeaderMap& modified_headers, const base::Optional<::blink::KURL>& new_url) override;
  void ProceedWithResponse() override;
  void SetPriority(RequestPriority priority, int32_t intra_priority_value) override;
  void PauseReadingBodyFromNet() override;
  void ResumeReadingBodyFromNet() override;
};
class BLINK_PLATFORM_EXPORT URLLoaderAsyncWaiter {
 public:
  explicit URLLoaderAsyncWaiter(URLLoader* proxy);
  ~URLLoaderAsyncWaiter();

 private:
  URLLoader* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderAsyncWaiter);
};


class BLINK_PLATFORM_EXPORT URLLoaderClientInterceptorForTesting : public URLLoaderClient {
  virtual URLLoaderClient* GetForwardingInterface() = 0;
  void OnReceiveResponse(URLResponseHeadPtr head) override;
  void OnReceiveRedirect(URLRequestRedirectInfoPtr redirect_info, URLResponseHeadPtr head) override;
  void OnUploadProgress(int64_t current_position, int64_t total_size, OnUploadProgressCallback callback) override;
  void OnReceiveCachedMetadata(mojo_base::BigBuffer data) override;
  void OnTransferSizeUpdated(int32_t transfer_size_diff) override;
  void OnStartLoadingResponseBody(mojo::ScopedDataPipeConsumerHandle body) override;
  void OnComplete(URLLoaderCompletionStatusPtr status) override;
};
class BLINK_PLATFORM_EXPORT URLLoaderClientAsyncWaiter {
 public:
  explicit URLLoaderClientAsyncWaiter(URLLoaderClient* proxy);
  ~URLLoaderClientAsyncWaiter();
  void OnUploadProgress(
      int64_t current_position, int64_t total_size);

 private:
  URLLoaderClient* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderClientAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_MOJOM_BLINK_TEST_UTILS_H_