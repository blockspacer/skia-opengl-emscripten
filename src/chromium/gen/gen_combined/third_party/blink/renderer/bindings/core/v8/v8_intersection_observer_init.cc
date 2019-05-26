// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_intersection_observer_init.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8IntersectionObserverInitKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "delay",
    "root",
    "rootMargin",
    "threshold",
    "trackVisibility",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8IntersectionObserverInit::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, IntersectionObserverInit* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8IntersectionObserverInitKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> root_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&root_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (root_value.IsEmpty() || root_value->IsUndefined()) {
    // Do nothing.
  } else if (root_value->IsNull()) {
    impl->setRootToNull();
  } else {
    Element* root_cpp_value = V8Element::ToImplWithTypeCheck(isolate, root_value);
    if (!root_cpp_value) {
      exception_state.ThrowTypeError("member root is not of type Element.");
      return;
    }
    impl->setRoot(root_cpp_value);
  }

  v8::Local<v8::Value> root_margin_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&root_margin_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (root_margin_value.IsEmpty() || root_margin_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> root_margin_cpp_value = root_margin_value;
    if (!root_margin_cpp_value.Prepare(exception_state))
      return;
    impl->setRootMargin(root_margin_cpp_value);
  }

  v8::Local<v8::Value> threshold_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&threshold_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (threshold_value.IsEmpty() || threshold_value->IsUndefined()) {
    // Do nothing.
  } else {
    DoubleOrDoubleSequence threshold_cpp_value;
    V8DoubleOrDoubleSequence::ToImpl(isolate, threshold_value, threshold_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setThreshold(threshold_cpp_value);
  }

  if (RuntimeEnabledFeatures::IntersectionObserverV2Enabled()) {
    v8::Local<v8::Value> delay_value;
    if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&delay_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (delay_value.IsEmpty() || delay_value->IsUndefined()) {
      // Do nothing.
    } else {
      double delay_cpp_value = NativeValueTraits<IDLDouble>::NativeValue(isolate, delay_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setDelay(delay_cpp_value);
    }

    v8::Local<v8::Value> track_visibility_value;
    if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&track_visibility_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (track_visibility_value.IsEmpty() || track_visibility_value->IsUndefined()) {
      // Do nothing.
    } else {
      bool track_visibility_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, track_visibility_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setTrackVisibility(track_visibility_cpp_value);
    }
  }
}

v8::Local<v8::Value> IntersectionObserverInit::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8IntersectionObserverInit(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8IntersectionObserverInit(const IntersectionObserverInit* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8IntersectionObserverInitKeys(isolate);
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

  v8::Local<v8::Value> root_value;
  bool root_has_value_or_default = false;
  if (impl->hasRoot()) {
    root_value = ToV8(impl->root(), creationContext, isolate);
    root_has_value_or_default = true;
  } else {
    root_value = v8::Null(isolate);
    root_has_value_or_default = true;
  }
  if (root_has_value_or_default &&
      !create_property(1, root_value)) {
    return false;
  }

  v8::Local<v8::Value> root_margin_value;
  bool root_margin_has_value_or_default = false;
  if (impl->hasRootMargin()) {
    root_margin_value = V8String(isolate, impl->rootMargin());
    root_margin_has_value_or_default = true;
  } else {
    root_margin_value = V8String(isolate, "0px");
    root_margin_has_value_or_default = true;
  }
  if (root_margin_has_value_or_default &&
      !create_property(2, root_margin_value)) {
    return false;
  }

  v8::Local<v8::Value> threshold_value;
  bool threshold_has_value_or_default = false;
  if (impl->hasThreshold()) {
    threshold_value = ToV8(impl->threshold(), creationContext, isolate);
    threshold_has_value_or_default = true;
  } else {
    threshold_value = ToV8(DoubleOrDoubleSequence::FromDouble(0), creationContext, isolate);
    threshold_has_value_or_default = true;
  }
  if (threshold_has_value_or_default &&
      !create_property(3, threshold_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::IntersectionObserverV2Enabled()) {
    v8::Local<v8::Value> delay_value;
    bool delay_has_value_or_default = false;
    if (impl->hasDelay()) {
      delay_value = v8::Number::New(isolate, impl->delay());
      delay_has_value_or_default = true;
    } else {
      delay_value = v8::Number::New(isolate, 0);
      delay_has_value_or_default = true;
    }
    if (delay_has_value_or_default &&
        !create_property(0, delay_value)) {
      return false;
    }

    v8::Local<v8::Value> track_visibility_value;
    bool track_visibility_has_value_or_default = false;
    if (impl->hasTrackVisibility()) {
      track_visibility_value = v8::Boolean::New(isolate, impl->trackVisibility());
      track_visibility_has_value_or_default = true;
    } else {
      track_visibility_value = v8::Boolean::New(isolate, false);
      track_visibility_has_value_or_default = true;
    }
    if (track_visibility_has_value_or_default &&
        !create_property(4, track_visibility_value)) {
      return false;
    }
  }

  return true;
}

IntersectionObserverInit* NativeValueTraits<IntersectionObserverInit>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  IntersectionObserverInit* impl = IntersectionObserverInit::Create();
  V8IntersectionObserverInit::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
