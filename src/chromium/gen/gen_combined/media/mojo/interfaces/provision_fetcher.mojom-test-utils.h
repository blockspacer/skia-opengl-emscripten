// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_TEST_UTILS_H_

#include "media/mojo/interfaces/provision_fetcher.mojom.h"


namespace media {
namespace mojom {


class  ProvisionFetcherInterceptorForTesting : public ProvisionFetcher {
  virtual ProvisionFetcher* GetForwardingInterface() = 0;
  void Retrieve(const std::string& default_url, const std::string& request_data, RetrieveCallback callback) override;
};
class  ProvisionFetcherAsyncWaiter {
 public:
  explicit ProvisionFetcherAsyncWaiter(ProvisionFetcher* proxy);
  ~ProvisionFetcherAsyncWaiter();
  void Retrieve(
      const std::string& default_url, const std::string& request_data, bool* out_result, std::string* out_response);

 private:
  ProvisionFetcher* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(ProvisionFetcherAsyncWaiter);
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_TEST_UTILS_H_