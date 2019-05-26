// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIARECORDER_BLOB_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIARECORDER_BLOB_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class Blob;

class MODULES_EXPORT BlobEventInit : public EventInit {
 public:
  static BlobEventInit* Create() { return MakeGarbageCollected<BlobEventInit>(); }

  BlobEventInit();
  virtual ~BlobEventInit();

  bool hasData() const { return data_; }
  Blob* data() const {
    return data_;
  }
  inline void setData(Blob*);

  bool hasTimecode() const { return has_timecode_; }
  double timecode() const {
    DCHECK(has_timecode_);
    return timecode_;
  }
  inline void setTimecode(double);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_timecode_ = false;

  Member<Blob> data_;
  double timecode_;

  friend class V8BlobEventInit;
};

void BlobEventInit::setData(Blob* value) {
  data_ = value;
}

void BlobEventInit::setTimecode(double value) {
  timecode_ = value;
  has_timecode_ = true;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_MEDIARECORDER_BLOB_EVENT_INIT_H_
