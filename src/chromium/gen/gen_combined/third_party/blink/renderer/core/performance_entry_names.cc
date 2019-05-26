// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/timing/performance_entry_names.json5


#include "third_party/blink/renderer/core/performance_entry_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace performance_entry_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kElement = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kEvent = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kFirstInput = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kLayoutJank = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kLongtask = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kMark = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kMeasure = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kNavigation = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kPaint = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kResource = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kTaskattribution = reinterpret_cast<AtomicString*>(&names_storage)[10];

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
    { "element", 10847290, 7 },
    { "event", 4205160, 5 },
    { "firstInput", 10818043, 10 },
    { "layoutJank", 2336601, 10 },
    { "longtask", 10552953, 8 },
    { "mark", 16508213, 4 },
    { "measure", 14276612, 7 },
    { "navigation", 7522544, 10 },
    { "paint", 14181688, 5 },
    { "resource", 2370048, 8 },
    { "taskattribution", 3833465, 15 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace performance_entry_names
}  // namespace blink
