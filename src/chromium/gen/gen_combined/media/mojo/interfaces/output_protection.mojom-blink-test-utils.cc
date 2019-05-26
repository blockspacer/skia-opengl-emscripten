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


#include "media/mojo/interfaces/output_protection.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_OUTPUT_PROTECTION_MOJOM_BLINK_JUMBO_H_
#endif


namespace media {
namespace mojom {
namespace blink {


void OutputProtectionInterceptorForTesting::QueryStatus(QueryStatusCallback callback) {
  GetForwardingInterface()->QueryStatus(std::move(callback));
}
void OutputProtectionInterceptorForTesting::EnableProtection(uint32_t desired_protection_mask, EnableProtectionCallback callback) {
  GetForwardingInterface()->EnableProtection(std::move(desired_protection_mask), std::move(callback));
}
OutputProtectionAsyncWaiter::OutputProtectionAsyncWaiter(
    OutputProtection* proxy) : proxy_(proxy) {}

OutputProtectionAsyncWaiter::~OutputProtectionAsyncWaiter() = default;

void OutputProtectionAsyncWaiter::QueryStatus(
    bool* out_success, uint32_t* out_link_mask, uint32_t* out_protection_mask) {
  base::RunLoop loop;
  proxy_->QueryStatus(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             uint32_t* out_link_mask
,
             uint32_t* out_protection_mask
,
             bool success,
             uint32_t link_mask,
             uint32_t protection_mask) {*out_success = std::move(success);*out_link_mask = std::move(link_mask);*out_protection_mask = std::move(protection_mask);
            loop->Quit();
          },
          &loop,
          out_success,
          out_link_mask,
          out_protection_mask));
  loop.Run();
}
void OutputProtectionAsyncWaiter::EnableProtection(
    uint32_t desired_protection_mask, bool* out_success) {
  base::RunLoop loop;
  proxy_->EnableProtection(std::move(desired_protection_mask),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_success
,
             bool success) {*out_success = std::move(success);
            loop->Quit();
          },
          &loop,
          out_success));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif