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


#include "third_party/blink/public/mojom/input/input_messages.mojom-blink-test-utils.h"

#include <utility>

#include "base/bind.h"
#include "base/run_loop.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_BLINK_JUMBO_H_
#endif


namespace blink {
namespace mojom {
namespace blink {


void TextSuggestionBackendInterceptorForTesting::ApplySpellCheckSuggestion(const WTF::String& suggestion) {
  GetForwardingInterface()->ApplySpellCheckSuggestion(std::move(suggestion));
}
void TextSuggestionBackendInterceptorForTesting::ApplyTextSuggestion(int32_t marker_tag, int32_t suggestion_index) {
  GetForwardingInterface()->ApplyTextSuggestion(std::move(marker_tag), std::move(suggestion_index));
}
void TextSuggestionBackendInterceptorForTesting::DeleteActiveSuggestionRange() {
  GetForwardingInterface()->DeleteActiveSuggestionRange();
}
void TextSuggestionBackendInterceptorForTesting::OnNewWordAddedToDictionary(const WTF::String& suggestion) {
  GetForwardingInterface()->OnNewWordAddedToDictionary(std::move(suggestion));
}
void TextSuggestionBackendInterceptorForTesting::OnSuggestionMenuClosed() {
  GetForwardingInterface()->OnSuggestionMenuClosed();
}
void TextSuggestionBackendInterceptorForTesting::SuggestionMenuTimeoutCallback(int32_t max_number_of_suggestions) {
  GetForwardingInterface()->SuggestionMenuTimeoutCallback(std::move(max_number_of_suggestions));
}
TextSuggestionBackendAsyncWaiter::TextSuggestionBackendAsyncWaiter(
    TextSuggestionBackend* proxy) : proxy_(proxy) {}

TextSuggestionBackendAsyncWaiter::~TextSuggestionBackendAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif