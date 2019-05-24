// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_QUAD_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_QUAD_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/geometry/dom_point_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class CORE_EXPORT DOMQuadInit : public IDLDictionaryBase {
 public:
  static DOMQuadInit* Create() { return MakeGarbageCollected<DOMQuadInit>(); }

  DOMQuadInit();
  virtual ~DOMQuadInit();

  bool hasP1() const { return p_1_; }
  DOMPointInit* p1() const {
    return p_1_;
  }
  void setP1(DOMPointInit*);

  bool hasP2() const { return p_2_; }
  DOMPointInit* p2() const {
    return p_2_;
  }
  void setP2(DOMPointInit*);

  bool hasP3() const { return p_3_; }
  DOMPointInit* p3() const {
    return p_3_;
  }
  void setP3(DOMPointInit*);

  bool hasP4() const { return p_4_; }
  DOMPointInit* p4() const {
    return p_4_;
  }
  void setP4(DOMPointInit*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<DOMPointInit> p_1_;
  Member<DOMPointInit> p_2_;
  Member<DOMPointInit> p_3_;
  Member<DOMPointInit> p_4_;

  friend class V8DOMQuadInit;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_GEOMETRY_DOM_QUAD_INIT_H_
