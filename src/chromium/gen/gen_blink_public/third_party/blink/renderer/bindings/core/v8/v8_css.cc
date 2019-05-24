// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_css.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_unit_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_property_descriptor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_worklet.h"
#include "third_party/blink/renderer/core/css/cssom/css_unit_values.h"
#include "third_party/blink/renderer/core/css/property_registration.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/layout/custom/css_layout_worklet.h"
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
WrapperTypeInfo v8_css_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8CSS::DomTemplate,
    V8CSS::InstallConditionalFeatures,
    "CSS",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMWindowCSS.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& DOMWindowCSS::wrapper_type_info_ = v8_css_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, DOMWindowCSS>::value,
    "DOMWindowCSS inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&DOMWindowCSS::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "DOMWindowCSS is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace dom_window_css_v8_internal {

static void LayoutWorkletAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ScriptState* script_state = ScriptState::ForCurrentRealm(info);

  V8SetReturnValue(info, CSSLayoutWorklet::layoutWorklet(script_state), info.GetIsolate()->GetCurrentContext()->Global());
}

static void Supports1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8StringResource<> property;
  V8StringResource<> value;
  property = info[0];
  if (!property.Prepare())
    return;

  value = info[1];
  if (!value.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForCurrentRealm(info);
  V8SetReturnValueBool(info, DOMWindowCSS::supports(execution_context, property, value));
}

static void Supports2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  V8StringResource<> condition_text;
  condition_text = info[0];
  if (!condition_text.Prepare())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForCurrentRealm(info);
  V8SetReturnValueBool(info, DOMWindowCSS::supports(execution_context, condition_text));
}

static void SupportsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (true) {
        Supports2Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        Supports1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "supports");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void EscapeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("escape", "CSS", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> ident;
  ident = info[0];
  if (!ident.Prepare())
    return;

  V8SetReturnValueString(info, DOMWindowCSS::escape(ident), info.GetIsolate());
}

static void NumberMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "number");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::number(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void PercentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "percent");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::percent(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void EmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "em");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::em(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void ExMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "ex");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::ex(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void ChMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "ch");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::ch(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void RemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "rem");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::rem(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void VwMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "vw");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::vw(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void VhMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "vh");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::vh(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void VminMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "vmin");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::vmin(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void VmaxMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "vmax");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::vmax(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void CmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "cm");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::cm(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void MmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "mm");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::mm(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void InMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "in");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::in(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void PtMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "pt");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::pt(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void PcMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "pc");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::pc(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void PxMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "px");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::px(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void QMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "Q");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::Q(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void DegMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "deg");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::deg(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void GradMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "grad");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::grad(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void RadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "rad");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::rad(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void TurnMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "turn");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::turn(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void SMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "s");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::s(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void MsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "ms");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::ms(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void HzMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "Hz");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::Hz(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void KHzMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "kHz");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::kHz(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void DpiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "dpi");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::dpi(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void DpcmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "dpcm");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::dpcm(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void DppxMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "dppx");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::dppx(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void FrMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "fr");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double value;
  value = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  CSSUnitValue* result = CSSUnitValues::fr(value);
  // [NewObject] must always create a new wrapper.  Check that a wrapper
  // does not exist yet.
  DCHECK(!result || DOMDataStore::GetWrapper(result, info.GetIsolate()).IsEmpty());
  V8SetReturnValue(info, result, info.GetIsolate()->GetCurrentContext()->Global());
}

static void RegisterPropertyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "CSS", "registerProperty");

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  PropertyDescriptor* descriptor;
  if (!info[0]->IsNullOrUndefined() && !info[0]->IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('descriptor') is not an object.");
    return;
  }
  descriptor = NativeValueTraits<PropertyDescriptor>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ExecutionContext* execution_context = ExecutionContext::ForCurrentRealm(info);
  PropertyRegistration::registerProperty(execution_context, descriptor, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

}  // namespace dom_window_css_v8_internal

void V8CSS::LayoutWorkletAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_layoutWorklet_Getter");

  dom_window_css_v8_internal::LayoutWorkletAttributeGetter(info);
}

void V8CSS::SupportsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_supports");

  dom_window_css_v8_internal::SupportsMethod(info);
}

void V8CSS::EscapeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_escape");

  dom_window_css_v8_internal::EscapeMethod(info);
}

void V8CSS::NumberMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_number");

  dom_window_css_v8_internal::NumberMethod(info);
}

void V8CSS::PercentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_percent");

  dom_window_css_v8_internal::PercentMethod(info);
}

void V8CSS::EmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_em");

  dom_window_css_v8_internal::EmMethod(info);
}

void V8CSS::ExMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_ex");

  dom_window_css_v8_internal::ExMethod(info);
}

void V8CSS::ChMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_ch");

  dom_window_css_v8_internal::ChMethod(info);
}

void V8CSS::RemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_rem");

  dom_window_css_v8_internal::RemMethod(info);
}

void V8CSS::VwMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_vw");

  dom_window_css_v8_internal::VwMethod(info);
}

void V8CSS::VhMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_vh");

  dom_window_css_v8_internal::VhMethod(info);
}

void V8CSS::VminMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_vmin");

  dom_window_css_v8_internal::VminMethod(info);
}

void V8CSS::VmaxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_vmax");

  dom_window_css_v8_internal::VmaxMethod(info);
}

void V8CSS::CmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_cm");

  dom_window_css_v8_internal::CmMethod(info);
}

void V8CSS::MmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_mm");

  dom_window_css_v8_internal::MmMethod(info);
}

void V8CSS::InMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_in");

  dom_window_css_v8_internal::InMethod(info);
}

void V8CSS::PtMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_pt");

  dom_window_css_v8_internal::PtMethod(info);
}

void V8CSS::PcMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_pc");

  dom_window_css_v8_internal::PcMethod(info);
}

void V8CSS::PxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_px");

  dom_window_css_v8_internal::PxMethod(info);
}

void V8CSS::QMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_Q");

  dom_window_css_v8_internal::QMethod(info);
}

void V8CSS::DegMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_deg");

  dom_window_css_v8_internal::DegMethod(info);
}

void V8CSS::GradMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_grad");

  dom_window_css_v8_internal::GradMethod(info);
}

void V8CSS::RadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_rad");

  dom_window_css_v8_internal::RadMethod(info);
}

void V8CSS::TurnMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_turn");

  dom_window_css_v8_internal::TurnMethod(info);
}

void V8CSS::SMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_s");

  dom_window_css_v8_internal::SMethod(info);
}

void V8CSS::MsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_ms");

  dom_window_css_v8_internal::MsMethod(info);
}

void V8CSS::HzMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_Hz");

  dom_window_css_v8_internal::HzMethod(info);
}

void V8CSS::KHzMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_kHz");

  dom_window_css_v8_internal::KHzMethod(info);
}

void V8CSS::DpiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_dpi");

  dom_window_css_v8_internal::DpiMethod(info);
}

void V8CSS::DpcmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_dpcm");

  dom_window_css_v8_internal::DpcmMethod(info);
}

void V8CSS::DppxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_dppx");

  dom_window_css_v8_internal::DppxMethod(info);
}

void V8CSS::FrMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_fr");

  dom_window_css_v8_internal::FrMethod(info);
}

void V8CSS::RegisterPropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_DOMWindowCSS_registerProperty");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCSSRegisterProperty);
  dom_window_css_v8_internal::RegisterPropertyMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8CSSMethods[] = {
    {"supports", V8CSS::SupportsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"escape", V8CSS::EscapeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"number", V8CSS::NumberMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"percent", V8CSS::PercentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"em", V8CSS::EmMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ex", V8CSS::ExMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ch", V8CSS::ChMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rem", V8CSS::RemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vw", V8CSS::VwMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vh", V8CSS::VhMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vmin", V8CSS::VminMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vmax", V8CSS::VmaxMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cm", V8CSS::CmMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mm", V8CSS::MmMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"in", V8CSS::InMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pt", V8CSS::PtMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pc", V8CSS::PcMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"px", V8CSS::PxMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"Q", V8CSS::QMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deg", V8CSS::DegMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"grad", V8CSS::GradMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rad", V8CSS::RadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"turn", V8CSS::TurnMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"s", V8CSS::SMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"ms", V8CSS::MsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"Hz", V8CSS::HzMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"kHz", V8CSS::KHzMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"dpi", V8CSS::DpiMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"dpcm", V8CSS::DpcmMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"dppx", V8CSS::DppxMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fr", V8CSS::FrMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8CSS::InstallV8CSSTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8CSS::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8CSS::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8CSSMethods, base::size(kV8CSSMethods));

  // Custom signature
}

void V8CSS::InstallRuntimeEnabledFeaturesOnTemplate(
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
  if (RuntimeEnabledFeatures::CSSVariables2Enabled()) {
    {
      // Install registerProperty configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"registerProperty", V8CSS::RegisterPropertyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

v8::Local<v8::FunctionTemplate> V8CSS::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8CSS::GetWrapperTypeInfo()),
      V8CSS::install_v8_css_template_function_);
}

bool V8CSS::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8CSS::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8CSS::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8CSS::GetWrapperTypeInfo(), v8_value);
}

DOMWindowCSS* V8CSS::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

DOMWindowCSS* NativeValueTraits<DOMWindowCSS>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  DOMWindowCSS* native_value = V8CSS::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "CSS"));
  }
  return native_value;
}

void V8CSS::InstallConditionalFeatures(
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
      if (RuntimeEnabledFeatures::CSSLayoutAPIEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessor_configurations[] = {
            { "layoutWorklet", V8CSS::LayoutWorkletAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnInterface, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
        };
        V8DOMConfiguration::InstallAccessors(
            isolate, world, instance_object, prototype_object, interface_object,
            signature, accessor_configurations,
            base::size(accessor_configurations));
      }
    }
  }
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8CSS::install_runtime_enabled_features_on_template_function_ =
    &V8CSS::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8CSS::install_v8_css_template_function_ =
    &V8CSS::InstallV8CSSTemplate;

void V8CSS::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8CSS::install_v8_css_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8CSS::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8CSS::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
