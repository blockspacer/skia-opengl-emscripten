// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/events/event_target_names.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_TARGET_NAMES_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_TARGET_NAMES_H_

#include "third_party/blink/renderer/platform/wtf/text/atomic_string.h"
#include "third_party/blink/renderer/core/core_export.h"

namespace blink {
namespace event_target_names {

CORE_EXPORT extern const WTF::AtomicString& kAbortSignal;
CORE_EXPORT extern const WTF::AtomicString& kAccessibleNode;
CORE_EXPORT extern const WTF::AtomicString& kAnimation;
CORE_EXPORT extern const WTF::AtomicString& kApplicationCache;
CORE_EXPORT extern const WTF::AtomicString& kAudioTrackList;
CORE_EXPORT extern const WTF::AtomicString& kBroadcastChannel;
CORE_EXPORT extern const WTF::AtomicString& kClipboard;
CORE_EXPORT extern const WTF::AtomicString& kDedicatedWorkerGlobalScope;
CORE_EXPORT extern const WTF::AtomicString& kEventSource;
CORE_EXPORT extern const WTF::AtomicString& kEventTargetImpl;
CORE_EXPORT extern const WTF::AtomicString& kFileReader;
CORE_EXPORT extern const WTF::AtomicString& kFontFaceSet;
CORE_EXPORT extern const WTF::AtomicString& kInputMethodContext;
CORE_EXPORT extern const WTF::AtomicString& kMediaQueryList;
CORE_EXPORT extern const WTF::AtomicString& kMessagePort;
CORE_EXPORT extern const WTF::AtomicString& kMojoInterfaceInterceptor;
CORE_EXPORT extern const WTF::AtomicString& kNode;
CORE_EXPORT extern const WTF::AtomicString& kOffscreenCanvas;
CORE_EXPORT extern const WTF::AtomicString& kPerformance;
CORE_EXPORT extern const WTF::AtomicString& kPortalHost;
CORE_EXPORT extern const WTF::AtomicString& kSharedWorker;
CORE_EXPORT extern const WTF::AtomicString& kSharedWorkerGlobalScope;
CORE_EXPORT extern const WTF::AtomicString& kTextTrack;
CORE_EXPORT extern const WTF::AtomicString& kTextTrackCue;
CORE_EXPORT extern const WTF::AtomicString& kTextTrackList;
CORE_EXPORT extern const WTF::AtomicString& kVideoTrackList;
CORE_EXPORT extern const WTF::AtomicString& kWorker;
CORE_EXPORT extern const WTF::AtomicString& kXMLHttpRequest;
CORE_EXPORT extern const WTF::AtomicString& kXMLHttpRequestUpload;
CORE_EXPORT extern const WTF::AtomicString& kVisualViewport;
CORE_EXPORT extern const WTF::AtomicString& kWindow;

constexpr unsigned kNamesCount = 31;

CORE_EXPORT void Init();

}  // namespace event_target_names
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENT_TARGET_NAMES_H_
