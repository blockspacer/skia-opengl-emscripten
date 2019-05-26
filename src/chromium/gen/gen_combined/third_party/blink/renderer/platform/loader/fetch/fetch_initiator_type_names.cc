// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/loader/fetch/fetch_initiator_type_names.json5


#include "third_party/blink/renderer/platform/loader/fetch/fetch_initiator_type_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace fetch_initiator_type_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kAudio = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kBeacon = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kCSS = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kDocument = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kFetch = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kIcon = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kInternal = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kLink = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kOther = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kPing = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kProcessinginstruction = reinterpret_cast<AtomicString*>(&names_storage)[10];
const AtomicString& kTrack = reinterpret_cast<AtomicString*>(&names_storage)[11];
const AtomicString& kUacss = reinterpret_cast<AtomicString*>(&names_storage)[12];
const AtomicString& kVideo = reinterpret_cast<AtomicString*>(&names_storage)[13];
const AtomicString& kViolationreport = reinterpret_cast<AtomicString*>(&names_storage)[14];
const AtomicString& kXml = reinterpret_cast<AtomicString*>(&names_storage)[15];
const AtomicString& kXmlhttprequest = reinterpret_cast<AtomicString*>(&names_storage)[16];

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
    { "audio", 2129307, 5 },
    { "beacon", 12791408, 6 },
    { "css", 12506144, 3 },
    { "document", 13333587, 8 },
    { "fetch", 10988466, 5 },
    { "icon", 12131262, 4 },
    { "internal", 15376144, 8 },
    { "link", 7010491, 4 },
    { "other", 6135842, 5 },
    { "ping", 9193756, 4 },
    { "processinginstruction", 8687069, 21 },
    { "track", 10988706, 5 },
    { "uacss", 12060526, 5 },
    { "video", 16765639, 5 },
    { "violationreport", 9570399, 15 },
    { "xml", 10322861, 3 },
    { "xmlhttprequest", 10847986, 14 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace fetch_initiator_type_names
}  // namespace blink
