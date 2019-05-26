// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_message_event_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_message_port.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_client.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_extendable_event_init.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_service_worker.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ExtendableMessageEventInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "data",
    "lastEventId",
    "origin",
    "ports",
    "source",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ExtendableMessageEventInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ExtendableMessageEventInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  V8ExtendableEventInit::ToImpl(isolate, v8_value, impl, exception_state);
  if (exception_state.HadException())
    return;

  const v8::Eternal<v8::Name>* keys = eternalV8ExtendableMessageEventInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> data_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (data_value.IsEmpty() || data_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue data_cpp_value = ScriptValue(ScriptState::Current(isolate), data_value);
    impl->setData(data_cpp_value);
  }

  v8::Local<v8::Value> last_event_id_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&last_event_id_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (last_event_id_value.IsEmpty() || last_event_id_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> last_event_id_cpp_value = last_event_id_value;
    if (!last_event_id_cpp_value.Prepare(exception_state))
      return;
    impl->setLastEventId(last_event_id_cpp_value);
  }

  v8::Local<v8::Value> origin_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&origin_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (origin_value.IsEmpty() || origin_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> origin_cpp_value = origin_value;
    if (!origin_cpp_value.Prepare(exception_state))
      return;
    impl->setOrigin(origin_cpp_value);
  }

  v8::Local<v8::Value> ports_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&ports_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (ports_value.IsEmpty() || ports_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<MessagePort>> ports_cpp_value = NativeValueTraits<IDLSequence<MessagePort>>::NativeValue(isolate, ports_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setPorts(ports_cpp_value);
  }

  v8::Local<v8::Value> source_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&source_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (source_value.IsEmpty() || source_value->IsUndefined()) {
    // Do nothing.
  } else if (source_value->IsNull()) {
    impl->setSourceToNull();
  } else {
    ClientOrServiceWorkerOrMessagePort source_cpp_value;
    V8ClientOrServiceWorkerOrMessagePort::ToImpl(isolate, source_value, source_cpp_value, UnionTypeConversionMode::kNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSource(source_cpp_value);
  }
}

v8::Local<v8::Value> ExtendableMessageEventInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ExtendableMessageEventInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ExtendableMessageEventInit(const ExtendableMessageEventInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  if (!toV8ExtendableEventInit(impl, dictionary, creationContext, isolate))
    return false;

  const v8::Eternal<v8::Name>* keys = eternalV8ExtendableMessageEventInitKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> data_value;
  bool data_has_value_or_default = false;
  if (impl->hasData()) {
    data_value = impl->data().V8Value();
    data_has_value_or_default = true;
  }
  if (data_has_value_or_default &&
      !create_property(0, data_value)) {
    return false;
  }

  v8::Local<v8::Value> last_event_id_value;
  bool last_event_id_has_value_or_default = false;
  if (impl->hasLastEventId()) {
    last_event_id_value = V8String(isolate, impl->lastEventId());
    last_event_id_has_value_or_default = true;
  }
  if (last_event_id_has_value_or_default &&
      !create_property(1, last_event_id_value)) {
    return false;
  }

  v8::Local<v8::Value> origin_value;
  bool origin_has_value_or_default = false;
  if (impl->hasOrigin()) {
    origin_value = V8String(isolate, impl->origin());
    origin_has_value_or_default = true;
  }
  if (origin_has_value_or_default &&
      !create_property(2, origin_value)) {
    return false;
  }

  v8::Local<v8::Value> ports_value;
  bool ports_has_value_or_default = false;
  if (impl->hasPorts()) {
    ports_value = ToV8(impl->ports(), creationContext, isolate);
    ports_has_value_or_default = true;
  }
  if (ports_has_value_or_default &&
      !create_property(3, ports_value)) {
    return false;
  }

  v8::Local<v8::Value> source_value;
  bool source_has_value_or_default = false;
  if (impl->hasSource()) {
    source_value = ToV8(impl->source(), creationContext, isolate);
    source_has_value_or_default = true;
  } else {
    source_value = v8::Null(isolate);
    source_has_value_or_default = true;
  }
  if (source_has_value_or_default &&
      !create_property(4, source_value)) {
    return false;
  }

  return true;
}

ExtendableMessageEventInit* NativeValueTraits<ExtendableMessageEventInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ExtendableMessageEventInit* impl = ExtendableMessageEventInit::Create();
  V8ExtendableMessageEventInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
