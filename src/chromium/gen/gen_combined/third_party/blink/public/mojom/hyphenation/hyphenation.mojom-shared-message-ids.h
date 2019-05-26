// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_SHARED_MESSAGE_IDS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace blink {
namespace mojom {

namespace internal {


// The 1322074194 value is based on sha256(salt + "Hyphenation1").
constexpr uint32_t kHyphenation_OpenDictionary_Name = 1322074194;

}  // namespace internal
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_HYPHENATION_HYPHENATION_MOJOM_SHARED_MESSAGE_IDS_H_