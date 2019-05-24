// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/file_or_usv_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"

namespace blink {

FileOrUSVString::FileOrUSVString() : type_(SpecificType::kNone) {}

File* FileOrUSVString::GetAsFile() const {
  DCHECK(IsFile());
  return file_;
}

void FileOrUSVString::SetFile(File* value) {
  DCHECK(IsNull());
  file_ = value;
  type_ = SpecificType::kFile;
}

FileOrUSVString FileOrUSVString::FromFile(File* value) {
  FileOrUSVString container;
  container.SetFile(value);
  return container;
}

const String& FileOrUSVString::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void FileOrUSVString::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

FileOrUSVString FileOrUSVString::FromUSVString(const String& value) {
  FileOrUSVString container;
  container.SetUSVString(value);
  return container;
}

FileOrUSVString::FileOrUSVString(const FileOrUSVString&) = default;
FileOrUSVString::~FileOrUSVString() = default;
FileOrUSVString& FileOrUSVString::operator=(const FileOrUSVString&) = default;

void FileOrUSVString::Trace(blink::Visitor* visitor) {
  visitor->Trace(file_);
}

void V8FileOrUSVString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    FileOrUSVString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8File::HasInstance(v8_value, isolate)) {
    File* cpp_value = V8File::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetFile(cpp_value);
    return;
  }

  {
    V8StringResource<> cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, v8_value, exception_state);
    if (exception_state.HadException())
      return;
    impl.SetUSVString(cpp_value);
    return;
  }
}

v8::Local<v8::Value> ToV8(const FileOrUSVString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case FileOrUSVString::SpecificType::kNone:
      return v8::Null(isolate);
    case FileOrUSVString::SpecificType::kFile:
      return ToV8(impl.GetAsFile(), creationContext, isolate);
    case FileOrUSVString::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

FileOrUSVString NativeValueTraits<FileOrUSVString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FileOrUSVString impl;
  V8FileOrUSVString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
