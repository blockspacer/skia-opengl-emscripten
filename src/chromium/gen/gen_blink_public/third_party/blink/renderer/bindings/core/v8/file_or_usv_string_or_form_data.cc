// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/file_or_usv_string_or_form_data.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_file.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_form_data.h"

namespace blink {

FileOrUSVStringOrFormData::FileOrUSVStringOrFormData() : type_(SpecificType::kNone) {}

File* FileOrUSVStringOrFormData::GetAsFile() const {
  DCHECK(IsFile());
  return file_;
}

void FileOrUSVStringOrFormData::SetFile(File* value) {
  DCHECK(IsNull());
  file_ = value;
  type_ = SpecificType::kFile;
}

FileOrUSVStringOrFormData FileOrUSVStringOrFormData::FromFile(File* value) {
  FileOrUSVStringOrFormData container;
  container.SetFile(value);
  return container;
}

FormData* FileOrUSVStringOrFormData::GetAsFormData() const {
  DCHECK(IsFormData());
  return form_data_;
}

void FileOrUSVStringOrFormData::SetFormData(FormData* value) {
  DCHECK(IsNull());
  form_data_ = value;
  type_ = SpecificType::kFormData;
}

FileOrUSVStringOrFormData FileOrUSVStringOrFormData::FromFormData(FormData* value) {
  FileOrUSVStringOrFormData container;
  container.SetFormData(value);
  return container;
}

const String& FileOrUSVStringOrFormData::GetAsUSVString() const {
  DCHECK(IsUSVString());
  return usv_string_;
}

void FileOrUSVStringOrFormData::SetUSVString(const String& value) {
  DCHECK(IsNull());
  usv_string_ = value;
  type_ = SpecificType::kUSVString;
}

FileOrUSVStringOrFormData FileOrUSVStringOrFormData::FromUSVString(const String& value) {
  FileOrUSVStringOrFormData container;
  container.SetUSVString(value);
  return container;
}

FileOrUSVStringOrFormData::FileOrUSVStringOrFormData(const FileOrUSVStringOrFormData&) = default;
FileOrUSVStringOrFormData::~FileOrUSVStringOrFormData() = default;
FileOrUSVStringOrFormData& FileOrUSVStringOrFormData::operator=(const FileOrUSVStringOrFormData&) = default;

void FileOrUSVStringOrFormData::Trace(blink::Visitor* visitor) {
  visitor->Trace(file_);
  visitor->Trace(form_data_);
}

void V8FileOrUSVStringOrFormData::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    FileOrUSVStringOrFormData& impl,
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

  if (V8FormData::HasInstance(v8_value, isolate)) {
    FormData* cpp_value = V8FormData::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetFormData(cpp_value);
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

v8::Local<v8::Value> ToV8(const FileOrUSVStringOrFormData& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case FileOrUSVStringOrFormData::SpecificType::kNone:
      return v8::Null(isolate);
    case FileOrUSVStringOrFormData::SpecificType::kFile:
      return ToV8(impl.GetAsFile(), creationContext, isolate);
    case FileOrUSVStringOrFormData::SpecificType::kFormData:
      return ToV8(impl.GetAsFormData(), creationContext, isolate);
    case FileOrUSVStringOrFormData::SpecificType::kUSVString:
      return V8String(isolate, impl.GetAsUSVString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

FileOrUSVStringOrFormData NativeValueTraits<FileOrUSVStringOrFormData>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  FileOrUSVStringOrFormData impl;
  V8FileOrUSVStringOrFormData::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
