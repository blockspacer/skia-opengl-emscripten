// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/timing/performance_entry_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_PERFORMANCE_ENTRY_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_PERFORMANCE_ENTRY_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {
namespace performance_entry_names {

CORE_EXPORT extern const WTF::AtomicString& kElement;
CORE_EXPORT extern const WTF::AtomicString& kEvent;
CORE_EXPORT extern const WTF::AtomicString& kFirstInput;
CORE_EXPORT extern const WTF::AtomicString& kLayoutJank;
CORE_EXPORT extern const WTF::AtomicString& kLongtask;
CORE_EXPORT extern const WTF::AtomicString& kMark;
CORE_EXPORT extern const WTF::AtomicString& kMeasure;
CORE_EXPORT extern const WTF::AtomicString& kNavigation;
CORE_EXPORT extern const WTF::AtomicString& kPaint;
CORE_EXPORT extern const WTF::AtomicString& kResource;
CORE_EXPORT extern const WTF::AtomicString& kTaskattribution;

constexpr unsigned kNamesCount = 11;

CORE_EXPORT void Init();

}  // namespace performance_entry_names
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_PERFORMANCE_ENTRY_NAMES_H_
