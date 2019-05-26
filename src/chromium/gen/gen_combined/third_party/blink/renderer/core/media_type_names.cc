// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/css/media_type_names.json5


#include "third_party/blink/renderer/core/media_type_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace media_type_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kAll = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kBraille = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kEmbossed = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kHandheld = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kPrint = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kProjection = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kScreen = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kSpeech = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kTty = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kTv = reinterpret_cast<AtomicString*>(&names_storage)[9];

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
    { "all", 10505778, 3 },
    { "braille", 15044340, 7 },
    { "embossed", 2246272, 8 },
    { "handheld", 12743954, 8 },
    { "print", 10456730, 5 },
    { "projection", 1089243, 10 },
    { "screen", 13980269, 6 },
    { "speech", 4509099, 6 },
    { "tty", 13331747, 3 },
    { "tv", 14748810, 2 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace media_type_names
}  // namespace blink
