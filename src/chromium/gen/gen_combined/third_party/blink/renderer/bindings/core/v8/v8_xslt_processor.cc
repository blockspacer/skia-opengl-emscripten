// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_xslt_processor.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document_fragment.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/core/dom/document.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/local_dom_window.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/html/custom/v0_custom_element_processing_stack.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_xslt_processor_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8XSLTProcessor::DomTemplate,
    nullptr,
    "XSLTProcessor",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XSLTProcessor.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& XSLTProcessor::wrapper_type_info_ = v8_xslt_processor_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, XSLTProcessor>::value,
    "XSLTProcessor inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&XSLTProcessor::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "XSLTProcessor is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace xslt_processor_v8_internal {

static void ImportStylesheetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("importStylesheet", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* style;
  style = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!style) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("importStylesheet", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
    return;
  }

  impl->importStylesheet(style);
}

static void TransformToFragmentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToFragment", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Node* source;
  Document* output;
  source = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!source) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToFragment", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
    return;
  }

  output = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!output) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToFragment", "XSLTProcessor", "parameter 2 is not of type 'Document'."));
    return;
  }

  V8SetReturnValue(info, impl->transformToFragment(source, output));
}

static void TransformToDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  V0CustomElementProcessingStack::CallbackDeliveryScope delivery_scope;

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToDocument", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* source;
  source = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!source) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("transformToDocument", "XSLTProcessor", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->transformToDocument(source));
}

static void SetParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setParameter", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(3, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> local_name;
  V8StringResource<> value;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  local_name = info[1];
  if (!local_name.Prepare())
    return;

  value = info[2];
  if (!value.Prepare())
    return;

  impl->setParameter(namespace_uri, local_name, value);
}

static void GetParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getParameter", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> local_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  local_name = info[1];
  if (!local_name.Prepare())
    return;

  V8SetReturnValueStringOrNull(info, impl->getParameter(namespace_uri, local_name), info.GetIsolate());
}

static void RemoveParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeParameter", "XSLTProcessor", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<kTreatNullAndUndefinedAsNullString> namespace_uri;
  V8StringResource<> local_name;
  namespace_uri = info[0];
  if (!namespace_uri.Prepare())
    return;

  local_name = info[1];
  if (!local_name.Prepare())
    return;

  impl->removeParameter(namespace_uri, local_name);
}

static void ClearParametersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  impl->clearParameters();
}

static void ResetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  XSLTProcessor* impl = V8XSLTProcessor::ToImpl(info.Holder());

  impl->reset();
}

static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_ConstructorCallback");

  Document& document = *To<Document>(ToExecutionContext(
      info.NewTarget().As<v8::Object>()->CreationContext()));
  XSLTProcessor* impl = XSLTProcessor::Create(document);
  v8::Local<v8::Object> wrapper = info.Holder();
  wrapper = impl->AssociateWithWrapper(info.GetIsolate(), V8XSLTProcessor::GetWrapperTypeInfo(), wrapper);
  V8SetReturnValue(info, wrapper);
}

CORE_EXPORT void ConstructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_Constructor");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kXSLTProcessor);
  if (!info.IsConstructCall()) {
    V8ThrowException::ThrowTypeError(
        info.GetIsolate(),
        ExceptionMessages::ConstructorNotCallableAsFunction("XSLTProcessor"));
    return;
  }

  if (ConstructorMode::Current(info.GetIsolate()) == ConstructorMode::kWrapExistingObject) {
    V8SetReturnValue(info, info.Holder());
    return;
  }

  xslt_processor_v8_internal::Constructor(info);
}

}  // namespace xslt_processor_v8_internal

void V8XSLTProcessor::ImportStylesheetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_importStylesheet");

  xslt_processor_v8_internal::ImportStylesheetMethod(info);
}

void V8XSLTProcessor::TransformToFragmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_transformToFragment");

  xslt_processor_v8_internal::TransformToFragmentMethod(info);
}

void V8XSLTProcessor::TransformToDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_transformToDocument");

  xslt_processor_v8_internal::TransformToDocumentMethod(info);
}

void V8XSLTProcessor::SetParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_setParameter");

  xslt_processor_v8_internal::SetParameterMethod(info);
}

void V8XSLTProcessor::GetParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_getParameter");

  xslt_processor_v8_internal::GetParameterMethod(info);
}

void V8XSLTProcessor::RemoveParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_removeParameter");

  xslt_processor_v8_internal::RemoveParameterMethod(info);
}

void V8XSLTProcessor::ClearParametersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_clearParameters");

  xslt_processor_v8_internal::ClearParametersMethod(info);
}

void V8XSLTProcessor::ResetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_XSLTProcessor_reset");

  xslt_processor_v8_internal::ResetMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8XSLTProcessorMethods[] = {
    {"importStylesheet", V8XSLTProcessor::ImportStylesheetMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transformToFragment", V8XSLTProcessor::TransformToFragmentMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transformToDocument", V8XSLTProcessor::TransformToDocumentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setParameter", V8XSLTProcessor::SetParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getParameter", V8XSLTProcessor::GetParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeParameter", V8XSLTProcessor::RemoveParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearParameters", V8XSLTProcessor::ClearParametersMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"reset", V8XSLTProcessor::ResetMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8XSLTProcessorTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8XSLTProcessor::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8XSLTProcessor::kInternalFieldCount);
  interface_template->SetCallHandler(xslt_processor_v8_internal::ConstructorCallback);
  interface_template->SetLength(0);

  if (!RuntimeEnabledFeatures::XSLTEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8XSLTProcessorMethods, base::size(kV8XSLTProcessorMethods));

  // Custom signature

  V8XSLTProcessor::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8XSLTProcessor::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::XSLTEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8XSLTProcessor::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8XSLTProcessor::GetWrapperTypeInfo()),
      InstallV8XSLTProcessorTemplate);
}

bool V8XSLTProcessor::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8XSLTProcessor::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8XSLTProcessor::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8XSLTProcessor::GetWrapperTypeInfo(), v8_value);
}

XSLTProcessor* V8XSLTProcessor::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

XSLTProcessor* NativeValueTraits<XSLTProcessor>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  XSLTProcessor* native_value = V8XSLTProcessor::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "XSLTProcessor"));
  }
  return native_value;
}

}  // namespace blink
