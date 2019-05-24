// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_DEVICE_REQUEST_OPTIONS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_DEVICE_REQUEST_OPTIONS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/modules/hid/hid_device_filter.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/vector.h"

namespace blink {

class MODULES_EXPORT HIDDeviceRequestOptions : public IDLDictionaryBase {
 public:
  static HIDDeviceRequestOptions* Create() { return MakeGarbageCollected<HIDDeviceRequestOptions>(); }

  HIDDeviceRequestOptions();
  virtual ~HIDDeviceRequestOptions();

  bool hasFilters() const { return has_filters_; }
  const HeapVector<Member<HIDDeviceFilter>>& filters() const {
    DCHECK(has_filters_);
    return filters_;
  }
  void setFilters(const HeapVector<Member<HIDDeviceFilter>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_filters_ = false;

  HeapVector<Member<HIDDeviceFilter>> filters_;

  friend class V8HIDDeviceRequestOptions;
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_DEVICE_REQUEST_OPTIONS_H_
