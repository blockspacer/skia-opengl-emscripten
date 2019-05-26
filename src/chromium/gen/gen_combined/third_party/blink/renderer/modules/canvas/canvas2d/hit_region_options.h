// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_CANVAS_CANVAS_2D_HIT_REGION_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_CANVAS_CANVAS_2D_HIT_REGION_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class Path2D;
class Element;

class MODULES_EXPORT HitRegionOptions : public IDLDictionaryBase {
 public:
  static HitRegionOptions* Create() { return MakeGarbageCollected<HitRegionOptions>(); }

  HitRegionOptions();
  virtual ~HitRegionOptions();

  bool hasControl() const { return has_control_; }
  Element* control() const {
    return control_;
  }
  inline void setControl(Element*);
  inline void setControlToNull();

  bool hasFillRule() const { return !fill_rule_.IsNull(); }
  const String& fillRule() const {
    return fill_rule_;
  }
  inline void setFillRule(const String&);

  bool hasId() const { return !id_.IsNull(); }
  const String& id() const {
    return id_;
  }
  inline void setId(const String&);

  bool hasPath() const { return has_path_; }
  Path2D* path() const {
    return path_;
  }
  inline void setPath(Path2D*);
  inline void setPathToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_control_ = false;
  bool has_path_ = false;

  Member<Element> control_;
  String fill_rule_;
  String id_;
  Member<Path2D> path_;

  friend class V8HitRegionOptions;
};

void HitRegionOptions::setControl(Element* value) {
  control_ = value;
  has_control_ = true;
}

void HitRegionOptions::setControlToNull() {
  control_ = Member<Element>();
  has_control_ = true;
}

void HitRegionOptions::setFillRule(const String& value) {
  fill_rule_ = value;
}

void HitRegionOptions::setId(const String& value) {
  id_ = value;
}

void HitRegionOptions::setPath(Path2D* value) {
  path_ = value;
  has_path_ = true;
}

void HitRegionOptions::setPathToNull() {
  path_ = Member<Path2D>();
  has_path_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_CANVAS_CANVAS_2D_HIT_REGION_OPTIONS_H_
