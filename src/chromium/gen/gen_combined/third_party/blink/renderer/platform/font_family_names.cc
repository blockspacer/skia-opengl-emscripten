// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/fonts/font_family_names.json5


#include "third_party/blink/renderer/platform/font_family_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace font_family_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kWebkitCursive = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kWebkitFantasy = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kWebkitMonospace = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kWebkitPictograph = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kWebkitSansSerif = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kWebkitSerif = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kWebkitStandard = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kArial = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kBlinkMacSystemFont = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kCalibri = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kCourier = reinterpret_cast<AtomicString*>(&names_storage)[10];
const AtomicString& kCourierNew = reinterpret_cast<AtomicString*>(&names_storage)[11];
const AtomicString& kHelvetica = reinterpret_cast<AtomicString*>(&names_storage)[12];
const AtomicString& kLucidaGrande = reinterpret_cast<AtomicString*>(&names_storage)[13];
const AtomicString& kMSSansSerif = reinterpret_cast<AtomicString*>(&names_storage)[14];
const AtomicString& kMSSerif = reinterpret_cast<AtomicString*>(&names_storage)[15];
const AtomicString& kMSUIGothic = reinterpret_cast<AtomicString*>(&names_storage)[16];
const AtomicString& kMicrosoftSansSerif = reinterpret_cast<AtomicString*>(&names_storage)[17];
const AtomicString& kSans = reinterpret_cast<AtomicString*>(&names_storage)[18];
const AtomicString& kSegoeUI = reinterpret_cast<AtomicString*>(&names_storage)[19];
const AtomicString& kTimes = reinterpret_cast<AtomicString*>(&names_storage)[20];
const AtomicString& kTimesNewRoman = reinterpret_cast<AtomicString*>(&names_storage)[21];
const AtomicString& kCursive = reinterpret_cast<AtomicString*>(&names_storage)[22];
const AtomicString& kFantasy = reinterpret_cast<AtomicString*>(&names_storage)[23];
const AtomicString& kMonospace = reinterpret_cast<AtomicString*>(&names_storage)[24];
const AtomicString& kSansSerif = reinterpret_cast<AtomicString*>(&names_storage)[25];
const AtomicString& kSerif = reinterpret_cast<AtomicString*>(&names_storage)[26];
const AtomicString& kSystemUi = reinterpret_cast<AtomicString*>(&names_storage)[27];

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
    { "-webkit-cursive", 7063387, 15 },
    { "-webkit-fantasy", 16384875, 15 },
    { "-webkit-monospace", 14315487, 17 },
    { "-webkit-pictograph", 7921289, 18 },
    { "-webkit-sans-serif", 1961926, 18 },
    { "-webkit-serif", 7070799, 13 },
    { "-webkit-standard", 6994621, 16 },
    { "Arial", 16574340, 5 },
    { "BlinkMacSystemFont", 1851454, 18 },
    { "Calibri", 3430454, 7 },
    { "Courier", 3193356, 7 },
    { "Courier New", 14670458, 11 },
    { "Helvetica", 15124250, 9 },
    { "Lucida Grande", 8192141, 13 },
    { "MS Sans Serif", 3551498, 13 },
    { "MS Serif", 7586295, 8 },
    { "MS UI Gothic", 12187834, 12 },
    { "Microsoft Sans Serif", 10902575, 20 },
    { "Sans", 6668891, 4 },
    { "Segoe UI", 2762116, 8 },
    { "Times", 1178907, 5 },
    { "Times New Roman", 8871567, 15 },
    { "cursive", 10597311, 7 },
    { "fantasy", 16039516, 7 },
    { "monospace", 7438294, 9 },
    { "sans-serif", 5108456, 10 },
    { "serif", 14004670, 5 },
    { "system-ui", 14546067, 9 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace font_family_names
}  // namespace blink
