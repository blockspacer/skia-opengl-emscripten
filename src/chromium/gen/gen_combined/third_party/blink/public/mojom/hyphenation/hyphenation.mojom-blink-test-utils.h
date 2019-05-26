// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/hyphenation/hyphenation.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT HyphenationInterceptorForTesting : public Hyphenation {
  virtual Hyphenation* GetForwardingInterface() = 0;
  void OpenDictionary(const WTF::String& locale, OpenDictionaryCallback callback) override;
};
class PLATFORM_EXPORT HyphenationAsyncWaiter {
 public:
  explicit HyphenationAsyncWaiter(Hyphenation* proxy);
  ~HyphenationAsyncWaiter();
  void OpenDictionary(
      const WTF::String& locale, base::File* out_hyphenation_dictionary_handle);

 private:
  Hyphenation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HyphenationAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_BLINK_TEST_UTILS_H_