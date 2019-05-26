// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_impl.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_MODULES_SERVICE_WORKER_EXTENDABLE_MESSAGE_EVENT_INIT_H_
#define THIRD_PARTY_BLINK_RENDERER_MODULES_SERVICE_WORKER_EXTENDABLE_MESSAGE_EVENT_INIT_H_

#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/client_or_service_worker_or_message_port.h"
#include "third_party/blink/renderer/core/messaging/message_port.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/modules/service_worker/extendable_event_init.h"
#include "third_party/blink/renderer/modules/service_worker/service_worker.h"
#include "third_party/blink/renderer/modules/service_worker/service_worker_client.h"
#include "third_party/blink/renderer/platform/heap/handle.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

namespace blink {

class MessagePort;

class MODULES_EXPORT ExtendableMessageEventInit : public ExtendableEventInit {
 public:
  static ExtendableMessageEventInit* Create() { return MakeGarbageCollected<ExtendableMessageEventInit>(); }

  ExtendableMessageEventInit();
  virtual ~ExtendableMessageEventInit();

  bool hasData() const { return !(data_.IsEmpty() || data_.IsUndefined()); }
  ScriptValue data() const {
    return data_;
  }
  void setData(ScriptValue);

  bool hasLastEventId() const { return !last_event_id_.IsNull(); }
  const String& lastEventId() const {
    return last_event_id_;
  }
  inline void setLastEventId(const String&);

  bool hasOrigin() const { return !origin_.IsNull(); }
  const String& origin() const {
    return origin_;
  }
  inline void setOrigin(const String&);

  bool hasPorts() const { return has_ports_; }
  const HeapVector<Member<MessagePort>>& ports() const {
    DCHECK(has_ports_);
    return ports_;
  }
  void setPorts(const HeapVector<Member<MessagePort>>&);

  bool hasSource() const { return !source_.IsNull(); }
  const ClientOrServiceWorkerOrMessagePort& source() const {
    return source_;
  }
  void setSource(const ClientOrServiceWorkerOrMessagePort&);
  void setSourceToNull();

  v8::Local<v8::Value> ToV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
  void Trace(blink::Visitor*) override;

 private:
  bool has_ports_ = false;

  ScriptValue data_;
  String last_event_id_;
  String origin_;
  HeapVector<Member<MessagePort>> ports_;
  ClientOrServiceWorkerOrMessagePort source_;

  friend class V8ExtendableMessageEventInit;
};

void ExtendableMessageEventInit::setLastEventId(const String& value) {
  last_event_id_ = value;
}

void ExtendableMessageEventInit::setOrigin(const String& value) {
  origin_ = value;
}

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_MODULES_SERVICE_WORKER_EXTENDABLE_MESSAGE_EVENT_INIT_H_
