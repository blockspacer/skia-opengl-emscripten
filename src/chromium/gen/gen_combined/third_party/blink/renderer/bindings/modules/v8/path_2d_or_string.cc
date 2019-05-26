// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/path_2d_or_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_path_2d.h"

namespace blink {

Path2DOrString::Path2DOrString() : type_(SpecificType::kNone) {}

Path2D* Path2DOrString::GetAsPath2D() const {
  DCHECK(IsPath2D());
  return path_2d_;
}

void Path2DOrString::SetPath2D(Path2D* value) {
  DCHECK(IsNull());
  path_2d_ = value;
  type_ = SpecificType::kPath2D;
}

Path2DOrString Path2DOrString::FromPath2D(Path2D* value) {
  Path2DOrString container;
  container.SetPath2D(value);
  return container;
}

const String& Path2DOrString::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void Path2DOrString::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

Path2DOrString Path2DOrString::FromString(const String& value) {
  Path2DOrString container;
  container.SetString(value);
  return container;
}

Path2DOrString::Path2DOrString(const Path2DOrString&) = default;
Path2DOrString::~Path2DOrString() = default;
Path2DOrString& Path2DOrString::operator=(const Path2DOrString&) = default;

void Path2DOrString::Trace(blink::Visitor* visitor) {
  visitor->Trace(path_2d_);
}

void V8Path2DOrString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    Path2DOrString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8Path2D::HasInstance(v8_value, isolate)) {
    Path2D* cpp_value = V8Path2D::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetPath2D(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = v8_value;
    if (!cpp_value.Prepare(exception_state))
      return;
    impl.SetString(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const Path2DOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case Path2DOrString::SpecificType::kNone:
      return v8::Null(isolate);
    case Path2DOrString::SpecificType::kPath2D:
      return ToV8(impl.GetAsPath2D(), creationContext, isolate);
    case Path2DOrString::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

Path2DOrString NativeValueTraits<Path2DOrString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Path2DOrString impl;
  V8Path2DOrString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
