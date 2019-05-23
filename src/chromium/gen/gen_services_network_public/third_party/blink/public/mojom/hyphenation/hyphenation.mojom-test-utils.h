// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/hyphenation/hyphenation.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT HyphenationInterceptorForTesting : public Hyphenation {
  virtual Hyphenation* GetForwardingInterface() = 0;
  void OpenDictionary(const std::string& locale, OpenDictionaryCallback callback) override;
};
class BLINK_COMMON_EXPORT HyphenationAsyncWaiter {
 public:
  explicit HyphenationAsyncWaiter(Hyphenation* proxy);
  ~HyphenationAsyncWaiter();
  void OpenDictionary(
      const std::string& locale, base::File* out_hyphenation_dictionary_handle);

 private:
  Hyphenation* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(HyphenationAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_TEST_UTILS_H_