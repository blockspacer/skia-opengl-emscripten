// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/input/input_messages.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT TextSuggestionBackendInterceptorForTesting : public TextSuggestionBackend {
  virtual TextSuggestionBackend* GetForwardingInterface() = 0;
  void ApplySpellCheckSuggestion(const std::string& suggestion) override;
  void ApplyTextSuggestion(int32_t marker_tag, int32_t suggestion_index) override;
  void DeleteActiveSuggestionRange() override;
  void OnNewWordAddedToDictionary(const std::string& suggestion) override;
  void OnSuggestionMenuClosed() override;
  void SuggestionMenuTimeoutCallback(int32_t max_number_of_suggestions) override;
};
class BLINK_COMMON_EXPORT TextSuggestionBackendAsyncWaiter {
 public:
  explicit TextSuggestionBackendAsyncWaiter(TextSuggestionBackend* proxy);
  ~TextSuggestionBackendAsyncWaiter();

 private:
  TextSuggestionBackend* const proxy_;

  DISALLOW_COPY_AND_ASSIGN(TextSuggestionBackendAsyncWaiter);
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_TEST_UTILS_H_