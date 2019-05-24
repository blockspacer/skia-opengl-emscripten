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


#include "media/mojo/interfaces/key_system_support.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-blink.h"
#include "media/mojo/interfaces/media_types.mojom-blink.h"


#ifndef MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_BLINK_JUMBO_H_
#define MEDIA_MOJO_INTERFACES_KEY_SYSTEM_SUPPORT_MOJOM_BLINK_JUMBO_H_
#endif


namespace media {
namespace mojom {
namespace blink {


void KeySystemSupportInterceptorForTesting::IsKeySystemSupported(const WTF::String& key_system, IsKeySystemSupportedCallback callback) {
  GetForwardingInterface()->IsKeySystemSupported(std::move(key_system), std::move(callback));
}
KeySystemSupportAsyncWaiter::KeySystemSupportAsyncWaiter(
    KeySystemSupport* proxy) : proxy_(proxy) {}

KeySystemSupportAsyncWaiter::~KeySystemSupportAsyncWaiter() = default;

void KeySystemSupportAsyncWaiter::IsKeySystemSupported(
    const WTF::String& key_system, bool* out_is_supported, KeySystemCapabilityPtr* out_key_system_capability) {
  base::RunLoop loop;
  proxy_->IsKeySystemSupported(std::move(key_system),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_is_supported
,
             KeySystemCapabilityPtr* out_key_system_capability
,
             bool is_supported,
             KeySystemCapabilityPtr key_system_capability) {*out_is_supported = std::move(is_supported);*out_key_system_capability = std::move(key_system_capability);
            loop->Quit();
          },
          &loop,
          out_is_supported,
          out_key_system_capability));
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