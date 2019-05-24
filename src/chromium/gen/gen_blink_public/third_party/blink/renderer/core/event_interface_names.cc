// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   gen/third_party/blink/renderer/core/event_interface_names.json5


#include "third_party/blink/renderer/core/event_interface_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace event_interface_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kActivateInvisibleEvent = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kAnimationEvent = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kAnimationPlaybackEvent = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kApplicationCacheErrorEvent = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kBeforeActivateEvent = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kBeforeUnloadEvent = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kClipboardEvent = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kCompositionEvent = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kCustomEvent = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kDragEvent = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kErrorEvent = reinterpret_cast<AtomicString*>(&names_storage)[10];
const AtomicString& kEvent = reinterpret_cast<AtomicString*>(&names_storage)[11];
const AtomicString& kFocusEvent = reinterpret_cast<AtomicString*>(&names_storage)[12];
const AtomicString& kFontFaceSetLoadEvent = reinterpret_cast<AtomicString*>(&names_storage)[13];
const AtomicString& kFormDataEvent = reinterpret_cast<AtomicString*>(&names_storage)[14];
const AtomicString& kHashChangeEvent = reinterpret_cast<AtomicString*>(&names_storage)[15];
const AtomicString& kInputEvent = reinterpret_cast<AtomicString*>(&names_storage)[16];
const AtomicString& kKeyboardEvent = reinterpret_cast<AtomicString*>(&names_storage)[17];
const AtomicString& kMediaQueryListEvent = reinterpret_cast<AtomicString*>(&names_storage)[18];
const AtomicString& kMessageEvent = reinterpret_cast<AtomicString*>(&names_storage)[19];
const AtomicString& kMojoInterfaceRequestEvent = reinterpret_cast<AtomicString*>(&names_storage)[20];
const AtomicString& kMouseEvent = reinterpret_cast<AtomicString*>(&names_storage)[21];
const AtomicString& kMutationEvent = reinterpret_cast<AtomicString*>(&names_storage)[22];
const AtomicString& kOverscrollEvent = reinterpret_cast<AtomicString*>(&names_storage)[23];
const AtomicString& kPageTransitionEvent = reinterpret_cast<AtomicString*>(&names_storage)[24];
const AtomicString& kPointerEvent = reinterpret_cast<AtomicString*>(&names_storage)[25];
const AtomicString& kPopStateEvent = reinterpret_cast<AtomicString*>(&names_storage)[26];
const AtomicString& kProgressEvent = reinterpret_cast<AtomicString*>(&names_storage)[27];
const AtomicString& kPromiseRejectionEvent = reinterpret_cast<AtomicString*>(&names_storage)[28];
const AtomicString& kResourceProgressEvent = reinterpret_cast<AtomicString*>(&names_storage)[29];
const AtomicString& kSecurityPolicyViolationEvent = reinterpret_cast<AtomicString*>(&names_storage)[30];
const AtomicString& kTextEvent = reinterpret_cast<AtomicString*>(&names_storage)[31];
const AtomicString& kTouchEvent = reinterpret_cast<AtomicString*>(&names_storage)[32];
const AtomicString& kTrackEvent = reinterpret_cast<AtomicString*>(&names_storage)[33];
const AtomicString& kTransitionEvent = reinterpret_cast<AtomicString*>(&names_storage)[34];
const AtomicString& kUIEvent = reinterpret_cast<AtomicString*>(&names_storage)[35];
const AtomicString& kWheelEvent = reinterpret_cast<AtomicString*>(&names_storage)[36];

void Init() {
  static bool is_loaded = false;
  if (is_loaded) return;
  is_loaded = true;

  struct NameEntry {
    const char* name;
    unsigned hash;
    unsigned char length;
  };

  static const NameEntry kNames[] = {
    { "ActivateInvisibleEvent", 9340177, 22 },
    { "AnimationEvent", 6834880, 14 },
    { "AnimationPlaybackEvent", 9080085, 22 },
    { "ApplicationCacheErrorEvent", 10025690, 26 },
    { "BeforeActivateEvent", 766018, 19 },
    { "BeforeUnloadEvent", 6032602, 17 },
    { "ClipboardEvent", 10110691, 14 },
    { "CompositionEvent", 9205103, 16 },
    { "CustomEvent", 13370215, 11 },
    { "DragEvent", 16518129, 9 },
    { "ErrorEvent", 3070522, 10 },
    { "Event", 14343017, 5 },
    { "FocusEvent", 8217765, 10 },
    { "FontFaceSetLoadEvent", 3580378, 20 },
    { "FormDataEvent", 14553943, 13 },
    { "HashChangeEvent", 15010276, 15 },
    { "InputEvent", 5462086, 10 },
    { "KeyboardEvent", 6959608, 13 },
    { "MediaQueryListEvent", 2479019, 19 },
    { "MessageEvent", 3580588, 12 },
    { "MojoInterfaceRequestEvent", 785425, 25 },
    { "MouseEvent", 12822602, 10 },
    { "MutationEvent", 3855658, 13 },
    { "OverscrollEvent", 1406665, 15 },
    { "PageTransitionEvent", 14165289, 19 },
    { "PointerEvent", 14906035, 12 },
    { "PopStateEvent", 13550868, 13 },
    { "ProgressEvent", 457487, 13 },
    { "PromiseRejectionEvent", 1433622, 21 },
    { "ResourceProgressEvent", 3169626, 21 },
    { "SecurityPolicyViolationEvent", 945681, 28 },
    { "TextEvent", 9996370, 9 },
    { "TouchEvent", 8776614, 10 },
    { "TrackEvent", 14136022, 10 },
    { "TransitionEvent", 4011983, 15 },
    { "UIEvent", 9523113, 7 },
    { "WheelEvent", 580237, 10 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace event_interface_names
}  // namespace blink
