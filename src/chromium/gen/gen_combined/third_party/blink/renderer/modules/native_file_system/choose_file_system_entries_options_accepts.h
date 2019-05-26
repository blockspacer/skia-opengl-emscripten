// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_CHOOSE_FILE_SYSTEM_ENTRIES_OPTIONS_ACCEPTS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_CHOOSE_FILE_SYSTEM_ENTRIES_OPTIONS_ACCEPTS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT ChooseFileSystemEntriesOptionsAccepts : public IDLDictionaryBase {
 public:
  static ChooseFileSystemEntriesOptionsAccepts* Create() { return MakeGarbageCollected<ChooseFileSystemEntriesOptionsAccepts>(); }

  ChooseFileSystemEntriesOptionsAccepts();
  virtual ~ChooseFileSystemEntriesOptionsAccepts();

  bool hasDescription() const { return !description_.IsNull(); }
  const String& description() const {
    return description_;
  }
  inline void setDescription(const String&);

  bool hasExtensions() const { return has_extensions_; }
  const Vector<String>& extensions() const {
    DCHECK(has_extensions_);
    return extensions_;
  }
  void setExtensions(const Vector<String>&);

  bool hasMimeTypes() const { return has_mime_types_; }
  const Vector<String>& mimeTypes() const {
    DCHECK(has_mime_types_);
    return mime_types_;
  }
  void setMimeTypes(const Vector<String>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_extensions_ = false;
  bool has_mime_types_ = false;

  String description_;
  Vector<String> extensions_;
  Vector<String> mime_types_;

  friend class V8ChooseFileSystemEntriesOptionsAccepts;
};

void ChooseFileSystemEntriesOptionsAccepts::setDescription(const String& value) {
  description_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_CHOOSE_FILE_SYSTEM_ENTRIES_OPTIONS_ACCEPTS_H_
