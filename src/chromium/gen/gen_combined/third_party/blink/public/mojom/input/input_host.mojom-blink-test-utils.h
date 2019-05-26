// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/input/input_host.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT TextSuggestionHostInterceptorForTesting : public TextSuggestionHost {
  virtual TextSuggestionHost* GetForwardingInterface() = 0;
  void StartSuggestionMenuTimer() override;
  void ShowSpellCheckSuggestionMenu(double caret_x, double caret_y, const WTF::String& marked_text, WTF::Vector<SpellCheckSuggestionPtr> suggestions) override;
  void ShowTextSuggestionMenu(double caret_x, double caret_y, const WTF::String& marked_text, WTF::Vector<TextSuggestionPtr> suggestions) override;
};
class PLATFORM_EXPORT TextSuggestionHostAsyncWaiter {
 public:
  explicit TextSuggestionHostAsyncWaiter(TextSuggestionHost* proxy);
  ~TextSuggestionHostAsyncWaiter();

 private:
  TextSuggestionHost* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TextSuggestionHostAsyncWaiter);
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_HOST_MOJOM_BLINK_TEST_UTILS_H_