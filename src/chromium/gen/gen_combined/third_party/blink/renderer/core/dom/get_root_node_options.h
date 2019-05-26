// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_DOM_GET_ROOT_NODE_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_DOM_GET_ROOT_NODE_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT GetRootNodeOptions : public IDLDictionaryBase {
 public:
  static GetRootNodeOptions* Create() { return MakeGarbageCollected<GetRootNodeOptions>(); }

  GetRootNodeOptions();
  virtual ~GetRootNodeOptions();

  bool hasComposed() const { return has_composed_; }
  bool composed() const {
    DCHECK(has_composed_);
    return composed_;
  }
  inline void setComposed(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_composed_ = false;

  bool composed_;

  friend class V8GetRootNodeOptions;
};

void GetRootNodeOptions::setComposed(bool value) {
  composed_ = value;
  has_composed_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_DOM_GET_ROOT_NODE_OPTIONS_H_