// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_INPUT_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_INPUT_EVENT_INIT_H_

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/events/ui_event_init.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class StaticRange;
class DataTransfer;

class CORE_EXPORT InputEventInit : public UIEventInit {
 public:
  static InputEventInit* Create() { return MakeGarbageCollected<InputEventInit>(); }

  InputEventInit();
  virtual ~InputEventInit();

  bool hasData() const { return !data_.IsNull(); }
  const String& data() const {
    return data_;
  }
  inline void setData(const String&);
  inline void setDataToNull();

  bool hasDataTransfer() const { return has_data_transfer_; }
  DataTransfer* dataTransfer() const {
    return data_transfer_;
  }
  inline void setDataTransfer(DataTransfer*);
  inline void setDataTransferToNull();

  bool hasInputType() const { return !input_type_.IsNull(); }
  const String& inputType() const {
    return input_type_;
  }
  inline void setInputType(const String&);

  bool hasIsComposing() const { return has_is_composing_; }
  bool isComposing() const {
    DCHECK(has_is_composing_);
    return is_composing_;
  }
  inline void setIsComposing(bool);

  bool hasTargetRanges() const { return has_target_ranges_; }
  const HeapVector<Member<StaticRange>>& targetRanges() const {
    DCHECK(has_target_ranges_);
    return target_ranges_;
  }
  void setTargetRanges(const HeapVector<Member<StaticRange>>&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_data_transfer_ = false;
  bool has_is_composing_ = false;
  bool has_target_ranges_ = false;

  String data_;
  Member<DataTransfer> data_transfer_;
  String input_type_;
  bool is_composing_;
  HeapVector<Member<StaticRange>> target_ranges_;

  friend class V8InputEventInit;
};

void InputEventInit::setData(const String& value) {
  data_ = value;
}

void InputEventInit::setDataToNull() {
  data_ = String();
}

void InputEventInit::setDataTransfer(DataTransfer* value) {
  data_transfer_ = value;
  has_data_transfer_ = true;
}

void InputEventInit::setDataTransferToNull() {
  data_transfer_ = Member<DataTransfer>();
  has_data_transfer_ = true;
}

void InputEventInit::setInputType(const String& value) {
  input_type_ = value;
}

void InputEventInit::setIsComposing(bool value) {
  is_composing_ = value;
  has_is_composing_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_EVENTS_INPUT_EVENT_INIT_H_
