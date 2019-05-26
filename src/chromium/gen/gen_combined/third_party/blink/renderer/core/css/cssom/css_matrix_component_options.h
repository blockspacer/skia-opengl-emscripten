// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSSOM_CSS_MATRIX_COMPONENT_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSSOM_CSS_MATRIX_COMPONENT_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT CSSMatrixComponentOptions : public IDLDictionaryBase {
 public:
  static CSSMatrixComponentOptions* Create() { return MakeGarbageCollected<CSSMatrixComponentOptions>(); }

  CSSMatrixComponentOptions();
  virtual ~CSSMatrixComponentOptions();

  bool hasIs2D() const { return has_is_2d_; }
  bool is2D() const {
    DCHECK(has_is_2d_);
    return is_2d_;
  }
  inline void setIs2D(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_is_2d_ = false;

  bool is_2d_;

  friend class V8CSSMatrixComponentOptions;
};

void CSSMatrixComponentOptions::setIs2D(bool value) {
  is_2d_ = value;
  has_is_2d_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_CSS_CSSOM_CSS_MATRIX_COMPONENT_OPTIONS_H_
