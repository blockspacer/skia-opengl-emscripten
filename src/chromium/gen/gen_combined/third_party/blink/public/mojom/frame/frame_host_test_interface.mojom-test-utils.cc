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


#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "url/mojom/url.mojom.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_HOST_TEST_INTERFACE_MOJOM_JUMBO_H_
#include "url/mojom/url_gurl_mojom_traits.h"
#endif


namespace blink {
namespace mojom {


void FrameHostTestInterfaceInterceptorForTesting::Ping(const GURL& source_url, const std::string& source_event) {
  GetForwardingInterface()->Ping(std::move(source_url), std::move(source_event));
}
void FrameHostTestInterfaceInterceptorForTesting::GetName(GetNameCallback callback) {
  GetForwardingInterface()->GetName(std::move(callback));
}
FrameHostTestInterfaceAsyncWaiter::FrameHostTestInterfaceAsyncWaiter(
    FrameHostTestInterface* proxy) : proxy_(proxy) {}

FrameHostTestInterfaceAsyncWaiter::~FrameHostTestInterfaceAsyncWaiter() = default;

void FrameHostTestInterfaceAsyncWaiter::GetName(
    std::string* out_name) {
  base::RunLoop loop;
  proxy_->GetName(
      base::BindOnce(
          [](base::RunLoop* loop,
             std::string* out_name
,
             const std::string& name) {*out_name = std::move(name);
            loop->Quit();
          },
          &loop,
          out_name));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif