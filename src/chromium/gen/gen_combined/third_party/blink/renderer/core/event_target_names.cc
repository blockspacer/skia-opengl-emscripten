// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/events/event_target_names.json5


#include "third_party/blink/renderer/core/event_target_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace event_target_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kAbortSignal = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kAccessibleNode = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kAnimation = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kApplicationCache = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kAudioTrackList = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kBroadcastChannel = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kClipboard = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kDedicatedWorkerGlobalScope = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kEventSource = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kEventTargetImpl = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kFileReader = reinterpret_cast<AtomicString*>(&names_storage)[10];
const AtomicString& kFontFaceSet = reinterpret_cast<AtomicString*>(&names_storage)[11];
const AtomicString& kInputMethodContext = reinterpret_cast<AtomicString*>(&names_storage)[12];
const AtomicString& kMediaQueryList = reinterpret_cast<AtomicString*>(&names_storage)[13];
const AtomicString& kMessagePort = reinterpret_cast<AtomicString*>(&names_storage)[14];
const AtomicString& kMojoInterfaceInterceptor = reinterpret_cast<AtomicString*>(&names_storage)[15];
const AtomicString& kNode = reinterpret_cast<AtomicString*>(&names_storage)[16];
const AtomicString& kOffscreenCanvas = reinterpret_cast<AtomicString*>(&names_storage)[17];
const AtomicString& kPerformance = reinterpret_cast<AtomicString*>(&names_storage)[18];
const AtomicString& kPortalHost = reinterpret_cast<AtomicString*>(&names_storage)[19];
const AtomicString& kSharedWorker = reinterpret_cast<AtomicString*>(&names_storage)[20];
const AtomicString& kSharedWorkerGlobalScope = reinterpret_cast<AtomicString*>(&names_storage)[21];
const AtomicString& kTextTrack = reinterpret_cast<AtomicString*>(&names_storage)[22];
const AtomicString& kTextTrackCue = reinterpret_cast<AtomicString*>(&names_storage)[23];
const AtomicString& kTextTrackList = reinterpret_cast<AtomicString*>(&names_storage)[24];
const AtomicString& kVideoTrackList = reinterpret_cast<AtomicString*>(&names_storage)[25];
const AtomicString& kVisualViewport = reinterpret_cast<AtomicString*>(&names_storage)[26];
const AtomicString& kWindow = reinterpret_cast<AtomicString*>(&names_storage)[27];
const AtomicString& kWorker = reinterpret_cast<AtomicString*>(&names_storage)[28];
const AtomicString& kXMLHttpRequest = reinterpret_cast<AtomicString*>(&names_storage)[29];
const AtomicString& kXMLHttpRequestUpload = reinterpret_cast<AtomicString*>(&names_storage)[30];

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
    { "AbortSignal", 2804293, 11 },
    { "AccessibleNode", 1695511, 14 },
    { "Animation", 15388009, 9 },
    { "ApplicationCache", 14896278, 16 },
    { "AudioTrackList", 4289573, 14 },
    { "BroadcastChannel", 13095884, 16 },
    { "Clipboard", 10684453, 9 },
    { "DedicatedWorkerGlobalScope", 16739179, 26 },
    { "EventSource", 10057717, 11 },
    { "EventTargetImpl", 4459774, 15 },
    { "FileReader", 1122872, 10 },
    { "FontFaceSet", 15992392, 11 },
    { "InputMethodContext", 6735798, 18 },
    { "MediaQueryList", 4446762, 14 },
    { "MessagePort", 7675160, 11 },
    { "MojoInterfaceInterceptor", 9014877, 24 },
    { "Node", 7481749, 4 },
    { "OffscreenCanvas", 6734153, 15 },
    { "Performance", 16508941, 11 },
    { "PortalHost", 5631498, 10 },
    { "SharedWorker", 5095866, 12 },
    { "SharedWorkerGlobalScope", 14997459, 23 },
    { "TextTrack", 6141630, 9 },
    { "TextTrackCue", 12570487, 12 },
    { "TextTrackList", 15622086, 13 },
    { "VideoTrackList", 12436801, 14 },
    { "DOMVisualViewport", 4690116, 17 },
    { "DOMWindow", 5154002, 9 },
    { "Worker", 14821068, 6 },
    { "XMLHttpRequest", 5139743, 14 },
    { "XMLHttpRequestUpload", 16716896, 20 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace event_target_names
}  // namespace blink
