// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/forms/input_type_names.json5


#include "third_party/blink/renderer/core/input_type_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace input_type_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kButton = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kCheckbox = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kColor = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kDate = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kDatetime = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kDatetimeLocal = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kEmail = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kFile = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kHidden = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kImage = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kMonth = reinterpret_cast<AtomicString*>(&names_storage)[10];
const AtomicString& kNumber = reinterpret_cast<AtomicString*>(&names_storage)[11];
const AtomicString& kPassword = reinterpret_cast<AtomicString*>(&names_storage)[12];
const AtomicString& kRadio = reinterpret_cast<AtomicString*>(&names_storage)[13];
const AtomicString& kRange = reinterpret_cast<AtomicString*>(&names_storage)[14];
const AtomicString& kReset = reinterpret_cast<AtomicString*>(&names_storage)[15];
const AtomicString& kSearch = reinterpret_cast<AtomicString*>(&names_storage)[16];
const AtomicString& kSubmit = reinterpret_cast<AtomicString*>(&names_storage)[17];
const AtomicString& kTel = reinterpret_cast<AtomicString*>(&names_storage)[18];
const AtomicString& kText = reinterpret_cast<AtomicString*>(&names_storage)[19];
const AtomicString& kTime = reinterpret_cast<AtomicString*>(&names_storage)[20];
const AtomicString& kUrl = reinterpret_cast<AtomicString*>(&names_storage)[21];
const AtomicString& kWeek = reinterpret_cast<AtomicString*>(&names_storage)[22];

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
    { "button", 679691, 6 },
    { "checkbox", 2704933, 8 },
    { "color", 2734929, 5 },
    { "date", 11043522, 4 },
    { "datetime", 12167257, 8 },
    { "datetime-local", 5474839, 14 },
    { "email", 13948917, 5 },
    { "file", 14168904, 4 },
    { "hidden", 12930326, 6 },
    { "image", 10287573, 5 },
    { "month", 12226123, 5 },
    { "number", 15609029, 6 },
    { "password", 8168283, 8 },
    { "radio", 6579434, 5 },
    { "range", 2862653, 5 },
    { "reset", 13674204, 5 },
    { "search", 6906057, 6 },
    { "submit", 12328646, 6 },
    { "tel", 1681717, 3 },
    { "text", 2784654, 4 },
    { "time", 3114886, 4 },
    { "url", 10560150, 3 },
    { "week", 14375271, 4 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace input_type_names
}  // namespace blink
