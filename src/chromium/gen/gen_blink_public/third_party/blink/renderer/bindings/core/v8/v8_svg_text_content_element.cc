// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_text_content_element.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_enumeration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_animated_length.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_svg_rect.h"
#include "third_party/blink/renderer/core/animation/element_animation.h"
#include "third_party/blink/renderer/core/css/cssom/element_computed_style_map.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/fullscreen/element_fullscreen.h"
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
const WrapperTypeInfo v8_svg_text_content_element_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8SVGTextContentElement::DomTemplate,
    nullptr,
    "SVGTextContentElement",
    V8SVGGraphicsElement::GetWrapperTypeInfo(),
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kNodeClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGTextContentElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& SVGTextContentElement::wrapper_type_info_ = v8_svg_text_content_element_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, SVGTextContentElement>::value,
    "SVGTextContentElement inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&SVGTextContentElement::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "SVGTextContentElement is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace svg_text_content_element_v8_internal {

static void TextLengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->textLength()), impl);
}

static void LengthAdjustAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->lengthAdjust()), impl);
}

static void GetNumberOfCharsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  V8SetReturnValueInt(info, impl->getNumberOfChars());
}

static void GetComputedTextLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getComputedTextLength());
}

static void GetSubStringLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getSubStringLength");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t charnum;
  uint32_t nchars;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  nchars = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  float result = impl->getSubStringLength(charnum, nchars, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GetStartPositionOfCharMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getStartPositionOfChar");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t charnum;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  SVGPointTearOff* result = impl->getStartPositionOfChar(charnum, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void GetEndPositionOfCharMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getEndPositionOfChar");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t charnum;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  SVGPointTearOff* result = impl->getEndPositionOfChar(charnum, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void GetExtentOfCharMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getExtentOfChar");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t charnum;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  SVGRectTearOff* result = impl->getExtentOfChar(charnum, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void GetRotationOfCharMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getRotationOfChar");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t charnum;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  float result = impl->getRotationOfChar(charnum, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GetCharNumAtPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "getCharNumAtPosition");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  SVGPointTearOff* point;
  point = V8SVGPoint::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!point) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'SVGPoint'.");
    return;
  }

  int32_t result = impl->getCharNumAtPosition(point, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void SelectSubStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "SVGTextContentElement", "selectSubString");

  SVGTextContentElement* impl = V8SVGTextContentElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t charnum;
  uint32_t nchars;
  charnum = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  nchars = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->selectSubString(charnum, nchars, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace svg_text_content_element_v8_internal

void V8SVGTextContentElement::LENGTHADJUSTUNKNOWNConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_LENGTHADJUST_UNKNOWN_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 0);
}

void V8SVGTextContentElement::LENGTHADJUSTSPACINGConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_LENGTHADJUST_SPACING_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 1);
}

void V8SVGTextContentElement::LENGTHADJUSTSPACINGANDGLYPHSConstantGetterCallback(v8::Local<v8::Name>, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_LENGTHADJUST_SPACINGANDGLYPHS_ConstantGetter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMText);
  V8SetReturnValueInt(info, 2);
}

void V8SVGTextContentElement::TextLengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_textLength_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMText);

  svg_text_content_element_v8_internal::TextLengthAttributeGetter(info);
}

void V8SVGTextContentElement::LengthAdjustAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_lengthAdjust_Getter");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kSVG1DOMText);

  svg_text_content_element_v8_internal::LengthAdjustAttributeGetter(info);
}

void V8SVGTextContentElement::GetNumberOfCharsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getNumberOfChars");

  svg_text_content_element_v8_internal::GetNumberOfCharsMethod(info);
}

void V8SVGTextContentElement::GetComputedTextLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getComputedTextLength");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetComputedTextLength_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetComputedTextLength_Method);
  svg_text_content_element_v8_internal::GetComputedTextLengthMethod(info);
}

void V8SVGTextContentElement::GetSubStringLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getSubStringLength");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetSubStringLength_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetSubStringLength_Method);
  svg_text_content_element_v8_internal::GetSubStringLengthMethod(info);
}

void V8SVGTextContentElement::GetStartPositionOfCharMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getStartPositionOfChar");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetStartPositionOfChar_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetStartPositionOfChar_Method);
  svg_text_content_element_v8_internal::GetStartPositionOfCharMethod(info);
}

void V8SVGTextContentElement::GetEndPositionOfCharMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getEndPositionOfChar");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetEndPositionOfChar_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetEndPositionOfChar_Method);
  svg_text_content_element_v8_internal::GetEndPositionOfCharMethod(info);
}

void V8SVGTextContentElement::GetExtentOfCharMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getExtentOfChar");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetExtentOfChar_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8SVGTextContentElement_GetExtentOfChar_Method);
  svg_text_content_element_v8_internal::GetExtentOfCharMethod(info);
}

void V8SVGTextContentElement::GetRotationOfCharMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getRotationOfChar");

  svg_text_content_element_v8_internal::GetRotationOfCharMethod(info);
}

void V8SVGTextContentElement::GetCharNumAtPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_getCharNumAtPosition");

  svg_text_content_element_v8_internal::GetCharNumAtPositionMethod(info);
}

void V8SVGTextContentElement::SelectSubStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_SVGTextContentElement_selectSubString");

  svg_text_content_element_v8_internal::SelectSubStringMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8SVGTextContentElementAccessors[] = {
    { "textLength", V8SVGTextContentElement::TextLengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "lengthAdjust", V8SVGTextContentElement::LengthAdjustAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8SVGTextContentElementMethods[] = {
    {"getNumberOfChars", V8SVGTextContentElement::GetNumberOfCharsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getComputedTextLength", V8SVGTextContentElement::GetComputedTextLengthMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSubStringLength", V8SVGTextContentElement::GetSubStringLengthMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getStartPositionOfChar", V8SVGTextContentElement::GetStartPositionOfCharMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getEndPositionOfChar", V8SVGTextContentElement::GetEndPositionOfCharMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getExtentOfChar", V8SVGTextContentElement::GetExtentOfCharMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRotationOfChar", V8SVGTextContentElement::GetRotationOfCharMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCharNumAtPosition", V8SVGTextContentElement::GetCharNumAtPositionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectSubString", V8SVGTextContentElement::SelectSubStringMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8SVGTextContentElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8SVGTextContentElement::GetWrapperTypeInfo()->interface_name, V8SVGGraphicsElement::DomTemplate(isolate, world), V8SVGTextContentElement::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "LENGTHADJUST_UNKNOWN", V8SVGTextContentElement::LENGTHADJUSTUNKNOWNConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "LENGTHADJUST_SPACING", V8SVGTextContentElement::LENGTHADJUSTSPACINGConstantGetterCallback);
  V8DOMConfiguration::InstallConstantWithGetter(
      isolate, interface_template, prototype_template,
      "LENGTHADJUST_SPACINGANDGLYPHS", V8SVGTextContentElement::LENGTHADJUSTSPACINGANDGLYPHSConstantGetterCallback);
  static_assert(0 == SVGTextContentElement::kLengthadjustUnknown, "the value of SVGTextContentElement_kLengthadjustUnknown does not match with implementation");
  static_assert(1 == SVGTextContentElement::kLengthadjustSpacing, "the value of SVGTextContentElement_kLengthadjustSpacing does not match with implementation");
  static_assert(2 == SVGTextContentElement::kLengthadjustSpacingandglyphs, "the value of SVGTextContentElement_kLengthadjustSpacingandglyphs does not match with implementation");
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGTextContentElementAccessors, base::size(kV8SVGTextContentElementAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8SVGTextContentElementMethods, base::size(kV8SVGTextContentElementMethods));

  // Custom signature

  V8SVGTextContentElement::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8SVGTextContentElement::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8SVGTextContentElement::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8SVGTextContentElement::GetWrapperTypeInfo()),
      InstallV8SVGTextContentElementTemplate);
}

bool V8SVGTextContentElement::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8SVGTextContentElement::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8SVGTextContentElement::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8SVGTextContentElement::GetWrapperTypeInfo(), v8_value);
}

SVGTextContentElement* V8SVGTextContentElement::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

SVGTextContentElement* NativeValueTraits<SVGTextContentElement>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  SVGTextContentElement* native_value = V8SVGTextContentElement::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "SVGTextContentElement"));
  }
  return native_value;
}

}  // namespace blink
