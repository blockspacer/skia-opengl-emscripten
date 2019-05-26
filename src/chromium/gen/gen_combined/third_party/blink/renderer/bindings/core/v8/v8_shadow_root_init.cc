// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8ShadowRootInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "delegatesFocus",
    "mode",
    "slotting",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8ShadowRootInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, ShadowRootInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    exception_state.ThrowTypeError("Missing required member(s): mode.");
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8ShadowRootInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> delegates_focus_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&delegates_focus_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (delegates_focus_value.IsEmpty() || delegates_focus_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool delegates_focus_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, delegates_focus_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setDelegatesFocus(delegates_focus_cpp_value);
  }

  v8::Local<v8::Value> mode_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&mode_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (mode_value.IsEmpty() || mode_value->IsUndefined()) {
    exception_state.ThrowTypeError("required member mode is undefined.");
    return;
  } else {
    V8StringResource<> mode_cpp_value = mode_value;
    if (!mode_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "open",
        "closed",
    };
    if (!IsValidEnum(mode_cpp_value, kValidValues, base::size(kValidValues), "ShadowRootMode", exception_state))
      return;
    impl->setMode(mode_cpp_value);
  }

  if (RuntimeEnabledFeatures::ManualSlottingEnabled()) {
    v8::Local<v8::Value> slotting_value;
    if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&slotting_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (slotting_value.IsEmpty() || slotting_value->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> slotting_cpp_value = slotting_value;
      if (!slotting_cpp_value.Prepare(exception_state))
        return;
      const char* kValidValues[] = {
          "manual",
          "auto",
      };
      if (!IsValidEnum(slotting_cpp_value, kValidValues, base::size(kValidValues), "ShadowRootSlottingMode", exception_state))
        return;
      impl->setSlotting(slotting_cpp_value);
    }
  }
}

v8::Local<v8::Value> ShadowRootInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8ShadowRootInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8ShadowRootInit(const ShadowRootInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8ShadowRootInitKeys(isolate);
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

  v8::Local<v8::Value> delegates_focus_value;
  bool delegates_focus_has_value_or_default = false;
  if (impl->hasDelegatesFocus()) {
    delegates_focus_value = v8::Boolean::New(isolate, impl->delegatesFocus());
    delegates_focus_has_value_or_default = true;
  }
  if (delegates_focus_has_value_or_default &&
      !create_property(0, delegates_focus_value)) {
    return false;
  }

  v8::Local<v8::Value> mode_value;
  bool mode_has_value_or_default = false;
  if (impl->hasMode()) {
    mode_value = V8String(isolate, impl->mode());
    mode_has_value_or_default = true;
  } else {
    NOTREACHED();
  }
  if (mode_has_value_or_default &&
      !create_property(1, mode_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::ManualSlottingEnabled()) {
    v8::Local<v8::Value> slotting_value;
    bool slotting_has_value_or_default = false;
    if (impl->hasSlotting()) {
      slotting_value = V8String(isolate, impl->slotting());
      slotting_has_value_or_default = true;
    }
    if (slotting_has_value_or_default &&
        !create_property(2, slotting_value)) {
      return false;
    }
  }

  return true;
}

ShadowRootInit* NativeValueTraits<ShadowRootInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  ShadowRootInit* impl = ShadowRootInit::Create();
  V8ShadowRootInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
