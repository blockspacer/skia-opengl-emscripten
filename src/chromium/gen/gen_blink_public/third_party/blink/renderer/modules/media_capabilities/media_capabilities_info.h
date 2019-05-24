// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_INFO_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_INFO_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT MediaCapabilitiesInfo : public IDLDictionaryBase {
 public:
  static MediaCapabilitiesInfo* Create() { return MakeGarbageCollected<MediaCapabilitiesInfo>(); }

  MediaCapabilitiesInfo();
  virtual ~MediaCapabilitiesInfo();

  bool hasPowerEfficient() const { return has_power_efficient_; }
  bool powerEfficient() const {
    DCHECK(has_power_efficient_);
    return power_efficient_;
  }
  inline void setPowerEfficient(bool);

  bool hasSmooth() const { return has_smooth_; }
  bool smooth() const {
    DCHECK(has_smooth_);
    return smooth_;
  }
  inline void setSmooth(bool);

  bool hasSupported() const { return has_supported_; }
  bool supported() const {
    DCHECK(has_supported_);
    return supported_;
  }
  inline void setSupported(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_power_efficient_ = false;
  bool has_smooth_ = false;
  bool has_supported_ = false;

  bool power_efficient_;
  bool smooth_;
  bool supported_;

  friend class V8MediaCapabilitiesInfo;
};

void MediaCapabilitiesInfo::setPowerEfficient(bool value) {
  power_efficient_ = value;
  has_power_efficient_ = true;
}

void MediaCapabilitiesInfo::setSmooth(bool value) {
  smooth_ = value;
  has_smooth_ = true;
}

void MediaCapabilitiesInfo::setSupported(bool value) {
  supported_ = value;
  has_supported_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIA_CAPABILITIES_MEDIA_CAPABILITIES_INFO_H_
