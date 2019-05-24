// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_rendering_context.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_promise.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_array_buffer_view.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_float32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_canvas_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_image_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_html_video_element.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_bitmap.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_image_data.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_int32_array.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_offscreen_canvas.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_active_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_context_attributes.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_framebuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_program.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_renderbuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader_precision_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_uniform_location.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/core/frame/dactyloscoper.h"
#include "third_party/blink/renderer/core/frame/use_counter.h"
#include "third_party/blink/renderer/core/typed_arrays/array_buffer_view_helpers.h"
#include "third_party/blink/renderer/core/typed_arrays/flexible_array_buffer_view.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/script_state.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_per_context_data.h"
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
const WrapperTypeInfo v8_webgl_rendering_context_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WebGLRenderingContext::DomTemplate,
    nullptr,
    "WebGLRenderingContext",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGLRenderingContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGLRenderingContext::wrapper_type_info_ = v8_webgl_rendering_context_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGLRenderingContext>::value,
    "WebGLRenderingContext inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGLRenderingContext::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGLRenderingContext is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace webgl_rendering_context_v8_internal {

static void CanvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(holder);

  HTMLCanvasElementOrOffscreenCanvas result;
  impl->getHTMLOrOffscreenCanvas(result);

  V8SetReturnValue(info, result);
}

static void DrawingBufferWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(holder);

  V8SetReturnValueInt(info, impl->drawingBufferWidth());
}

static void DrawingBufferHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(holder);

  V8SetReturnValueInt(info, impl->drawingBufferHeight());
}

static void ActiveTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "activeTexture");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t texture;
  texture = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->activeTexture(texture);
}

static void AttachShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLShader* shader;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGLRenderingContext", "parameter 2 is not of type 'WebGLShader'."));
    return;
  }

  impl->attachShader(program, shader);
}

static void BindAttribLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindAttribLocation");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t index;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  name = info[2];
  if (!name.Prepare())
    return;

  impl->bindAttribLocation(program, index, name);
}

static void BindBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindBuffer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLBuffer* buffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!buffer && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'WebGLBuffer'.");
    return;
  }

  impl->bindBuffer(target, buffer);
}

static void BindFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindFramebuffer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLFramebuffer* framebuffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!framebuffer && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'WebGLFramebuffer'.");
    return;
  }

  impl->bindFramebuffer(target, framebuffer);
}

static void BindRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindRenderbuffer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLRenderbuffer* renderbuffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!renderbuffer && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'WebGLRenderbuffer'.");
    return;
  }

  impl->bindRenderbuffer(target, renderbuffer);
}

static void BindTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bindTexture");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLTexture* texture;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!texture && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'WebGLTexture'.");
    return;
  }

  impl->bindTexture(target, texture);
}

static void BlendColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendColor");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  float red;
  float green;
  float blue;
  float alpha;
  red = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  green = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  blue = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  alpha = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->blendColor(red, green, blue, alpha);
}

static void BlendEquationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendEquation");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mode;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->blendEquation(mode);
}

static void BlendEquationSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendEquationSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t mode_rgb;
  uint32_t mode_alpha;
  mode_rgb = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  mode_alpha = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->blendEquationSeparate(mode_rgb, mode_alpha);
}

static void BlendFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendFunc");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t sfactor;
  uint32_t dfactor;
  sfactor = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  dfactor = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->blendFunc(sfactor, dfactor);
}

static void BlendFuncSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "blendFuncSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t src_rgb;
  uint32_t dst_rgb;
  uint32_t src_alpha;
  uint32_t dst_alpha;
  src_rgb = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  dst_rgb = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_alpha = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  dst_alpha = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->blendFuncSeparate(src_rgb, dst_rgb, src_alpha, dst_alpha);
}

static void BufferData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int64_t size;
  uint32_t usage;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  usage = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->bufferData(target, size, usage);
}

static void BufferData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t usage;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!data) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'ArrayBufferView'.");
    return;
  }

  usage = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->bufferData(target, data, usage);
}

static void BufferData3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  DOMArrayBuffer* data;
  uint32_t usage;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  data = V8ArrayBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!data && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'ArrayBuffer'.");
    return;
  }

  usage = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->bufferData(target, data, usage);
}

static void BufferDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 3:
      if (IsUndefinedOrNull(info[1])) {
        BufferData3Method(info);
        return;
      }
      if (info[1]->IsArrayBufferView()) {
        BufferData2Method(info);
        return;
      }
      if (info[1]->IsArrayBuffer()) {
        BufferData3Method(info);
        return;
      }
      if (info[1]->IsNumber()) {
        BufferData1Method(info);
        return;
      }
      if (true) {
        BufferData1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferData");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void BufferSubData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferSubData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int64_t offset;
  FlexibleArrayBufferView data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ToFlexibleArrayBufferView(info.GetIsolate(), info[2], data, allocateFlexibleArrayBufferViewStorage(info[2]));
  if (!data) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->bufferSubData(target, offset, data);
}

static void BufferSubData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferSubData");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int64_t offset;
  DOMArrayBuffer* data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  data = info[2]->IsArrayBuffer() ? V8ArrayBuffer::ToImpl(v8::Local<v8::ArrayBuffer>::Cast(info[2])) : 0;
  if (!data) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'ArrayBuffer'.");
    return;
  }

  impl->bufferSubData(target, offset, data);
}

static void BufferSubDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 3:
      if (info[2]->IsArrayBufferView()) {
        BufferSubData1Method(info);
        return;
      }
      if (info[2]->IsArrayBuffer()) {
        BufferSubData2Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "bufferSubData");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CheckFramebufferStatusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "checkFramebufferStatus");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t target;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueUnsigned(info, impl->checkFramebufferStatus(target));
}

static void ClearMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "clear");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mask;
  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->clear(mask);
}

static void ClearColorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "clearColor");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  float red;
  float green;
  float blue;
  float alpha;
  red = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  green = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  blue = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  alpha = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->clearColor(red, green, blue, alpha);
}

static void ClearDepthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "clearDepth");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float depth;
  depth = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->clearDepth(depth);
}

static void ClearStencilMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "clearStencil");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  int32_t s;
  s = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->clearStencil(s);
}

static void ColorMaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "colorMask");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  bool red;
  bool green;
  bool blue;
  bool alpha;
  red = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  green = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  blue = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  alpha = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->colorMask(red, green, blue, alpha);
}

static void CompileShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compileShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compileShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  impl->compileShader(shader);
}

static void CompressedTexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "compressedTexImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  MaybeShared<DOMArrayBufferView> data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;
  if (!data) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->compressedTexImage2D(target, level, internalformat, width, height, border, data);
}

static void CompressedTexSubImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "compressedTexSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 8)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
    return;
  }

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  MaybeShared<DOMArrayBufferView> data;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;
  if (!data) {
    exception_state.ThrowTypeError("parameter 8 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->compressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, data);
}

static void CopyTexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "copyTexImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 8)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
    return;
  }

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  int32_t border;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  impl->copyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

static void CopyTexSubImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "copyTexSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 8)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
    return;
  }

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  impl->copyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

static void CreateBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createBuffer());
}

static void CreateFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createFramebuffer());
}

static void CreateProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createProgram());
}

static void CreateRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createRenderbuffer());
}

static void CreateShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "createShader");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t type;
  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->createShader(type));
}

static void CreateTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createTexture());
}

static void CullFaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "cullFace");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mode;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->cullFace(mode);
}

static void DeleteBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteBuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLBuffer* buffer;
  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteBuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLBuffer'."));
    return;
  }

  impl->deleteBuffer(buffer);
}

static void DeleteFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteFramebuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLFramebuffer* framebuffer;
  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!framebuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteFramebuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLFramebuffer'."));
    return;
  }

  impl->deleteFramebuffer(framebuffer);
}

static void DeleteProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->deleteProgram(program);
}

static void DeleteRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteRenderbuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLRenderbuffer* renderbuffer;
  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!renderbuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteRenderbuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLRenderbuffer'."));
    return;
  }

  impl->deleteRenderbuffer(renderbuffer);
}

static void DeleteShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  impl->deleteShader(shader);
}

static void DeleteTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTexture", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTexture* texture;
  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!texture && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTexture", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLTexture'."));
    return;
  }

  impl->deleteTexture(texture);
}

static void DepthFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "depthFunc");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t func;
  func = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->depthFunc(func);
}

static void DepthMaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "depthMask");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  bool flag;
  flag = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->depthMask(flag);
}

static void DepthRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "depthRange");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float z_near;
  float z_far;
  z_near = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  z_far = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->depthRange(z_near, z_far);
}

static void DetachShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLShader* shader;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGLRenderingContext", "parameter 2 is not of type 'WebGLShader'."));
    return;
  }

  impl->detachShader(program, shader);
}

static void DisableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "disable");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t cap;
  cap = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->disable(cap);
}

static void DisableVertexAttribArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "disableVertexAttribArray");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->disableVertexAttribArray(index);
}

static void DrawArraysMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "drawArrays");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t first;
  int32_t count;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  first = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawArrays(mode, first, count);
}

static void DrawElementsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "drawElements");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t count;
  uint32_t type;
  int64_t offset;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawElements(mode, count, type, offset);
}

static void EnableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "enable");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t cap;
  cap = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->enable(cap);
}

static void EnableVertexAttribArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "enableVertexAttribArray");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t index;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->enableVertexAttribArray(index);
}

static void FinishMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  impl->finish();
}

static void FlushMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  impl->flush();
}

static void FramebufferRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "framebufferRenderbuffer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  uint32_t renderbuffertarget;
  WebGLRenderbuffer* renderbuffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  renderbuffertarget = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[3]);
  if (!renderbuffer && !IsUndefinedOrNull(info[3])) {
    exception_state.ThrowTypeError("parameter 4 is not of type 'WebGLRenderbuffer'.");
    return;
  }

  impl->framebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

static void FramebufferTexture2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "framebufferTexture2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  uint32_t textarget;
  WebGLTexture* texture;
  int32_t level;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  textarget = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[3]);
  if (!texture && !IsUndefinedOrNull(info[3])) {
    exception_state.ThrowTypeError("parameter 4 is not of type 'WebGLTexture'.");
    return;
  }

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->framebufferTexture2D(target, attachment, textarget, texture, level);
}

static void FrontFaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "frontFace");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mode;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->frontFace(mode);
}

static void GenerateMipmapMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "generateMipmap");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t target;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->generateMipmap(target);
}

static void GetActiveAttribMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getActiveAttrib");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t index;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->getActiveAttrib(program, index));
}

static void GetActiveUniformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getActiveUniform");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t index;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->getActiveUniform(program, index));
}

static void GetAttachedShadersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttachedShaders", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttachedShaders", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  base::Optional<HeapVector<Member<WebGLShader>>> result = impl->getAttachedShaders(program);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void GetAttribLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribLocation", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribLocation", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValueInt(info, impl->getAttribLocation(program, name));
}

static void GetBufferParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getBufferParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getBufferParameter(script_state, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetContextAttributesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLContextAttributes* result = impl->getContextAttributes();
  V8SetReturnValue(info, result);
}

static void GetErrorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->getError());
}

static void GetExtensionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getExtension", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  V8StringResource<> name;
  name = info[0];
  if (!name.Prepare())
    return;

  ScriptValue result = impl->getExtension(script_state, name);
  V8SetReturnValue(info, result.V8Value());
}

static void GetFramebufferAttachmentParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getFramebufferAttachmentParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getFramebufferAttachmentParameter(script_state, target, attachment, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t pname;
  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getParameter(script_state, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetProgramParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getProgramParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t pname;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getProgramParameter(script_state, program, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetProgramInfoLogMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgramInfoLog", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgramInfoLog", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getProgramInfoLog(program), info.GetIsolate());
}

static void GetRenderbufferParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getRenderbufferParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getRenderbufferParameter(script_state, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetShaderParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getShaderParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLShader* shader;
  uint32_t pname;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLShader'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getShaderParameter(script_state, shader, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetShaderInfoLogMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderInfoLog", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderInfoLog", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getShaderInfoLog(shader), info.GetIsolate());
}

static void GetShaderPrecisionFormatMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getShaderPrecisionFormat");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t shadertype;
  uint32_t precisiontype;
  shadertype = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  precisiontype = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->getShaderPrecisionFormat(shadertype, precisiontype));
}

static void GetShaderSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderSource", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderSource", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getShaderSource(shader), info.GetIsolate());
}

static void GetSupportedExtensionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  base::Optional<Vector<String>> result = impl->getSupportedExtensions();
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void GetTexParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getTexParameter");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getTexParameter(script_state, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetUniformMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLUniformLocation* location;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!location) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGLRenderingContext", "parameter 2 is not of type 'WebGLUniformLocation'."));
    return;
  }

  ScriptValue result = impl->getUniform(script_state, program, location);
  V8SetReturnValue(info, result.V8Value());
}

static void GetUniformLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformLocation", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformLocation", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValue(info, impl->getUniformLocation(program, name));
}

static void GetVertexAttribMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getVertexAttrib");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t index;
  uint32_t pname;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getVertexAttrib(script_state, index, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetVertexAttribOffsetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "getVertexAttribOffset");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t index;
  uint32_t pname;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, static_cast<double>(impl->getVertexAttribOffset(index, pname)));
}

static void HintMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "hint");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t mode;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->hint(target, mode);
}

static void IsBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isBuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLBuffer* buffer;
  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isBuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLBuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isBuffer(buffer));
}

static void IsContextLostMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isContextLost());
}

static void IsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "isEnabled");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t cap;
  cap = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueBool(info, impl->isEnabled(cap));
}

static void IsFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isFramebuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLFramebuffer* framebuffer;
  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!framebuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isFramebuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLFramebuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isFramebuffer(framebuffer));
}

static void IsProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isProgram(program));
}

static void IsRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isRenderbuffer", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLRenderbuffer* renderbuffer;
  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!renderbuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isRenderbuffer", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLRenderbuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isRenderbuffer(renderbuffer));
}

static void IsShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isShader", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isShader", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isShader(shader));
}

static void IsTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTexture", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTexture* texture;
  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!texture && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTexture", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLTexture'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isTexture(texture));
}

static void LineWidthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "lineWidth");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  float width;
  width = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->lineWidth(width);
}

static void LinkProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("linkProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("linkProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->linkProgram(program);
}

static void PixelStoreiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "pixelStorei");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t pname;
  int32_t param;
  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  param = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->pixelStorei(pname, param);
}

static void PolygonOffsetMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "polygonOffset");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float factor;
  float units;
  factor = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  units = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->polygonOffset(factor, units);
}

static void ReadPixelsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "readPixels");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 7)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
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

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;
  if (!pixels && !IsUndefinedOrNull(info[6])) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->readPixels(x, y, width, height, format, type, pixels);
}

static void RenderbufferStorageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "renderbufferStorage");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->renderbufferStorage(target, internalformat, width, height);
}

static void SampleCoverageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "sampleCoverage");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  float value;
  bool invert;
  value = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  invert = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->sampleCoverage(value, invert);
}

static void ScissorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "scissor");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
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

  impl->scissor(x, y, width, height);
}

static void ShaderSourceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shaderSource", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLShader* shader;
  V8StringResource<> string;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shaderSource", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  string = info[1];
  if (!string.Prepare())
    return;

  impl->shaderSource(shader, string);
}

static void StencilFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilFunc");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t func;
  int32_t ref;
  uint32_t mask;
  func = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  ref = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->stencilFunc(func, ref, mask);
}

static void StencilFuncSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilFuncSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t face;
  uint32_t func;
  int32_t ref;
  uint32_t mask;
  face = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  func = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ref = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->stencilFuncSeparate(face, func, ref, mask);
}

static void StencilMaskMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilMask");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mask;
  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->stencilMask(mask);
}

static void StencilMaskSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilMaskSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t face;
  uint32_t mask;
  face = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->stencilMaskSeparate(face, mask);
}

static void StencilOpMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilOp");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t fail;
  uint32_t zfail;
  uint32_t zpass;
  fail = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  zfail = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  zpass = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->stencilOp(fail, zfail, zpass);
}

static void StencilOpSeparateMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "stencilOpSeparate");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t face;
  uint32_t fail;
  uint32_t zfail;
  uint32_t zpass;
  face = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  fail = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  zfail = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  zpass = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->stencilOpSeparate(face, fail, zfail, zpass);
}

static void TexParameterfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texParameterf");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  float param;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  param = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->texParameterf(target, pname, param);
}

static void TexParameteriMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texParameteri");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t pname;
  int32_t param;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  param = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->texParameteri(target, pname, param);
}

static void TexImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;
  if (!pixels && !IsUndefinedOrNull(info[8])) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

static void TexImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  ImageData* pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  pixels = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!pixels) {
    exception_state.ThrowTypeError("parameter 6 is not of type 'ImageData'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, format, type, pixels);
}

static void TexImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  HTMLImageElement* image;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!image) {
    exception_state.ThrowTypeError("parameter 6 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(execution_context, target, level, internalformat, format, type, image, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  HTMLCanvasElement* canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!canvas) {
    exception_state.ThrowTypeError("parameter 6 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(execution_context, target, level, internalformat, format, type, canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  OffscreenCanvas* offscreen_canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  offscreen_canvas = V8OffscreenCanvas::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!offscreen_canvas) {
    exception_state.ThrowTypeError("parameter 6 is not of type 'OffscreenCanvas'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(execution_context, target, level, internalformat, format, type, offscreen_canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  HTMLVideoElement* video;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!video) {
    exception_state.ThrowTypeError("parameter 6 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(execution_context, target, level, internalformat, format, type, video, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  uint32_t format;
  uint32_t type;
  ImageBitmap* bitmap;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[5]);
  if (!bitmap) {
    exception_state.ThrowTypeError("parameter 6 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, format, type, bitmap, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(9, info.Length())) {
    case 6:
      if (V8ImageData::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D2Method(info);
        return;
      }
      if (V8HTMLImageElement::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D4Method(info);
        return;
      }
      if (V8OffscreenCanvas::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D5Method(info);
        return;
      }
      if (V8HTMLVideoElement::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D6Method(info);
        return;
      }
      if (V8ImageBitmap::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D7Method(info);
        return;
      }
      break;
    case 9:
      if (true) {
        TexImage2D1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texImage2D");
  if (is_arity_error) {
    if (info.Length() < 6) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
      return;
    }
    if (info.Length() >= 6) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[6, 9]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void TexSubImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;
  if (!pixels && !IsUndefinedOrNull(info[8])) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

static void TexSubImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  ImageData* pixels;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  pixels = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!pixels) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'ImageData'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, format, type, pixels);
}

static void TexSubImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  HTMLImageElement* image;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!image) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(execution_context, target, level, xoffset, yoffset, format, type, image, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  HTMLCanvasElement* canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!canvas) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(execution_context, target, level, xoffset, yoffset, format, type, canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  OffscreenCanvas* offscreen_canvas;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  offscreen_canvas = V8OffscreenCanvas::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!offscreen_canvas) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'OffscreenCanvas'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(execution_context, target, level, xoffset, yoffset, format, type, offscreen_canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  HTMLVideoElement* video;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!video) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(execution_context, target, level, xoffset, yoffset, format, type, video, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  uint32_t format;
  uint32_t type;
  ImageBitmap* bitmap;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  xoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  yoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[6]);
  if (!bitmap) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, format, type, bitmap, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(9, info.Length())) {
    case 7:
      if (V8ImageData::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D2Method(info);
        return;
      }
      if (V8HTMLImageElement::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D4Method(info);
        return;
      }
      if (V8OffscreenCanvas::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D5Method(info);
        return;
      }
      if (V8HTMLVideoElement::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D6Method(info);
        return;
      }
      if (V8ImageBitmap::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D7Method(info);
        return;
      }
      break;
    case 9:
      if (true) {
        TexSubImage2D1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "texSubImage2D");
  if (is_arity_error) {
    if (info.Length() < 7) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
      return;
    }
    if (info.Length() >= 7) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[7, 9]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform1FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  float x;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform1f(location, x);
}

static void Uniform1Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->uniform1fv(location, v);
}

static void Uniform1Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform1fv(location, v);
}

static void Uniform1FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        Uniform1Fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform1Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniform1fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform1Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform1IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1i");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  int32_t x;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform1i(location, x);
}

static void Uniform1Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->uniform1iv(location, v);
}

static void Uniform1Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform1iv(location, v);
}

static void Uniform1IvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        Uniform1Iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform1Iv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniform1iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform1Iv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform1iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform2FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  float x;
  float y;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform2f(location, x, y);
}

static void Uniform2Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->uniform2fv(location, v);
}

static void Uniform2Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform2fv(location, v);
}

static void Uniform2FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        Uniform2Fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniform2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform2Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform2IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2i");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  int32_t x;
  int32_t y;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform2i(location, x, y);
}

static void Uniform2Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->uniform2iv(location, v);
}

static void Uniform2Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform2iv(location, v);
}

static void Uniform2IvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        Uniform2Iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform2Iv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniform2iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform2Iv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform2iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform3FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  float x;
  float y;
  float z;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform3f(location, x, y, z);
}

static void Uniform3Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->uniform3fv(location, v);
}

static void Uniform3Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform3fv(location, v);
}

static void Uniform3FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        Uniform3Fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniform3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform3Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform3IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3i");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  int32_t x;
  int32_t y;
  int32_t z;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform3i(location, x, y, z);
}

static void Uniform3Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->uniform3iv(location, v);
}

static void Uniform3Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform3iv(location, v);
}

static void Uniform3IvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        Uniform3Iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform3Iv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniform3iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform3Iv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform3iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform4FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  float x;
  float y;
  float z;
  float w;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  w = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform4f(location, x, y, z, w);
}

static void Uniform4Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->uniform4fv(location, v);
}

static void Uniform4Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform4fv(location, v);
}

static void Uniform4FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        Uniform4Fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniform4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform4Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform4IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4i");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  int32_t x;
  int32_t y;
  int32_t z;
  int32_t w;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  w = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform4i(location, x, y, z, w);
}

static void Uniform4Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->uniform4iv(location, v);
}

static void Uniform4Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4iv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform4iv(location, v);
}

static void Uniform4IvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        Uniform4Iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform4Iv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniform4iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform4Iv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniform4iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix2Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!array) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  impl->uniformMatrix2fv(location, transpose, array);
}

static void UniformMatrix2Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniformMatrix2fv(location, transpose, array);
}

static void UniformMatrix2FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix2Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniformMatrix2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix2Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix2fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix3Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!array) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  impl->uniformMatrix3fv(location, transpose, array);
}

static void UniformMatrix3Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniformMatrix3fv(location, transpose, array);
}

static void UniformMatrix3FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix3Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniformMatrix3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix3Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix3fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix4Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  array = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!array) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  impl->uniformMatrix4fv(location, transpose, array);
}

static void UniformMatrix4Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  array = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniformMatrix4fv(location, transpose, array);
}

static void UniformMatrix4FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(3, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix4Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "uniformMatrix4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix4Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "uniformMatrix4fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UseProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("useProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("useProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->useProgram(program);
}

static void ValidateProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("validateProgram", "WebGLRenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("validateProgram", "WebGLRenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->validateProgram(program);
}

static void VertexAttrib1FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib1f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t indx;
  float x;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttrib1f(indx, x);
}

static void VertexAttrib1Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib1fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  MaybeShared<DOMFloat32Array> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  values = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!values) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->vertexAttrib1fv(indx, values);
}

static void VertexAttrib1Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib1fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  Vector<float> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  values = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttrib1fv(indx, values);
}

static void VertexAttrib1FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        VertexAttrib1Fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        VertexAttrib1Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "vertexAttrib1fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          VertexAttrib1Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib1fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttrib2FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib2f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t indx;
  float x;
  float y;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttrib2f(indx, x, y);
}

static void VertexAttrib2Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  MaybeShared<DOMFloat32Array> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  values = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!values) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->vertexAttrib2fv(indx, values);
}

static void VertexAttrib2Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib2fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  Vector<float> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  values = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttrib2fv(indx, values);
}

static void VertexAttrib2FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        VertexAttrib2Fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        VertexAttrib2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "vertexAttrib2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          VertexAttrib2Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib2fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttrib3FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib3f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t indx;
  float x;
  float y;
  float z;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttrib3f(indx, x, y, z);
}

static void VertexAttrib3Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  MaybeShared<DOMFloat32Array> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  values = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!values) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->vertexAttrib3fv(indx, values);
}

static void VertexAttrib3Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib3fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  Vector<float> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  values = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttrib3fv(indx, values);
}

static void VertexAttrib3FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        VertexAttrib3Fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        VertexAttrib3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "vertexAttrib3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          VertexAttrib3Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib3fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttrib4FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib4f");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t indx;
  float x;
  float y;
  float z;
  float w;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  w = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttrib4f(indx, x, y, z, w);
}

static void VertexAttrib4Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  MaybeShared<DOMFloat32Array> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  values = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!values) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Float32Array'.");
    return;
  }

  impl->vertexAttrib4fv(indx, values);
}

static void VertexAttrib4Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib4fv");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  uint32_t indx;
  Vector<float> values;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  values = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttrib4fv(indx, values);
}

static void VertexAttrib4FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        VertexAttrib4Fv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        VertexAttrib4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGLRenderingContext", "vertexAttrib4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          VertexAttrib4Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttrib4fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttribPointerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "vertexAttribPointer");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t indx;
  int32_t size;
  uint32_t type;
  bool normalized;
  int32_t stride;
  int64_t offset;
  indx = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  normalized = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  stride = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttribPointer(indx, size, type, normalized, stride, offset);
}

static void ViewportMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "viewport");

  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
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

  impl->viewport(x, y, width, height);
}

static void CommitMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  impl->commit();
}

static void MakeXRCompatibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGLRenderingContext", "makeXRCompatible");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8WebGLRenderingContext::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  WebGLRenderingContext* impl = V8WebGLRenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->makeXRCompatible(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace webgl_rendering_context_v8_internal

void V8WebGLRenderingContext::CanvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_canvas_Getter");

  webgl_rendering_context_v8_internal::CanvasAttributeGetter(info);
}

void V8WebGLRenderingContext::DrawingBufferWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_drawingBufferWidth_Getter");

  webgl_rendering_context_v8_internal::DrawingBufferWidthAttributeGetter(info);
}

void V8WebGLRenderingContext::DrawingBufferHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_drawingBufferHeight_Getter");

  webgl_rendering_context_v8_internal::DrawingBufferHeightAttributeGetter(info);
}

void V8WebGLRenderingContext::ActiveTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_activeTexture");

  webgl_rendering_context_v8_internal::ActiveTextureMethod(info);
}

void V8WebGLRenderingContext::AttachShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_attachShader");

  webgl_rendering_context_v8_internal::AttachShaderMethod(info);
}

void V8WebGLRenderingContext::BindAttribLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindAttribLocation");

  webgl_rendering_context_v8_internal::BindAttribLocationMethod(info);
}

void V8WebGLRenderingContext::BindBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindBuffer");

  webgl_rendering_context_v8_internal::BindBufferMethod(info);
}

void V8WebGLRenderingContext::BindFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindFramebuffer");

  webgl_rendering_context_v8_internal::BindFramebufferMethod(info);
}

void V8WebGLRenderingContext::BindRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindRenderbuffer");

  webgl_rendering_context_v8_internal::BindRenderbufferMethod(info);
}

void V8WebGLRenderingContext::BindTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bindTexture");

  webgl_rendering_context_v8_internal::BindTextureMethod(info);
}

void V8WebGLRenderingContext::BlendColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendColor");

  webgl_rendering_context_v8_internal::BlendColorMethod(info);
}

void V8WebGLRenderingContext::BlendEquationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendEquation");

  webgl_rendering_context_v8_internal::BlendEquationMethod(info);
}

void V8WebGLRenderingContext::BlendEquationSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendEquationSeparate");

  webgl_rendering_context_v8_internal::BlendEquationSeparateMethod(info);
}

void V8WebGLRenderingContext::BlendFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendFunc");

  webgl_rendering_context_v8_internal::BlendFuncMethod(info);
}

void V8WebGLRenderingContext::BlendFuncSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_blendFuncSeparate");

  webgl_rendering_context_v8_internal::BlendFuncSeparateMethod(info);
}

void V8WebGLRenderingContext::BufferDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bufferData");

  webgl_rendering_context_v8_internal::BufferDataMethod(info);
}

void V8WebGLRenderingContext::BufferSubDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_bufferSubData");

  webgl_rendering_context_v8_internal::BufferSubDataMethod(info);
}

void V8WebGLRenderingContext::CheckFramebufferStatusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_checkFramebufferStatus");

  webgl_rendering_context_v8_internal::CheckFramebufferStatusMethod(info);
}

void V8WebGLRenderingContext::ClearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_clear");

  webgl_rendering_context_v8_internal::ClearMethod(info);
}

void V8WebGLRenderingContext::ClearColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_clearColor");

  webgl_rendering_context_v8_internal::ClearColorMethod(info);
}

void V8WebGLRenderingContext::ClearDepthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_clearDepth");

  webgl_rendering_context_v8_internal::ClearDepthMethod(info);
}

void V8WebGLRenderingContext::ClearStencilMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_clearStencil");

  webgl_rendering_context_v8_internal::ClearStencilMethod(info);
}

void V8WebGLRenderingContext::ColorMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_colorMask");

  webgl_rendering_context_v8_internal::ColorMaskMethod(info);
}

void V8WebGLRenderingContext::CompileShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_compileShader");

  webgl_rendering_context_v8_internal::CompileShaderMethod(info);
}

void V8WebGLRenderingContext::CompressedTexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_compressedTexImage2D");

  webgl_rendering_context_v8_internal::CompressedTexImage2DMethod(info);
}

void V8WebGLRenderingContext::CompressedTexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_compressedTexSubImage2D");

  webgl_rendering_context_v8_internal::CompressedTexSubImage2DMethod(info);
}

void V8WebGLRenderingContext::CopyTexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_copyTexImage2D");

  webgl_rendering_context_v8_internal::CopyTexImage2DMethod(info);
}

void V8WebGLRenderingContext::CopyTexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_copyTexSubImage2D");

  webgl_rendering_context_v8_internal::CopyTexSubImage2DMethod(info);
}

void V8WebGLRenderingContext::CreateBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createBuffer");

  webgl_rendering_context_v8_internal::CreateBufferMethod(info);
}

void V8WebGLRenderingContext::CreateFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createFramebuffer");

  webgl_rendering_context_v8_internal::CreateFramebufferMethod(info);
}

void V8WebGLRenderingContext::CreateProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createProgram");

  webgl_rendering_context_v8_internal::CreateProgramMethod(info);
}

void V8WebGLRenderingContext::CreateRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createRenderbuffer");

  webgl_rendering_context_v8_internal::CreateRenderbufferMethod(info);
}

void V8WebGLRenderingContext::CreateShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createShader");

  webgl_rendering_context_v8_internal::CreateShaderMethod(info);
}

void V8WebGLRenderingContext::CreateTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_createTexture");

  webgl_rendering_context_v8_internal::CreateTextureMethod(info);
}

void V8WebGLRenderingContext::CullFaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_cullFace");

  webgl_rendering_context_v8_internal::CullFaceMethod(info);
}

void V8WebGLRenderingContext::DeleteBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteBuffer");

  webgl_rendering_context_v8_internal::DeleteBufferMethod(info);
}

void V8WebGLRenderingContext::DeleteFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteFramebuffer");

  webgl_rendering_context_v8_internal::DeleteFramebufferMethod(info);
}

void V8WebGLRenderingContext::DeleteProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteProgram");

  webgl_rendering_context_v8_internal::DeleteProgramMethod(info);
}

void V8WebGLRenderingContext::DeleteRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteRenderbuffer");

  webgl_rendering_context_v8_internal::DeleteRenderbufferMethod(info);
}

void V8WebGLRenderingContext::DeleteShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteShader");

  webgl_rendering_context_v8_internal::DeleteShaderMethod(info);
}

void V8WebGLRenderingContext::DeleteTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_deleteTexture");

  webgl_rendering_context_v8_internal::DeleteTextureMethod(info);
}

void V8WebGLRenderingContext::DepthFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_depthFunc");

  webgl_rendering_context_v8_internal::DepthFuncMethod(info);
}

void V8WebGLRenderingContext::DepthMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_depthMask");

  webgl_rendering_context_v8_internal::DepthMaskMethod(info);
}

void V8WebGLRenderingContext::DepthRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_depthRange");

  webgl_rendering_context_v8_internal::DepthRangeMethod(info);
}

void V8WebGLRenderingContext::DetachShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_detachShader");

  webgl_rendering_context_v8_internal::DetachShaderMethod(info);
}

void V8WebGLRenderingContext::DisableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_disable");

  webgl_rendering_context_v8_internal::DisableMethod(info);
}

void V8WebGLRenderingContext::DisableVertexAttribArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_disableVertexAttribArray");

  webgl_rendering_context_v8_internal::DisableVertexAttribArrayMethod(info);
}

void V8WebGLRenderingContext::DrawArraysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_drawArrays");

  webgl_rendering_context_v8_internal::DrawArraysMethod(info);
}

void V8WebGLRenderingContext::DrawElementsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_drawElements");

  webgl_rendering_context_v8_internal::DrawElementsMethod(info);
}

void V8WebGLRenderingContext::EnableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_enable");

  webgl_rendering_context_v8_internal::EnableMethod(info);
}

void V8WebGLRenderingContext::EnableVertexAttribArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_enableVertexAttribArray");

  webgl_rendering_context_v8_internal::EnableVertexAttribArrayMethod(info);
}

void V8WebGLRenderingContext::FinishMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_finish");

  webgl_rendering_context_v8_internal::FinishMethod(info);
}

void V8WebGLRenderingContext::FlushMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_flush");

  webgl_rendering_context_v8_internal::FlushMethod(info);
}

void V8WebGLRenderingContext::FramebufferRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_framebufferRenderbuffer");

  webgl_rendering_context_v8_internal::FramebufferRenderbufferMethod(info);
}

void V8WebGLRenderingContext::FramebufferTexture2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_framebufferTexture2D");

  webgl_rendering_context_v8_internal::FramebufferTexture2DMethod(info);
}

void V8WebGLRenderingContext::FrontFaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_frontFace");

  webgl_rendering_context_v8_internal::FrontFaceMethod(info);
}

void V8WebGLRenderingContext::GenerateMipmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_generateMipmap");

  webgl_rendering_context_v8_internal::GenerateMipmapMethod(info);
}

void V8WebGLRenderingContext::GetActiveAttribMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getActiveAttrib");

  webgl_rendering_context_v8_internal::GetActiveAttribMethod(info);
}

void V8WebGLRenderingContext::GetActiveUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getActiveUniform");

  webgl_rendering_context_v8_internal::GetActiveUniformMethod(info);
}

void V8WebGLRenderingContext::GetAttachedShadersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getAttachedShaders");

  webgl_rendering_context_v8_internal::GetAttachedShadersMethod(info);
}

void V8WebGLRenderingContext::GetAttribLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getAttribLocation");

  webgl_rendering_context_v8_internal::GetAttribLocationMethod(info);
}

void V8WebGLRenderingContext::GetBufferParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getBufferParameter");

  webgl_rendering_context_v8_internal::GetBufferParameterMethod(info);
}

void V8WebGLRenderingContext::GetContextAttributesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getContextAttributes");

  webgl_rendering_context_v8_internal::GetContextAttributesMethod(info);
}

void V8WebGLRenderingContext::GetErrorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getError");

  webgl_rendering_context_v8_internal::GetErrorMethod(info);
}

void V8WebGLRenderingContext::GetExtensionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getExtension");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8WebGLRenderingContext_GetExtension_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8WebGLRenderingContext_GetExtension_Method);
  webgl_rendering_context_v8_internal::GetExtensionMethod(info);
}

void V8WebGLRenderingContext::GetFramebufferAttachmentParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getFramebufferAttachmentParameter");

  webgl_rendering_context_v8_internal::GetFramebufferAttachmentParameterMethod(info);
}

void V8WebGLRenderingContext::GetParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getParameter");

  webgl_rendering_context_v8_internal::GetParameterMethod(info);
}

void V8WebGLRenderingContext::GetProgramParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getProgramParameter");

  webgl_rendering_context_v8_internal::GetProgramParameterMethod(info);
}

void V8WebGLRenderingContext::GetProgramInfoLogMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getProgramInfoLog");

  webgl_rendering_context_v8_internal::GetProgramInfoLogMethod(info);
}

void V8WebGLRenderingContext::GetRenderbufferParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getRenderbufferParameter");

  webgl_rendering_context_v8_internal::GetRenderbufferParameterMethod(info);
}

void V8WebGLRenderingContext::GetShaderParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getShaderParameter");

  webgl_rendering_context_v8_internal::GetShaderParameterMethod(info);
}

void V8WebGLRenderingContext::GetShaderInfoLogMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getShaderInfoLog");

  webgl_rendering_context_v8_internal::GetShaderInfoLogMethod(info);
}

void V8WebGLRenderingContext::GetShaderPrecisionFormatMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getShaderPrecisionFormat");

  webgl_rendering_context_v8_internal::GetShaderPrecisionFormatMethod(info);
}

void V8WebGLRenderingContext::GetShaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getShaderSource");

  webgl_rendering_context_v8_internal::GetShaderSourceMethod(info);
}

void V8WebGLRenderingContext::GetSupportedExtensionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getSupportedExtensions");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8WebGLRenderingContext_GetSupportedExtensions_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8WebGLRenderingContext_GetSupportedExtensions_Method);
  webgl_rendering_context_v8_internal::GetSupportedExtensionsMethod(info);
}

void V8WebGLRenderingContext::GetTexParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getTexParameter");

  webgl_rendering_context_v8_internal::GetTexParameterMethod(info);
}

void V8WebGLRenderingContext::GetUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getUniform");

  webgl_rendering_context_v8_internal::GetUniformMethod(info);
}

void V8WebGLRenderingContext::GetUniformLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getUniformLocation");

  webgl_rendering_context_v8_internal::GetUniformLocationMethod(info);
}

void V8WebGLRenderingContext::GetVertexAttribMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getVertexAttrib");

  webgl_rendering_context_v8_internal::GetVertexAttribMethod(info);
}

void V8WebGLRenderingContext::GetVertexAttribOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_getVertexAttribOffset");

  webgl_rendering_context_v8_internal::GetVertexAttribOffsetMethod(info);
}

void V8WebGLRenderingContext::HintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_hint");

  webgl_rendering_context_v8_internal::HintMethod(info);
}

void V8WebGLRenderingContext::IsBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isBuffer");

  webgl_rendering_context_v8_internal::IsBufferMethod(info);
}

void V8WebGLRenderingContext::IsContextLostMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isContextLost");

  webgl_rendering_context_v8_internal::IsContextLostMethod(info);
}

void V8WebGLRenderingContext::IsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isEnabled");

  webgl_rendering_context_v8_internal::IsEnabledMethod(info);
}

void V8WebGLRenderingContext::IsFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isFramebuffer");

  webgl_rendering_context_v8_internal::IsFramebufferMethod(info);
}

void V8WebGLRenderingContext::IsProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isProgram");

  webgl_rendering_context_v8_internal::IsProgramMethod(info);
}

void V8WebGLRenderingContext::IsRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isRenderbuffer");

  webgl_rendering_context_v8_internal::IsRenderbufferMethod(info);
}

void V8WebGLRenderingContext::IsShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isShader");

  webgl_rendering_context_v8_internal::IsShaderMethod(info);
}

void V8WebGLRenderingContext::IsTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_isTexture");

  webgl_rendering_context_v8_internal::IsTextureMethod(info);
}

void V8WebGLRenderingContext::LineWidthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_lineWidth");

  webgl_rendering_context_v8_internal::LineWidthMethod(info);
}

void V8WebGLRenderingContext::LinkProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_linkProgram");

  webgl_rendering_context_v8_internal::LinkProgramMethod(info);
}

void V8WebGLRenderingContext::PixelStoreiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_pixelStorei");

  webgl_rendering_context_v8_internal::PixelStoreiMethod(info);
}

void V8WebGLRenderingContext::PolygonOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_polygonOffset");

  webgl_rendering_context_v8_internal::PolygonOffsetMethod(info);
}

void V8WebGLRenderingContext::ReadPixelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_readPixels");

  webgl_rendering_context_v8_internal::ReadPixelsMethod(info);
}

void V8WebGLRenderingContext::RenderbufferStorageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_renderbufferStorage");

  webgl_rendering_context_v8_internal::RenderbufferStorageMethod(info);
}

void V8WebGLRenderingContext::SampleCoverageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_sampleCoverage");

  webgl_rendering_context_v8_internal::SampleCoverageMethod(info);
}

void V8WebGLRenderingContext::ScissorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_scissor");

  webgl_rendering_context_v8_internal::ScissorMethod(info);
}

void V8WebGLRenderingContext::ShaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_shaderSource");

  webgl_rendering_context_v8_internal::ShaderSourceMethod(info);
}

void V8WebGLRenderingContext::StencilFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilFunc");

  webgl_rendering_context_v8_internal::StencilFuncMethod(info);
}

void V8WebGLRenderingContext::StencilFuncSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilFuncSeparate");

  webgl_rendering_context_v8_internal::StencilFuncSeparateMethod(info);
}

void V8WebGLRenderingContext::StencilMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilMask");

  webgl_rendering_context_v8_internal::StencilMaskMethod(info);
}

void V8WebGLRenderingContext::StencilMaskSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilMaskSeparate");

  webgl_rendering_context_v8_internal::StencilMaskSeparateMethod(info);
}

void V8WebGLRenderingContext::StencilOpMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilOp");

  webgl_rendering_context_v8_internal::StencilOpMethod(info);
}

void V8WebGLRenderingContext::StencilOpSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_stencilOpSeparate");

  webgl_rendering_context_v8_internal::StencilOpSeparateMethod(info);
}

void V8WebGLRenderingContext::TexParameterfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_texParameterf");

  webgl_rendering_context_v8_internal::TexParameterfMethod(info);
}

void V8WebGLRenderingContext::TexParameteriMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_texParameteri");

  webgl_rendering_context_v8_internal::TexParameteriMethod(info);
}

void V8WebGLRenderingContext::TexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_texImage2D");

  webgl_rendering_context_v8_internal::TexImage2DMethod(info);
}

void V8WebGLRenderingContext::TexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_texSubImage2D");

  webgl_rendering_context_v8_internal::TexSubImage2DMethod(info);
}

void V8WebGLRenderingContext::Uniform1FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform1f");

  webgl_rendering_context_v8_internal::Uniform1FMethod(info);
}

void V8WebGLRenderingContext::Uniform1FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform1fv");

  webgl_rendering_context_v8_internal::Uniform1FvMethod(info);
}

void V8WebGLRenderingContext::Uniform1IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform1i");

  webgl_rendering_context_v8_internal::Uniform1IMethod(info);
}

void V8WebGLRenderingContext::Uniform1IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform1iv");

  webgl_rendering_context_v8_internal::Uniform1IvMethod(info);
}

void V8WebGLRenderingContext::Uniform2FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform2f");

  webgl_rendering_context_v8_internal::Uniform2FMethod(info);
}

void V8WebGLRenderingContext::Uniform2FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform2fv");

  webgl_rendering_context_v8_internal::Uniform2FvMethod(info);
}

void V8WebGLRenderingContext::Uniform2IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform2i");

  webgl_rendering_context_v8_internal::Uniform2IMethod(info);
}

void V8WebGLRenderingContext::Uniform2IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform2iv");

  webgl_rendering_context_v8_internal::Uniform2IvMethod(info);
}

void V8WebGLRenderingContext::Uniform3FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform3f");

  webgl_rendering_context_v8_internal::Uniform3FMethod(info);
}

void V8WebGLRenderingContext::Uniform3FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform3fv");

  webgl_rendering_context_v8_internal::Uniform3FvMethod(info);
}

void V8WebGLRenderingContext::Uniform3IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform3i");

  webgl_rendering_context_v8_internal::Uniform3IMethod(info);
}

void V8WebGLRenderingContext::Uniform3IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform3iv");

  webgl_rendering_context_v8_internal::Uniform3IvMethod(info);
}

void V8WebGLRenderingContext::Uniform4FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform4f");

  webgl_rendering_context_v8_internal::Uniform4FMethod(info);
}

void V8WebGLRenderingContext::Uniform4FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform4fv");

  webgl_rendering_context_v8_internal::Uniform4FvMethod(info);
}

void V8WebGLRenderingContext::Uniform4IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform4i");

  webgl_rendering_context_v8_internal::Uniform4IMethod(info);
}

void V8WebGLRenderingContext::Uniform4IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniform4iv");

  webgl_rendering_context_v8_internal::Uniform4IvMethod(info);
}

void V8WebGLRenderingContext::UniformMatrix2FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniformMatrix2fv");

  webgl_rendering_context_v8_internal::UniformMatrix2FvMethod(info);
}

void V8WebGLRenderingContext::UniformMatrix3FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniformMatrix3fv");

  webgl_rendering_context_v8_internal::UniformMatrix3FvMethod(info);
}

void V8WebGLRenderingContext::UniformMatrix4FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_uniformMatrix4fv");

  webgl_rendering_context_v8_internal::UniformMatrix4FvMethod(info);
}

void V8WebGLRenderingContext::UseProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_useProgram");

  webgl_rendering_context_v8_internal::UseProgramMethod(info);
}

void V8WebGLRenderingContext::ValidateProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_validateProgram");

  webgl_rendering_context_v8_internal::ValidateProgramMethod(info);
}

void V8WebGLRenderingContext::VertexAttrib1FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib1f");

  webgl_rendering_context_v8_internal::VertexAttrib1FMethod(info);
}

void V8WebGLRenderingContext::VertexAttrib1FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib1fv");

  webgl_rendering_context_v8_internal::VertexAttrib1FvMethod(info);
}

void V8WebGLRenderingContext::VertexAttrib2FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib2f");

  webgl_rendering_context_v8_internal::VertexAttrib2FMethod(info);
}

void V8WebGLRenderingContext::VertexAttrib2FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib2fv");

  webgl_rendering_context_v8_internal::VertexAttrib2FvMethod(info);
}

void V8WebGLRenderingContext::VertexAttrib3FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib3f");

  webgl_rendering_context_v8_internal::VertexAttrib3FMethod(info);
}

void V8WebGLRenderingContext::VertexAttrib3FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib3fv");

  webgl_rendering_context_v8_internal::VertexAttrib3FvMethod(info);
}

void V8WebGLRenderingContext::VertexAttrib4FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib4f");

  webgl_rendering_context_v8_internal::VertexAttrib4FMethod(info);
}

void V8WebGLRenderingContext::VertexAttrib4FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttrib4fv");

  webgl_rendering_context_v8_internal::VertexAttrib4FvMethod(info);
}

void V8WebGLRenderingContext::VertexAttribPointerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_vertexAttribPointer");

  webgl_rendering_context_v8_internal::VertexAttribPointerMethod(info);
}

void V8WebGLRenderingContext::ViewportMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_viewport");

  webgl_rendering_context_v8_internal::ViewportMethod(info);
}

void V8WebGLRenderingContext::CommitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_commit");

  webgl_rendering_context_v8_internal::CommitMethod(info);
}

void V8WebGLRenderingContext::MakeXRCompatibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGLRenderingContext_makeXRCompatible");

  webgl_rendering_context_v8_internal::MakeXRCompatibleMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8WebGLRenderingContextAccessors[] = {
    { "canvas", V8WebGLRenderingContext::CanvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "drawingBufferWidth", V8WebGLRenderingContext::DrawingBufferWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "drawingBufferHeight", V8WebGLRenderingContext::DrawingBufferHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8WebGLRenderingContextMethods[] = {
    {"activeTexture", V8WebGLRenderingContext::ActiveTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"attachShader", V8WebGLRenderingContext::AttachShaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindAttribLocation", V8WebGLRenderingContext::BindAttribLocationMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindBuffer", V8WebGLRenderingContext::BindBufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindFramebuffer", V8WebGLRenderingContext::BindFramebufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindRenderbuffer", V8WebGLRenderingContext::BindRenderbufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindTexture", V8WebGLRenderingContext::BindTextureMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendColor", V8WebGLRenderingContext::BlendColorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendEquation", V8WebGLRenderingContext::BlendEquationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendEquationSeparate", V8WebGLRenderingContext::BlendEquationSeparateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendFunc", V8WebGLRenderingContext::BlendFuncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendFuncSeparate", V8WebGLRenderingContext::BlendFuncSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bufferData", V8WebGLRenderingContext::BufferDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bufferSubData", V8WebGLRenderingContext::BufferSubDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkFramebufferStatus", V8WebGLRenderingContext::CheckFramebufferStatusMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clear", V8WebGLRenderingContext::ClearMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearColor", V8WebGLRenderingContext::ClearColorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearDepth", V8WebGLRenderingContext::ClearDepthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearStencil", V8WebGLRenderingContext::ClearStencilMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"colorMask", V8WebGLRenderingContext::ColorMaskMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compileShader", V8WebGLRenderingContext::CompileShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexImage2D", V8WebGLRenderingContext::CompressedTexImage2DMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexSubImage2D", V8WebGLRenderingContext::CompressedTexSubImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexImage2D", V8WebGLRenderingContext::CopyTexImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexSubImage2D", V8WebGLRenderingContext::CopyTexSubImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createBuffer", V8WebGLRenderingContext::CreateBufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createFramebuffer", V8WebGLRenderingContext::CreateFramebufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createProgram", V8WebGLRenderingContext::CreateProgramMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRenderbuffer", V8WebGLRenderingContext::CreateRenderbufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createShader", V8WebGLRenderingContext::CreateShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTexture", V8WebGLRenderingContext::CreateTextureMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cullFace", V8WebGLRenderingContext::CullFaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteBuffer", V8WebGLRenderingContext::DeleteBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteFramebuffer", V8WebGLRenderingContext::DeleteFramebufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteProgram", V8WebGLRenderingContext::DeleteProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteRenderbuffer", V8WebGLRenderingContext::DeleteRenderbufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteShader", V8WebGLRenderingContext::DeleteShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteTexture", V8WebGLRenderingContext::DeleteTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthFunc", V8WebGLRenderingContext::DepthFuncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthMask", V8WebGLRenderingContext::DepthMaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthRange", V8WebGLRenderingContext::DepthRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"detachShader", V8WebGLRenderingContext::DetachShaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disable", V8WebGLRenderingContext::DisableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disableVertexAttribArray", V8WebGLRenderingContext::DisableVertexAttribArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawArrays", V8WebGLRenderingContext::DrawArraysMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawElements", V8WebGLRenderingContext::DrawElementsMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enable", V8WebGLRenderingContext::EnableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enableVertexAttribArray", V8WebGLRenderingContext::EnableVertexAttribArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"finish", V8WebGLRenderingContext::FinishMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"flush", V8WebGLRenderingContext::FlushMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferRenderbuffer", V8WebGLRenderingContext::FramebufferRenderbufferMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferTexture2D", V8WebGLRenderingContext::FramebufferTexture2DMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"frontFace", V8WebGLRenderingContext::FrontFaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"generateMipmap", V8WebGLRenderingContext::GenerateMipmapMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveAttrib", V8WebGLRenderingContext::GetActiveAttribMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniform", V8WebGLRenderingContext::GetActiveUniformMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttachedShaders", V8WebGLRenderingContext::GetAttachedShadersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttribLocation", V8WebGLRenderingContext::GetAttribLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getBufferParameter", V8WebGLRenderingContext::GetBufferParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getContextAttributes", V8WebGLRenderingContext::GetContextAttributesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getError", V8WebGLRenderingContext::GetErrorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getExtension", V8WebGLRenderingContext::GetExtensionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFramebufferAttachmentParameter", V8WebGLRenderingContext::GetFramebufferAttachmentParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getParameter", V8WebGLRenderingContext::GetParameterMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgramParameter", V8WebGLRenderingContext::GetProgramParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgramInfoLog", V8WebGLRenderingContext::GetProgramInfoLogMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRenderbufferParameter", V8WebGLRenderingContext::GetRenderbufferParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderParameter", V8WebGLRenderingContext::GetShaderParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderInfoLog", V8WebGLRenderingContext::GetShaderInfoLogMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderPrecisionFormat", V8WebGLRenderingContext::GetShaderPrecisionFormatMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderSource", V8WebGLRenderingContext::GetShaderSourceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSupportedExtensions", V8WebGLRenderingContext::GetSupportedExtensionsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTexParameter", V8WebGLRenderingContext::GetTexParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniform", V8WebGLRenderingContext::GetUniformMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniformLocation", V8WebGLRenderingContext::GetUniformLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVertexAttrib", V8WebGLRenderingContext::GetVertexAttribMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVertexAttribOffset", V8WebGLRenderingContext::GetVertexAttribOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hint", V8WebGLRenderingContext::HintMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isBuffer", V8WebGLRenderingContext::IsBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isContextLost", V8WebGLRenderingContext::IsContextLostMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isEnabled", V8WebGLRenderingContext::IsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isFramebuffer", V8WebGLRenderingContext::IsFramebufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isProgram", V8WebGLRenderingContext::IsProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isRenderbuffer", V8WebGLRenderingContext::IsRenderbufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isShader", V8WebGLRenderingContext::IsShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isTexture", V8WebGLRenderingContext::IsTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineWidth", V8WebGLRenderingContext::LineWidthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"linkProgram", V8WebGLRenderingContext::LinkProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pixelStorei", V8WebGLRenderingContext::PixelStoreiMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"polygonOffset", V8WebGLRenderingContext::PolygonOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readPixels", V8WebGLRenderingContext::ReadPixelsMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"renderbufferStorage", V8WebGLRenderingContext::RenderbufferStorageMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sampleCoverage", V8WebGLRenderingContext::SampleCoverageMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scissor", V8WebGLRenderingContext::ScissorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shaderSource", V8WebGLRenderingContext::ShaderSourceMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilFunc", V8WebGLRenderingContext::StencilFuncMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilFuncSeparate", V8WebGLRenderingContext::StencilFuncSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilMask", V8WebGLRenderingContext::StencilMaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilMaskSeparate", V8WebGLRenderingContext::StencilMaskSeparateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilOp", V8WebGLRenderingContext::StencilOpMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilOpSeparate", V8WebGLRenderingContext::StencilOpSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texParameterf", V8WebGLRenderingContext::TexParameterfMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texParameteri", V8WebGLRenderingContext::TexParameteriMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texImage2D", V8WebGLRenderingContext::TexImage2DMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texSubImage2D", V8WebGLRenderingContext::TexSubImage2DMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1f", V8WebGLRenderingContext::Uniform1FMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1fv", V8WebGLRenderingContext::Uniform1FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1i", V8WebGLRenderingContext::Uniform1IMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1iv", V8WebGLRenderingContext::Uniform1IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2f", V8WebGLRenderingContext::Uniform2FMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2fv", V8WebGLRenderingContext::Uniform2FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2i", V8WebGLRenderingContext::Uniform2IMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2iv", V8WebGLRenderingContext::Uniform2IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3f", V8WebGLRenderingContext::Uniform3FMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3fv", V8WebGLRenderingContext::Uniform3FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3i", V8WebGLRenderingContext::Uniform3IMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3iv", V8WebGLRenderingContext::Uniform3IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4f", V8WebGLRenderingContext::Uniform4FMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4fv", V8WebGLRenderingContext::Uniform4FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4i", V8WebGLRenderingContext::Uniform4IMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4iv", V8WebGLRenderingContext::Uniform4IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix2fv", V8WebGLRenderingContext::UniformMatrix2FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix3fv", V8WebGLRenderingContext::UniformMatrix3FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix4fv", V8WebGLRenderingContext::UniformMatrix4FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"useProgram", V8WebGLRenderingContext::UseProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"validateProgram", V8WebGLRenderingContext::ValidateProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib1f", V8WebGLRenderingContext::VertexAttrib1FMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib1fv", V8WebGLRenderingContext::VertexAttrib1FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib2f", V8WebGLRenderingContext::VertexAttrib2FMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib2fv", V8WebGLRenderingContext::VertexAttrib2FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib3f", V8WebGLRenderingContext::VertexAttrib3FMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib3fv", V8WebGLRenderingContext::VertexAttrib3FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib4f", V8WebGLRenderingContext::VertexAttrib4FMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib4fv", V8WebGLRenderingContext::VertexAttrib4FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribPointer", V8WebGLRenderingContext::VertexAttribPointerMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"viewport", V8WebGLRenderingContext::ViewportMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8WebGLRenderingContextTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WebGLRenderingContext::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGLRenderingContext::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"DEPTH_BUFFER_BIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00000100)},
        {"STENCIL_BUFFER_BIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00000400)},
        {"COLOR_BUFFER_BIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00004000)},
        {"POINTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0000)},
        {"LINES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0001)},
        {"LINE_LOOP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0002)},
        {"LINE_STRIP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0003)},
        {"TRIANGLES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0004)},
        {"TRIANGLE_STRIP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0005)},
        {"TRIANGLE_FAN", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0006)},
        {"ZERO", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0)},
        {"ONE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(1)},
        {"SRC_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0300)},
        {"ONE_MINUS_SRC_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0301)},
        {"SRC_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0302)},
        {"ONE_MINUS_SRC_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0303)},
        {"DST_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0304)},
        {"ONE_MINUS_DST_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0305)},
        {"DST_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0306)},
        {"ONE_MINUS_DST_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0307)},
        {"SRC_ALPHA_SATURATE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0308)},
        {"FUNC_ADD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8006)},
        {"BLEND_EQUATION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8009)},
        {"BLEND_EQUATION_RGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8009)},
        {"BLEND_EQUATION_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x883D)},
        {"FUNC_SUBTRACT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x800A)},
        {"FUNC_REVERSE_SUBTRACT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x800B)},
        {"BLEND_DST_RGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80C8)},
        {"BLEND_SRC_RGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80C9)},
        {"BLEND_DST_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80CA)},
        {"BLEND_SRC_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80CB)},
        {"CONSTANT_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8001)},
        {"ONE_MINUS_CONSTANT_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8002)},
        {"CONSTANT_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8003)},
        {"ONE_MINUS_CONSTANT_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8004)},
        {"BLEND_COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8005)},
        {"ARRAY_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8892)},
        {"ELEMENT_ARRAY_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8893)},
        {"ARRAY_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8894)},
        {"ELEMENT_ARRAY_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8895)},
        {"STREAM_DRAW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E0)},
        {"STATIC_DRAW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E4)},
        {"DYNAMIC_DRAW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E8)},
        {"BUFFER_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8764)},
        {"BUFFER_USAGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8765)},
        {"CURRENT_VERTEX_ATTRIB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8626)},
        {"FRONT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0404)},
        {"BACK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0405)},
        {"FRONT_AND_BACK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0408)},
        {"TEXTURE_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0DE1)},
        {"CULL_FACE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B44)},
        {"BLEND", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0BE2)},
        {"DITHER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0BD0)},
        {"STENCIL_TEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B90)},
        {"DEPTH_TEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B71)},
        {"SCISSOR_TEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C11)},
        {"POLYGON_OFFSET_FILL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8037)},
        {"SAMPLE_ALPHA_TO_COVERAGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x809E)},
        {"SAMPLE_COVERAGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80A0)},
        {"NO_ERROR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0)},
        {"INVALID_ENUM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0500)},
        {"INVALID_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0501)},
        {"INVALID_OPERATION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0502)},
        {"OUT_OF_MEMORY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0505)},
        {"CW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0900)},
        {"CCW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0901)},
        {"LINE_WIDTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B21)},
        {"ALIASED_POINT_SIZE_RANGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x846D)},
        {"ALIASED_LINE_WIDTH_RANGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x846E)},
        {"CULL_FACE_MODE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B45)},
        {"FRONT_FACE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B46)},
        {"DEPTH_RANGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B70)},
        {"DEPTH_WRITEMASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B72)},
        {"DEPTH_CLEAR_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B73)},
        {"DEPTH_FUNC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B74)},
        {"STENCIL_CLEAR_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B91)},
        {"STENCIL_FUNC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B92)},
        {"STENCIL_FAIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B94)},
        {"STENCIL_PASS_DEPTH_FAIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B95)},
        {"STENCIL_PASS_DEPTH_PASS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B96)},
        {"STENCIL_REF", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B97)},
        {"STENCIL_VALUE_MASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B93)},
        {"STENCIL_WRITEMASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0B98)},
        {"STENCIL_BACK_FUNC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8800)},
        {"STENCIL_BACK_FAIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8801)},
        {"STENCIL_BACK_PASS_DEPTH_FAIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8802)},
        {"STENCIL_BACK_PASS_DEPTH_PASS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8803)},
        {"STENCIL_BACK_REF", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA3)},
        {"STENCIL_BACK_VALUE_MASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA4)},
        {"STENCIL_BACK_WRITEMASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA5)},
        {"VIEWPORT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0BA2)},
        {"SCISSOR_BOX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C10)},
        {"COLOR_CLEAR_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C22)},
        {"COLOR_WRITEMASK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C23)},
        {"UNPACK_ALIGNMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0CF5)},
        {"PACK_ALIGNMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D05)},
        {"MAX_TEXTURE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D33)},
        {"MAX_VIEWPORT_DIMS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D3A)},
        {"SUBPIXEL_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D50)},
        {"RED_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D52)},
        {"GREEN_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D53)},
        {"BLUE_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D54)},
        {"ALPHA_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D55)},
        {"DEPTH_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D56)},
        {"STENCIL_BITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D57)},
        {"POLYGON_OFFSET_UNITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2A00)},
        {"POLYGON_OFFSET_FACTOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8038)},
        {"TEXTURE_BINDING_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8069)},
        {"SAMPLE_BUFFERS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80A8)},
        {"SAMPLES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80A9)},
        {"SAMPLE_COVERAGE_VALUE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80AA)},
        {"SAMPLE_COVERAGE_INVERT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80AB)},
        {"COMPRESSED_TEXTURE_FORMATS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x86A3)},
        {"DONT_CARE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1100)},
        {"FASTEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1101)},
        {"NICEST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1102)},
        {"GENERATE_MIPMAP_HINT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8192)},
        {"BYTE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1400)},
        {"UNSIGNED_BYTE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1401)},
        {"SHORT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1402)},
        {"UNSIGNED_SHORT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1403)},
        {"INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1404)},
        {"UNSIGNED_INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1405)},
        {"FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1406)},
        {"DEPTH_COMPONENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1902)},
        {"ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1906)},
        {"RGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1907)},
        {"RGBA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1908)},
        {"LUMINANCE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1909)},
        {"LUMINANCE_ALPHA", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x190A)},
        {"UNSIGNED_SHORT_4_4_4_4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8033)},
        {"UNSIGNED_SHORT_5_5_5_1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8034)},
        {"UNSIGNED_SHORT_5_6_5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8363)},
        {"FRAGMENT_SHADER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B30)},
        {"VERTEX_SHADER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B31)},
        {"MAX_VERTEX_ATTRIBS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8869)},
        {"MAX_VERTEX_UNIFORM_VECTORS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DFB)},
        {"MAX_VARYING_VECTORS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DFC)},
        {"MAX_COMBINED_TEXTURE_IMAGE_UNITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4D)},
        {"MAX_VERTEX_TEXTURE_IMAGE_UNITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4C)},
        {"MAX_TEXTURE_IMAGE_UNITS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8872)},
        {"MAX_FRAGMENT_UNIFORM_VECTORS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DFD)},
        {"SHADER_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4F)},
        {"DELETE_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B80)},
        {"LINK_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B82)},
        {"VALIDATE_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B83)},
        {"ATTACHED_SHADERS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B85)},
        {"ACTIVE_UNIFORMS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B86)},
        {"ACTIVE_ATTRIBUTES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B89)},
        {"SHADING_LANGUAGE_VERSION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B8C)},
        {"CURRENT_PROGRAM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B8D)},
        {"NEVER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0200)},
        {"LESS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0201)},
        {"EQUAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0202)},
        {"LEQUAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0203)},
        {"GREATER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0204)},
        {"NOTEQUAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0205)},
        {"GEQUAL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0206)},
        {"ALWAYS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0207)},
        {"KEEP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1E00)},
        {"REPLACE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1E01)},
        {"INCR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1E02)},
        {"DECR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1E03)},
        {"INVERT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x150A)},
        {"INCR_WRAP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8507)},
        {"DECR_WRAP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8508)},
        {"VENDOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1F00)},
        {"RENDERER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1F01)},
        {"VERSION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1F02)},
        {"NEAREST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2600)},
        {"LINEAR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2601)},
        {"NEAREST_MIPMAP_NEAREST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2700)},
        {"LINEAR_MIPMAP_NEAREST", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2701)},
        {"NEAREST_MIPMAP_LINEAR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2702)},
        {"LINEAR_MIPMAP_LINEAR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2703)},
        {"TEXTURE_MAG_FILTER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2800)},
        {"TEXTURE_MIN_FILTER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2801)},
        {"TEXTURE_WRAP_S", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2802)},
        {"TEXTURE_WRAP_T", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2803)},
        {"TEXTURE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1702)},
        {"TEXTURE_CUBE_MAP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8513)},
        {"TEXTURE_BINDING_CUBE_MAP", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8514)},
        {"TEXTURE_CUBE_MAP_POSITIVE_X", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8515)},
        {"TEXTURE_CUBE_MAP_NEGATIVE_X", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8516)},
        {"TEXTURE_CUBE_MAP_POSITIVE_Y", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8517)},
        {"TEXTURE_CUBE_MAP_NEGATIVE_Y", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8518)},
        {"TEXTURE_CUBE_MAP_POSITIVE_Z", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8519)},
        {"TEXTURE_CUBE_MAP_NEGATIVE_Z", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x851A)},
        {"MAX_CUBE_MAP_TEXTURE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x851C)},
        {"TEXTURE0", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C0)},
        {"TEXTURE1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C1)},
        {"TEXTURE2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C2)},
        {"TEXTURE3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C3)},
        {"TEXTURE4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C4)},
        {"TEXTURE5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C5)},
        {"TEXTURE6", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C6)},
        {"TEXTURE7", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C7)},
        {"TEXTURE8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C8)},
        {"TEXTURE9", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84C9)},
        {"TEXTURE10", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CA)},
        {"TEXTURE11", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CB)},
        {"TEXTURE12", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CC)},
        {"TEXTURE13", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CD)},
        {"TEXTURE14", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CE)},
        {"TEXTURE15", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84CF)},
        {"TEXTURE16", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D0)},
        {"TEXTURE17", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D1)},
        {"TEXTURE18", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D2)},
        {"TEXTURE19", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D3)},
        {"TEXTURE20", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D4)},
        {"TEXTURE21", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D5)},
        {"TEXTURE22", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D6)},
        {"TEXTURE23", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D7)},
        {"TEXTURE24", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D8)},
        {"TEXTURE25", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84D9)},
        {"TEXTURE26", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DA)},
        {"TEXTURE27", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DB)},
        {"TEXTURE28", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DC)},
        {"TEXTURE29", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DD)},
        {"TEXTURE30", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DE)},
        {"TEXTURE31", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84DF)},
        {"ACTIVE_TEXTURE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84E0)},
        {"REPEAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x2901)},
        {"CLAMP_TO_EDGE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x812F)},
        {"MIRRORED_REPEAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8370)},
        {"FLOAT_VEC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B50)},
        {"FLOAT_VEC3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B51)},
        {"FLOAT_VEC4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B52)},
        {"INT_VEC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B53)},
        {"INT_VEC3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B54)},
        {"INT_VEC4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B55)},
        {"BOOL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B56)},
        {"BOOL_VEC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B57)},
        {"BOOL_VEC3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B58)},
        {"BOOL_VEC4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B59)},
        {"FLOAT_MAT2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5A)},
        {"FLOAT_MAT3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5B)},
        {"FLOAT_MAT4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5C)},
        {"SAMPLER_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5E)},
        {"SAMPLER_CUBE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B60)},
        {"VERTEX_ATTRIB_ARRAY_ENABLED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8622)},
        {"VERTEX_ATTRIB_ARRAY_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8623)},
        {"VERTEX_ATTRIB_ARRAY_STRIDE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8624)},
        {"VERTEX_ATTRIB_ARRAY_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8625)},
        {"VERTEX_ATTRIB_ARRAY_NORMALIZED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x886A)},
        {"VERTEX_ATTRIB_ARRAY_POINTER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8645)},
        {"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x889F)},
        {"IMPLEMENTATION_COLOR_READ_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B9A)},
        {"IMPLEMENTATION_COLOR_READ_FORMAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B9B)},
        {"COMPILE_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B81)},
        {"LOW_FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF0)},
        {"MEDIUM_FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF1)},
        {"HIGH_FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF2)},
        {"LOW_INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF3)},
        {"MEDIUM_INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF4)},
        {"HIGH_INT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DF5)},
        {"FRAMEBUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D40)},
        {"RENDERBUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D41)},
        {"RGBA4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8056)},
        {"RGB5_A1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8057)},
        {"RGB565", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D62)},
        {"DEPTH_COMPONENT16", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x81A5)},
        {"STENCIL_INDEX8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D48)},
        {"DEPTH_STENCIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84F9)},
        {"RENDERBUFFER_WIDTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D42)},
        {"RENDERBUFFER_HEIGHT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D43)},
        {"RENDERBUFFER_INTERNAL_FORMAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D44)},
        {"RENDERBUFFER_RED_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D50)},
        {"RENDERBUFFER_GREEN_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D51)},
        {"RENDERBUFFER_BLUE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D52)},
        {"RENDERBUFFER_ALPHA_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D53)},
        {"RENDERBUFFER_DEPTH_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D54)},
        {"RENDERBUFFER_STENCIL_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D55)},
        {"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD0)},
        {"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD1)},
        {"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD2)},
        {"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD3)},
        {"COLOR_ATTACHMENT0", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE0)},
        {"DEPTH_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D00)},
        {"STENCIL_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D20)},
        {"DEPTH_STENCIL_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x821A)},
        {"NONE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0)},
        {"FRAMEBUFFER_COMPLETE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD5)},
        {"FRAMEBUFFER_INCOMPLETE_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD6)},
        {"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD7)},
        {"FRAMEBUFFER_INCOMPLETE_DIMENSIONS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD9)},
        {"FRAMEBUFFER_UNSUPPORTED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CDD)},
        {"FRAMEBUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA6)},
        {"RENDERBUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA7)},
        {"MAX_RENDERBUFFER_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84E8)},
        {"INVALID_FRAMEBUFFER_OPERATION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0506)},
        {"UNPACK_FLIP_Y_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9240)},
        {"UNPACK_PREMULTIPLY_ALPHA_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9241)},
        {"CONTEXT_LOST_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9242)},
        {"UNPACK_COLORSPACE_CONVERSION_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9243)},
        {"BROWSER_DEFAULT_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9244)},
    };
    V8DOMConfiguration::InstallConstants(
        isolate, interface_template, prototype_template,
        kConstants, base::size(kConstants));
  }
  V8DOMConfiguration::InstallAccessors(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WebGLRenderingContextAccessors, base::size(kV8WebGLRenderingContextAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WebGLRenderingContextMethods, base::size(kV8WebGLRenderingContextMethods));

  // Custom signature

  V8WebGLRenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WebGLRenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
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
  if (RuntimeEnabledFeatures::OffscreenCanvasCommitEnabled()) {
    {
      // Install commit configuration
      constexpr V8DOMConfiguration::MethodConfiguration kConfigurations[] = {
          {"commit", V8WebGLRenderingContext::CommitMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8WebGLRenderingContext::InstallWebXR(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8WebGLRenderingContext::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kMakeXRCompatibleConfigurations[] = {
        {"makeXRCompatible", V8WebGLRenderingContext::MakeXRCompatibleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kMakeXRCompatibleConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
}

void V8WebGLRenderingContext::InstallWebXR(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8WebGLRenderingContext::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8WebGLRenderingContext::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallWebXR(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WebGLRenderingContext::InstallWebXR(ScriptState* script_state) {
  InstallWebXR(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8WebGLRenderingContext::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WebGLRenderingContext::GetWrapperTypeInfo()),
      InstallV8WebGLRenderingContextTemplate);
}

bool V8WebGLRenderingContext::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WebGLRenderingContext::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WebGLRenderingContext::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WebGLRenderingContext::GetWrapperTypeInfo(), v8_value);
}

WebGLRenderingContext* V8WebGLRenderingContext::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGLRenderingContext* NativeValueTraits<WebGLRenderingContext>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WebGLRenderingContext* native_value = V8WebGLRenderingContext::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGLRenderingContext"));
  }
  return native_value;
}

}  // namespace blink
