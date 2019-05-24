// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TRUSTEDTYPES_TRUSTED_TYPE_POLICY_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TRUSTEDTYPES_TRUSTED_TYPE_POLICY_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_create_html_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_create_script_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_create_url_callback.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT TrustedTypePolicyOptions : public IDLDictionaryBase {
 public:
  static TrustedTypePolicyOptions* Create() { return MakeGarbageCollected<TrustedTypePolicyOptions>(); }

  TrustedTypePolicyOptions();
  virtual ~TrustedTypePolicyOptions();

  bool hasCreateHTML() const { return create_html_; }
  V8CreateHTMLCallback* createHTML() const {
    return create_html_;
  }
  void setCreateHTML(V8CreateHTMLCallback*);

  bool hasCreateScript() const { return create_script_; }
  V8CreateScriptCallback* createScript() const {
    return create_script_;
  }
  void setCreateScript(V8CreateScriptCallback*);

  bool hasCreateScriptURL() const { return create_script_url_; }
  V8CreateURLCallback* createScriptURL() const {
    return create_script_url_;
  }
  void setCreateScriptURL(V8CreateURLCallback*);

  bool hasCreateURL() const { return create_url_; }
  V8CreateURLCallback* createURL() const {
    return create_url_;
  }
  void setCreateURL(V8CreateURLCallback*);

  bool hasExposed() const { return has_exposed_; }
  bool exposed() const {
    DCHECK(has_exposed_);
    return exposed_;
  }
  inline void setExposed(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_exposed_ = false;

  Member<V8CreateHTMLCallback> create_html_;
  Member<V8CreateScriptCallback> create_script_;
  Member<V8CreateURLCallback> create_script_url_;
  Member<V8CreateURLCallback> create_url_;
  bool exposed_;

  friend class V8TrustedTypePolicyOptions;
};

void TrustedTypePolicyOptions::setExposed(bool value) {
  exposed_ = value;
  has_exposed_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TRUSTEDTYPES_TRUSTED_TYPE_POLICY_OPTIONS_H_
