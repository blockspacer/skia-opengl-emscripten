// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/interfaces/provision_fetcher.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT ProvisionFetcherInterceptorForTesting : public ProvisionFetcher {
  virtual ProvisionFetcher* GetForwardingInterface() = 0;
  void Retrieve(const WTF::String& default_url, const WTF::String& request_data, RetrieveCallback callback) override;
};
class BLINK_PLATFORM_EXPORT ProvisionFetcherAsyncWaiter {
 public:
  explicit ProvisionFetcherAsyncWaiter(ProvisionFetcher* proxy);
  ~ProvisionFetcherAsyncWaiter();
  void Retrieve(
      const WTF::String& default_url, const WTF::String& request_data, bool* out_result, WTF::String* out_response);

 private:
  ProvisionFetcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProvisionFetcherAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_BLINK_TEST_UTILS_H_