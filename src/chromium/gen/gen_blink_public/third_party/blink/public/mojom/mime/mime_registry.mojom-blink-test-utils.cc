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


#include "third_party/blink/public/mojom/mime/mime_registry.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MIME_MIME_REGISTRY_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void MimeRegistryInterceptorForTesting::GetMimeTypeFromExtension(const WTF::String& extension, GetMimeTypeFromExtensionCallback callback) {
  GetForwardingInterface()->GetMimeTypeFromExtension(std::move(extension), std::move(callback));
}
MimeRegistryAsyncWaiter::MimeRegistryAsyncWaiter(
    MimeRegistry* proxy) : proxy_(proxy) {}

MimeRegistryAsyncWaiter::~MimeRegistryAsyncWaiter() = default;

void MimeRegistryAsyncWaiter::GetMimeTypeFromExtension(
    const WTF::String& extension, WTF::String* out_mime_type) {
  base::RunLoop loop;
  proxy_->GetMimeTypeFromExtension(std::move(extension),
      base::BindOnce(
          [](base::RunLoop* loop,
             WTF::String* out_mime_type
,
             const WTF::String& mime_type) {*out_mime_type = std::move(mime_type);
            loop->Quit();
          },
          &loop,
          out_mime_type));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif