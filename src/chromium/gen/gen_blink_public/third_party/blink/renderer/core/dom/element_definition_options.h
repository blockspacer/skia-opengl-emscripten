// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_DOM_ELEMENT_DEFINITION_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_DOM_ELEMENT_DEFINITION_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class CSSStyleSheet;

class CORE_EXPORT ElementDefinitionOptions : public IDLDictionaryBase {
 public:
  static ElementDefinitionOptions* Create() { return MakeGarbageCollected<ElementDefinitionOptions>(); }

  ElementDefinitionOptions();
  virtual ~ElementDefinitionOptions();

  bool hasExtends() const { return !extends_.IsNull(); }
  const String& extends() const {
    return extends_;
  }
  inline void setExtends(const String&);
  inline void setExtendsToNull();

  bool hasStyles() const { return has_styles_; }
  const HeapVector<Member<CSSStyleSheet>>& styles() const {
    DCHECK(has_styles_);
    return styles_;
  }
  void setStyles(const HeapVector<Member<CSSStyleSheet>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_styles_ = false;

  String extends_;
  HeapVector<Member<CSSStyleSheet>> styles_;

  friend class V8ElementDefinitionOptions;
};

void ElementDefinitionOptions::setExtends(const String& value) {
  extends_ = value;
}

void ElementDefinitionOptions::setExtendsToNull() {
  extends_ = String();
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_DOM_ELEMENT_DEFINITION_OPTIONS_H_
