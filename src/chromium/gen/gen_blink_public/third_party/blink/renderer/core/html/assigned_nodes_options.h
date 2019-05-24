// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ASSIGNED_NODES_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ASSIGNED_NODES_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT AssignedNodesOptions : public IDLDictionaryBase {
 public:
  static AssignedNodesOptions* Create() { return MakeGarbageCollected<AssignedNodesOptions>(); }

  AssignedNodesOptions();
  virtual ~AssignedNodesOptions();

  bool hasFlatten() const { return has_flatten_; }
  bool flatten() const {
    DCHECK(has_flatten_);
    return flatten_;
  }
  inline void setFlatten(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_flatten_ = false;

  bool flatten_;

  friend class V8AssignedNodesOptions;
};

void AssignedNodesOptions::setFlatten(bool value) {
  flatten_ = value;
  has_flatten_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_HTML_ASSIGNED_NODES_OPTIONS_H_
