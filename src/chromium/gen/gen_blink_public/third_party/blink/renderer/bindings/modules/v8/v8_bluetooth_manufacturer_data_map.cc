// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_bluetooth_manufacturer_data_map.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_for_each_iterator_callback.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_iterator.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
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
const WrapperTypeInfo v8_bluetooth_manufacturer_data_map_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8BluetoothManufacturerDataMap::DomTemplate,
    V8BluetoothManufacturerDataMap::InstallConditionalFeatures,
    "BluetoothManufacturerDataMap",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in BluetoothManufacturerDataMap.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& BluetoothManufacturerDataMap::wrapper_type_info_ = v8_bluetooth_manufacturer_data_map_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, BluetoothManufacturerDataMap>::value,
    "BluetoothManufacturerDataMap inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&BluetoothManufacturerDataMap::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "BluetoothManufacturerDataMap is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace bluetooth_manufacturer_data_map_v8_internal {

static void SizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  BluetoothManufacturerDataMap* impl = V8BluetoothManufacturerDataMap::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->size());
}

static void KeysMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothManufacturerDataMap", "keys");

  BluetoothManufacturerDataMap* impl = V8BluetoothManufacturerDataMap::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Iterator* result = impl->keysForBinding(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ValuesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothManufacturerDataMap", "values");

  BluetoothManufacturerDataMap* impl = V8BluetoothManufacturerDataMap::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Iterator* result = impl->valuesForBinding(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ForEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothManufacturerDataMap", "forEach");

  BluetoothManufacturerDataMap* impl = V8BluetoothManufacturerDataMap::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8ForEachIteratorCallback* callback;
  ScriptValue this_arg;
  if (info[0]->IsFunction()) {
    callback = V8ForEachIteratorCallback::Create(info[0].As<v8::Function>());
  } else {
    exception_state.ThrowTypeError("The callback provided as parameter 1 is not a function.");
    return;
  }

  this_arg = ScriptValue(ScriptState::Current(info.GetIsolate()), info[1]);

  impl->forEachForBinding(script_state, ScriptValue(script_state, info.Holder()), callback, this_arg, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void HasMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothManufacturerDataMap", "has");

  BluetoothManufacturerDataMap* impl = V8BluetoothManufacturerDataMap::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint16_t key;
  key = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  bool result = impl->hasForBinding(script_state, key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void GetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothManufacturerDataMap", "get");

  BluetoothManufacturerDataMap* impl = V8BluetoothManufacturerDataMap::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint16_t key;
  key = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getForBinding(script_state, key, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void IteratorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "BluetoothManufacturerDataMap", "iterator");

  BluetoothManufacturerDataMap* impl = V8BluetoothManufacturerDataMap::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Iterator* result = impl->GetIterator(script_state, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

}  // namespace bluetooth_manufacturer_data_map_v8_internal

void V8BluetoothManufacturerDataMap::SizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothManufacturerDataMap_size_Getter");

  bluetooth_manufacturer_data_map_v8_internal::SizeAttributeGetter(info);
}

void V8BluetoothManufacturerDataMap::KeysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothManufacturerDataMap_keys");

  bluetooth_manufacturer_data_map_v8_internal::KeysMethod(info);
}

void V8BluetoothManufacturerDataMap::ValuesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothManufacturerDataMap_values");

  bluetooth_manufacturer_data_map_v8_internal::ValuesMethod(info);
}

void V8BluetoothManufacturerDataMap::ForEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothManufacturerDataMap_forEach");

  bluetooth_manufacturer_data_map_v8_internal::ForEachMethod(info);
}

void V8BluetoothManufacturerDataMap::HasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothManufacturerDataMap_has");

  bluetooth_manufacturer_data_map_v8_internal::HasMethod(info);
}

void V8BluetoothManufacturerDataMap::GetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothManufacturerDataMap_get");

  bluetooth_manufacturer_data_map_v8_internal::GetMethod(info);
}

void V8BluetoothManufacturerDataMap::IteratorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_BluetoothManufacturerDataMap_iterator");

  bluetooth_manufacturer_data_map_v8_internal::IteratorMethod(info);
}

static void InstallV8BluetoothManufacturerDataMapTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8BluetoothManufacturerDataMap::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8BluetoothManufacturerDataMap::kInternalFieldCount);

  if (!RuntimeEnabledFeatures::WebBluetoothScanningEnabled()) {
    return;
  }

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Iterator (@@iterator)
  static const V8DOMConfiguration::SymbolKeyedMethodConfiguration
  kSymbolKeyedIteratorConfiguration = {
      v8::Symbol::GetIterator,
      "entries",
      V8BluetoothManufacturerDataMap::IteratorMethodCallback,
      0,
      v8::DontEnum,
      V8DOMConfiguration::kOnPrototype,
      V8DOMConfiguration::kCheckHolder,
      V8DOMConfiguration::kDoNotCheckAccess,
      V8DOMConfiguration::kHasSideEffect
  };
  V8DOMConfiguration::InstallMethod(
      isolate, world, prototype_template, signature,
      kSymbolKeyedIteratorConfiguration);

  // Custom signature

  V8BluetoothManufacturerDataMap::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8BluetoothManufacturerDataMap::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::WebBluetoothScanningEnabled()) {
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

v8::Local<v8::FunctionTemplate> V8BluetoothManufacturerDataMap::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8BluetoothManufacturerDataMap::GetWrapperTypeInfo()),
      InstallV8BluetoothManufacturerDataMapTemplate);
}

bool V8BluetoothManufacturerDataMap::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8BluetoothManufacturerDataMap::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8BluetoothManufacturerDataMap::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8BluetoothManufacturerDataMap::GetWrapperTypeInfo(), v8_value);
}

BluetoothManufacturerDataMap* V8BluetoothManufacturerDataMap::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

BluetoothManufacturerDataMap* NativeValueTraits<BluetoothManufacturerDataMap>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  BluetoothManufacturerDataMap* native_value = V8BluetoothManufacturerDataMap::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "BluetoothManufacturerDataMap"));
  }
  return native_value;
}

void V8BluetoothManufacturerDataMap::InstallConditionalFeatures(
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
          { "size", V8BluetoothManufacturerDataMap::SizeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::DontEnum | v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
      };
      V8DOMConfiguration::InstallAccessors(
          isolate, world, instance_object, prototype_object, interface_object,
          signature, accessor_configurations,
          base::size(accessor_configurations));
    }
    if (is_secure_context) {
      {
        // Install keys configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"keys", V8BluetoothManufacturerDataMap::KeysMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install values configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"values", V8BluetoothManufacturerDataMap::ValuesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install forEach configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"forEach", V8BluetoothManufacturerDataMap::ForEachMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install has configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"has", V8BluetoothManufacturerDataMap::HasMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
        // Install get configuration
        const V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
            {"get", V8BluetoothManufacturerDataMap::GetMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
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
