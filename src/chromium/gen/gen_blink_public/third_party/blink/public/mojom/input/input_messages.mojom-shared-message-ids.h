// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


constexpr uint32_t kTextSuggestionBackend_ApplySpellCheckSuggestion_Name = 0;
constexpr uint32_t kTextSuggestionBackend_ApplyTextSuggestion_Name = 1;
constexpr uint32_t kTextSuggestionBackend_DeleteActiveSuggestionRange_Name = 2;
constexpr uint32_t kTextSuggestionBackend_OnNewWordAddedToDictionary_Name = 3;
constexpr uint32_t kTextSuggestionBackend_OnSuggestionMenuClosed_Name = 4;
constexpr uint32_t kTextSuggestionBackend_SuggestionMenuTimeoutCallback_Name = 5;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_SHARED_MESSAGE_IDS_H_