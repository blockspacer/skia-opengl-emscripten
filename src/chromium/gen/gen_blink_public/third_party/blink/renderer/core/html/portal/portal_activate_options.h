// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_PORTAL_PORTAL_ACTIVATE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_PORTAL_PORTAL_ACTIVATE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class CORE_EXPORT PortalActivateOptions : public IDLDictionaryBase {
 public:
  static PortalActivateOptions* Create() { return MakeGarbageCollected<PortalActivateOptions>(); }

  PortalActivateOptions();
  virtual ~PortalActivateOptions();

  bool hasData() const { return !(data_.IsEmpty() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  bool hasTransfer() const { return has_transfer_; }
  const Vector<ScriptValue>& transfer() const {
    DCHECK(has_transfer_);
    return transfer_;
  }
  void setTransfer(const Vector<ScriptValue>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_transfer_ = false;

  ScriptValue data_;
  Vector<ScriptValue> transfer_;

  friend class V8PortalActivateOptions;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_PORTAL_PORTAL_ACTIVATE_OPTIONS_H_
