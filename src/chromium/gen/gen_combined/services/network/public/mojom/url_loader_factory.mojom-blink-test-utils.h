// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/url_loader_factory.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT URLLoaderFactoryInterceptorForTesting : public URLLoaderFactory {
  virtual URLLoaderFactory* GetForwardingInterface() = 0;
  void CreateLoaderAndStart(::network::mojom::blink::URLLoaderRequest loader, int32_t routing_id, int32_t request_id, uint32_t options, ::network::mojom::blink::URLRequestPtr request, ::network::mojom::blink::URLLoaderClientPtr client, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr traffic_annotation) override;
  void Clone(URLLoaderFactoryRequest factory) override;
};
class BLINK_PLATFORM_EXPORT URLLoaderFactoryAsyncWaiter {
 public:
  explicit URLLoaderFactoryAsyncWaiter(URLLoaderFactory* proxy);
  ~URLLoaderFactoryAsyncWaiter();

 private:
  URLLoaderFactory* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(URLLoaderFactoryAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_FACTORY_MOJOM_BLINK_TEST_UTILS_H_