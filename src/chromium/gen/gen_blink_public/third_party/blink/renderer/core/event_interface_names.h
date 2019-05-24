// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   gen/third_party/blink/renderer/core/event_interface_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_INTERFACE_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_INTERFACE_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {
namespace event_interface_names {

CORE_EXPORT extern const WTF::AtomicString& kFontFaceSetLoadEvent;
CORE_EXPORT extern const WTF::AtomicString& kMediaQueryListEvent;
CORE_EXPORT extern const WTF::AtomicString& kCustomEvent;
CORE_EXPORT extern const WTF::AtomicString& kEvent;
CORE_EXPORT extern const WTF::AtomicString& kAnimationEvent;
CORE_EXPORT extern const WTF::AtomicString& kApplicationCacheErrorEvent;
CORE_EXPORT extern const WTF::AtomicString& kBeforeUnloadEvent;
CORE_EXPORT extern const WTF::AtomicString& kClipboardEvent;
CORE_EXPORT extern const WTF::AtomicString& kCompositionEvent;
CORE_EXPORT extern const WTF::AtomicString& kDragEvent;
CORE_EXPORT extern const WTF::AtomicString& kErrorEvent;
CORE_EXPORT extern const WTF::AtomicString& kFocusEvent;
CORE_EXPORT extern const WTF::AtomicString& kHashChangeEvent;
CORE_EXPORT extern const WTF::AtomicString& kInputEvent;
CORE_EXPORT extern const WTF::AtomicString& kKeyboardEvent;
CORE_EXPORT extern const WTF::AtomicString& kMessageEvent;
CORE_EXPORT extern const WTF::AtomicString& kMouseEvent;
CORE_EXPORT extern const WTF::AtomicString& kMutationEvent;
CORE_EXPORT extern const WTF::AtomicString& kPageTransitionEvent;
CORE_EXPORT extern const WTF::AtomicString& kPointerEvent;
CORE_EXPORT extern const WTF::AtomicString& kPopStateEvent;
CORE_EXPORT extern const WTF::AtomicString& kProgressEvent;
CORE_EXPORT extern const WTF::AtomicString& kPromiseRejectionEvent;
CORE_EXPORT extern const WTF::AtomicString& kResourceProgressEvent;
CORE_EXPORT extern const WTF::AtomicString& kSecurityPolicyViolationEvent;
CORE_EXPORT extern const WTF::AtomicString& kTextEvent;
CORE_EXPORT extern const WTF::AtomicString& kTouchEvent;
CORE_EXPORT extern const WTF::AtomicString& kTransitionEvent;
CORE_EXPORT extern const WTF::AtomicString& kUIEvent;
CORE_EXPORT extern const WTF::AtomicString& kWheelEvent;
CORE_EXPORT extern const WTF::AtomicString& kTrackEvent;
CORE_EXPORT extern const WTF::AtomicString& kBeforeActivateEvent;
CORE_EXPORT extern const WTF::AtomicString& kFormDataEvent;
CORE_EXPORT extern const WTF::AtomicString& kActivateInvisibleEvent;
CORE_EXPORT extern const WTF::AtomicString& kMojoInterfaceRequestEvent;
CORE_EXPORT extern const WTF::AtomicString& kOverscrollEvent;
CORE_EXPORT extern const WTF::AtomicString& kAnimationPlaybackEvent;

constexpr unsigned kNamesCount = 37;

CORE_EXPORT void Init();

}  // namespace event_interface_names
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_INTERFACE_NAMES_H_
