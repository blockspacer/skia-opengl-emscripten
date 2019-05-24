// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FILEAPI_BLOB_PROPERTY_BAG_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FILEAPI_BLOB_PROPERTY_BAG_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CORE_EXPORT BlobPropertyBag : public IDLDictionaryBase {
 public:
  static BlobPropertyBag* Create() { return MakeGarbageCollected<BlobPropertyBag>(); }

  BlobPropertyBag();
  virtual ~BlobPropertyBag();

  bool hasEndings() const { return !endings_.IsNull(); }
  const String& endings() const {
    return endings_;
  }
  inline void setEndings(const String&);

  bool hasType() const { return !type_.IsNull(); }
  const String& type() const {
    return type_;
  }
  inline void setType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  String endings_;
  String type_;

  friend class V8BlobPropertyBag;
};

void BlobPropertyBag::setEndings(const String& value) {
  endings_ = value;
}

void BlobPropertyBag::setType(const String& value) {
  type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FILEAPI_BLOB_PROPERTY_BAG_H_
