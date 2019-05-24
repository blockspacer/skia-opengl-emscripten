// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_REFERENCE_SPACE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_REFERENCE_SPACE_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class XRRigidTransform;
class XRReferenceSpace;

class MODULES_EXPORT XRReferenceSpaceEventInit : public EventInit {
 public:
  static XRReferenceSpaceEventInit* Create() { return MakeGarbageCollected<XRReferenceSpaceEventInit>(); }

  XRReferenceSpaceEventInit();
  virtual ~XRReferenceSpaceEventInit();

  bool hasReferenceSpace() const { return reference_space_; }
  XRReferenceSpace* referenceSpace() const {
    return reference_space_;
  }
  inline void setReferenceSpace(XRReferenceSpace*);

  bool hasTransform() const { return transform_; }
  XRRigidTransform* transform() const {
    return transform_;
  }
  inline void setTransform(XRRigidTransform*);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:

  Member<XRReferenceSpace> reference_space_;
  Member<XRRigidTransform> transform_;

  friend class V8XRReferenceSpaceEventInit;
};

void XRReferenceSpaceEventInit::setReferenceSpace(XRReferenceSpace* value) {
  reference_space_ = value;
}

void XRReferenceSpaceEventInit::setTransform(XRRigidTransform* value) {
  transform_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_XR_XR_REFERENCE_SPACE_EVENT_INIT_H_
