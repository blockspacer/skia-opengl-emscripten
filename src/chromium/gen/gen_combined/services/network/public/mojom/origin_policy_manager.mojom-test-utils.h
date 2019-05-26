// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/origin_policy_manager.mojom.h"


namespace network {
namespace mojom {


class  OriginPolicyManagerInterceptorForTesting : public OriginPolicyManager {
  virtual OriginPolicyManager* GetForwardingInterface() = 0;
};
class  OriginPolicyManagerAsyncWaiter {
 public:
  explicit OriginPolicyManagerAsyncWaiter(OriginPolicyManager* proxy);
  ~OriginPolicyManagerAsyncWaiter();

 private:
  OriginPolicyManager* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(OriginPolicyManagerAsyncWaiter);
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_TEST_UTILS_H_