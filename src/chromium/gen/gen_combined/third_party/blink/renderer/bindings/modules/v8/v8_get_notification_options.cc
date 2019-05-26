// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_get_notification_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8GetNotificationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "includeTriggered",
    "tag",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8GetNotificationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, GetNotificationOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8GetNotificationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> tag_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&tag_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tag_value.IsEmpty() || tag_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> tag_cpp_value = tag_value;
    if (!tag_cpp_value.Prepare(exception_state))
      return;
    impl->setTag(tag_cpp_value);
  }

  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    v8::Local<v8::Value> include_triggered_value;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&include_triggered_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (include_triggered_value.IsEmpty() || include_triggered_value->IsUndefined()) {
      // Do nothing.
    } else {
      bool include_triggered_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, include_triggered_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setIncludeTriggered(include_triggered_cpp_value);
    }
  }
}

v8::Local<v8::Value> GetNotificationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8GetNotificationOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8GetNotificationOptions(const GetNotificationOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8GetNotificationOptionsKeys(isolate);
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

  v8::Local<v8::Value> tag_value;
  bool tag_has_value_or_default = false;
  if (impl->hasTag()) {
    tag_value = V8String(isolate, impl->tag());
    tag_has_value_or_default = true;
  } else {
    tag_value = V8String(isolate, WTF::g_empty_string);
    tag_has_value_or_default = true;
  }
  if (tag_has_value_or_default &&
      !create_property(1, tag_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    v8::Local<v8::Value> include_triggered_value;
    bool include_triggered_has_value_or_default = false;
    if (impl->hasIncludeTriggered()) {
      include_triggered_value = v8::Boolean::New(isolate, impl->includeTriggered());
      include_triggered_has_value_or_default = true;
    } else {
      include_triggered_value = v8::Boolean::New(isolate, false);
      include_triggered_has_value_or_default = true;
    }
    if (include_triggered_has_value_or_default &&
        !create_property(0, include_triggered_value)) {
      return false;
    }
  }

  return true;
}

GetNotificationOptions* NativeValueTraits<GetNotificationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  GetNotificationOptions* impl = GetNotificationOptions::Create();
  V8GetNotificationOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
