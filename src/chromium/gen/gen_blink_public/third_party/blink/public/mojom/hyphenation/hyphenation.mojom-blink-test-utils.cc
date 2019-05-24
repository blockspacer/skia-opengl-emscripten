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


#include "third_party/blink/public/mojom/hyphenation/hyphenation.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "mojo/public/mojom/base/file.mojom-blink.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_BLINK_JUMBO_H_
#include "mojo/public/cpp/base/file_mojom_traits.h"
#endif


namespace blink {
namespace mojom {
namespace blink {


void HyphenationInterceptorForTesting::OpenDictionary(const WTF::String& locale, OpenDictionaryCallback callback) {
  GetForwardingInterface()->OpenDictionary(std::move(locale), std::move(callback));
}
HyphenationAsyncWaiter::HyphenationAsyncWaiter(
    Hyphenation* proxy) : proxy_(proxy) {}

HyphenationAsyncWaiter::~HyphenationAsyncWaiter() = default;

void HyphenationAsyncWaiter::OpenDictionary(
    const WTF::String& locale, base::File* out_hyphenation_dictionary_handle) {
  base::RunLoop loop;
  proxy_->OpenDictionary(std::move(locale),
      base::BindOnce(
          [](base::RunLoop* loop,
             base::File* out_hyphenation_dictionary_handle
,
             base::File hyphenation_dictionary_handle) {*out_hyphenation_dictionary_handle = std::move(hyphenation_dictionary_handle);
            loop->Quit();
          },
          &loop,
          out_hyphenation_dictionary_handle));
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