// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/modules/native_file_system/choose_file_system_entries_options_accepts.h"

namespace blink {

ChooseFileSystemEntriesOptionsAccepts::ChooseFileSystemEntriesOptionsAccepts() {
}

ChooseFileSystemEntriesOptionsAccepts::~ChooseFileSystemEntriesOptionsAccepts() = default;

void ChooseFileSystemEntriesOptionsAccepts::setExtensions(const Vector<String>& value) {
  extensions_ = value;
  has_extensions_ = true;
}

void ChooseFileSystemEntriesOptionsAccepts::setMimeTypes(const Vector<String>& value) {
  mime_types_ = value;
  has_mime_types_ = true;
}

void ChooseFileSystemEntriesOptionsAccepts::Trace(blink::Visitor* visitor) {
  IDLDictionaryBase::Trace(visitor);
}

}  // namespace blink
