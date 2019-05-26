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


#include "third_party/blink/public/mojom/devtools/devtools_frontend.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DEVTOOLS_DEVTOOLS_FRONTEND_MOJOM_JUMBO_H_
#endif


namespace blink {
namespace mojom {


void DevToolsFrontendInterceptorForTesting::SetupDevToolsFrontend(const std::string& api_script, DevToolsFrontendHostAssociatedPtrInfo host) {
  GetForwardingInterface()->SetupDevToolsFrontend(std::move(api_script), std::move(host));
}
void DevToolsFrontendInterceptorForTesting::SetupDevToolsExtensionAPI(const std::string& extension_api) {
  GetForwardingInterface()->SetupDevToolsExtensionAPI(std::move(extension_api));
}
DevToolsFrontendAsyncWaiter::DevToolsFrontendAsyncWaiter(
    DevToolsFrontend* proxy) : proxy_(proxy) {}

DevToolsFrontendAsyncWaiter::~DevToolsFrontendAsyncWaiter() = default;




void DevToolsFrontendHostInterceptorForTesting::DispatchEmbedderMessage(const std::string& message) {
  GetForwardingInterface()->DispatchEmbedderMessage(std::move(message));
}
DevToolsFrontendHostAsyncWaiter::DevToolsFrontendHostAsyncWaiter(
    DevToolsFrontendHost* proxy) : proxy_(proxy) {}

DevToolsFrontendHostAsyncWaiter::~DevToolsFrontendHostAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif