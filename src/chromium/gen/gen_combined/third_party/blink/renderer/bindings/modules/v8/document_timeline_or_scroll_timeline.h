// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOCUMENT_TIMELINE_OR_SCROLL_TIMELINE_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOCUMENT_TIMELINE_OR_SCROLL_TIMELINE_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/modules/modules_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class DocumentTimeline;
class ScrollTimeline;

class MODULES_EXPORT DocumentTimelineOrScrollTimeline final {
  DISALLOW_NEW();
 public:
  DocumentTimelineOrScrollTimeline();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsDocumentTimeline() const { return type_ == SpecificType::kDocumentTimeline; }
  DocumentTimeline* GetAsDocumentTimeline() const;
  void SetDocumentTimeline(DocumentTimeline*);
  static DocumentTimelineOrScrollTimeline FromDocumentTimeline(DocumentTimeline*);

  bool IsScrollTimeline() const { return type_ == SpecificType::kScrollTimeline; }
  ScrollTimeline* GetAsScrollTimeline() const;
  void SetScrollTimeline(ScrollTimeline*);
  static DocumentTimelineOrScrollTimeline FromScrollTimeline(ScrollTimeline*);

  DocumentTimelineOrScrollTimeline(const DocumentTimelineOrScrollTimeline&);
  ~DocumentTimelineOrScrollTimeline();
  DocumentTimelineOrScrollTimeline& operator=(const DocumentTimelineOrScrollTimeline&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kDocumentTimeline,
    kScrollTimeline,
  };
  SpecificType type_;

  Member<DocumentTimeline> document_timeline_;
  Member<ScrollTimeline> scroll_timeline_;

  friend MODULES_EXPORT v8::Local<v8::Value> ToV8(const DocumentTimelineOrScrollTimeline&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8DocumentTimelineOrScrollTimeline final {
 public:
  MODULES_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, DocumentTimelineOrScrollTimeline&, UnionTypeConversionMode, ExceptionState&);
};

MODULES_EXPORT v8::Local<v8::Value> ToV8(const DocumentTimelineOrScrollTimeline&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DocumentTimelineOrScrollTimeline& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, DocumentTimelineOrScrollTimeline& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<DocumentTimelineOrScrollTimeline> : public NativeValueTraitsBase<DocumentTimelineOrScrollTimeline> {
  MODULES_EXPORT static DocumentTimelineOrScrollTimeline NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  MODULES_EXPORT static DocumentTimelineOrScrollTimeline NullValue() { return DocumentTimelineOrScrollTimeline(); }
};

template <>
struct V8TypeOf<DocumentTimelineOrScrollTimeline> {
  typedef V8DocumentTimelineOrScrollTimeline Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::DocumentTimelineOrScrollTimeline)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_MODULES_V8_DOCUMENT_TIMELINE_OR_SCROLL_TIMELINE_H_
