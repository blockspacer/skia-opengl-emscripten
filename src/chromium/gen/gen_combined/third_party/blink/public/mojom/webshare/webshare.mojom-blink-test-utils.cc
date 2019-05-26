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


#include "third_party/blink/public/mojom/webshare/webshare.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_BLINK_JUMBO_H_
#include "third_party/blink/renderer/platform/blob/serialized_blob_struct_traits.h"
#include "third_party/blink/renderer/platform/mojo/kurl_struct_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void ShareServiceInterceptorForTesting::Share(const WTF::String& title, const WTF::String& text, const ::blink::KURL& url, WTF::Vector<SharedFilePtr> files, ShareCallback callback) {
  GetForwardingInterface()->Share(std::move(title), std::move(text), std::move(url), std::move(files), std::move(callback));
}
ShareServiceAsyncWaiter::ShareServiceAsyncWaiter(
    ShareService* proxy) : proxy_(proxy) {}

ShareServiceAsyncWaiter::~ShareServiceAsyncWaiter() = default;

void ShareServiceAsyncWaiter::Share(
    const WTF::String& title, const WTF::String& text, const ::blink::KURL& url, WTF::Vector<SharedFilePtr> files, ShareError* out_error) {
  base::RunLoop loop;
  proxy_->Share(std::move(title),std::move(text),std::move(url),std::move(files),
      base::BindOnce(
          [](base::RunLoop* loop,
             ShareError* out_error
,
             ShareError error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
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