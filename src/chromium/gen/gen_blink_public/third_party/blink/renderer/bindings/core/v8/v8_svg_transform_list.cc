// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform_list.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_matrix.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_transform.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
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
const WrapperTypeInfo v8_svg_transform_list_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGTransformList::DomTemplate,
    nullptr,
    "SVGTransformList",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGTransformListTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGTransformListTearOff::wrapper_type_info_ = v8_svg_transform_list_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGTransformListTearOff>::value,
    "SVGTransformListTearOff inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGTransformListTearOff::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGTransformListTearOff is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_transform_list_tear_off_v8_internal {

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void NumberOfItemsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void ClearMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransformList", "clear");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  impl->clear(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void InitializeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransformList", "initialize");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  SVGTransformTearOff* new_item;
  new_item = V8SVGTransform::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_item) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGTransform'.");
    return;
  }

  SVGTransformTearOff* result = impl->initialize(new_item, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GetItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransformList", "getItem");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  SVGTransformTearOff* result = impl->getItem(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void InsertItemBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransformList", "insertItemBefore");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  SVGTransformTearOff* new_item;
  uint32_t index;
  new_item = V8SVGTransform::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_item) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGTransform'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  SVGTransformTearOff* result = impl->insertItemBefore(new_item, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ReplaceItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransformList", "replaceItem");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  SVGTransformTearOff* new_item;
  uint32_t index;
  new_item = V8SVGTransform::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_item) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGTransform'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  SVGTransformTearOff* result = impl->replaceItem(new_item, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void RemoveItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransformList", "removeItem");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  SVGTransformTearOff* result = impl->removeItem(index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void AppendItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransformList", "appendItem");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  SVGTransformTearOff* new_item;
  new_item = V8SVGTransform::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!new_item) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGTransform'.");
    return;
  }

  SVGTransformTearOff* result = impl->appendItem(new_item, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CreateSVGTransformFromMatrixMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createSVGTransformFromMatrix", "SVGTransformList", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  SVGMatrixTearOff* matrix;
  matrix = V8SVGMatrix::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!matrix) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createSVGTransformFromMatrix", "SVGTransformList", "parameter 1 is not of type 'SVGMatrix'."));
    return;
  }

  V8SetReturnValue(info, impl->createSVGTransformFromMatrix(matrix));
}

static void ConsolidateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTransformList", "consolidate");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  SVGTransformTearOff* result = impl->consolidate(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void IndexedPropertyGetter(
    uint32_t index,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kIndexedGetterContext, "SVGTransformList");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  SVGTransformTearOff* result = impl->getItem(index, exception_state);
  V8SetReturnValueFast(info, result, impl);
}

static void IndexedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8SVGTransformList::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getter_value, true);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

static void IndexedPropertySetter(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(
      info.GetIsolate(),
      ExceptionState::kIndexedSetterContext,
      "SVGTransformList");

  SVGTransformListTearOff* impl = V8SVGTransformList::ToImpl(info.Holder());
  SVGTransformTearOff* property_value = V8SVGTransform::ToImplWithTypeCheck(info.GetIsolate(), v8_value);
  if (!property_value) {
    exception_state.ThrowTypeError("The provided value is not of type 'SVGTransform'.");
    return;
  }

  bool result = impl->AnonymousIndexedSetter(index, property_value, exception_state);
  if (exception_state.HadException())
    return;
  if (!result)
    return;
  V8SetReturnValue(info, v8_value);
}

}  // namespace svg_transform_list_tear_off_v8_internal

void V8SVGTransformList::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_length_Getter");

  svg_transform_list_tear_off_v8_internal::LengthAttributeGetter(info);
}

void V8SVGTransformList::NumberOfItemsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_numberOfItems_Getter");

  svg_transform_list_tear_off_v8_internal::NumberOfItemsAttributeGetter(info);
}

void V8SVGTransformList::ClearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_clear");

  svg_transform_list_tear_off_v8_internal::ClearMethod(info);
}

void V8SVGTransformList::InitializeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_initialize");

  svg_transform_list_tear_off_v8_internal::InitializeMethod(info);
}

void V8SVGTransformList::GetItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_getItem");

  svg_transform_list_tear_off_v8_internal::GetItemMethod(info);
}

void V8SVGTransformList::InsertItemBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_insertItemBefore");

  svg_transform_list_tear_off_v8_internal::InsertItemBeforeMethod(info);
}

void V8SVGTransformList::ReplaceItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_replaceItem");

  svg_transform_list_tear_off_v8_internal::ReplaceItemMethod(info);
}

void V8SVGTransformList::RemoveItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_removeItem");

  svg_transform_list_tear_off_v8_internal::RemoveItemMethod(info);
}

void V8SVGTransformList::AppendItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_appendItem");

  svg_transform_list_tear_off_v8_internal::AppendItemMethod(info);
}

void V8SVGTransformList::CreateSVGTransformFromMatrixMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_createSVGTransformFromMatrix");

  svg_transform_list_tear_off_v8_internal::CreateSVGTransformFromMatrixMethod(info);
}

void V8SVGTransformList::ConsolidateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_consolidate");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVGTransformListConsolidate);
  svg_transform_list_tear_off_v8_internal::ConsolidateMethod(info);
}

void V8SVGTransformList::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTransformListTearOff_IndexedPropertyGetter");

  svg_transform_list_tear_off_v8_internal::IndexedPropertyGetter(index, info);
}

void V8SVGTransformList::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  svg_transform_list_tear_off_v8_internal::IndexedPropertyDescriptor(index, info);
}

void V8SVGTransformList::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  svg_transform_list_tear_off_v8_internal::IndexedPropertySetter(index, v8_value, info);
}

void V8SVGTransformList::IndexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.1. If the result of calling IsDataDescriptor(Desc) is false, then
  //   return false.
  if (desc.has_get() || desc.has_set()) {
    V8SetReturnValue(info, v8::Null(info.GetIsolate()));
    if (info.ShouldThrowOnError()) {
      ExceptionState exception_state(info.GetIsolate(),
                                     ExceptionState::kIndexedSetterContext,
                                     "SVGTransformList");
      exception_state.ThrowTypeError("Accessor properties are not allowed.");
    }
    return;
  }

  // Return nothing and fall back to indexedPropertySetterCallback.
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGTransformListAccessors[] = {
    { "length", V8SVGTransformList::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "numberOfItems", V8SVGTransformList::NumberOfItemsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGTransformListMethods[] = {
    {"clear", V8SVGTransformList::ClearMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"initialize", V8SVGTransformList::InitializeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getItem", V8SVGTransformList::GetItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"insertItemBefore", V8SVGTransformList::InsertItemBeforeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceItem", V8SVGTransformList::ReplaceItemMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeItem", V8SVGTransformList::RemoveItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"appendItem", V8SVGTransformList::AppendItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSVGTransformFromMatrix", V8SVGTransformList::CreateSVGTransformFromMatrixMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"consolidate", V8SVGTransformList::ConsolidateMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGTransformListTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGTransformList::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8SVGTransformList::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGTransformListAccessors, base::size(kV8SVGTransformListAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGTransformListMethods, base::size(kV8SVGTransformListMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8SVGTransformList::IndexedPropertyGetterCallback,
      V8SVGTransformList::IndexedPropertySetterCallback,
      V8SVGTransformList::IndexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<SVGTransformListTearOff>,
      V8SVGTransformList::IndexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototype_template->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);

  // Custom signature

  V8SVGTransformList::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGTransformList::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGTransformList::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGTransformList::GetWrapperTypeInfo()),
      InstallV8SVGTransformListTemplate);
}

bool V8SVGTransformList::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGTransformList::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGTransformList::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGTransformList::GetWrapperTypeInfo(), v8_value);
}

SVGTransformListTearOff* V8SVGTransformList::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGTransformListTearOff* NativeValueTraits<SVGTransformListTearOff>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGTransformListTearOff* native_value = V8SVGTransformList::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGTransformList"));
  }
  return native_value;
}

}  // namespace blink
