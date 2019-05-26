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


#include "media/mojo/interfaces/provision_fetcher.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_JUMBO_H_
#endif


namespace media {
namespace mojom {


void ProvisionFetcherInterceptorForTesting::Retrieve(const std::string& default_url, const std::string& request_data, RetrieveCallback callback) {
  GetForwardingInterface()->Retrieve(std::move(default_url), std::move(request_data), std::move(callback));
}
ProvisionFetcherAsyncWaiter::ProvisionFetcherAsyncWaiter(
    ProvisionFetcher* proxy) : proxy_(proxy) {}

ProvisionFetcherAsyncWaiter::~ProvisionFetcherAsyncWaiter() = default;

void ProvisionFetcherAsyncWaiter::Retrieve(
    const std::string& default_url, const std::string& request_data, bool* out_result, std::string* out_response) {
  base::RunLoop loop;
  proxy_->Retrieve(std::move(default_url),std::move(request_data),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             std::string* out_response
,
             bool result,
             const std::string& response) {*out_result = std::move(result);*out_response = std::move(response);
            loop->Quit();
          },
          &loop,
          out_result,
          out_response));
  loop.Run();
}





}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif