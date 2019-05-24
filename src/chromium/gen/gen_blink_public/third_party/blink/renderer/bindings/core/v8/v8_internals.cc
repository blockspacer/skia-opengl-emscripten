// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/core/v8/v8_internals.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/serialization/serialized_script_value_factory.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_animation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_callback_function_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_css_style_declaration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dictionary_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_document.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_point.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_rect_read_only.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_gc_observation.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_hit_test_layer_rect_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_iframe_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_input_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_media_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_select_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_runtime_flags.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_internal_settings.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_location.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_node_list.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_origin_trials_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_range.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_record_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_response.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_scroll_state.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_sequence_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_shadow_root.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_static_selection.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_type_conversions.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_union_types_test.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_window.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/core/dom/name_node_list.h"
#include "third_party/blink/renderer/core/dom/node_list.h"
#include "third_party/blink/renderer/core/dom/static_node_list.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/fetch/testing/internals_fetch.h"
#include "third_party/blink/renderer/core/html/forms/labels_node_list.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
WrapperTypeInfo v8_internals_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8Internals::DomTemplate,
    V8Internals::InstallConditionalFeatures,
    "Internals",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Internals.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& Internals::wrapper_type_info_ = v8_internals_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, Internals>::value,
    "Internals inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&Internals::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "Internals is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace internals_v8_internal {

static void PagePopupWindowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->pagePopupWindow()), impl);
}

static void SettingsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  InternalSettings* cpp_value(WTF::GetPtr(impl->settings()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Internals#settings")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void RuntimeFlagsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  InternalRuntimeFlags* cpp_value(WTF::GetPtr(impl->runtimeFlags()));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#Internals#runtimeFlags")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

static void WorkerThreadCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->workerThreadCount());
}

static void CursorUpdatePendingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueBool(info, impl->cursorUpdatePending());
}

static void FakeMouseMovePendingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueBool(info, impl->fakeMouseMovePending());
}

static void VisibleSelectionAnchorNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->visibleSelectionAnchorNode()), impl);
}

static void VisibleSelectionAnchorOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->visibleSelectionAnchorOffset());
}

static void VisibleSelectionFocusNodeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->visibleSelectionFocusNode()), impl);
}

static void VisibleSelectionFocusOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->visibleSelectionFocusOffset());
}

static void TextAffinityAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueString(info, impl->textAffinity(), info.GetIsolate());
}

static void InterestedElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueFast(info, WTF::GetPtr(impl->interestedElement()), impl);
}

static void LengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueUnsigned(info, impl->length());
}

static void UnscopableAttributeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  Internals* impl = V8Internals::ToImpl(holder);

  V8SetReturnValueString(info, impl->unscopableAttribute(), info.GetIsolate());
}

static void ObserveGCMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("observeGC", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  ScriptValue observed;
  observed = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  V8SetReturnValue(info, impl->observeGC(observed));
}

static void ElementLayoutTreeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "elementLayoutTreeAsText");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  String result = impl->elementLayoutTreeAsText(element, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void IsPreloadedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPreloaded", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> url;
  url = info[0];
  if (!url.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isPreloaded(url));
}

static void IsPreloadedByMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPreloadedBy", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> url;
  Document* document;
  url = info[0];
  if (!url.Prepare())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isPreloadedBy", "Internals", "parameter 2 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isPreloadedBy(url, document));
}

static void IsLoadingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isLoading", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> url;
  url = info[0];
  if (!url.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isLoading(url));
}

static void IsLoadingFromMemoryCacheMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isLoadingFromMemoryCache", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> url;
  url = info[0];
  if (!url.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isLoadingFromMemoryCache(url));
}

static void GetResourcePriorityMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourcePriority", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  V8StringResource<> url;
  Document* document;
  url = info[0];
  if (!url.Prepare())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourcePriority", "Internals", "parameter 2 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->getResourcePriority(url, document));
}

static void GetResourceHeaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourceHeader", "Internals", ExceptionMessages::NotEnoughArguments(3, info.Length())));
    return;
  }

  V8StringResource<> url;
  V8StringResource<> header;
  Document* document;
  url = info[0];
  if (!url.Prepare())
    return;

  header = info[1];
  if (!header.Prepare())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getResourceHeader", "Internals", "parameter 3 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueString(info, impl->getResourceHeader(url, header, document), info.GetIsolate());
}

static void DoesWindowHaveUrlFragmentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("doesWindowHaveUrlFragment", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DOMWindow* window;
  window = ToDOMWindow(info.GetIsolate(), info[0]);
  if (!window) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("doesWindowHaveUrlFragment", "Internals", "parameter 1 is not of type 'Window'."));
    return;
  }

  V8SetReturnValue(info, impl->doesWindowHaveUrlFragment(window));
}

static void ComputedStyleIncludingVisitedInfoMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("computedStyleIncludingVisitedInfo", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("computedStyleIncludingVisitedInfo", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->computedStyleIncludingVisitedInfo(node));
}

static void CreateUserAgentShadowRootMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createUserAgentShadowRoot", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* host;
  host = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!host) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("createUserAgentShadowRoot", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValue(info, impl->createUserAgentShadowRoot(host));
}

static void ShadowRootMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shadowRoot", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* host;
  host = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!host) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shadowRoot", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValue(info, impl->shadowRoot(host));
}

static void SetBrowserControlsStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setBrowserControlsState");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  float top_height;
  float bottom_height;
  bool shrinks_layout;
  top_height = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  bottom_height = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  shrinks_layout = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->setBrowserControlsState(top_height, bottom_height, shrinks_layout);
}

static void SetBrowserControlsShownRatioMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setBrowserControlsShownRatio");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float ratio;
  ratio = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setBrowserControlsShownRatio(ratio);
}

static void EffectiveRootScrollerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("effectiveRootScroller", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("effectiveRootScroller", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValue(info, impl->effectiveRootScroller(document));
}

static void ShadowRootTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "shadowRootType");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  String result = impl->shadowRootType(root, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void HasShadowInsertionPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hasShadowInsertionPoint");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  bool result = impl->hasShadowInsertionPoint(root, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void HasContentElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hasContentElement");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  bool result = impl->hasContentElement(root, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void CountElementShadowMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "countElementShadow");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* root;
  root = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!root) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  uint32_t result = impl->countElementShadow(root, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void ShadowPseudoIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shadowPseudoId", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shadowPseudoId", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->shadowPseudoId(element), info.GetIsolate());
}

static void IsValidContentSelectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "isValidContentSelect");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* content_element;
  content_element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!content_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  bool result = impl->isValidContentSelect(content_element, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void TreeScopeRootNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("treeScopeRootNode", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("treeScopeRootNode", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->treeScopeRootNode(node));
}

static void ParentTreeScopeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("parentTreeScope", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("parentTreeScope", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->parentTreeScope(node));
}

static void CompareTreeScopePositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "compareTreeScopePosition");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* tree_scope_1;
  Node* tree_scope_2;
  tree_scope_1 = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!tree_scope_1) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  tree_scope_2 = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!tree_scope_2) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Node'.");
    return;
  }

  uint16_t result = impl->compareTreeScopePosition(tree_scope_1, tree_scope_2, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void UpdateStyleAndReturnAffectedElementCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "updateStyleAndReturnAffectedElementCount");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  uint32_t result = impl->updateStyleAndReturnAffectedElementCount(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void NeedsLayoutCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "needsLayoutCount");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  uint32_t result = impl->needsLayoutCount(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void HitTestCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hitTestCount");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  uint32_t result = impl->hitTestCount(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void HitTestCacheHitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hitTestCacheHits");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  uint32_t result = impl->hitTestCacheHits(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void ElementFromPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "elementFromPoint");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  Document* document;
  double x;
  double y;
  bool ignore_clipping;
  bool allow_child_frame_content;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  x = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ignore_clipping = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  allow_child_frame_content = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  Element* result = impl->elementFromPoint(document, x, y, ignore_clipping, allow_child_frame_content, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ClearHitTestCacheMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "clearHitTestCache");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->clearHitTestCache(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void InnerEditorElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "innerEditorElement");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* container;
  container = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!container) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  Element* result = impl->innerEditorElement(container, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void PauseAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pauseAnimations");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double pause_time;
  pause_time = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->pauseAnimations(pause_time, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void IsCompositedAnimationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isCompositedAnimation", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Animation* animation;
  animation = V8Animation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!animation) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isCompositedAnimation", "Internals", "parameter 1 is not of type 'Animation'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isCompositedAnimation(animation));
}

static void DisableCompositedAnimationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("disableCompositedAnimation", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Animation* animation;
  animation = V8Animation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!animation) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("disableCompositedAnimation", "Internals", "parameter 1 is not of type 'Animation'."));
    return;
  }

  impl->disableCompositedAnimation(animation);
}

static void DisableCSSAdditiveAnimationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->disableCSSAdditiveAnimations();
}

static void AdvanceImageAnimationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "advanceImageAnimation");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* image;
  image = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!image) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  impl->advanceImageAnimation(image, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void NextSiblingInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nextSiblingInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->nextSiblingInFlatTree(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void FirstChildInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "firstChildInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->firstChildInFlatTree(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void LastChildInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "lastChildInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->lastChildInFlatTree(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void NextInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nextInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->nextInFlatTree(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void PreviousInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "previousInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  Node* result = impl->previousInFlatTree(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void VisiblePlaceholderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("visiblePlaceholder", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("visiblePlaceholder", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->visiblePlaceholder(element), info.GetIsolate());
}

static void IsValidationMessageVisibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isValidationMessageVisible", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isValidationMessageVisible", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isValidationMessageVisible(element));
}

static void SelectColorInColorChooserMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("selectColorInColorChooser", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Element* element;
  V8StringResource<> color_value;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("selectColorInColorChooser", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  color_value = info[1];
  if (!color_value.Prepare())
    return;

  impl->selectColorInColorChooser(element, color_value);
}

static void EndColorChooserMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("endColorChooser", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("endColorChooser", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  impl->endColorChooser(element);
}

static void HasAutofocusRequestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  Document* document;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    V8SetReturnValueBool(info, impl->hasAutofocusRequest());
    return;
  }
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("hasAutofocusRequest", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueBool(info, impl->hasAutofocusRequest(document));
}

static void FormControlStateOfHistoryItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "formControlStateOfHistoryItem");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  Vector<String> result = impl->formControlStateOfHistoryItem(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, ToV8(result, info.Holder(), info.GetIsolate()));
}

static void SetFormControlStateOfHistoryItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setFormControlStateOfHistoryItem");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<String> values;
  values = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setFormControlStateOfHistoryItem(values, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AbsoluteCaretBoundsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "absoluteCaretBounds");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  DOMRectReadOnly* result = impl->absoluteCaretBounds(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void BoundingBoxMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("boundingBox", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("boundingBox", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValue(info, impl->boundingBox(element));
}

static void SetMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  Range* range;
  V8StringResource<> marker_type;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!range) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Range'.");
    return;
  }

  marker_type = info[2];
  if (!marker_type.Prepare())
    return;

  impl->setMarker(document, range, marker_type, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void MarkerCountForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerCountForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> marker_type;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  marker_type = info[1];
  if (!marker_type.Prepare())
    return;

  uint32_t result = impl->markerCountForNode(node, marker_type, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void ActiveMarkerCountForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("activeMarkerCountForNode", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("activeMarkerCountForNode", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->activeMarkerCountForNode(node));
}

static void MarkerRangeForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerRangeForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> marker_type;
  uint32_t index;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  marker_type = info[1];
  if (!marker_type.Prepare())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  Range* result = impl->markerRangeForNode(node, marker_type, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void MarkerDescriptionForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerDescriptionForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> marker_type;
  uint32_t index;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  marker_type = info[1];
  if (!marker_type.Prepare())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  String result = impl->markerDescriptionForNode(node, marker_type, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void MarkerBackgroundColorForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerBackgroundColorForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> marker_type;
  uint32_t index;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  marker_type = info[1];
  if (!marker_type.Prepare())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  uint32_t result = impl->markerBackgroundColorForNode(node, marker_type, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void MarkerUnderlineColorForNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markerUnderlineColorForNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Node* node;
  V8StringResource<> marker_type;
  uint32_t index;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  marker_type = info[1];
  if (!marker_type.Prepare())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  uint32_t result = impl->markerUnderlineColorForNode(node, marker_type, index, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueUnsigned(info, result);
}

static void AddTextMatchMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addTextMatchMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Range* range;
  V8StringResource<> match_status;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Range'.");
    return;
  }

  match_status = info[1];
  if (!match_status.Prepare())
    return;

  impl->addTextMatchMarker(range, match_status, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AddCompositionMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addCompositionMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Range* range;
  V8StringResource<> underline_color_value;
  V8StringResource<> thickness_value;
  V8StringResource<> background_color_value;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Range'.");
    return;
  }

  underline_color_value = info[1];
  if (!underline_color_value.Prepare())
    return;

  thickness_value = info[2];
  if (!thickness_value.Prepare())
    return;

  background_color_value = info[3];
  if (!background_color_value.Prepare())
    return;

  impl->addCompositionMarker(range, underline_color_value, thickness_value, background_color_value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AddActiveSuggestionMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addActiveSuggestionMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Range* range;
  V8StringResource<> underline_color_value;
  V8StringResource<> thickness_value;
  V8StringResource<> background_color_value;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Range'.");
    return;
  }

  underline_color_value = info[1];
  if (!underline_color_value.Prepare())
    return;

  thickness_value = info[2];
  if (!thickness_value.Prepare())
    return;

  background_color_value = info[3];
  if (!background_color_value.Prepare())
    return;

  impl->addActiveSuggestionMarker(range, underline_color_value, thickness_value, background_color_value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void AddSuggestionMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addSuggestionMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  Range* range;
  Vector<String> suggestions;
  V8StringResource<> suggestion_highlight_color_value;
  V8StringResource<> underline_color_value;
  V8StringResource<> thickness_value;
  V8StringResource<> background_color_value;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Range'.");
    return;
  }

  suggestions = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  suggestion_highlight_color_value = info[2];
  if (!suggestion_highlight_color_value.Prepare())
    return;

  underline_color_value = info[3];
  if (!underline_color_value.Prepare())
    return;

  thickness_value = info[4];
  if (!thickness_value.Prepare())
    return;

  background_color_value = info[5];
  if (!background_color_value.Prepare())
    return;

  impl->addSuggestionMarker(range, suggestions, suggestion_highlight_color_value, underline_color_value, thickness_value, background_color_value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetTextMatchMarkersActiveMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setTextMatchMarkersActive");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Node* node;
  uint32_t start_offset;
  uint32_t end_offset;
  bool active;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  start_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  end_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  active = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->setTextMatchMarkersActive(node, start_offset, end_offset, active);
}

static void SetMarkedTextMatchesAreHighlightedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setMarkedTextMatchesAreHighlighted");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  bool highlight;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  highlight = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setMarkedTextMatchesAreHighlighted(document, highlight);
}

static void ViewportAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "viewportAsText");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  Document* document;
  float device_pixel_ratio;
  int32_t available_width;
  int32_t available_height;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  device_pixel_ratio = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  available_width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  available_height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  String result = impl->viewportAsText(document, device_pixel_ratio, available_width, available_height, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void ElementShouldAutoCompleteMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "elementShouldAutoComplete");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* input_element;
  input_element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!input_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  bool result = impl->elementShouldAutoComplete(input_element, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void SuggestedValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "suggestedValue");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* input_element;
  input_element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!input_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  String result = impl->suggestedValue(input_element, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void SetSuggestedValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setSuggestedValue");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* input_element;
  V8StringResource<> value;
  input_element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!input_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setSuggestedValue(input_element, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetAutofilledValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setAutofilledValue");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* input_element;
  V8StringResource<> value;
  input_element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!input_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setAutofilledValue(input_element, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetEditingValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setEditingValue");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* input_element;
  V8StringResource<> value;
  input_element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!input_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setEditingValue(input_element, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetAutofilledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setAutofilled");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* input_element;
  bool enabled;
  input_element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!input_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setAutofilled(input_element, enabled, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void RangeFromLocationAndLengthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "rangeFromLocationAndLength");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Element* scope;
  int32_t range_location;
  int32_t range_length;
  scope = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!scope) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  range_location = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  range_length = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->rangeFromLocationAndLength(scope, range_location, range_length));
}

static void LocationFromRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("locationFromRange", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Element* scope;
  Range* range;
  scope = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!scope) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("locationFromRange", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!range) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("locationFromRange", "Internals", "parameter 2 is not of type 'Range'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->locationFromRange(scope, range));
}

static void LengthFromRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lengthFromRange", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Element* scope;
  Range* range;
  scope = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!scope) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lengthFromRange", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!range) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("lengthFromRange", "Internals", "parameter 2 is not of type 'Range'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->lengthFromRange(scope, range));
}

static void RangeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rangeAsText", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Range* range;
  range = V8Range::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!range) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("rangeAsText", "Internals", "parameter 1 is not of type 'Range'."));
    return;
  }

  V8SetReturnValueString(info, impl->rangeAsText(range), info.GetIsolate());
}

static void TouchPositionAdjustedToBestClickableNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchPositionAdjustedToBestClickableNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  Document* document;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[4]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 5 is not of type 'Document'.");
    return;
  }

  DOMPoint* result = impl->touchPositionAdjustedToBestClickableNode(x, y, width, height, document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void TouchNodeAdjustedToBestClickableNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchNodeAdjustedToBestClickableNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  Document* document;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[4]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 5 is not of type 'Document'.");
    return;
  }

  Node* result = impl->touchNodeAdjustedToBestClickableNode(x, y, width, height, document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void TouchPositionAdjustedToBestContextMenuNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchPositionAdjustedToBestContextMenuNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  Document* document;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[4]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 5 is not of type 'Document'.");
    return;
  }

  DOMPoint* result = impl->touchPositionAdjustedToBestContextMenuNode(x, y, width, height, document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void TouchNodeAdjustedToBestContextMenuNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchNodeAdjustedToBestContextMenuNode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  Document* document;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[4]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 5 is not of type 'Document'.");
    return;
  }

  Node* result = impl->touchNodeAdjustedToBestContextMenuNode(x, y, width, height, document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void LastSpellCheckRequestSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "lastSpellCheckRequestSequence");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  int32_t result = impl->lastSpellCheckRequestSequence(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void LastSpellCheckProcessedSequenceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "lastSpellCheckProcessedSequence");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  int32_t result = impl->lastSpellCheckProcessedSequence(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void CancelCurrentSpellCheckRequestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "cancelCurrentSpellCheckRequest");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->cancelCurrentSpellCheckRequest(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void IdleTimeSpellCheckerStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "idleTimeSpellCheckerState");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  String result = impl->idleTimeSpellCheckerState(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void RunIdleTimeSpellCheckerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "runIdleTimeSpellChecker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->runIdleTimeSpellChecker(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void UserPreferredLanguagesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->userPreferredLanguages(), info.Holder(), info.GetIsolate()));
}

static void SetUserPreferredLanguagesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setUserPreferredLanguages");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<String> languages;
  languages = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setUserPreferredLanguages(languages);
}

static void MediaKeysCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->mediaKeysCount());
}

static void MediaKeySessionCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->mediaKeySessionCount());
}

static void ContextLifecycleStateObserverObjectCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("contextLifecycleStateObserverObjectCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("contextLifecycleStateObserverObjectCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->contextLifecycleStateObserverObjectCount(document));
}

static void WheelEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("wheelEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("wheelEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->wheelEventHandlerCount(document));
}

static void ScrollEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->scrollEventHandlerCount(document));
}

static void TouchStartOrMoveEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("touchStartOrMoveEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("touchStartOrMoveEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->touchStartOrMoveEventHandlerCount(document));
}

static void TouchEndOrCancelEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("touchEndOrCancelEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("touchEndOrCancelEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->touchEndOrCancelEventHandlerCount(document));
}

static void PointerEventHandlerCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pointerEventHandlerCount", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("pointerEventHandlerCount", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->pointerEventHandlerCount(document));
}

static void TouchEventTargetLayerRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "touchEventTargetLayerRects");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  HitTestLayerRectList* result = impl->touchEventTargetLayerRects(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void ExecuteCommandMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "executeCommand");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  V8StringResource<> name;
  V8StringResource<> value;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  value = info[2];
  if (!value.Prepare())
    return;

  bool result = impl->executeCommand(document, name, value, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void HTMLNamespaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->htmlNamespace(), info.GetIsolate());
}

static void HTMLTagsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->htmlTags(), info.Holder(), info.GetIsolate()));
}

static void SVGNamespaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->svgNamespace(), info.GetIsolate());
}

static void SVGTagsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->svgTags(), info.Holder(), info.GetIsolate()));
}

static void NodesFromRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nodesFromRect");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  Document* document;
  int32_t x;
  int32_t y;
  uint32_t width;
  uint32_t height;
  bool ignore_clipping;
  bool allow_child_frame_content;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  ignore_clipping = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  allow_child_frame_content = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  NodeList* result = impl->nodesFromRect(document, x, y, width, height, ignore_clipping, allow_child_frame_content, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void HasSpellingMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hasSpellingMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  int32_t from;
  int32_t length;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  from = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  length = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  bool result = impl->hasSpellingMarker(document, from, length, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void HasGrammarMarkerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "hasGrammarMarker");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  Document* document;
  int32_t from;
  int32_t length;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  from = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  length = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  bool result = impl->hasGrammarMarker(document, from, length, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void ReplaceMisspelledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "replaceMisspelled");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  V8StringResource<> replacement;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  replacement = info[1];
  if (!replacement.Prepare())
    return;

  impl->replaceMisspelled(document, replacement, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CanHyphenateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("canHyphenate", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> locale;
  locale = info[0];
  if (!locale.Prepare())
    return;

  V8SetReturnValueBool(info, impl->canHyphenate(locale));
}

static void SetMockHyphenationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setMockHyphenation", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> locale;
  locale = info[0];
  if (!locale.Prepare())
    return;

  impl->setMockHyphenation(locale);
}

static void IsOverwriteModeEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isOverwriteModeEnabled", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isOverwriteModeEnabled", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isOverwriteModeEnabled(document));
}

static void ToggleOverwriteModeEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("toggleOverwriteModeEnabled", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("toggleOverwriteModeEnabled", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  impl->toggleOverwriteModeEnabled(document);
}

static void NumberOfScrollableAreasMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("numberOfScrollableAreas", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("numberOfScrollableAreas", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->numberOfScrollableAreas(document));
}

static void IsPageBoxVisibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "isPageBoxVisible");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  int32_t page_number;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  page_number = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->isPageBoxVisible(document, page_number));
}

static void LayerTreeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "layerTreeAsText");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  uint16_t flags;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    String result = impl->layerTreeAsText(document, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValueString(info, result, info.GetIsolate());
    return;
  }
  flags = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  String result = impl->layerTreeAsText(document, flags, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void ElementLayerTreeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "elementLayerTreeAsText");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  uint16_t flags;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  if (UNLIKELY(num_args_passed <= 1)) {
    String result = impl->elementLayerTreeAsText(element, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValueString(info, result, info.GetIsolate());
    return;
  }
  flags = NativeValueTraits<IDLUnsignedShort>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  String result = impl->elementLayerTreeAsText(element, flags, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void ScrollsWithRespectToMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "scrollsWithRespectTo");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* element_1;
  Element* element_2;
  element_1 = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element_1) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  element_2 = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!element_2) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Element'.");
    return;
  }

  bool result = impl->scrollsWithRespectTo(element_1, element_2, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueBool(info, result);
}

static void ScrollingStateTreeAsTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollingStateTreeAsText", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("scrollingStateTreeAsText", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValueString(info, impl->scrollingStateTreeAsText(document), info.GetIsolate());
}

static void MainThreadScrollingReasonsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "mainThreadScrollingReasons");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  String result = impl->mainThreadScrollingReasons(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void NonFastScrollableRectsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nonFastScrollableRects");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  DOMRectList* result = impl->nonFastScrollableRects(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void MarkGestureScrollRegionDirtyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "markGestureScrollRegionDirty");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->markGestureScrollRegionDirty(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void EvictAllResourcesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->evictAllResources();
}

static void NumberOfLiveNodesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->numberOfLiveNodes());
}

static void NumberOfLiveDocumentsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->numberOfLiveDocuments());
}

static void CounterValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("counterValue", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("counterValue", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->counterValue(element), info.GetIsolate());
}

static void PageNumberMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pageNumber");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  float page_width;
  float page_height;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  if (!info[1]->IsUndefined()) {
    page_width = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    page_width = 800;
  }
  if (!info[2]->IsUndefined()) {
    page_height = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    page_height = 600;
  }

  int32_t result = impl->pageNumber(element, page_width, page_height, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void ShortcutIconURLsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shortcutIconURLs", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shortcutIconURLs", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValue(info, ToV8(impl->shortcutIconURLs(document), info.Holder(), info.GetIsolate()));
}

static void AllIconURLsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("allIconURLs", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("allIconURLs", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  V8SetReturnValue(info, ToV8(impl->allIconURLs(document), info.Holder(), info.GetIsolate()));
}

static void NumberOfPagesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "numberOfPages");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  double page_width_in_pixels;
  double page_height_in_pixels;
  if (!info[0]->IsUndefined()) {
    page_width_in_pixels = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    page_width_in_pixels = 800;
  }
  if (!info[1]->IsUndefined()) {
    page_height_in_pixels = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[1], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    page_height_in_pixels = 600;
  }

  int32_t result = impl->numberOfPages(page_width_in_pixels, page_height_in_pixels, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueInt(info, result);
}

static void PagePropertyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pageProperty");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  V8StringResource<> property_name;
  int32_t page_number;
  property_name = info[0];
  if (!property_name.Prepare())
    return;

  page_number = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  String result = impl->pageProperty(property_name, page_number, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void PageSizeAndMarginsInPixelsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pageSizeAndMarginsInPixels");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  int32_t page_index;
  int32_t width;
  int32_t height;
  int32_t margin_top;
  int32_t margin_right;
  int32_t margin_bottom;
  int32_t margin_left;
  page_index = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  margin_top = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  margin_right = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  margin_bottom = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  margin_left = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  String result = impl->pageSizeAndMarginsInPixels(page_index, width, height, margin_top, margin_right, margin_bottom, margin_left, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void PageScaleFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "pageScaleFactor");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  float result = impl->pageScaleFactor(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void SetPageScaleFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setPageScaleFactor");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float scale_factor;
  scale_factor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setPageScaleFactor(scale_factor, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetPageScaleFactorLimitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setPageScaleFactorLimits");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float min_scale_factor;
  float max_scale_factor;
  min_scale_factor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  max_scale_factor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setPageScaleFactorLimits(min_scale_factor, max_scale_factor, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetIsCursorVisibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setIsCursorVisible");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  bool is_visible;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  is_visible = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setIsCursorVisible(document, is_visible, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void EffectivePreloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("effectivePreload", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLMediaElement* media_element;
  media_element = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!media_element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("effectivePreload", "Internals", "parameter 1 is not of type 'HTMLMediaElement'."));
    return;
  }

  V8SetReturnValueString(info, impl->effectivePreload(media_element), info.GetIsolate());
}

static void MediaPlayerRemoteRouteAvailabilityChangedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "mediaPlayerRemoteRouteAvailabilityChanged");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLMediaElement* media_element;
  bool available;
  media_element = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!media_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  available = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->mediaPlayerRemoteRouteAvailabilityChanged(media_element, available);
}

static void MediaPlayerPlayingRemotelyChangedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "mediaPlayerPlayingRemotelyChanged");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLMediaElement* media_element;
  bool remote;
  media_element = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!media_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  remote = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->mediaPlayerPlayingRemotelyChanged(media_element, remote);
}

static void SetPersistentMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setPersistent");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLVideoElement* video;
  bool persistent;
  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!video) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'HTMLVideoElement'.");
    return;
  }

  persistent = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setPersistent(video, persistent);
}

static void ForceStaleStateForMediaElementMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceStaleStateForMediaElement");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLMediaElement* media_element;
  int32_t state;
  media_element = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!media_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  state = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->forceStaleStateForMediaElement(media_element, state);
}

static void IsMediaElementSuspendedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isMediaElementSuspended", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLMediaElement* media_element;
  media_element = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!media_element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isMediaElementSuspended", "Internals", "parameter 1 is not of type 'HTMLMediaElement'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isMediaElementSuspended(media_element));
}

static void SetMediaControlsTestModeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setMediaControlsTestMode");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  HTMLMediaElement* media_element;
  bool enable;
  media_element = V8HTMLMediaElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!media_element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'HTMLMediaElement'.");
    return;
  }

  enable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setMediaControlsTestMode(media_element, enable);
}

static void RegisterURLSchemeAsBypassingContentSecurityPolicy1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8StringResource<> scheme;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  impl->registerURLSchemeAsBypassingContentSecurityPolicy(scheme);
}

static void RegisterURLSchemeAsBypassingContentSecurityPolicy2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "registerURLSchemeAsBypassingContentSecurityPolicy");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8StringResource<> scheme;
  Vector<String> policy_areas;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  policy_areas = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->registerURLSchemeAsBypassingContentSecurityPolicy(scheme, policy_areas);
}

static void RegisterURLSchemeAsBypassingContentSecurityPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 1:
      if (true) {
        RegisterURLSchemeAsBypassingContentSecurityPolicy1Method(info);
        return;
      }
      break;
    case 2:
      if (true) {
        RegisterURLSchemeAsBypassingContentSecurityPolicy2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "registerURLSchemeAsBypassingContentSecurityPolicy");
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void RemoveURLSchemeRegisteredAsBypassingContentSecurityPolicyMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("removeURLSchemeRegisteredAsBypassingContentSecurityPolicy", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> scheme;
  scheme = info[0];
  if (!scheme.Prepare())
    return;

  impl->removeURLSchemeRegisteredAsBypassingContentSecurityPolicy(scheme);
}

static void TypeConversionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->typeConversions());
}

static void GetReferencedFilePathsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getReferencedFilePaths(), info.Holder(), info.GetIsolate()));
}

static void StartTrackingRepaintsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "startTrackingRepaints");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->startTrackingRepaints(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void StopTrackingRepaintsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "stopTrackingRepaints");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->stopTrackingRepaints(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void UpdateLayoutAndRunPostLayoutTasksMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "updateLayoutAndRunPostLayoutTasks");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  Node* node;
  if (!info[0]->IsUndefined()) {
    node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
    if (!node && !IsUndefinedOrNull(info[0])) {
      exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
      return;
    }
  } else {
    node = nullptr;
  }

  impl->updateLayoutAndRunPostLayoutTasks(node, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ForceFullRepaintMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceFullRepaint");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->forceFullRepaint(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void DraggableRegionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "draggableRegions");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  DOMRectList* result = impl->draggableRegions(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void NonDraggableRegionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "nonDraggableRegions");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  DOMRectList* result = impl->nonDraggableRegions(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void GetCurrentCursorInfoMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->getCurrentCursorInfo(), info.GetIsolate());
}

static void MarkerTextForListItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("markerTextForListItem", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("markerTextForListItem", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->markerTextForListItem(element), info.GetIsolate());
}

static void DeserializeBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deserializeBuffer", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DOMArrayBuffer* buffer;
  buffer = info[0]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
  if (!buffer) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deserializeBuffer", "Internals", "parameter 1 is not of type 'ArrayBuffer'."));
    return;
  }

  V8SetReturnValue(info, V8Deserialize(info.GetIsolate(), impl->deserializeBuffer(buffer).get()));
}

static void SerializeObjectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "serializeObject");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  scoped_refptr<SerializedScriptValue> obj;
  obj = NativeValueTraits<SerializedScriptValue>::NativeValue(info.GetIsolate(), info[0], SerializedScriptValue::SerializeOptions(SerializedScriptValue::kNotForStorage), exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->serializeObject(std::move(obj)));
}

static void DeserializeBufferContainingWasmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deserializeBufferContainingWasm", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  DOMArrayBuffer* buffer;
  buffer = info[0]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
  if (!buffer) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deserializeBufferContainingWasm", "Internals", "parameter 1 is not of type 'ArrayBuffer'."));
    return;
  }

  ScriptValue result = impl->deserializeBufferContainingWasm(script_state, buffer);
  V8SetReturnValue(info, result.V8Value());
}

static void SerializeWithInlineWasmMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("serializeWithInlineWasm", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  ScriptValue obj;
  obj = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  V8SetReturnValue(info, impl->serializeWithInlineWasm(obj));
}

static void ForceReloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceReload");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool end_to_end;
  end_to_end = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->forceReload(end_to_end);
}

static void GetImageSourceURLMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getImageSourceURL", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getImageSourceURL", "Internals", "parameter 1 is not of type 'Element'."));
    return;
  }

  V8SetReturnValueString(info, impl->getImageSourceURL(element), info.GetIsolate());
}

static void ForceImageReloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceImageReload");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Element* element;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  impl->forceImageReload(element, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SelectMenuListTextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("selectMenuListText", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLSelectElement* select;
  select = V8HTMLSelectElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!select) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("selectMenuListText", "Internals", "parameter 1 is not of type 'HTMLSelectElement'."));
    return;
  }

  V8SetReturnValueString(info, impl->selectMenuListText(select), info.GetIsolate());
}

static void IsSelectPopupVisibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSelectPopupVisible", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSelectPopupVisible", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isSelectPopupVisible(node));
}

static void SelectPopupItemStyleIsRtlMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "selectPopupItemStyleIsRtl");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* select;
  int32_t item_index;
  select = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!select) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  item_index = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->selectPopupItemStyleIsRtl(select, item_index));
}

static void SelectPopupItemStyleFontHeightMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "selectPopupItemStyleFontHeight");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* select;
  int32_t item_index;
  select = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!select) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  item_index = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueInt(info, impl->selectPopupItemStyleFontHeight(select, item_index));
}

static void ResetTypeAheadSessionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("resetTypeAheadSession", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLSelectElement* select;
  select = V8HTMLSelectElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!select) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("resetTypeAheadSession", "Internals", "parameter 1 is not of type 'HTMLSelectElement'."));
    return;
  }

  impl->resetTypeAheadSession(select);
}

static void GetDragCaretMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->getDragCaret());
}

static void GetSelectionInFlatTreeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "getSelectionInFlatTree");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  DOMWindow* window;
  window = ToDOMWindow(info.GetIsolate(), info[0]);
  if (!window) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Window'.");
    return;
  }

  StaticSelection* result = impl->getSelectionInFlatTree(window, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void SelectionBoundsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "selectionBounds");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  DOMRect* result = impl->selectionBounds(exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void LoseSharedGraphicsContext3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->loseSharedGraphicsContext3D());
}

static void ForceCompositingUpdateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "forceCompositingUpdate");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Document* document;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  impl->forceCompositingUpdate(document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void SetZoomFactorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setZoomFactor");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float factor;
  factor = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setZoomFactor(factor);
}

static void SetShouldRevealPasswordMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setShouldRevealPassword");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Element* element;
  bool reveal;
  element = V8Element::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Element'.");
    return;
  }

  reveal = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setShouldRevealPassword(element, reveal, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void CreateResolvedPromiseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "createResolvedPromise");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue value;
  value = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  ScriptPromise result = impl->createResolvedPromise(script_state, value);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateRejectedPromiseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "createRejectedPromise");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptValue reason;
  reason = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);

  ScriptPromise result = impl->createRejectedPromise(script_state, reason);
  V8SetReturnValue(info, result.V8Value());
}

static void AddOneToPromiseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addOneToPromise");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  ScriptPromise promise;
  promise = ScriptPromise::Cast(ScriptState::Current(info.GetIsolate()), info[0]);
  if (!promise.IsUndefinedOrNull() && !promise.IsObject()) {
    exception_state.ThrowTypeError("parameter 1 ('promise') is not an object.");
    return;
  }

  ScriptPromise result = impl->addOneToPromise(script_state, promise);
  V8SetReturnValue(info, result.V8Value());
}

static void PromiseCheckMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheck");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  int32_t arg_1;
  bool arg_2;
  ScriptValue arg_3;
  V8StringResource<> arg_4;
  Vector<String> arg_5;
  arg_1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  arg_2 = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (info[2]->IsObject()) {
    arg_3 = ScriptValue(ScriptState::Current(info.GetIsolate()), info[2]);
  } else {
    exception_state.ThrowTypeError("parameter 3 ('arg3') is not an object.");
    return;
  }

  arg_4 = info[3];
  if (!arg_4.Prepare(exception_state))
    return;

  arg_5 = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->promiseCheck(script_state, arg_1, arg_2, arg_3, arg_4, arg_5, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result.V8Value());
}

static void PromiseCheckWithoutExceptionStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckWithoutExceptionState");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  ScriptValue arg_1;
  V8StringResource<> arg_2;
  Vector<String> variadic;
  if (info[0]->IsObject()) {
    arg_1 = ScriptValue(ScriptState::Current(info.GetIsolate()), info[0]);
  } else {
    exception_state.ThrowTypeError("parameter 1 ('arg1') is not an object.");
    return;
  }

  arg_2 = info[1];
  if (!arg_2.Prepare(exception_state))
    return;

  variadic = ToImplArguments<IDLString>(info, 2, exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->promiseCheckWithoutExceptionState(script_state, arg_1, arg_2, variadic);
  V8SetReturnValue(info, result.V8Value());
}

static void PromiseCheckRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckRange");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint8_t arg_1;
  arg_1 = NativeValueTraits<IDLOctetEnforceRange>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->promiseCheckRange(script_state, arg_1);
  V8SetReturnValue(info, result.V8Value());
}

static void PromiseCheckOverload1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckOverload");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Location* arg_1;
  arg_1 = V8Location::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arg_1) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Location'.");
    return;
  }

  ScriptPromise result = impl->promiseCheckOverload(script_state, arg_1);
  V8SetReturnValue(info, result.V8Value());
}

static void PromiseCheckOverload2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckOverload");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Document* arg_1;
  arg_1 = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arg_1) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  ScriptPromise result = impl->promiseCheckOverload(script_state, arg_1);
  V8SetReturnValue(info, result.V8Value());
}

static void PromiseCheckOverload3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckOverload");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  Location* arg_1;
  int32_t arg_2;
  int32_t arg_3;
  arg_1 = V8Location::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!arg_1) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Location'.");
    return;
  }

  arg_2 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  arg_3 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->promiseCheckOverload(script_state, arg_1, arg_2, arg_3);
  V8SetReturnValue(info, result.V8Value());
}

static void PromiseCheckOverloadMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 1:
      if (V8Location::HasInstance(info[0], info.GetIsolate())) {
        PromiseCheckOverload1Method(info);
        return;
      }
      if (V8Document::HasInstance(info[0], info.GetIsolate())) {
        PromiseCheckOverload2Method(info);
        return;
      }
      break;
    case 3:
      if (true) {
        PromiseCheckOverload3Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "promiseCheckOverload");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);
  if (is_arity_error) {
    if (info.Length() < 1) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
      return;
    }
    if (info.Length() >= 1) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[1, 3]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void SetValueForUserMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setValueForUser", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  HTMLInputElement* element;
  V8StringResource<> value;
  element = V8HTMLInputElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!element) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("setValueForUser", "Internals", "parameter 1 is not of type 'HTMLInputElement'."));
    return;
  }

  value = info[1];
  if (!value.Prepare())
    return;

  impl->setValueForUser(element, value);
}

static void SetFocusedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setFocused");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool focused;
  focused = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setFocused(focused);
}

static void SetInitialFocusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setInitialFocus");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool reverse;
  reverse = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setInitialFocus(reverse);
}

static void CountHitRegionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("countHitRegions", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  CanvasRenderingContext2D* context;
  context = V8CanvasRenderingContext2D::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!context) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("countHitRegions", "Internals", "parameter 1 is not of type 'CanvasRenderingContext2D'."));
    return;
  }

  V8SetReturnValueUnsigned(info, impl->countHitRegions(context));
}

static void IsInCanvasFontCacheMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isInCanvasFontCache", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Document* document;
  V8StringResource<> font_string;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isInCanvasFontCache", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  font_string = info[1];
  if (!font_string.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isInCanvasFontCache(document, font_string));
}

static void CanvasFontCacheMaxFontsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->canvasFontCacheMaxFonts());
}

static void DictionaryTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->dictionaryTest());
}

static void RecordTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->recordTest());
}

static void SequenceTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->sequenceTest());
}

static void UnionTypesTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->unionTypesTest());
}

static void CallbackFunctionTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->callbackFunctionTest());
}

static void SetScrollChainMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setScrollChain");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  ScrollState* scroll_state;
  HeapVector<Member<Element>> elements;
  scroll_state = V8ScrollState::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!scroll_state) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'ScrollState'.");
    return;
  }

  elements = NativeValueTraits<IDLSequence<Element>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setScrollChain(scroll_state, elements, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ScheduleBlinkGCMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->scheduleBlinkGC();
}

static void SelectedHTMLForClipboardMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->selectedHTMLForClipboard(), info.GetIsolate());
}

static void SelectedTextForClipboardMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->selectedTextForClipboard(), info.GetIsolate());
}

static void SetVisualViewportOffsetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setVisualViewportOffset");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->setVisualViewportOffset(x, y);
}

static void IsUseCountedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "isUseCounted");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  uint32_t feature;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  feature = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->isUseCounted(document, feature));
}

static void IsCSSPropertyUseCountedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isCSSPropertyUseCounted", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Document* document;
  V8StringResource<> property_name;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isCSSPropertyUseCounted", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  property_name = info[1];
  if (!property_name.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isCSSPropertyUseCounted(document, property_name));
}

static void IsAnimatedCSSPropertyUseCountedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isAnimatedCSSPropertyUseCounted", "Internals", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  Document* document;
  V8StringResource<> property_name;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isAnimatedCSSPropertyUseCounted", "Internals", "parameter 1 is not of type 'Document'."));
    return;
  }

  property_name = info[1];
  if (!property_name.Prepare())
    return;

  V8SetReturnValueBool(info, impl->isAnimatedCSSPropertyUseCounted(document, property_name));
}

static void ClearUseCounterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "clearUseCounter");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  uint32_t feature;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  feature = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->clearUseCounter(document, feature);
}

static void GetCSSPropertyLonghandsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getCSSPropertyLonghands(), info.Holder(), info.GetIsolate()));
}

static void GetCSSPropertyShorthandsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getCSSPropertyShorthands(), info.Holder(), info.GetIsolate()));
}

static void GetCSSPropertyAliasesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->getCSSPropertyAliases(), info.Holder(), info.GetIsolate()));
}

static void ObserveUseCounterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "observeUseCounter");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8Internals::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  Internals* impl = V8Internals::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Document* document;
  uint32_t feature;
  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Document'.");
    return;
  }

  feature = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptPromise result = impl->observeUseCounter(script_state, document, feature);
  V8SetReturnValue(info, result.V8Value());
}

static void UnscopableMethodMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueString(info, impl->unscopableMethod(), info.GetIsolate());
}

static void SetCapsLockStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setCapsLockState");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enabled;
  enabled = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setCapsLockState(enabled);
}

static void SetScrollbarVisibilityInScrollableAreaMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setScrollbarVisibilityInScrollableArea");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  Node* node;
  bool visible;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'Node'.");
    return;
  }

  visible = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->setScrollbarVisibilityInScrollableArea(node, visible));
}

static void MonotonicTimeToZeroBasedDocumentTimeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "monotonicTimeToZeroBasedDocumentTime");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  double platform_time;
  platform_time = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  double result = impl->monotonicTimeToZeroBasedDocumentTime(platform_time, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void CurrentTimeTicksMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, static_cast<double>(impl->currentTimeTicks()));
}

static void GetScrollAnimationStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getScrollAnimationState", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getScrollAnimationState", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueString(info, impl->getScrollAnimationState(node), info.GetIsolate());
}

static void GetProgrammaticScrollAnimationStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgrammaticScrollAnimationState", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgrammaticScrollAnimationState", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValueString(info, impl->getProgrammaticScrollAnimationState(node), info.GetIsolate());
}

static void VisualRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("visualRect", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Node* node;
  node = V8Node::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!node) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("visualRect", "Internals", "parameter 1 is not of type 'Node'."));
    return;
  }

  V8SetReturnValue(info, impl->visualRect(node));
}

static void OriginTrialsTestMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->originTrialsTest());
}

static void CrashMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->crash();
}

static void EvaluateInInspectorOverlayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("evaluateInInspectorOverlay", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> script;
  script = info[0];
  if (!script.Prepare())
    return;

  V8SetReturnValueString(info, impl->evaluateInInspectorOverlay(script), info.GetIsolate());
}

static void SetIsLowEndDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setIsLowEndDevice");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool is_low_end_device;
  is_low_end_device = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setIsLowEndDevice(is_low_end_device);
}

static void IsLowEndDeviceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isLowEndDevice());
}

static void SupportedTextEncodingLabelsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValue(info, ToV8(impl->supportedTextEncodingLabels(), info.Holder(), info.GetIsolate()));
}

static void SimulateRasterUnderInvalidationsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "simulateRasterUnderInvalidations");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool enable;
  enable = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->simulateRasterUnderInvalidations(enable);
}

static void BypassLongCompileThresholdOnceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "BypassLongCompileThresholdOnce");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->BypassLongCompileThresholdOnce(exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void LifecycleUpdateCountMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->LifecycleUpdateCount());
}

static void DisableIntersectionObserverThrottleDelayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  impl->DisableIntersectionObserverThrottleDelay();
}

static void IsSiteIsolatedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSiteIsolated", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLIFrameElement* iframe;
  iframe = V8HTMLIFrameElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!iframe) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSiteIsolated", "Internals", "parameter 1 is not of type 'HTMLIFrameElement'."));
    return;
  }

  V8SetReturnValue(info, impl->isSiteIsolated(iframe));
}

static void IsTrackingOcclusionForIFrameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTrackingOcclusionForIFrame", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  HTMLIFrameElement* iframe;
  iframe = V8HTMLIFrameElement::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!iframe) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTrackingOcclusionForIFrame", "Internals", "parameter 1 is not of type 'HTMLIFrameElement'."));
    return;
  }

  V8SetReturnValue(info, impl->isTrackingOcclusionForIFrame(iframe));
}

static void AddEmbedderCustomElementNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "addEmbedderCustomElementName");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> name;
  name = info[0];
  if (!name.Prepare())
    return;

  impl->addEmbedderCustomElementName(name, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void ResolveModuleSpecifierMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "resolveModuleSpecifier");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  V8StringResource<> specifier;
  V8StringResource<> base_url;
  Document* document;
  specifier = info[0];
  if (!specifier.Prepare())
    return;

  base_url = info[1];
  if (!base_url.Prepare())
    return;

  document = V8Document::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!document) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Document'.");
    return;
  }

  String result = impl->resolveModuleSpecifier(specifier, base_url, document, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueString(info, result, info.GetIsolate());
}

static void SetDeviceEmulationScaleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "Internals", "setDeviceEmulationScale");

  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float scale;
  scale = NativeValueTraits<IDLFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->setDeviceEmulationScale(scale, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void GetInternalResponseURLListMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getInternalResponseURLList", "Internals", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  Response* response;
  response = V8Response::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!response) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getInternalResponseURLList", "Internals", "parameter 1 is not of type 'Response'."));
    return;
  }

  V8SetReturnValue(info, ToV8(InternalsFetch::getInternalResponseURLList(*impl, response), info.Holder(), info.GetIsolate()));
}

static void IndexedPropertyGetter(
    uint32_t index,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  Internals* impl = V8Internals::ToImpl(info.Holder());

  // We assume that all the implementations support length() method, although
  // the spec doesn't require that length() must exist.  It's okay that
  // the interface does not have length attribute as long as the
  // implementation supports length() member function.
  if (index >= impl->length())
    return;  // Returns undefined due to out-of-range.

  int32_t result = impl->AnonymousIndexedGetter(index);
  V8SetReturnValueInt(info, result);
}

static void IndexedPropertyDescriptor(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#LegacyPlatformObjectGetOwnProperty
  // Steps 1.1 to 1.2.4 are covered here: we rely on indexedPropertyGetter() to
  // call the getter function and check that |index| is a valid property index,
  // in which case it will have set info.GetReturnValue() to something other
  // than undefined.
  V8Internals::IndexedPropertyGetterCallback(index, info);
  v8::Local<v8::Value> getter_value = info.GetReturnValue().Get();
  if (!getter_value->IsUndefined()) {
    // 1.2.5. Let |desc| be a newly created Property Descriptor with no fields.
    // 1.2.6. Set desc.[[Value]] to the result of converting value to an
    //        ECMAScript value.
    // 1.2.7. If O implements an interface with an indexed property setter,
    //        then set desc.[[Writable]] to true, otherwise set it to false.
    v8::PropertyDescriptor desc(getter_value, false);
    // 1.2.8. Set desc.[[Enumerable]] and desc.[[Configurable]] to true.
    desc.set_enumerable(true);
    desc.set_configurable(true);
    // 1.2.9. Return |desc|.
    V8SetReturnValue(info, desc);
  }
}

}  // namespace internals_v8_internal

void V8Internals::PagePopupWindowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pagePopupWindow_Getter");

  internals_v8_internal::PagePopupWindowAttributeGetter(info);
}

void V8Internals::SettingsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_settings_Getter");

  internals_v8_internal::SettingsAttributeGetter(info);
}

void V8Internals::RuntimeFlagsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_runtimeFlags_Getter");

  internals_v8_internal::RuntimeFlagsAttributeGetter(info);
}

void V8Internals::WorkerThreadCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_workerThreadCount_Getter");

  internals_v8_internal::WorkerThreadCountAttributeGetter(info);
}

void V8Internals::CursorUpdatePendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_cursorUpdatePending_Getter");

  internals_v8_internal::CursorUpdatePendingAttributeGetter(info);
}

void V8Internals::FakeMouseMovePendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_fakeMouseMovePending_Getter");

  internals_v8_internal::FakeMouseMovePendingAttributeGetter(info);
}

void V8Internals::VisibleSelectionAnchorNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visibleSelectionAnchorNode_Getter");

  internals_v8_internal::VisibleSelectionAnchorNodeAttributeGetter(info);
}

void V8Internals::VisibleSelectionAnchorOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visibleSelectionAnchorOffset_Getter");

  internals_v8_internal::VisibleSelectionAnchorOffsetAttributeGetter(info);
}

void V8Internals::VisibleSelectionFocusNodeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visibleSelectionFocusNode_Getter");

  internals_v8_internal::VisibleSelectionFocusNodeAttributeGetter(info);
}

void V8Internals::VisibleSelectionFocusOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visibleSelectionFocusOffset_Getter");

  internals_v8_internal::VisibleSelectionFocusOffsetAttributeGetter(info);
}

void V8Internals::TextAffinityAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_textAffinity_Getter");

  internals_v8_internal::TextAffinityAttributeGetter(info);
}

void V8Internals::InterestedElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_interestedElement_Getter");

  internals_v8_internal::InterestedElementAttributeGetter(info);
}

void V8Internals::LengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_length_Getter");

  internals_v8_internal::LengthAttributeGetter(info);
}

void V8Internals::UnscopableAttributeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_unscopableAttribute_Getter");

  internals_v8_internal::UnscopableAttributeAttributeGetter(info);
}

void V8Internals::ObserveGCMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_observeGC");

  internals_v8_internal::ObserveGCMethod(info);
}

void V8Internals::ElementLayoutTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_elementLayoutTreeAsText");

  internals_v8_internal::ElementLayoutTreeAsTextMethod(info);
}

void V8Internals::IsPreloadedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isPreloaded");

  internals_v8_internal::IsPreloadedMethod(info);
}

void V8Internals::IsPreloadedByMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isPreloadedBy");

  internals_v8_internal::IsPreloadedByMethod(info);
}

void V8Internals::IsLoadingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isLoading");

  internals_v8_internal::IsLoadingMethod(info);
}

void V8Internals::IsLoadingFromMemoryCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isLoadingFromMemoryCache");

  internals_v8_internal::IsLoadingFromMemoryCacheMethod(info);
}

void V8Internals::GetResourcePriorityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getResourcePriority");

  internals_v8_internal::GetResourcePriorityMethod(info);
}

void V8Internals::GetResourceHeaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getResourceHeader");

  internals_v8_internal::GetResourceHeaderMethod(info);
}

void V8Internals::DoesWindowHaveUrlFragmentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_doesWindowHaveUrlFragment");

  internals_v8_internal::DoesWindowHaveUrlFragmentMethod(info);
}

void V8Internals::ComputedStyleIncludingVisitedInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_computedStyleIncludingVisitedInfo");

  internals_v8_internal::ComputedStyleIncludingVisitedInfoMethod(info);
}

void V8Internals::CreateUserAgentShadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_createUserAgentShadowRoot");

  internals_v8_internal::CreateUserAgentShadowRootMethod(info);
}

void V8Internals::ShadowRootMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_shadowRoot");

  internals_v8_internal::ShadowRootMethod(info);
}

void V8Internals::SetBrowserControlsStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setBrowserControlsState");

  internals_v8_internal::SetBrowserControlsStateMethod(info);
}

void V8Internals::SetBrowserControlsShownRatioMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setBrowserControlsShownRatio");

  internals_v8_internal::SetBrowserControlsShownRatioMethod(info);
}

void V8Internals::EffectiveRootScrollerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_effectiveRootScroller");

  internals_v8_internal::EffectiveRootScrollerMethod(info);
}

void V8Internals::ShadowRootTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_shadowRootType");

  internals_v8_internal::ShadowRootTypeMethod(info);
}

void V8Internals::HasShadowInsertionPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasShadowInsertionPoint");

  internals_v8_internal::HasShadowInsertionPointMethod(info);
}

void V8Internals::HasContentElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasContentElement");

  internals_v8_internal::HasContentElementMethod(info);
}

void V8Internals::CountElementShadowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_countElementShadow");

  internals_v8_internal::CountElementShadowMethod(info);
}

void V8Internals::ShadowPseudoIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_shadowPseudoId");

  internals_v8_internal::ShadowPseudoIdMethod(info);
}

void V8Internals::IsValidContentSelectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isValidContentSelect");

  internals_v8_internal::IsValidContentSelectMethod(info);
}

void V8Internals::TreeScopeRootNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_treeScopeRootNode");

  internals_v8_internal::TreeScopeRootNodeMethod(info);
}

void V8Internals::ParentTreeScopeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_parentTreeScope");

  internals_v8_internal::ParentTreeScopeMethod(info);
}

void V8Internals::CompareTreeScopePositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_compareTreeScopePosition");

  internals_v8_internal::CompareTreeScopePositionMethod(info);
}

void V8Internals::UpdateStyleAndReturnAffectedElementCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_updateStyleAndReturnAffectedElementCount");

  internals_v8_internal::UpdateStyleAndReturnAffectedElementCountMethod(info);
}

void V8Internals::NeedsLayoutCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_needsLayoutCount");

  internals_v8_internal::NeedsLayoutCountMethod(info);
}

void V8Internals::HitTestCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hitTestCount");

  internals_v8_internal::HitTestCountMethod(info);
}

void V8Internals::HitTestCacheHitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hitTestCacheHits");

  internals_v8_internal::HitTestCacheHitsMethod(info);
}

void V8Internals::ElementFromPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_elementFromPoint");

  internals_v8_internal::ElementFromPointMethod(info);
}

void V8Internals::ClearHitTestCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_clearHitTestCache");

  internals_v8_internal::ClearHitTestCacheMethod(info);
}

void V8Internals::InnerEditorElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_innerEditorElement");

  internals_v8_internal::InnerEditorElementMethod(info);
}

void V8Internals::PauseAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pauseAnimations");

  internals_v8_internal::PauseAnimationsMethod(info);
}

void V8Internals::IsCompositedAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isCompositedAnimation");

  internals_v8_internal::IsCompositedAnimationMethod(info);
}

void V8Internals::DisableCompositedAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_disableCompositedAnimation");

  internals_v8_internal::DisableCompositedAnimationMethod(info);
}

void V8Internals::DisableCSSAdditiveAnimationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_disableCSSAdditiveAnimations");

  internals_v8_internal::DisableCSSAdditiveAnimationsMethod(info);
}

void V8Internals::AdvanceImageAnimationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_advanceImageAnimation");

  internals_v8_internal::AdvanceImageAnimationMethod(info);
}

void V8Internals::NextSiblingInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nextSiblingInFlatTree");

  internals_v8_internal::NextSiblingInFlatTreeMethod(info);
}

void V8Internals::FirstChildInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_firstChildInFlatTree");

  internals_v8_internal::FirstChildInFlatTreeMethod(info);
}

void V8Internals::LastChildInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_lastChildInFlatTree");

  internals_v8_internal::LastChildInFlatTreeMethod(info);
}

void V8Internals::NextInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nextInFlatTree");

  internals_v8_internal::NextInFlatTreeMethod(info);
}

void V8Internals::PreviousInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_previousInFlatTree");

  internals_v8_internal::PreviousInFlatTreeMethod(info);
}

void V8Internals::VisiblePlaceholderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visiblePlaceholder");

  internals_v8_internal::VisiblePlaceholderMethod(info);
}

void V8Internals::IsValidationMessageVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isValidationMessageVisible");

  internals_v8_internal::IsValidationMessageVisibleMethod(info);
}

void V8Internals::SelectColorInColorChooserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectColorInColorChooser");

  internals_v8_internal::SelectColorInColorChooserMethod(info);
}

void V8Internals::EndColorChooserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_endColorChooser");

  internals_v8_internal::EndColorChooserMethod(info);
}

void V8Internals::HasAutofocusRequestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasAutofocusRequest");

  internals_v8_internal::HasAutofocusRequestMethod(info);
}

void V8Internals::FormControlStateOfHistoryItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_formControlStateOfHistoryItem");

  internals_v8_internal::FormControlStateOfHistoryItemMethod(info);
}

void V8Internals::SetFormControlStateOfHistoryItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setFormControlStateOfHistoryItem");

  internals_v8_internal::SetFormControlStateOfHistoryItemMethod(info);
}

void V8Internals::AbsoluteCaretBoundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_absoluteCaretBounds");

  internals_v8_internal::AbsoluteCaretBoundsMethod(info);
}

void V8Internals::BoundingBoxMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_boundingBox");

  internals_v8_internal::BoundingBoxMethod(info);
}

void V8Internals::SetMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setMarker");

  internals_v8_internal::SetMarkerMethod(info);
}

void V8Internals::MarkerCountForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerCountForNode");

  internals_v8_internal::MarkerCountForNodeMethod(info);
}

void V8Internals::ActiveMarkerCountForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_activeMarkerCountForNode");

  internals_v8_internal::ActiveMarkerCountForNodeMethod(info);
}

void V8Internals::MarkerRangeForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerRangeForNode");

  internals_v8_internal::MarkerRangeForNodeMethod(info);
}

void V8Internals::MarkerDescriptionForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerDescriptionForNode");

  internals_v8_internal::MarkerDescriptionForNodeMethod(info);
}

void V8Internals::MarkerBackgroundColorForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerBackgroundColorForNode");

  internals_v8_internal::MarkerBackgroundColorForNodeMethod(info);
}

void V8Internals::MarkerUnderlineColorForNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerUnderlineColorForNode");

  internals_v8_internal::MarkerUnderlineColorForNodeMethod(info);
}

void V8Internals::AddTextMatchMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addTextMatchMarker");

  internals_v8_internal::AddTextMatchMarkerMethod(info);
}

void V8Internals::AddCompositionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addCompositionMarker");

  internals_v8_internal::AddCompositionMarkerMethod(info);
}

void V8Internals::AddActiveSuggestionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addActiveSuggestionMarker");

  internals_v8_internal::AddActiveSuggestionMarkerMethod(info);
}

void V8Internals::AddSuggestionMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addSuggestionMarker");

  internals_v8_internal::AddSuggestionMarkerMethod(info);
}

void V8Internals::SetTextMatchMarkersActiveMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setTextMatchMarkersActive");

  internals_v8_internal::SetTextMatchMarkersActiveMethod(info);
}

void V8Internals::SetMarkedTextMatchesAreHighlightedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setMarkedTextMatchesAreHighlighted");

  internals_v8_internal::SetMarkedTextMatchesAreHighlightedMethod(info);
}

void V8Internals::ViewportAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_viewportAsText");

  internals_v8_internal::ViewportAsTextMethod(info);
}

void V8Internals::ElementShouldAutoCompleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_elementShouldAutoComplete");

  internals_v8_internal::ElementShouldAutoCompleteMethod(info);
}

void V8Internals::SuggestedValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_suggestedValue");

  internals_v8_internal::SuggestedValueMethod(info);
}

void V8Internals::SetSuggestedValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setSuggestedValue");

  internals_v8_internal::SetSuggestedValueMethod(info);
}

void V8Internals::SetAutofilledValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setAutofilledValue");

  internals_v8_internal::SetAutofilledValueMethod(info);
}

void V8Internals::SetEditingValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setEditingValue");

  internals_v8_internal::SetEditingValueMethod(info);
}

void V8Internals::SetAutofilledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setAutofilled");

  internals_v8_internal::SetAutofilledMethod(info);
}

void V8Internals::RangeFromLocationAndLengthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_rangeFromLocationAndLength");

  internals_v8_internal::RangeFromLocationAndLengthMethod(info);
}

void V8Internals::LocationFromRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_locationFromRange");

  internals_v8_internal::LocationFromRangeMethod(info);
}

void V8Internals::LengthFromRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_lengthFromRange");

  internals_v8_internal::LengthFromRangeMethod(info);
}

void V8Internals::RangeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_rangeAsText");

  internals_v8_internal::RangeAsTextMethod(info);
}

void V8Internals::TouchPositionAdjustedToBestClickableNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchPositionAdjustedToBestClickableNode");

  internals_v8_internal::TouchPositionAdjustedToBestClickableNodeMethod(info);
}

void V8Internals::TouchNodeAdjustedToBestClickableNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchNodeAdjustedToBestClickableNode");

  internals_v8_internal::TouchNodeAdjustedToBestClickableNodeMethod(info);
}

void V8Internals::TouchPositionAdjustedToBestContextMenuNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchPositionAdjustedToBestContextMenuNode");

  internals_v8_internal::TouchPositionAdjustedToBestContextMenuNodeMethod(info);
}

void V8Internals::TouchNodeAdjustedToBestContextMenuNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchNodeAdjustedToBestContextMenuNode");

  internals_v8_internal::TouchNodeAdjustedToBestContextMenuNodeMethod(info);
}

void V8Internals::LastSpellCheckRequestSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_lastSpellCheckRequestSequence");

  internals_v8_internal::LastSpellCheckRequestSequenceMethod(info);
}

void V8Internals::LastSpellCheckProcessedSequenceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_lastSpellCheckProcessedSequence");

  internals_v8_internal::LastSpellCheckProcessedSequenceMethod(info);
}

void V8Internals::CancelCurrentSpellCheckRequestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_cancelCurrentSpellCheckRequest");

  internals_v8_internal::CancelCurrentSpellCheckRequestMethod(info);
}

void V8Internals::IdleTimeSpellCheckerStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_idleTimeSpellCheckerState");

  internals_v8_internal::IdleTimeSpellCheckerStateMethod(info);
}

void V8Internals::RunIdleTimeSpellCheckerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_runIdleTimeSpellChecker");

  internals_v8_internal::RunIdleTimeSpellCheckerMethod(info);
}

void V8Internals::UserPreferredLanguagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_userPreferredLanguages");

  internals_v8_internal::UserPreferredLanguagesMethod(info);
}

void V8Internals::SetUserPreferredLanguagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setUserPreferredLanguages");

  internals_v8_internal::SetUserPreferredLanguagesMethod(info);
}

void V8Internals::MediaKeysCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mediaKeysCount");

  internals_v8_internal::MediaKeysCountMethod(info);
}

void V8Internals::MediaKeySessionCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mediaKeySessionCount");

  internals_v8_internal::MediaKeySessionCountMethod(info);
}

void V8Internals::ContextLifecycleStateObserverObjectCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_contextLifecycleStateObserverObjectCount");

  internals_v8_internal::ContextLifecycleStateObserverObjectCountMethod(info);
}

void V8Internals::WheelEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_wheelEventHandlerCount");

  internals_v8_internal::WheelEventHandlerCountMethod(info);
}

void V8Internals::ScrollEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_scrollEventHandlerCount");

  internals_v8_internal::ScrollEventHandlerCountMethod(info);
}

void V8Internals::TouchStartOrMoveEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchStartOrMoveEventHandlerCount");

  internals_v8_internal::TouchStartOrMoveEventHandlerCountMethod(info);
}

void V8Internals::TouchEndOrCancelEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchEndOrCancelEventHandlerCount");

  internals_v8_internal::TouchEndOrCancelEventHandlerCountMethod(info);
}

void V8Internals::PointerEventHandlerCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pointerEventHandlerCount");

  internals_v8_internal::PointerEventHandlerCountMethod(info);
}

void V8Internals::TouchEventTargetLayerRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_touchEventTargetLayerRects");

  internals_v8_internal::TouchEventTargetLayerRectsMethod(info);
}

void V8Internals::ExecuteCommandMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_executeCommand");

  internals_v8_internal::ExecuteCommandMethod(info);
}

void V8Internals::HTMLNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_htmlNamespace");

  internals_v8_internal::HTMLNamespaceMethod(info);
}

void V8Internals::HTMLTagsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_htmlTags");

  internals_v8_internal::HTMLTagsMethod(info);
}

void V8Internals::SVGNamespaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_svgNamespace");

  internals_v8_internal::SVGNamespaceMethod(info);
}

void V8Internals::SVGTagsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_svgTags");

  internals_v8_internal::SVGTagsMethod(info);
}

void V8Internals::NodesFromRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nodesFromRect");

  internals_v8_internal::NodesFromRectMethod(info);
}

void V8Internals::HasSpellingMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasSpellingMarker");

  internals_v8_internal::HasSpellingMarkerMethod(info);
}

void V8Internals::HasGrammarMarkerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_hasGrammarMarker");

  internals_v8_internal::HasGrammarMarkerMethod(info);
}

void V8Internals::ReplaceMisspelledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_replaceMisspelled");

  internals_v8_internal::ReplaceMisspelledMethod(info);
}

void V8Internals::CanHyphenateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_canHyphenate");

  internals_v8_internal::CanHyphenateMethod(info);
}

void V8Internals::SetMockHyphenationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setMockHyphenation");

  internals_v8_internal::SetMockHyphenationMethod(info);
}

void V8Internals::IsOverwriteModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isOverwriteModeEnabled");

  internals_v8_internal::IsOverwriteModeEnabledMethod(info);
}

void V8Internals::ToggleOverwriteModeEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_toggleOverwriteModeEnabled");

  internals_v8_internal::ToggleOverwriteModeEnabledMethod(info);
}

void V8Internals::NumberOfScrollableAreasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfScrollableAreas");

  internals_v8_internal::NumberOfScrollableAreasMethod(info);
}

void V8Internals::IsPageBoxVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isPageBoxVisible");

  internals_v8_internal::IsPageBoxVisibleMethod(info);
}

void V8Internals::LayerTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_layerTreeAsText");

  internals_v8_internal::LayerTreeAsTextMethod(info);
}

void V8Internals::ElementLayerTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_elementLayerTreeAsText");

  internals_v8_internal::ElementLayerTreeAsTextMethod(info);
}

void V8Internals::ScrollsWithRespectToMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_scrollsWithRespectTo");

  internals_v8_internal::ScrollsWithRespectToMethod(info);
}

void V8Internals::ScrollingStateTreeAsTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_scrollingStateTreeAsText");

  internals_v8_internal::ScrollingStateTreeAsTextMethod(info);
}

void V8Internals::MainThreadScrollingReasonsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mainThreadScrollingReasons");

  internals_v8_internal::MainThreadScrollingReasonsMethod(info);
}

void V8Internals::NonFastScrollableRectsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nonFastScrollableRects");

  internals_v8_internal::NonFastScrollableRectsMethod(info);
}

void V8Internals::MarkGestureScrollRegionDirtyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markGestureScrollRegionDirty");

  internals_v8_internal::MarkGestureScrollRegionDirtyMethod(info);
}

void V8Internals::EvictAllResourcesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_evictAllResources");

  internals_v8_internal::EvictAllResourcesMethod(info);
}

void V8Internals::NumberOfLiveNodesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfLiveNodes");

  internals_v8_internal::NumberOfLiveNodesMethod(info);
}

void V8Internals::NumberOfLiveDocumentsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfLiveDocuments");

  internals_v8_internal::NumberOfLiveDocumentsMethod(info);
}

void V8Internals::CounterValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_counterValue");

  internals_v8_internal::CounterValueMethod(info);
}

void V8Internals::PageNumberMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pageNumber");

  internals_v8_internal::PageNumberMethod(info);
}

void V8Internals::ShortcutIconURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_shortcutIconURLs");

  internals_v8_internal::ShortcutIconURLsMethod(info);
}

void V8Internals::AllIconURLsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_allIconURLs");

  internals_v8_internal::AllIconURLsMethod(info);
}

void V8Internals::NumberOfPagesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_numberOfPages");

  internals_v8_internal::NumberOfPagesMethod(info);
}

void V8Internals::PagePropertyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pageProperty");

  internals_v8_internal::PagePropertyMethod(info);
}

void V8Internals::PageSizeAndMarginsInPixelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pageSizeAndMarginsInPixels");

  internals_v8_internal::PageSizeAndMarginsInPixelsMethod(info);
}

void V8Internals::PageScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_pageScaleFactor");

  internals_v8_internal::PageScaleFactorMethod(info);
}

void V8Internals::SetPageScaleFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setPageScaleFactor");

  internals_v8_internal::SetPageScaleFactorMethod(info);
}

void V8Internals::SetPageScaleFactorLimitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setPageScaleFactorLimits");

  internals_v8_internal::SetPageScaleFactorLimitsMethod(info);
}

void V8Internals::SetIsCursorVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setIsCursorVisible");

  internals_v8_internal::SetIsCursorVisibleMethod(info);
}

void V8Internals::EffectivePreloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_effectivePreload");

  internals_v8_internal::EffectivePreloadMethod(info);
}

void V8Internals::MediaPlayerRemoteRouteAvailabilityChangedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mediaPlayerRemoteRouteAvailabilityChanged");

  internals_v8_internal::MediaPlayerRemoteRouteAvailabilityChangedMethod(info);
}

void V8Internals::MediaPlayerPlayingRemotelyChangedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_mediaPlayerPlayingRemotelyChanged");

  internals_v8_internal::MediaPlayerPlayingRemotelyChangedMethod(info);
}

void V8Internals::SetPersistentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setPersistent");

  internals_v8_internal::SetPersistentMethod(info);
}

void V8Internals::ForceStaleStateForMediaElementMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceStaleStateForMediaElement");

  internals_v8_internal::ForceStaleStateForMediaElementMethod(info);
}

void V8Internals::IsMediaElementSuspendedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isMediaElementSuspended");

  internals_v8_internal::IsMediaElementSuspendedMethod(info);
}

void V8Internals::SetMediaControlsTestModeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setMediaControlsTestMode");

  internals_v8_internal::SetMediaControlsTestModeMethod(info);
}

void V8Internals::RegisterURLSchemeAsBypassingContentSecurityPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_registerURLSchemeAsBypassingContentSecurityPolicy");

  internals_v8_internal::RegisterURLSchemeAsBypassingContentSecurityPolicyMethod(info);
}

void V8Internals::RemoveURLSchemeRegisteredAsBypassingContentSecurityPolicyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_removeURLSchemeRegisteredAsBypassingContentSecurityPolicy");

  internals_v8_internal::RemoveURLSchemeRegisteredAsBypassingContentSecurityPolicyMethod(info);
}

void V8Internals::TypeConversionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_typeConversions");

  internals_v8_internal::TypeConversionsMethod(info);
}

void V8Internals::GetReferencedFilePathsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getReferencedFilePaths");

  internals_v8_internal::GetReferencedFilePathsMethod(info);
}

void V8Internals::StartTrackingRepaintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_startTrackingRepaints");

  internals_v8_internal::StartTrackingRepaintsMethod(info);
}

void V8Internals::StopTrackingRepaintsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_stopTrackingRepaints");

  internals_v8_internal::StopTrackingRepaintsMethod(info);
}

void V8Internals::UpdateLayoutAndRunPostLayoutTasksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_updateLayoutAndRunPostLayoutTasks");

  internals_v8_internal::UpdateLayoutAndRunPostLayoutTasksMethod(info);
}

void V8Internals::ForceFullRepaintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceFullRepaint");

  internals_v8_internal::ForceFullRepaintMethod(info);
}

void V8Internals::DraggableRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_draggableRegions");

  internals_v8_internal::DraggableRegionsMethod(info);
}

void V8Internals::NonDraggableRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_nonDraggableRegions");

  internals_v8_internal::NonDraggableRegionsMethod(info);
}

void V8Internals::GetCurrentCursorInfoMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getCurrentCursorInfo");

  internals_v8_internal::GetCurrentCursorInfoMethod(info);
}

void V8Internals::MarkerTextForListItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_markerTextForListItem");

  internals_v8_internal::MarkerTextForListItemMethod(info);
}

void V8Internals::DeserializeBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_deserializeBuffer");

  internals_v8_internal::DeserializeBufferMethod(info);
}

void V8Internals::SerializeObjectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_serializeObject");

  internals_v8_internal::SerializeObjectMethod(info);
}

void V8Internals::DeserializeBufferContainingWasmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_deserializeBufferContainingWasm");

  internals_v8_internal::DeserializeBufferContainingWasmMethod(info);
}

void V8Internals::SerializeWithInlineWasmMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_serializeWithInlineWasm");

  internals_v8_internal::SerializeWithInlineWasmMethod(info);
}

void V8Internals::ForceReloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceReload");

  internals_v8_internal::ForceReloadMethod(info);
}

void V8Internals::GetImageSourceURLMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getImageSourceURL");

  internals_v8_internal::GetImageSourceURLMethod(info);
}

void V8Internals::ForceImageReloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceImageReload");

  internals_v8_internal::ForceImageReloadMethod(info);
}

void V8Internals::SelectMenuListTextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectMenuListText");

  internals_v8_internal::SelectMenuListTextMethod(info);
}

void V8Internals::IsSelectPopupVisibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isSelectPopupVisible");

  internals_v8_internal::IsSelectPopupVisibleMethod(info);
}

void V8Internals::SelectPopupItemStyleIsRtlMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectPopupItemStyleIsRtl");

  internals_v8_internal::SelectPopupItemStyleIsRtlMethod(info);
}

void V8Internals::SelectPopupItemStyleFontHeightMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectPopupItemStyleFontHeight");

  internals_v8_internal::SelectPopupItemStyleFontHeightMethod(info);
}

void V8Internals::ResetTypeAheadSessionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_resetTypeAheadSession");

  internals_v8_internal::ResetTypeAheadSessionMethod(info);
}

void V8Internals::GetDragCaretMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getDragCaret");

  internals_v8_internal::GetDragCaretMethod(info);
}

void V8Internals::GetSelectionInFlatTreeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getSelectionInFlatTree");

  internals_v8_internal::GetSelectionInFlatTreeMethod(info);
}

void V8Internals::SelectionBoundsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectionBounds");

  internals_v8_internal::SelectionBoundsMethod(info);
}

void V8Internals::LoseSharedGraphicsContext3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_loseSharedGraphicsContext3D");

  internals_v8_internal::LoseSharedGraphicsContext3DMethod(info);
}

void V8Internals::ForceCompositingUpdateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_forceCompositingUpdate");

  internals_v8_internal::ForceCompositingUpdateMethod(info);
}

void V8Internals::SetZoomFactorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setZoomFactor");

  internals_v8_internal::SetZoomFactorMethod(info);
}

void V8Internals::SetShouldRevealPasswordMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setShouldRevealPassword");

  internals_v8_internal::SetShouldRevealPasswordMethod(info);
}

void V8Internals::CreateResolvedPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_createResolvedPromise");

  internals_v8_internal::CreateResolvedPromiseMethod(info);
}

void V8Internals::CreateRejectedPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_createRejectedPromise");

  internals_v8_internal::CreateRejectedPromiseMethod(info);
}

void V8Internals::AddOneToPromiseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addOneToPromise");

  internals_v8_internal::AddOneToPromiseMethod(info);
}

void V8Internals::PromiseCheckMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_promiseCheck");

  internals_v8_internal::PromiseCheckMethod(info);
}

void V8Internals::PromiseCheckWithoutExceptionStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_promiseCheckWithoutExceptionState");

  internals_v8_internal::PromiseCheckWithoutExceptionStateMethod(info);
}

void V8Internals::PromiseCheckRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_promiseCheckRange");

  internals_v8_internal::PromiseCheckRangeMethod(info);
}

void V8Internals::PromiseCheckOverloadMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_promiseCheckOverload");

  internals_v8_internal::PromiseCheckOverloadMethod(info);
}

void V8Internals::SetValueForUserMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setValueForUser");

  internals_v8_internal::SetValueForUserMethod(info);
}

void V8Internals::SetFocusedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setFocused");

  internals_v8_internal::SetFocusedMethod(info);
}

void V8Internals::SetInitialFocusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setInitialFocus");

  internals_v8_internal::SetInitialFocusMethod(info);
}

void V8Internals::CountHitRegionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_countHitRegions");

  internals_v8_internal::CountHitRegionsMethod(info);
}

void V8Internals::IsInCanvasFontCacheMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isInCanvasFontCache");

  internals_v8_internal::IsInCanvasFontCacheMethod(info);
}

void V8Internals::CanvasFontCacheMaxFontsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_canvasFontCacheMaxFonts");

  internals_v8_internal::CanvasFontCacheMaxFontsMethod(info);
}

void V8Internals::DictionaryTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_dictionaryTest");

  internals_v8_internal::DictionaryTestMethod(info);
}

void V8Internals::RecordTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_recordTest");

  internals_v8_internal::RecordTestMethod(info);
}

void V8Internals::SequenceTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_sequenceTest");

  internals_v8_internal::SequenceTestMethod(info);
}

void V8Internals::UnionTypesTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_unionTypesTest");

  internals_v8_internal::UnionTypesTestMethod(info);
}

void V8Internals::CallbackFunctionTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_callbackFunctionTest");

  internals_v8_internal::CallbackFunctionTestMethod(info);
}

void V8Internals::SetScrollChainMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setScrollChain");

  internals_v8_internal::SetScrollChainMethod(info);
}

void V8Internals::ScheduleBlinkGCMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_scheduleBlinkGC");

  internals_v8_internal::ScheduleBlinkGCMethod(info);
}

void V8Internals::SelectedHTMLForClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectedHTMLForClipboard");

  internals_v8_internal::SelectedHTMLForClipboardMethod(info);
}

void V8Internals::SelectedTextForClipboardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_selectedTextForClipboard");

  internals_v8_internal::SelectedTextForClipboardMethod(info);
}

void V8Internals::SetVisualViewportOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setVisualViewportOffset");

  internals_v8_internal::SetVisualViewportOffsetMethod(info);
}

void V8Internals::IsUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isUseCounted");

  internals_v8_internal::IsUseCountedMethod(info);
}

void V8Internals::IsCSSPropertyUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isCSSPropertyUseCounted");

  internals_v8_internal::IsCSSPropertyUseCountedMethod(info);
}

void V8Internals::IsAnimatedCSSPropertyUseCountedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isAnimatedCSSPropertyUseCounted");

  internals_v8_internal::IsAnimatedCSSPropertyUseCountedMethod(info);
}

void V8Internals::ClearUseCounterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_clearUseCounter");

  internals_v8_internal::ClearUseCounterMethod(info);
}

void V8Internals::GetCSSPropertyLonghandsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getCSSPropertyLonghands");

  internals_v8_internal::GetCSSPropertyLonghandsMethod(info);
}

void V8Internals::GetCSSPropertyShorthandsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getCSSPropertyShorthands");

  internals_v8_internal::GetCSSPropertyShorthandsMethod(info);
}

void V8Internals::GetCSSPropertyAliasesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getCSSPropertyAliases");

  internals_v8_internal::GetCSSPropertyAliasesMethod(info);
}

void V8Internals::ObserveUseCounterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_observeUseCounter");

  internals_v8_internal::ObserveUseCounterMethod(info);
}

void V8Internals::UnscopableMethodMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_unscopableMethod");

  internals_v8_internal::UnscopableMethodMethod(info);
}

void V8Internals::SetCapsLockStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setCapsLockState");

  internals_v8_internal::SetCapsLockStateMethod(info);
}

void V8Internals::SetScrollbarVisibilityInScrollableAreaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setScrollbarVisibilityInScrollableArea");

  internals_v8_internal::SetScrollbarVisibilityInScrollableAreaMethod(info);
}

void V8Internals::MonotonicTimeToZeroBasedDocumentTimeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_monotonicTimeToZeroBasedDocumentTime");

  internals_v8_internal::MonotonicTimeToZeroBasedDocumentTimeMethod(info);
}

void V8Internals::CurrentTimeTicksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_currentTimeTicks");

  internals_v8_internal::CurrentTimeTicksMethod(info);
}

void V8Internals::GetScrollAnimationStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getScrollAnimationState");

  internals_v8_internal::GetScrollAnimationStateMethod(info);
}

void V8Internals::GetProgrammaticScrollAnimationStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getProgrammaticScrollAnimationState");

  internals_v8_internal::GetProgrammaticScrollAnimationStateMethod(info);
}

void V8Internals::VisualRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_visualRect");

  internals_v8_internal::VisualRectMethod(info);
}

void V8Internals::OriginTrialsTestMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_originTrialsTest");

  internals_v8_internal::OriginTrialsTestMethod(info);
}

void V8Internals::CrashMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_crash");

  internals_v8_internal::CrashMethod(info);
}

void V8Internals::EvaluateInInspectorOverlayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_evaluateInInspectorOverlay");

  internals_v8_internal::EvaluateInInspectorOverlayMethod(info);
}

void V8Internals::SetIsLowEndDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setIsLowEndDevice");

  internals_v8_internal::SetIsLowEndDeviceMethod(info);
}

void V8Internals::IsLowEndDeviceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isLowEndDevice");

  internals_v8_internal::IsLowEndDeviceMethod(info);
}

void V8Internals::SupportedTextEncodingLabelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_supportedTextEncodingLabels");

  internals_v8_internal::SupportedTextEncodingLabelsMethod(info);
}

void V8Internals::SimulateRasterUnderInvalidationsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_simulateRasterUnderInvalidations");

  internals_v8_internal::SimulateRasterUnderInvalidationsMethod(info);
}

void V8Internals::BypassLongCompileThresholdOnceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_BypassLongCompileThresholdOnce");

  internals_v8_internal::BypassLongCompileThresholdOnceMethod(info);
}

void V8Internals::LifecycleUpdateCountMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_LifecycleUpdateCount");

  internals_v8_internal::LifecycleUpdateCountMethod(info);
}

void V8Internals::DisableIntersectionObserverThrottleDelayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_DisableIntersectionObserverThrottleDelay");

  internals_v8_internal::DisableIntersectionObserverThrottleDelayMethod(info);
}

void V8Internals::IsSiteIsolatedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isSiteIsolated");

  internals_v8_internal::IsSiteIsolatedMethod(info);
}

void V8Internals::IsTrackingOcclusionForIFrameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_isTrackingOcclusionForIFrame");

  internals_v8_internal::IsTrackingOcclusionForIFrameMethod(info);
}

void V8Internals::AddEmbedderCustomElementNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_addEmbedderCustomElementName");

  internals_v8_internal::AddEmbedderCustomElementNameMethod(info);
}

void V8Internals::ResolveModuleSpecifierMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_resolveModuleSpecifier");

  internals_v8_internal::ResolveModuleSpecifierMethod(info);
}

void V8Internals::SetDeviceEmulationScaleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_setDeviceEmulationScale");

  internals_v8_internal::SetDeviceEmulationScaleMethod(info);
}

void V8Internals::GetInternalResponseURLListMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_getInternalResponseURLList");

  internals_v8_internal::GetInternalResponseURLListMethod(info);
}

void V8Internals::IndexedPropertyGetterCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_Internals_IndexedPropertyGetter");

  internals_v8_internal::IndexedPropertyGetter(index, info);
}

void V8Internals::IndexedPropertyDescriptorCallback(
    uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info) {
  internals_v8_internal::IndexedPropertyDescriptor(index, info);
}

void V8Internals::IndexedPropertySetterCallback(
    uint32_t index,
    v8::Local<v8::Value> v8_value,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // No indexed property setter defined.  Do not fall back to the default
  // setter.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "Internals");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

void V8Internals::IndexedPropertyDefinerCallback(
    uint32_t index,
    const v8::PropertyDescriptor& desc,
    const v8::PropertyCallbackInfo<v8::Value>& info) {
  // https://heycam.github.io/webidl/#legacy-platform-object-defineownproperty
  // 3.9.3. [[DefineOwnProperty]]
  // step 1.2. If O does not implement an interface with an indexed property
  //   setter, then return false.
  //
  // https://html.spec.whatwg.org/C/window-object.html#windowproxy-defineownproperty
  // 7.4.6 [[DefineOwnProperty]] (P, Desc)
  // step 2.1. If P is an array index property name, return false.
  V8SetReturnValue(info, v8::Null(info.GetIsolate()));
  if (info.ShouldThrowOnError()) {
    ExceptionState exception_state(info.GetIsolate(),
                                   ExceptionState::kIndexedSetterContext,
                                   "Internals");
    exception_state.ThrowTypeError("Index property setter is not supported.");
  }
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8InternalsAccessors[] = {
    { "pagePopupWindow", V8Internals::PagePopupWindowAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "settings", V8Internals::SettingsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "runtimeFlags", V8Internals::RuntimeFlagsAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "workerThreadCount", V8Internals::WorkerThreadCountAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "cursorUpdatePending", V8Internals::CursorUpdatePendingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "fakeMouseMovePending", V8Internals::FakeMouseMovePendingAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "visibleSelectionAnchorNode", V8Internals::VisibleSelectionAnchorNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "visibleSelectionAnchorOffset", V8Internals::VisibleSelectionAnchorOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "visibleSelectionFocusNode", V8Internals::VisibleSelectionFocusNodeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "visibleSelectionFocusOffset", V8Internals::VisibleSelectionFocusOffsetAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "textAffinity", V8Internals::TextAffinityAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "interestedElement", V8Internals::InterestedElementAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "length", V8Internals::LengthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "unscopableAttribute", V8Internals::UnscopableAttributeAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8InternalsMethods[] = {
    {"observeGC", V8Internals::ObserveGCMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementLayoutTreeAsText", V8Internals::ElementLayoutTreeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPreloaded", V8Internals::IsPreloadedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPreloadedBy", V8Internals::IsPreloadedByMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isLoading", V8Internals::IsLoadingMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isLoadingFromMemoryCache", V8Internals::IsLoadingFromMemoryCacheMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getResourcePriority", V8Internals::GetResourcePriorityMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getResourceHeader", V8Internals::GetResourceHeaderMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"doesWindowHaveUrlFragment", V8Internals::DoesWindowHaveUrlFragmentMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"computedStyleIncludingVisitedInfo", V8Internals::ComputedStyleIncludingVisitedInfoMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createUserAgentShadowRoot", V8Internals::CreateUserAgentShadowRootMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shadowRoot", V8Internals::ShadowRootMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setBrowserControlsState", V8Internals::SetBrowserControlsStateMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setBrowserControlsShownRatio", V8Internals::SetBrowserControlsShownRatioMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"effectiveRootScroller", V8Internals::EffectiveRootScrollerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shadowRootType", V8Internals::ShadowRootTypeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasShadowInsertionPoint", V8Internals::HasShadowInsertionPointMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasContentElement", V8Internals::HasContentElementMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"countElementShadow", V8Internals::CountElementShadowMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shadowPseudoId", V8Internals::ShadowPseudoIdMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isValidContentSelect", V8Internals::IsValidContentSelectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"treeScopeRootNode", V8Internals::TreeScopeRootNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"parentTreeScope", V8Internals::ParentTreeScopeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compareTreeScopePosition", V8Internals::CompareTreeScopePositionMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"updateStyleAndReturnAffectedElementCount", V8Internals::UpdateStyleAndReturnAffectedElementCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"needsLayoutCount", V8Internals::NeedsLayoutCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hitTestCount", V8Internals::HitTestCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hitTestCacheHits", V8Internals::HitTestCacheHitsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementFromPoint", V8Internals::ElementFromPointMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearHitTestCache", V8Internals::ClearHitTestCacheMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"innerEditorElement", V8Internals::InnerEditorElementMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pauseAnimations", V8Internals::PauseAnimationsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isCompositedAnimation", V8Internals::IsCompositedAnimationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disableCompositedAnimation", V8Internals::DisableCompositedAnimationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disableCSSAdditiveAnimations", V8Internals::DisableCSSAdditiveAnimationsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"advanceImageAnimation", V8Internals::AdvanceImageAnimationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nextSiblingInFlatTree", V8Internals::NextSiblingInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"firstChildInFlatTree", V8Internals::FirstChildInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lastChildInFlatTree", V8Internals::LastChildInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nextInFlatTree", V8Internals::NextInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"previousInFlatTree", V8Internals::PreviousInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"visiblePlaceholder", V8Internals::VisiblePlaceholderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isValidationMessageVisible", V8Internals::IsValidationMessageVisibleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectColorInColorChooser", V8Internals::SelectColorInColorChooserMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endColorChooser", V8Internals::EndColorChooserMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasAutofocusRequest", V8Internals::HasAutofocusRequestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"formControlStateOfHistoryItem", V8Internals::FormControlStateOfHistoryItemMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFormControlStateOfHistoryItem", V8Internals::SetFormControlStateOfHistoryItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"absoluteCaretBounds", V8Internals::AbsoluteCaretBoundsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"boundingBox", V8Internals::BoundingBoxMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMarker", V8Internals::SetMarkerMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerCountForNode", V8Internals::MarkerCountForNodeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"activeMarkerCountForNode", V8Internals::ActiveMarkerCountForNodeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerRangeForNode", V8Internals::MarkerRangeForNodeMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerDescriptionForNode", V8Internals::MarkerDescriptionForNodeMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerBackgroundColorForNode", V8Internals::MarkerBackgroundColorForNodeMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerUnderlineColorForNode", V8Internals::MarkerUnderlineColorForNodeMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addTextMatchMarker", V8Internals::AddTextMatchMarkerMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addCompositionMarker", V8Internals::AddCompositionMarkerMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addActiveSuggestionMarker", V8Internals::AddActiveSuggestionMarkerMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addSuggestionMarker", V8Internals::AddSuggestionMarkerMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setTextMatchMarkersActive", V8Internals::SetTextMatchMarkersActiveMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMarkedTextMatchesAreHighlighted", V8Internals::SetMarkedTextMatchesAreHighlightedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"viewportAsText", V8Internals::ViewportAsTextMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementShouldAutoComplete", V8Internals::ElementShouldAutoCompleteMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"suggestedValue", V8Internals::SuggestedValueMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setSuggestedValue", V8Internals::SetSuggestedValueMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAutofilledValue", V8Internals::SetAutofilledValueMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setEditingValue", V8Internals::SetEditingValueMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setAutofilled", V8Internals::SetAutofilledMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rangeFromLocationAndLength", V8Internals::RangeFromLocationAndLengthMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"locationFromRange", V8Internals::LocationFromRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lengthFromRange", V8Internals::LengthFromRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"rangeAsText", V8Internals::RangeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchPositionAdjustedToBestClickableNode", V8Internals::TouchPositionAdjustedToBestClickableNodeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchNodeAdjustedToBestClickableNode", V8Internals::TouchNodeAdjustedToBestClickableNodeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchPositionAdjustedToBestContextMenuNode", V8Internals::TouchPositionAdjustedToBestContextMenuNodeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchNodeAdjustedToBestContextMenuNode", V8Internals::TouchNodeAdjustedToBestContextMenuNodeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lastSpellCheckRequestSequence", V8Internals::LastSpellCheckRequestSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lastSpellCheckProcessedSequence", V8Internals::LastSpellCheckProcessedSequenceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cancelCurrentSpellCheckRequest", V8Internals::CancelCurrentSpellCheckRequestMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"idleTimeSpellCheckerState", V8Internals::IdleTimeSpellCheckerStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"runIdleTimeSpellChecker", V8Internals::RunIdleTimeSpellCheckerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"userPreferredLanguages", V8Internals::UserPreferredLanguagesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setUserPreferredLanguages", V8Internals::SetUserPreferredLanguagesMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mediaKeysCount", V8Internals::MediaKeysCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mediaKeySessionCount", V8Internals::MediaKeySessionCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"contextLifecycleStateObserverObjectCount", V8Internals::ContextLifecycleStateObserverObjectCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"wheelEventHandlerCount", V8Internals::WheelEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollEventHandlerCount", V8Internals::ScrollEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchStartOrMoveEventHandlerCount", V8Internals::TouchStartOrMoveEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchEndOrCancelEventHandlerCount", V8Internals::TouchEndOrCancelEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pointerEventHandlerCount", V8Internals::PointerEventHandlerCountMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"touchEventTargetLayerRects", V8Internals::TouchEventTargetLayerRectsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"executeCommand", V8Internals::ExecuteCommandMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"htmlNamespace", V8Internals::HTMLNamespaceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"htmlTags", V8Internals::HTMLTagsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"svgNamespace", V8Internals::SVGNamespaceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"svgTags", V8Internals::SVGTagsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nodesFromRect", V8Internals::NodesFromRectMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasSpellingMarker", V8Internals::HasSpellingMarkerMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hasGrammarMarker", V8Internals::HasGrammarMarkerMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"replaceMisspelled", V8Internals::ReplaceMisspelledMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"canHyphenate", V8Internals::CanHyphenateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMockHyphenation", V8Internals::SetMockHyphenationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isOverwriteModeEnabled", V8Internals::IsOverwriteModeEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"toggleOverwriteModeEnabled", V8Internals::ToggleOverwriteModeEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"numberOfScrollableAreas", V8Internals::NumberOfScrollableAreasMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isPageBoxVisible", V8Internals::IsPageBoxVisibleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"layerTreeAsText", V8Internals::LayerTreeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"elementLayerTreeAsText", V8Internals::ElementLayerTreeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollsWithRespectTo", V8Internals::ScrollsWithRespectToMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scrollingStateTreeAsText", V8Internals::ScrollingStateTreeAsTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mainThreadScrollingReasons", V8Internals::MainThreadScrollingReasonsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nonFastScrollableRects", V8Internals::NonFastScrollableRectsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markGestureScrollRegionDirty", V8Internals::MarkGestureScrollRegionDirtyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"evictAllResources", V8Internals::EvictAllResourcesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"numberOfLiveNodes", V8Internals::NumberOfLiveNodesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"numberOfLiveDocuments", V8Internals::NumberOfLiveDocumentsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"counterValue", V8Internals::CounterValueMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pageNumber", V8Internals::PageNumberMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shortcutIconURLs", V8Internals::ShortcutIconURLsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"allIconURLs", V8Internals::AllIconURLsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"numberOfPages", V8Internals::NumberOfPagesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pageProperty", V8Internals::PagePropertyMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pageSizeAndMarginsInPixels", V8Internals::PageSizeAndMarginsInPixelsMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pageScaleFactor", V8Internals::PageScaleFactorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPageScaleFactor", V8Internals::SetPageScaleFactorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPageScaleFactorLimits", V8Internals::SetPageScaleFactorLimitsMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setIsCursorVisible", V8Internals::SetIsCursorVisibleMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"effectivePreload", V8Internals::EffectivePreloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mediaPlayerRemoteRouteAvailabilityChanged", V8Internals::MediaPlayerRemoteRouteAvailabilityChangedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"mediaPlayerPlayingRemotelyChanged", V8Internals::MediaPlayerPlayingRemotelyChangedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setPersistent", V8Internals::SetPersistentMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceStaleStateForMediaElement", V8Internals::ForceStaleStateForMediaElementMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isMediaElementSuspended", V8Internals::IsMediaElementSuspendedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setMediaControlsTestMode", V8Internals::SetMediaControlsTestModeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"registerURLSchemeAsBypassingContentSecurityPolicy", V8Internals::RegisterURLSchemeAsBypassingContentSecurityPolicyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"removeURLSchemeRegisteredAsBypassingContentSecurityPolicy", V8Internals::RemoveURLSchemeRegisteredAsBypassingContentSecurityPolicyMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"typeConversions", V8Internals::TypeConversionsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getReferencedFilePaths", V8Internals::GetReferencedFilePathsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"startTrackingRepaints", V8Internals::StartTrackingRepaintsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stopTrackingRepaints", V8Internals::StopTrackingRepaintsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"updateLayoutAndRunPostLayoutTasks", V8Internals::UpdateLayoutAndRunPostLayoutTasksMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceFullRepaint", V8Internals::ForceFullRepaintMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"draggableRegions", V8Internals::DraggableRegionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"nonDraggableRegions", V8Internals::NonDraggableRegionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCurrentCursorInfo", V8Internals::GetCurrentCursorInfoMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"markerTextForListItem", V8Internals::MarkerTextForListItemMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deserializeBuffer", V8Internals::DeserializeBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"serializeObject", V8Internals::SerializeObjectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deserializeBufferContainingWasm", V8Internals::DeserializeBufferContainingWasmMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"serializeWithInlineWasm", V8Internals::SerializeWithInlineWasmMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceReload", V8Internals::ForceReloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getImageSourceURL", V8Internals::GetImageSourceURLMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceImageReload", V8Internals::ForceImageReloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectMenuListText", V8Internals::SelectMenuListTextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSelectPopupVisible", V8Internals::IsSelectPopupVisibleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectPopupItemStyleIsRtl", V8Internals::SelectPopupItemStyleIsRtlMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectPopupItemStyleFontHeight", V8Internals::SelectPopupItemStyleFontHeightMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resetTypeAheadSession", V8Internals::ResetTypeAheadSessionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getDragCaret", V8Internals::GetDragCaretMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSelectionInFlatTree", V8Internals::GetSelectionInFlatTreeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectionBounds", V8Internals::SelectionBoundsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"loseSharedGraphicsContext3D", V8Internals::LoseSharedGraphicsContext3DMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"forceCompositingUpdate", V8Internals::ForceCompositingUpdateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setZoomFactor", V8Internals::SetZoomFactorMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setShouldRevealPassword", V8Internals::SetShouldRevealPasswordMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createResolvedPromise", V8Internals::CreateResolvedPromiseMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRejectedPromise", V8Internals::CreateRejectedPromiseMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addOneToPromise", V8Internals::AddOneToPromiseMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"promiseCheck", V8Internals::PromiseCheckMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"promiseCheckWithoutExceptionState", V8Internals::PromiseCheckWithoutExceptionStateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"promiseCheckRange", V8Internals::PromiseCheckRangeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"promiseCheckOverload", V8Internals::PromiseCheckOverloadMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setValueForUser", V8Internals::SetValueForUserMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setFocused", V8Internals::SetFocusedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setInitialFocus", V8Internals::SetInitialFocusMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"countHitRegions", V8Internals::CountHitRegionsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isInCanvasFontCache", V8Internals::IsInCanvasFontCacheMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"canvasFontCacheMaxFonts", V8Internals::CanvasFontCacheMaxFontsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"dictionaryTest", V8Internals::DictionaryTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"recordTest", V8Internals::RecordTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sequenceTest", V8Internals::SequenceTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unionTypesTest", V8Internals::UnionTypesTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"callbackFunctionTest", V8Internals::CallbackFunctionTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScrollChain", V8Internals::SetScrollChainMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scheduleBlinkGC", V8Internals::ScheduleBlinkGCMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectedHTMLForClipboard", V8Internals::SelectedHTMLForClipboardMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"selectedTextForClipboard", V8Internals::SelectedTextForClipboardMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setVisualViewportOffset", V8Internals::SetVisualViewportOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isUseCounted", V8Internals::IsUseCountedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isCSSPropertyUseCounted", V8Internals::IsCSSPropertyUseCountedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isAnimatedCSSPropertyUseCounted", V8Internals::IsAnimatedCSSPropertyUseCountedMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearUseCounter", V8Internals::ClearUseCounterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCSSPropertyLonghands", V8Internals::GetCSSPropertyLonghandsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCSSPropertyShorthands", V8Internals::GetCSSPropertyShorthandsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getCSSPropertyAliases", V8Internals::GetCSSPropertyAliasesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"observeUseCounter", V8Internals::ObserveUseCounterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"unscopableMethod", V8Internals::UnscopableMethodMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setCapsLockState", V8Internals::SetCapsLockStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setScrollbarVisibilityInScrollableArea", V8Internals::SetScrollbarVisibilityInScrollableAreaMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"monotonicTimeToZeroBasedDocumentTime", V8Internals::MonotonicTimeToZeroBasedDocumentTimeMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"currentTimeTicks", V8Internals::CurrentTimeTicksMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getScrollAnimationState", V8Internals::GetScrollAnimationStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgrammaticScrollAnimationState", V8Internals::GetProgrammaticScrollAnimationStateMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"visualRect", V8Internals::VisualRectMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"originTrialsTest", V8Internals::OriginTrialsTestMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"crash", V8Internals::CrashMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"evaluateInInspectorOverlay", V8Internals::EvaluateInInspectorOverlayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setIsLowEndDevice", V8Internals::SetIsLowEndDeviceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isLowEndDevice", V8Internals::IsLowEndDeviceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"supportedTextEncodingLabels", V8Internals::SupportedTextEncodingLabelsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"simulateRasterUnderInvalidations", V8Internals::SimulateRasterUnderInvalidationsMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"BypassLongCompileThresholdOnce", V8Internals::BypassLongCompileThresholdOnceMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"LifecycleUpdateCount", V8Internals::LifecycleUpdateCountMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"DisableIntersectionObserverThrottleDelay", V8Internals::DisableIntersectionObserverThrottleDelayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSiteIsolated", V8Internals::IsSiteIsolatedMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isTrackingOcclusionForIFrame", V8Internals::IsTrackingOcclusionForIFrameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"addEmbedderCustomElementName", V8Internals::AddEmbedderCustomElementNameMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resolveModuleSpecifier", V8Internals::ResolveModuleSpecifierMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"setDeviceEmulationScale", V8Internals::SetDeviceEmulationScaleMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getInternalResponseURLList", V8Internals::GetInternalResponseURLListMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8Internals::InstallV8InternalsTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8Internals::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8Internals::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"LAYER_TREE_INCLUDES_DEBUG_INFO", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(1)},
        {"LAYER_TREE_INCLUDES_PAINT_INVALIDATIONS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(2)},
        {"LAYER_TREE_INCLUDES_PAINTING_PHASES", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(4)},
        {"LAYER_TREE_INCLUDES_ROOT_LAYER", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(8)},
        {"LAYER_TREE_INCLUDES_CLIP_AND_SCROLL_PARENTS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(16)},
        {"LAYER_TREE_INCLUDES_COMPOSITING_REASONS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(32)},
        {"LAYER_TREE_INCLUDES_PAINT_RECORDS", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(64)},
        {"OUTPUT_AS_LAYER_TREE", V8DOMConfiguration::kConstantTypeUnsignedShort, static_cast<int>(0x4000)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8InternalsAccessors, base::size(kV8InternalsAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8InternalsMethods, base::size(kV8InternalsMethods));

  // Indexed properties
  v8::IndexedPropertyHandlerConfiguration indexedPropertyHandlerConfig(
      V8Internals::IndexedPropertyGetterCallback,
      V8Internals::IndexedPropertySetterCallback,
      V8Internals::IndexedPropertyDescriptorCallback,
      nullptr,
      IndexedPropertyEnumerator<Internals>,
      V8Internals::IndexedPropertyDefinerCallback,
      v8::Local<v8::Value>(),
      v8::PropertyHandlerFlags::kNone);
  instance_template->SetHandler(indexedPropertyHandlerConfig);

  // Array iterator (@@iterator)
  prototype_template->SetIntrinsicDataProperty(v8::Symbol::GetIterator(isolate), v8::kArrayProto_values, v8::DontEnum);
  // For value iterators, the properties below must originally be set to the corresponding ones in %ArrayPrototype%.
  // See https://heycam.github.io/webidl/#es-iterators.
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "entries"), v8::kArrayProto_entries);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "forEach"), v8::kArrayProto_forEach);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "keys"), v8::kArrayProto_keys);
  prototype_template->SetIntrinsicDataProperty(V8AtomicString(isolate, "values"), v8::kArrayProto_values);

  // Custom signature
}

void V8Internals::InstallRuntimeEnabledFeaturesOnTemplate(
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

v8::Local<v8::FunctionTemplate> V8Internals::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8Internals::GetWrapperTypeInfo()),
      V8Internals::install_v8_internals_template_function_);
}

bool V8Internals::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8Internals::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8Internals::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8Internals::GetWrapperTypeInfo(), v8_value);
}

Internals* V8Internals::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

Internals* NativeValueTraits<Internals>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  Internals* native_value = V8Internals::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "Internals"));
  }
  return native_value;
}

void V8Internals::InstallConditionalFeatures(
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

  if (!prototype_object.IsEmpty()) {
    v8::Local<v8::Name> unscopables_symbol(v8::Symbol::GetUnscopables(isolate));
    v8::Local<v8::Object> unscopables;
    bool has_unscopables;
    if (prototype_object->HasOwnProperty(context, unscopables_symbol)
        .To(&has_unscopables) && has_unscopables) {
      unscopables = prototype_object->Get(context, unscopables_symbol)
                    .ToLocalChecked().As<v8::Object>();
    } else {
      // Web IDL 3.6.3. Interface prototype object
      // https://heycam.github.io/webidl/#create-an-interface-prototype-object
      // step 8.1. Let unscopableObject be the result of performing
      //   ! ObjectCreate(null).
      unscopables = v8::Object::New(isolate);
      unscopables->SetPrototype(context, v8::Null(isolate)).ToChecked();
    }
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "unscopableAttribute"), v8::True(isolate))
        .FromJust();
    unscopables->CreateDataProperty(
        context, V8AtomicString(isolate, "unscopableMethod"), v8::True(isolate))
        .FromJust();
    prototype_object->CreateDataProperty(
        context, unscopables_symbol, unscopables).FromJust();
  }
}

InstallRuntimeEnabledFeaturesOnTemplateFunction
V8Internals::install_runtime_enabled_features_on_template_function_ =
    &V8Internals::InstallRuntimeEnabledFeaturesOnTemplate;

InstallTemplateFunction
V8Internals::install_v8_internals_template_function_ =
    &V8Internals::InstallV8InternalsTemplate;

void V8Internals::UpdateWrapperTypeInfo(
    InstallTemplateFunction install_template_function,
    InstallRuntimeEnabledFeaturesFunction install_runtime_enabled_features_function,
    InstallRuntimeEnabledFeaturesOnTemplateFunction install_runtime_enabled_features_on_template_function,
    InstallConditionalFeaturesFunction install_conditional_features_function) {
  V8Internals::install_v8_internals_template_function_ =
      install_template_function;

  CHECK(install_runtime_enabled_features_on_template_function);
  V8Internals::install_runtime_enabled_features_on_template_function_ =
      install_runtime_enabled_features_on_template_function;

  if (install_conditional_features_function) {
    V8Internals::GetWrapperTypeInfo()->install_conditional_features_function =
        install_conditional_features_function;
  }
}

}  // namespace blink
