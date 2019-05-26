// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_INPUT_REPORT_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_INPUT_REPORT_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class HIDDevice;
class DOMDataView;

class MODULES_EXPORT HIDInputReportEventInit : public EventInit {
 public:
  static HIDInputReportEventInit* Create() { return MakeGarbageCollected<HIDInputReportEventInit>(); }

  HIDInputReportEventInit();
  virtual ~HIDInputReportEventInit();

  bool hasData() const { return data_; }
  DOMDataView* data() const {
    return data_;
  }
  inline void setData(DOMDataView*);

  bool hasDevice() const { return device_; }
  HIDDevice* device() const {
    return device_;
  }
  inline void setDevice(HIDDevice*);

  bool hasReportId() const { return has_report_id_; }
  uint8_t reportId() const {
    DCHECK(has_report_id_);
    return report_id_;
  }
  inline void setReportId(uint8_t);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_report_id_ = false;

  Member<DOMDataView> data_;
  Member<HIDDevice> device_;
  uint8_t report_id_;

  friend class V8HIDInputReportEventInit;
};

void HIDInputReportEventInit::setData(DOMDataView* value) {
  data_ = value;
}

void HIDInputReportEventInit::setDevice(HIDDevice* value) {
  device_ = value;
}

void HIDInputReportEventInit::setReportId(uint8_t value) {
  report_id_ = value;
  has_report_id_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_HID_HID_INPUT_REPORT_EVENT_INIT_H_
