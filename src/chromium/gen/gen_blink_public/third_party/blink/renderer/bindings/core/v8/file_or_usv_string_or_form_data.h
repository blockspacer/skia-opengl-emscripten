// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_FILE_OR_USV_STRING_OR_FORM_DATA_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_FILE_OR_USV_STRING_OR_FORM_DATA_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class File;
class FormData;

class CORE_EXPORT FileOrUSVStringOrFormData final {
  DISALLOW_NEW();
 public:
  FileOrUSVStringOrFormData();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsFile() const { return type_ == SpecificType::kFile; }
  File* GetAsFile() const;
  void SetFile(File*);
  static FileOrUSVStringOrFormData FromFile(File*);

  bool IsFormData() const { return type_ == SpecificType::kFormData; }
  FormData* GetAsFormData() const;
  void SetFormData(FormData*);
  static FileOrUSVStringOrFormData FromFormData(FormData*);

  bool IsUSVString() const { return type_ == SpecificType::kUSVString; }
  const String& GetAsUSVString() const;
  void SetUSVString(const String&);
  static FileOrUSVStringOrFormData FromUSVString(const String&);

  FileOrUSVStringOrFormData(const FileOrUSVStringOrFormData&);
  ~FileOrUSVStringOrFormData();
  FileOrUSVStringOrFormData& operator=(const FileOrUSVStringOrFormData&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kFile,
    kFormData,
    kUSVString,
  };
  SpecificType type_;

  Member<File> file_;
  Member<FormData> form_data_;
  String usv_string_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const FileOrUSVStringOrFormData&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8FileOrUSVStringOrFormData final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, FileOrUSVStringOrFormData&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const FileOrUSVStringOrFormData&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, FileOrUSVStringOrFormData& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, FileOrUSVStringOrFormData& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<FileOrUSVStringOrFormData> : public NativeValueTraitsBase<FileOrUSVStringOrFormData> {
  CORE_EXPORT static FileOrUSVStringOrFormData NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static FileOrUSVStringOrFormData NullValue() { return FileOrUSVStringOrFormData(); }
};

template <>
struct V8TypeOf<FileOrUSVStringOrFormData> {
  typedef V8FileOrUSVStringOrFormData Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::FileOrUSVStringOrFormData)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_FILE_OR_USV_STRING_OR_FORM_DATA_H_
