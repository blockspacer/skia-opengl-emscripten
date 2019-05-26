// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_CHOOSE_FILE_SYSTEM_ENTRIES_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_CHOOSE_FILE_SYSTEM_ENTRIES_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/native_file_system/choose_file_system_entries_options_accepts.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT ChooseFileSystemEntriesOptions : public IDLDictionaryBase {
 public:
  static ChooseFileSystemEntriesOptions* Create() { return MakeGarbageCollected<ChooseFileSystemEntriesOptions>(); }

  ChooseFileSystemEntriesOptions();
  virtual ~ChooseFileSystemEntriesOptions();

  bool hasAccepts() const { return has_accepts_; }
  const HeapVector<Member<ChooseFileSystemEntriesOptionsAccepts>>& accepts() const {
    DCHECK(has_accepts_);
    return accepts_;
  }
  void setAccepts(const HeapVector<Member<ChooseFileSystemEntriesOptionsAccepts>>&);

  bool hasExcludeAcceptAllOption() const { return has_exclude_accept_all_option_; }
  bool excludeAcceptAllOption() const {
    DCHECK(has_exclude_accept_all_option_);
    return exclude_accept_all_option_;
  }
  inline void setExcludeAcceptAllOption(bool);

  bool hasMultiple() const { return has_multiple_; }
  bool multiple() const {
    DCHECK(has_multiple_);
    return multiple_;
  }
  inline void setMultiple(bool);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_accepts_ = false;
  bool has_exclude_accept_all_option_ = false;
  bool has_multiple_ = false;

  HeapVector<Member<ChooseFileSystemEntriesOptionsAccepts>> accepts_;
  bool exclude_accept_all_option_;
  bool multiple_;
  String type_;

  friend class V8ChooseFileSystemEntriesOptions;
};

void ChooseFileSystemEntriesOptions::setExcludeAcceptAllOption(bool value) {
  exclude_accept_all_option_ = value;
  has_exclude_accept_all_option_ = true;
}

void ChooseFileSystemEntriesOptions::setMultiple(bool value) {
  multiple_ = value;
  has_multiple_ = true;
}

void ChooseFileSystemEntriesOptions::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_CHOOSE_FILE_SYSTEM_ENTRIES_OPTIONS_H_
