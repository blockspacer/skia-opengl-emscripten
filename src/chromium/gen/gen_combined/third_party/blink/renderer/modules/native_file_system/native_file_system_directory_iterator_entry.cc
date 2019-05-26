// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/native_file_system/native_file_system_directory_iterator_entry.h"

#include "third_party/blink/renderer/modules/native_file_system/native_file_system_handle.h"

namespace blink {

NativeFileSystemDirectoryIteratorEntry::NativeFileSystemDirectoryIteratorEntry() {
  setDone(false);
}

NativeFileSystemDirectoryIteratorEntry::~NativeFileSystemDirectoryIteratorEntry() = default;

void NativeFileSystemDirectoryIteratorEntry::Trace(blink::Visitor* visitor) {
  visitor->Trace(value_);
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
