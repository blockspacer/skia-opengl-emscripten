// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/editing/input_mode_names.json5


#include "third_party/blink/renderer/core/input_mode_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace input_mode_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kDecimal = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kEmail = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kNone = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kNumeric = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kSearch = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kTel = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kText = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kUrl = reinterpret_cast<AtomicString*>(&names_storage)[7];

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
    { "decimal", 15005416, 7 },
    { "email", 13948917, 5 },
    { "none", 3454253, 4 },
    { "numeric", 14288860, 7 },
    { "search", 6906057, 6 },
    { "tel", 1681717, 3 },
    { "text", 2784654, 4 },
    { "url", 10560150, 3 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace input_mode_names
}  // namespace blink
