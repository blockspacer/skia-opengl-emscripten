// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_credentials_container.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_creation_options.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_credential_request_options.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo v8_credentials_container_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CredentialsContainer::DomTemplate,
    V8CredentialsContainer::InstallConditionalFeatures,
    "CredentialsContainer",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in CredentialsContainer.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& CredentialsContainer::wrapper_type_info_ = v8_credentials_container_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, CredentialsContainer>::value,
    "CredentialsContainer inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&CredentialsContainer::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "CredentialsContainer is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace credentials_container_v8_internal {

static void GetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CredentialsContainer", "get");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8CredentialsContainer::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  CredentialsContainer* impl = V8CredentialsContainer::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  CredentialRequestOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<CredentialRequestOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->get(script_state, options);
  V8SetReturnValue(info, result.V8Value());
}

static void StoreMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CredentialsContainer", "store");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8CredentialsContainer::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  CredentialsContainer* impl = V8CredentialsContainer::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Credential* credential;
  credential = V8Credential::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!credential) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Credential'.");
    return;
  }

  ScriptPromise result = impl->store(script_state, credential);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CredentialsContainer", "create");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8CredentialsContainer::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  CredentialsContainer* impl = V8CredentialsContainer::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  CredentialCreationOptions* options;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('options') is not an object.");
    return;
  }
  options = NativeValueTraits<CredentialCreationOptions>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->create(script_state, options, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void PreventSilentAccessMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CredentialsContainer", "preventSilentAccess");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8CredentialsContainer::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  CredentialsContainer* impl = V8CredentialsContainer::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->preventSilentAccess(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace credentials_container_v8_internal

void V8CredentialsContainer::GetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CredentialsContainer_get");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCredentialManagerGet);
  credentials_container_v8_internal::GetMethod(info);
}

void V8CredentialsContainer::StoreMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CredentialsContainer_store");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCredentialManagerStore);
  credentials_container_v8_internal::StoreMethod(info);
}

void V8CredentialsContainer::CreateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CredentialsContainer_create");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCredentialManagerCreate);
  credentials_container_v8_internal::CreateMethod(info);
}

void V8CredentialsContainer::PreventSilentAccessMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_CredentialsContainer_preventSilentAccess");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCredentialManagerPreventSilentAccess);
  credentials_container_v8_internal::PreventSilentAccessMethod(info);
}

static void InstallV8CredentialsContainerTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CredentialsContainer::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8CredentialsContainer::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature

  V8CredentialsContainer::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8CredentialsContainer::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
}

v8::Local<v8::FunctionTemplate> V8CredentialsContainer::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CredentialsContainer::GetWrapperTypeInfo()),
      InstallV8CredentialsContainerTemplate);
}

bool V8CredentialsContainer::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CredentialsContainer::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CredentialsContainer::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CredentialsContainer::GetWrapperTypeInfo(), v8_value);
}

CredentialsContainer* V8CredentialsContainer::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

CredentialsContainer* NativeValueTraits<CredentialsContainer>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  CredentialsContainer* native_value = V8CredentialsContainer::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CredentialsContainer"));
  }
  return native_value;
}

void V8CredentialsContainer::InstallConditionalFeatures(
    v8::Local<v8::Context> context,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance_object,
    v8::Local<v8::Object> prototype_object,
    v8::Local<v8::Function> interface_object,
    v8::Local<v8::FunctionTemplate> interface_template) {
  CHECK(!interface_template.IsEmpty());
  DCHECK((!prototype_object.IsEmpty() && !interface_object.IsEmpty()) ||
         !instance_object.IsEmpty());

  v8::Isolate* isolate = context->GetIsolate();

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ExecutionContext* execution_context = ToExecutionContext(context);
  DCHECK(execution_context);
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());

  if (!prototype_object.IsEmpty() || !interface_object.IsEmpty()) {
    if (is_secure_context) {
      {
        // Install get configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"get", V8CredentialsContainer::GetMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install store configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"store", V8CredentialsContainer::StoreMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install create configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"create", V8CredentialsContainer::CreateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
    if (is_secure_context) {
      {
        // Install preventSilentAccess configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"preventSilentAccess", V8CredentialsContainer::PreventSilentAccessMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
        };
        for (const auto& config : kConfigurations) {
          V8DOMConfiguration::InstallMethod(
              isolate, world, instance_object, prototype_object,
              interface_object, signature, config);
        }
      }
    }
  }
}

}  // namespace blink
