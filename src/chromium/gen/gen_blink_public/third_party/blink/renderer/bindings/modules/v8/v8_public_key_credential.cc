// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_public_key_credential.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authentication_extensions_client_outputs.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_authenticator_response.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
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
const WrapperTypeInfo v8_public_key_credential_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8PublicKeyCredential::DomTemplate,
    V8PublicKeyCredential::InstallConditionalFeatures,
    "PublicKeyCredential",
    V8Credential::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PublicKeyCredential.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& PublicKeyCredential::wrapper_type_info_ = v8_public_key_credential_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, PublicKeyCredential>::value,
    "PublicKeyCredential inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&PublicKeyCredential::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "PublicKeyCredential is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace public_key_credential_v8_internal {

static void RawIdAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PublicKeyCredential* impl = V8PublicKeyCredential::ToImpl(holder);

  DOMArrayBuffer* cpp_value(WTF::GetPtr(impl->rawId()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PublicKeyCredential#rawId")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void ResponseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  PublicKeyCredential* impl = V8PublicKeyCredential::ToImpl(holder);

  AuthenticatorResponse* cpp_value(WTF::GetPtr(impl->response()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#PublicKeyCredential#response")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void IsUserVerifyingPlatformAuthenticatorAvailableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ScriptState* script_state = ScriptState::ForCurrentRealm(info);

  ScriptPromise result = PublicKeyCredential::isUserVerifyingPlatformAuthenticatorAvailable(script_state);
  V8SetReturnValue(info, result.V8Value());
}

static void GetClientExtensionResultsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  PublicKeyCredential* impl = V8PublicKeyCredential::ToImpl(info.Holder());

  AuthenticationExtensionsClientOutputs* result = impl->getClientExtensionResults();
  V8SetReturnValue(info, result);
}

}  // namespace public_key_credential_v8_internal

void V8PublicKeyCredential::RawIdAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PublicKeyCredential_rawId_Getter");

  public_key_credential_v8_internal::RawIdAttributeGetter(info);
}

void V8PublicKeyCredential::ResponseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PublicKeyCredential_response_Getter");

  public_key_credential_v8_internal::ResponseAttributeGetter(info);
}

void V8PublicKeyCredential::IsUserVerifyingPlatformAuthenticatorAvailableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PublicKeyCredential_isUserVerifyingPlatformAuthenticatorAvailable");

  public_key_credential_v8_internal::IsUserVerifyingPlatformAuthenticatorAvailableMethod(info);
}

void V8PublicKeyCredential::GetClientExtensionResultsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_PublicKeyCredential_getClientExtensionResults");

  public_key_credential_v8_internal::GetClientExtensionResultsMethod(info);
}

static void InstallV8PublicKeyCredentialTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8PublicKeyCredential::GetWrapperTypeInfo()->interface_name, V8Credential::DomTemplate(isolate, world), V8PublicKeyCredential::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::WebAuthEnabled()) {
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

  V8PublicKeyCredential::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8PublicKeyCredential::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebAuthEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8PublicKeyCredential::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8PublicKeyCredential::GetWrapperTypeInfo()),
      InstallV8PublicKeyCredentialTemplate);
}

bool V8PublicKeyCredential::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8PublicKeyCredential::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8PublicKeyCredential::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8PublicKeyCredential::GetWrapperTypeInfo(), v8_value);
}

PublicKeyCredential* V8PublicKeyCredential::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

PublicKeyCredential* NativeValueTraits<PublicKeyCredential>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  PublicKeyCredential* native_value = V8PublicKeyCredential::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "PublicKeyCredential"));
  }
  return native_value;
}

void V8PublicKeyCredential::InstallConditionalFeatures(
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
      static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
          { "rawId", V8PublicKeyCredential::RawIdAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
          { "response", V8PublicKeyCredential::ResponseAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context) {
      {
        // Install getClientExtensionResults configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"getClientExtensionResults", V8PublicKeyCredential::GetClientExtensionResultsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install isUserVerifyingPlatformAuthenticatorAvailable configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"isUserVerifyingPlatformAuthenticatorAvailable", V8PublicKeyCredential::IsUserVerifyingPlatformAuthenticatorAvailableMethodCallback, 0, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
