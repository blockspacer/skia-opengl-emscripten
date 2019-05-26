// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/editing/input_mode_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_MODE_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_MODE_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {
namespace input_mode_names {

CORE_EXPORT extern const WTF::AtomicString& kDecimal;
CORE_EXPORT extern const WTF::AtomicString& kEmail;
CORE_EXPORT extern const WTF::AtomicString& kNone;
CORE_EXPORT extern const WTF::AtomicString& kNumeric;
CORE_EXPORT extern const WTF::AtomicString& kSearch;
CORE_EXPORT extern const WTF::AtomicString& kTel;
CORE_EXPORT extern const WTF::AtomicString& kText;
CORE_EXPORT extern const WTF::AtomicString& kUrl;

constexpr unsigned kNamesCount = 8;

CORE_EXPORT void Init();

}  // namespace input_mode_names
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_INPUT_MODE_NAMES_H_
