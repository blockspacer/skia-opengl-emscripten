// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_STREAM_WRITE_PARAMETERS_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_STREAM_WRITE_PARAMETERS_H_

#include "third_party/blink/renderer/bindings/core/v8/idl_dictionary_base.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/dom_typed_array.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class MODULES_EXPORT RTCQuicStreamWriteParameters : public IDLDictionaryBase {
 public:
  static RTCQuicStreamWriteParameters* Create() { return MakeGarbageCollected<RTCQuicStreamWriteParameters>(); }

  RTCQuicStreamWriteParameters();
  virtual ~RTCQuicStreamWriteParameters();

  bool hasData() const { return data_; }
  NotShared<DOMUint8Array> data() const {
    return data_;
  }
  inline void setData(NotShared<DOMUint8Array>);

  bool hasFinish() const { return has_finish_; }
  bool finish() const {
    DCHECK(has_finish_);
    return finish_;
  }
  inline void setFinish(bool);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_finish_ = false;

  Member<DOMUint8Array> data_;
  bool finish_;

  friend class V8RTCQuicStreamWriteParameters;
};

void RTCQuicStreamWriteParameters::setData(NotShared<DOMUint8Array> value) {
  data_ = value.View();
}

void RTCQuicStreamWriteParameters::setFinish(bool value) {
  finish_ = value;
  has_finish_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_PEERCONNECTION_RTC_QUIC_STREAM_WRITE_PARAMETERS_H_
