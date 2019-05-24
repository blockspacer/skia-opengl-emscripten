// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/make_names.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/modules/indexeddb/indexed_db_names.json5


#include "third_party/blink/renderer/modules/indexed_db_names.h"

#include "base/stl_util.h"  // for base::size()
#include "third_party/blink/renderer/platform/wtf/std_lib_extras.h"

namespace blink {
namespace indexed_db_names {

void* names_storage[kNamesCount * ((sizeof(AtomicString) + sizeof(void *) - 1) / sizeof(void *))];

const AtomicString& kIndexedDB = reinterpret_cast<AtomicString*>(&names_storage)[0];
const AtomicString& kAdd = reinterpret_cast<AtomicString*>(&names_storage)[1];
const AtomicString& kClear = reinterpret_cast<AtomicString*>(&names_storage)[2];
const AtomicString& kDelete = reinterpret_cast<AtomicString*>(&names_storage)[3];
const AtomicString& kDone = reinterpret_cast<AtomicString*>(&names_storage)[4];
const AtomicString& kNext = reinterpret_cast<AtomicString*>(&names_storage)[5];
const AtomicString& kNextunique = reinterpret_cast<AtomicString*>(&names_storage)[6];
const AtomicString& kNone = reinterpret_cast<AtomicString*>(&names_storage)[7];
const AtomicString& kPending = reinterpret_cast<AtomicString*>(&names_storage)[8];
const AtomicString& kPrev = reinterpret_cast<AtomicString*>(&names_storage)[9];
const AtomicString& kPrevunique = reinterpret_cast<AtomicString*>(&names_storage)[10];
const AtomicString& kPut = reinterpret_cast<AtomicString*>(&names_storage)[11];
const AtomicString& kReadonly = reinterpret_cast<AtomicString*>(&names_storage)[12];
const AtomicString& kReadwrite = reinterpret_cast<AtomicString*>(&names_storage)[13];
const AtomicString& kTotal = reinterpret_cast<AtomicString*>(&names_storage)[14];
const AtomicString& kVersionchange = reinterpret_cast<AtomicString*>(&names_storage)[15];

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
    { "IndexedDB", 4847824, 9 },
    { "add", 2199543, 3 },
    { "clear", 12832795, 5 },
    { "delete", 16564367, 6 },
    { "done", 11685723, 4 },
    { "next", 13682113, 4 },
    { "nextunique", 15395501, 10 },
    { "none", 3454253, 4 },
    { "pending", 1181072, 7 },
    { "prev", 6676561, 4 },
    { "prevunique", 7206471, 10 },
    { "put", 3938797, 3 },
    { "readonly", 4471832, 8 },
    { "readwrite", 15868712, 9 },
    { "total", 1584834, 5 },
    { "versionchange", 1334380, 13 },
  };

  for (size_t i = 0; i < base::size(kNames); ++i) {
    StringImpl* impl = StringImpl::CreateStatic(kNames[i].name, kNames[i].length, kNames[i].hash);
    void* address = reinterpret_cast<AtomicString*>(&names_storage) + i;
    new (address) AtomicString(impl);
  }
}

}  // namespace indexed_db_names
}  // namespace blink
