// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_SHAPEDETECTION_BARCODE_DETECTOR_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_SHAPEDETECTION_BARCODE_DETECTOR_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT BarcodeDetectorOptions : public IDLDictionaryBase {
 public:
  static BarcodeDetectorOptions* Create() { return MakeGarbageCollected<BarcodeDetectorOptions>(); }

  BarcodeDetectorOptions();
  virtual ~BarcodeDetectorOptions();

  bool hasFormats() const { return has_formats_; }
  const Vector<String>& formats() const {
    DCHECK(has_formats_);
    return formats_;
  }
  void setFormats(const Vector<String>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_formats_ = false;

  Vector<String> formats_;

  friend class V8BarcodeDetectorOptions;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_SHAPEDETECTION_BARCODE_DETECTOR_OPTIONS_H_
