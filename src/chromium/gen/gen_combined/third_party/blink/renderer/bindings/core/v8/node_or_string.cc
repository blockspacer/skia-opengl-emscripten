// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/node_or_string.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/to_v8_for_core.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"

namespace blink {

NodeOrString::NodeOrString() : type_(SpecificType::kNone) {}

Node* NodeOrString::GetAsNode() const {
  DCHECK(IsNode());
  return node_;
}

void NodeOrString::SetNode(Node* value) {
  DCHECK(IsNull());
  node_ = value;
  type_ = SpecificType::kNode;
}

NodeOrString NodeOrString::FromNode(Node* value) {
  NodeOrString container;
  container.SetNode(value);
  return container;
}

const String& NodeOrString::GetAsString() const {
  DCHECK(IsString());
  return string_;
}

void NodeOrString::SetString(const String& value) {
  DCHECK(IsNull());
  string_ = value;
  type_ = SpecificType::kString;
}

NodeOrString NodeOrString::FromString(const String& value) {
  NodeOrString container;
  container.SetString(value);
  return container;
}

NodeOrString::NodeOrString(const NodeOrString&) = default;
NodeOrString::~NodeOrString() = default;
NodeOrString& NodeOrString::operator=(const NodeOrString&) = default;

void NodeOrString::Trace(blink::Visitor* visitor) {
  visitor->Trace(node_);
}

void V8NodeOrString::ToImpl(
    v8::Isolate* isolate,
    v8::Local<v8::Value> v8_value,
    NodeOrString& impl,
    UnionTypeConversionMode conversion_mode,
    ExceptionState& exception_state) {
  if (v8_value.IsEmpty())
    return;

  if (conversion_mode == UnionTypeConversionMode::kNullable && IsUndefinedOrNull(v8_value))
    return;

  if (V8Node::HasInstance(v8_value, isolate)) {
    Node* cpp_value = V8Node::ToImpl(v8::Local<v8::Object>::Cast(v8_value));
    impl.SetNode(cpp_value);
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

v8::Local<v8::Value> ToV8(const NodeOrString& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  switch (impl.type_) {
    case NodeOrString::SpecificType::kNone:
      return v8::Null(isolate);
    case NodeOrString::SpecificType::kNode:
      return ToV8(impl.GetAsNode(), creationContext, isolate);
    case NodeOrString::SpecificType::kString:
      return V8String(isolate, impl.GetAsString());
    default:
      NOTREACHED();
  }
  return v8::Local<v8::Value>();
}

NodeOrString NativeValueTraits<NodeOrString>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  NodeOrString impl;
  V8NodeOrString::ToImpl(isolate, value, impl, UnionTypeConversionMode::kNotNullable, exception_state);
  return impl;
}

}  // namespace blink
