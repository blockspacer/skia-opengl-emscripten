// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_html_canvas_element_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_constructor.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_context_creation_attributes_module.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_canvas_rendering_context_2d.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_gpu_canvas_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_image_bitmap_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_media_stream.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_compute_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_xr_presentation_context.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/modules/canvas/htmlcanvas/html_canvas_element_module.h"
#include "third_party/blink/renderer/modules/mediacapturefromelement/html_canvas_element_capture.h"
#include "third_party/blink/renderer/modules/picture_in_picture/html_element_picture_in_picture.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace html_canvas_element_partial_v8_internal {

static void GetContextMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLCanvasElement", "getContext");

  HTMLCanvasElement* impl = V8HTMLCanvasElement::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  V8StringResource<> context_id;
  CanvasContextCreationAttributesModule* attributes;
  context_id = info[0];
  if (!context_id.Prepare())
    return;

  attributes = NativeValueTraits<CanvasContextCreationAttributesModule>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  CanvasRenderingContext2DOrWebGLRenderingContextOrWebGL2RenderingContextOrWebGL2ComputeRenderingContextOrImageBitmapRenderingContextOrXRPresentationContextOrGPUCanvasContext result;
  HTMLCanvasElementModule::getContext(*impl, context_id, attributes, exception_state, result);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValue(info, result);
}

static void TransferControlToOffscreenMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLCanvasElement", "transferControlToOffscreen");

  HTMLCanvasElement* impl = V8HTMLCanvasElement::ToImpl(info.Holder());

  OffscreenCanvas* result = HTMLCanvasElementModule::transferControlToOffscreen(*impl, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

static void CaptureStreamMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "HTMLCanvasElement", "captureStream");

  HTMLCanvasElement* impl = V8HTMLCanvasElement::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  double frame_rate;
  int num_args_passed = info.Length();
  while (num_args_passed > 0) {
    if (!info[num_args_passed - 1]->IsUndefined())
      break;
    --num_args_passed;
  }
  if (UNLIKELY(num_args_passed <= 0)) {
    MediaStream* result = HTMLCanvasElementCapture::captureStream(script_state, *impl, exception_state);
    if (exception_state.HadException()) {
      return;
    }
    V8SetReturnValueFast(info, result, impl);
    return;
  }
  frame_rate = NativeValueTraits<IDLDouble>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  MediaStream* result = HTMLCanvasElementCapture::captureStream(script_state, *impl, frame_rate, exception_state);
  if (exception_state.HadException()) {
    return;
  }
  V8SetReturnValueFast(info, result, impl);
}

}  // namespace html_canvas_element_partial_v8_internal

void V8HTMLCanvasElementPartial::GetContextMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLCanvasElement_getContext");

  html_canvas_element_partial_v8_internal::GetContextMethod(info);
}

void V8HTMLCanvasElementPartial::TransferControlToOffscreenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLCanvasElement_transferControlToOffscreen");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kOffscreenCanvas);
  html_canvas_element_partial_v8_internal::TransferControlToOffscreenMethod(info);
}

void V8HTMLCanvasElementPartial::CaptureStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_HTMLCanvasElement_captureStream");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kCanvasCaptureStream);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kCanvasCaptureStream);
  html_canvas_element_partial_v8_internal::CaptureStreamMethod(info);
}

static constexpr V8DOMConfiguration::MethodConfiguration kV8HTMLCanvasElementMethods[] = {
    {"getContext", V8HTMLCanvasElementPartial::GetContextMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"captureStream", V8HTMLCanvasElementPartial::CaptureStreamMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

void V8HTMLCanvasElementPartial::InstallV8HTMLCanvasElementTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8HTMLCanvasElement::InstallV8HTMLCanvasElementTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8HTMLCanvasElementMethods, base::size(kV8HTMLCanvasElementMethods));

  // Custom signature

  V8HTMLCanvasElementPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8HTMLCanvasElementPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  V8HTMLCanvasElement::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  // Custom signature
  if (RuntimeEnabledFeatures::OffscreenCanvasEnabled()) {
    {
      // Install transferControlToOffscreen configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"transferControlToOffscreen", V8HTMLCanvasElementPartial::TransferControlToOffscreenMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8HTMLCanvasElementPartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8HTMLCanvasElement::UpdateWrapperTypeInfo(
      &V8HTMLCanvasElementPartial::InstallV8HTMLCanvasElementTemplate,
      nullptr,
      &V8HTMLCanvasElementPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      nullptr);
}

}  // namespace blink
