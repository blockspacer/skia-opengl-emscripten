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


#include "services/network/public/mojom/origin_policy_manager.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ORIGIN_POLICY_MANAGER_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace network {
namespace mojom {


OriginPolicyManagerAsyncWaiter::OriginPolicyManagerAsyncWaiter(
    OriginPolicyManager* proxy) : proxy_(proxy) {}

OriginPolicyManagerAsyncWaiter::~OriginPolicyManagerAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif