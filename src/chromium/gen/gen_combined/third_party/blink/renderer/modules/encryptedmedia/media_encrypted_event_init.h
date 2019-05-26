// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_ENCRYPTED_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_ENCRYPTED_EVENT_INIT_H_

#include "third_party/blink/renderer/core/dom/events/event_init.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class DOMArrayBuffer;

class MODULES_EXPORT MediaEncryptedEventInit : public EventInit {
 public:
  static MediaEncryptedEventInit* Create() { return MakeGarbageCollected<MediaEncryptedEventInit>(); }

  MediaEncryptedEventInit();
  virtual ~MediaEncryptedEventInit();

  bool hasInitData() const { return has_init_data_; }
  DOMArrayBuffer* initData() const {
    return init_data_;
  }
  inline void setInitData(DOMArrayBuffer*);
  inline void setInitDataToNull();

  bool hasInitDataType() const { return !init_data_type_.IsNull(); }
  const String& initDataType() const {
    return init_data_type_;
  }
  inline void setInitDataType(const String&);

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_init_data_ = false;

  Member<DOMArrayBuffer> init_data_;
  String init_data_type_;

  friend class V8MediaEncryptedEventInit;
};

void MediaEncryptedEventInit::setInitData(DOMArrayBuffer* value) {
  init_data_ = value;
  has_init_data_ = true;
}

void MediaEncryptedEventInit::setInitDataToNull() {
  init_data_ = Member<DOMArrayBuffer>();
  has_init_data_ = true;
}

void MediaEncryptedEventInit::setInitDataType(const String& value) {
  init_data_type_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_ENCRYPTEDMEDIA_MEDIA_ENCRYPTED_EVENT_INIT_H_
