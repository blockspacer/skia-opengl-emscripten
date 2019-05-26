// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_REPORTING_OBSERVER_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_REPORTING_OBSERVER_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT ReportingObserverOptions : public IDLDictionaryBase {
 public:
  static ReportingObserverOptions* Create() { return MakeGarbageCollected<ReportingObserverOptions>(); }

  ReportingObserverOptions();
  virtual ~ReportingObserverOptions();

  bool hasBuffered() const { return has_buffered_; }
  bool buffered() const {
    DCHECK(has_buffered_);
    return buffered_;
  }
  inline void setBuffered(bool);

  bool hasTypes() const { return has_types_; }
  const Vector<String>& types() const {
    DCHECK(has_types_);
    return types_;
  }
  void setTypes(const Vector<String>&);
  void setTypesToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_buffered_ = false;
  bool has_types_ = false;

  bool buffered_;
  Vector<String> types_;

  friend class V8ReportingObserverOptions;
};

void ReportingObserverOptions::setBuffered(bool value) {
  buffered_ = value;
  has_buffered_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_FRAME_REPORTING_OBSERVER_OPTIONS_H_
