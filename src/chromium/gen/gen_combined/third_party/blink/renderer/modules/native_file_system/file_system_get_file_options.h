// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_FILE_SYSTEM_GET_FILE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_FILE_SYSTEM_GET_FILE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT FileSystemGetFileOptions : public IDLDictionaryBase {
 public:
  static FileSystemGetFileOptions* Create() { return MakeGarbageCollected<FileSystemGetFileOptions>(); }

  FileSystemGetFileOptions();
  virtual ~FileSystemGetFileOptions();

  bool hasCreate() const { return has_create_; }
  bool create() const {
    DCHECK(has_create_);
    return create_;
  }
  inline void setCreate(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_create_ = false;

  bool create_;

  friend class V8FileSystemGetFileOptions;
};

void FileSystemGetFileOptions::setCreate(bool value) {
  create_ = value;
  has_create_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_NATIVE_FILE_SYSTEM_FILE_SYSTEM_GET_FILE_OPTIONS_H_
