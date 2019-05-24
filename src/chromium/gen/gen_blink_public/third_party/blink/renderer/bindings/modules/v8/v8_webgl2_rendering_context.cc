// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl2_rendering_context.h"

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
#include "third_party/blink/renderer/bindings/core/v8/v8_uint32_array.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_active_info.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_buffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_context_attributes.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_framebuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_program.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_query.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_renderbuffer.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sampler.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_shader_precision_format.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_sync.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_texture.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_transform_feedback.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_uniform_location.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_webgl_vertex_array_object.h"
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
const WrapperTypeInfo v8_webgl2_rendering_context_wrapper_type_info = {
    gin::kEmbedderBlink,
    V8WebGL2RenderingContext::DomTemplate,
    nullptr,
    "WebGL2RenderingContext",
    nullptr,
    WrapperTypeInfo::kWrapperTypeObjectPrototype,
    WrapperTypeInfo::kObjectClassId,
    WrapperTypeInfo::kNotInheritFromActiveScriptWrappable,
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && defined(__clang__)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WebGL2RenderingContext.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// platform/bindings/ScriptWrappable.h.
const WrapperTypeInfo& WebGL2RenderingContext::wrapper_type_info_ = v8_webgl2_rendering_context_wrapper_type_info;

// not [ActiveScriptWrappable]
static_assert(
    !std::is_base_of<ActiveScriptWrappableBase, WebGL2RenderingContext>::value,
    "WebGL2RenderingContext inherits from ActiveScriptWrappable<>, but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");
static_assert(
    std::is_same<decltype(&WebGL2RenderingContext::HasPendingActivity),
                 decltype(&ScriptWrappable::HasPendingActivity)>::value,
    "WebGL2RenderingContext is overriding hasPendingActivity(), but is not specifying "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace webgl2_rendering_context_v8_internal {

static void CanvasAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(holder);

  HTMLCanvasElementOrOffscreenCanvas result;
  impl->getHTMLOrOffscreenCanvas(result);

  V8SetReturnValue(info, result);
}

static void DrawingBufferWidthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(holder);

  V8SetReturnValueInt(info, impl->drawingBufferWidth());
}

static void DrawingBufferHeightAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(holder);

  V8SetReturnValueInt(info, impl->drawingBufferHeight());
}

static void BufferData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  MaybeShared<DOMArrayBufferView> src_data;
  uint32_t usage;
  uint32_t src_offset;
  uint32_t length;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  src_data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!src_data) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'ArrayBufferView'.");
    return;
  }

  usage = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    length = 0u;
  }

  impl->bufferData(target, src_data, usage, src_offset, length);
}

static void BufferSubData1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int64_t dst_byte_offset;
  MaybeShared<DOMArrayBufferView> src_data;
  uint32_t src_offset;
  uint32_t length;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  dst_byte_offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!src_data) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'ArrayBufferView'.");
    return;
  }

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    length = 0u;
  }

  impl->bufferSubData(target, dst_byte_offset, src_data, src_offset, length);
}

static void CopyBufferSubDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "copyBufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t read_target;
  uint32_t write_target;
  int64_t read_offset;
  int64_t write_offset;
  int64_t size;
  read_target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  write_target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  read_offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  write_offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->copyBufferSubData(read_target, write_target, read_offset, write_offset, size);
}

static void GetBufferSubDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getBufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  int64_t src_byte_offset;
  MaybeShared<DOMArrayBufferView> dst_data;
  uint32_t dst_offset;
  uint32_t length;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  src_byte_offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  dst_data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!dst_data) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'ArrayBufferView'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    dst_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    dst_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    length = 0u;
  }

  impl->getBufferSubData(target, src_byte_offset, dst_data, dst_offset, length);
}

static void BlitFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blitFramebuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 10)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(10, info.Length()));
    return;
  }

  int32_t src_x_0;
  int32_t src_y_0;
  int32_t src_x_1;
  int32_t src_y_1;
  int32_t dst_x_0;
  int32_t dst_y_0;
  int32_t dst_x_1;
  int32_t dst_y_1;
  uint32_t mask;
  uint32_t filter;
  src_x_0 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  src_y_0 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_x_1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  src_y_1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  dst_x_0 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  dst_y_0 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  dst_x_1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  dst_y_1 = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  mask = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  filter = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  impl->blitFramebuffer(src_x_0, src_y_0, src_x_1, src_y_1, dst_x_0, dst_y_0, dst_x_1, dst_y_1, mask, filter);
}

static void FramebufferTextureLayerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "framebufferTextureLayer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t attachment;
  WebGLTexture* texture;
  int32_t level;
  int32_t layer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  attachment = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!texture && !IsUndefinedOrNull(info[2])) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'WebGLTexture'.");
    return;
  }

  level = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  layer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->framebufferTextureLayer(target, attachment, texture, level, layer);
}

static void GetInternalformatParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getInternalformatParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t internalformat;
  uint32_t pname;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  internalformat = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getInternalformatParameter(script_state, target, internalformat, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void InvalidateFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "invalidateFramebuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  Vector<uint32_t> attachments;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  attachments = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->invalidateFramebuffer(target, attachments);
}

static void InvalidateSubFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "invalidateSubFramebuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t target;
  Vector<uint32_t> attachments;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  attachments = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->invalidateSubFramebuffer(target, attachments, x, y, width, height);
}

static void ReadBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readBuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t mode;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->readBuffer(mode);
}

static void RenderbufferStorageMultisampleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "renderbufferStorageMultisample");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  int32_t samples;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  samples = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
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

  impl->renderbufferStorageMultisample(target, samples, internalformat, width, height);
}

static void TexImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  int64_t offset;
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

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, offset);
}

static void TexImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  ImageData* data;
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

  data = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!data) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'ImageData'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, data);
}

static void TexImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
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

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!image) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(execution_context, target, level, internalformat, width, height, border, format, type, image, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
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

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!canvas) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(execution_context, target, level, internalformat, width, height, border, format, type, canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
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

  offscreen_canvas = V8OffscreenCanvas::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!offscreen_canvas) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'OffscreenCanvas'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(execution_context, target, level, internalformat, width, height, border, format, type, offscreen_canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
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

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!video) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage2D(execution_context, target, level, internalformat, width, height, border, format, type, video, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
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

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!bitmap) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, bitmap, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage2D8Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> src_data;
  uint32_t src_offset;
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

  src_data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;
  if (!src_data) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'ArrayBufferView'.");
    return;
  }

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  impl->texImage2D(target, level, internalformat, width, height, border, format, type, src_data, src_offset);
}

static void TexSubImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  int64_t offset;
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

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, offset);
}

static void TexSubImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  ImageData* data;
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

  data = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!data) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'ImageData'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, data);
}

static void TexSubImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
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

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!image) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(execution_context, target, level, xoffset, yoffset, width, height, format, type, image, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
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

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!canvas) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(execution_context, target, level, xoffset, yoffset, width, height, format, type, canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
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

  offscreen_canvas = V8OffscreenCanvas::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!offscreen_canvas) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'OffscreenCanvas'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(execution_context, target, level, xoffset, yoffset, width, height, format, type, offscreen_canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
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

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!video) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage2D(execution_context, target, level, xoffset, yoffset, width, height, format, type, video, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
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

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[8]);
  if (!bitmap) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, bitmap, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage2D8Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> src_data;
  uint32_t src_offset;
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

  src_data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;
  if (!src_data) {
    exception_state.ThrowTypeError("parameter 9 is not of type 'ArrayBufferView'.");
    return;
  }

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  impl->texSubImage2D(target, level, xoffset, yoffset, width, height, format, type, src_data, src_offset);
}

static void TexStorage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texStorage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  int32_t levels;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  levels = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
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

  impl->texStorage2D(target, levels, internalformat, width, height);
}

static void TexStorage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texStorage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t target;
  int32_t levels;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  levels = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
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

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->texStorage3D(target, levels, internalformat, width, height, depth);
}

static void TexImage3D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  int64_t offset;
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

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, offset);
}

static void TexImage3D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  ImageData* data;
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

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  data = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!data) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'ImageData'.");
    return;
  }

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, data);
}

static void TexImage3D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
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

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!image) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage3D(execution_context, target, level, internalformat, width, height, depth, border, format, type, image, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage3D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
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

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!canvas) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage3D(execution_context, target, level, internalformat, width, height, depth, border, format, type, canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage3D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
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

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  offscreen_canvas = V8OffscreenCanvas::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!offscreen_canvas) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'OffscreenCanvas'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage3D(execution_context, target, level, internalformat, width, height, depth, border, format, type, offscreen_canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage3D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
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

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!video) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texImage3D(execution_context, target, level, internalformat, width, height, depth, border, format, type, video, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage3D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
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

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[9]);
  if (!bitmap) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, bitmap, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexImage3D8Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
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

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;
  if (!pixels && !IsUndefinedOrNull(info[9])) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'ArrayBufferView'.");
    return;
  }

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}

static void TexImage3D9Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  uint32_t src_offset;
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

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;
  if (!pixels) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'ArrayBufferView'.");
    return;
  }

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[10], exception_state);
  if (exception_state.HadException())
    return;

  impl->texImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels, src_offset);
}

static void TexImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(11, info.Length())) {
    case 10:
      if (IsUndefinedOrNull(info[9])) {
        TexImage3D8Method(info);
        return;
      }
      if (V8ImageData::HasInstance(info[9], info.GetIsolate())) {
        TexImage3D2Method(info);
        return;
      }
      if (V8HTMLImageElement::HasInstance(info[9], info.GetIsolate())) {
        TexImage3D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::HasInstance(info[9], info.GetIsolate())) {
        TexImage3D4Method(info);
        return;
      }
      if (V8OffscreenCanvas::HasInstance(info[9], info.GetIsolate())) {
        TexImage3D5Method(info);
        return;
      }
      if (V8HTMLVideoElement::HasInstance(info[9], info.GetIsolate())) {
        TexImage3D6Method(info);
        return;
      }
      if (V8ImageBitmap::HasInstance(info[9], info.GetIsolate())) {
        TexImage3D7Method(info);
        return;
      }
      if (info[9]->IsArrayBufferView()) {
        TexImage3D8Method(info);
        return;
      }
      if (info[9]->IsNumber()) {
        TexImage3D1Method(info);
        return;
      }
      if (true) {
        TexImage3D1Method(info);
        return;
      }
      break;
    case 11:
      if (true) {
        TexImage3D9Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage3D");
  if (is_arity_error) {
    if (info.Length() < 10) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(10, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void TexSubImage3D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  int64_t offset;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[10], exception_state);
  if (exception_state.HadException())
    return;

  impl->texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, offset);
}

static void TexSubImage3D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  ImageData* data;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  data = V8ImageData::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!data) {
    exception_state.ThrowTypeError("parameter 11 is not of type 'ImageData'.");
    return;
  }

  impl->texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, data);
}

static void TexSubImage3D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  image = V8HTMLImageElement::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!image) {
    exception_state.ThrowTypeError("parameter 11 is not of type 'HTMLImageElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage3D(execution_context, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, image, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage3D4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  canvas = V8HTMLCanvasElement::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!canvas) {
    exception_state.ThrowTypeError("parameter 11 is not of type 'HTMLCanvasElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage3D(execution_context, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage3D5Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  offscreen_canvas = V8OffscreenCanvas::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!offscreen_canvas) {
    exception_state.ThrowTypeError("parameter 11 is not of type 'OffscreenCanvas'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage3D(execution_context, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, offscreen_canvas, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage3D6Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  video = V8HTMLVideoElement::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!video) {
    exception_state.ThrowTypeError("parameter 11 is not of type 'HTMLVideoElement'.");
    return;
  }

  ExecutionContext* execution_context = ExecutionContext::ForRelevantRealm(info);
  impl->texSubImage3D(execution_context, target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, video, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage3D7Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  bitmap = V8ImageBitmap::ToImplWithTypeCheck(info.GetIsolate(), info[10]);
  if (!bitmap) {
    exception_state.ThrowTypeError("parameter 11 is not of type 'ImageBitmap'.");
    return;
  }

  impl->texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, bitmap, exception_state);
  if (exception_state.HadException()) {
    return;
  }
}

static void TexSubImage3D8Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> pixels;
  uint32_t src_offset;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  pixels = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[10], exception_state);
  if (exception_state.HadException())
    return;
  if (!pixels) {
    exception_state.ThrowTypeError("parameter 11 is not of type 'ArrayBufferView'.");
    return;
  }

  if (!info[11]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[11], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }

  impl->texSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels, src_offset);
}

static void TexSubImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(12, info.Length())) {
    case 11:
      if (V8ImageData::HasInstance(info[10], info.GetIsolate())) {
        TexSubImage3D2Method(info);
        return;
      }
      if (V8HTMLImageElement::HasInstance(info[10], info.GetIsolate())) {
        TexSubImage3D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::HasInstance(info[10], info.GetIsolate())) {
        TexSubImage3D4Method(info);
        return;
      }
      if (V8OffscreenCanvas::HasInstance(info[10], info.GetIsolate())) {
        TexSubImage3D5Method(info);
        return;
      }
      if (V8HTMLVideoElement::HasInstance(info[10], info.GetIsolate())) {
        TexSubImage3D6Method(info);
        return;
      }
      if (V8ImageBitmap::HasInstance(info[10], info.GetIsolate())) {
        TexSubImage3D7Method(info);
        return;
      }
      if (info[10]->IsArrayBufferView()) {
        TexSubImage3D8Method(info);
        return;
      }
      if (info[10]->IsNumber()) {
        TexSubImage3D1Method(info);
        return;
      }
      if (true) {
        TexSubImage3D1Method(info);
        return;
      }
      break;
    case 12:
      if (true) {
        TexSubImage3D8Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage3D");
  if (is_arity_error) {
    if (info.Length() < 11) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(11, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CopyTexSubImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "copyTexSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 9)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(9, info.Length()));
    return;
  }

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  impl->copyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

static void CompressedTexImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t src_offset;
  uint32_t src_length_override;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[8]->IsUndefined()) {
    src_length_override = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length_override = 0u;
  }

  impl->compressedTexImage2D(target, level, internalformat, width, height, border, data, src_offset, src_length_override);
}

static void CompressedTexSubImage2D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t src_offset;
  uint32_t src_length_override;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[9]->IsUndefined()) {
    src_length_override = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length_override = 0u;
  }

  impl->compressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, data, src_offset, src_length_override);
}

static void CompressedTexImage3D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t src_offset;
  uint32_t src_length_override;
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

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;
  if (!data) {
    exception_state.ThrowTypeError("parameter 8 is not of type 'ArrayBufferView'.");
    return;
  }

  if (!info[8]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[9]->IsUndefined()) {
    src_length_override = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length_override = 0u;
  }

  impl->compressedTexImage3D(target, level, internalformat, width, height, depth, border, data, src_offset, src_length_override);
}

static void CompressedTexSubImage3D1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  MaybeShared<DOMArrayBufferView> data;
  uint32_t src_offset;
  uint32_t src_length_override;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;
  if (!data) {
    exception_state.ThrowTypeError("parameter 10 is not of type 'ArrayBufferView'.");
    return;
  }

  if (!info[10]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[10], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[11]->IsUndefined()) {
    src_length_override = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[11], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length_override = 0u;
  }

  impl->compressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, data, src_offset, src_length_override);
}

static void CompressedTexImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t border;
  int32_t image_size;
  int64_t offset;
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

  image_size = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  impl->compressedTexImage2D(target, level, internalformat, width, height, border, image_size, offset);
}

static void CompressedTexSubImage2D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t width;
  int32_t height;
  uint32_t format;
  int32_t image_size;
  int64_t offset;
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

  image_size = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  impl->compressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, image_size, offset);
}

static void CompressedTexImage3D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  uint32_t internalformat;
  int32_t width;
  int32_t height;
  int32_t depth;
  int32_t border;
  int32_t image_size;
  int64_t offset;
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

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  border = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  image_size = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  impl->compressedTexImage3D(target, level, internalformat, width, height, depth, border, image_size, offset);
}

static void CompressedTexImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(10, info.Length())) {
    case 8:
      if (true) {
        CompressedTexImage3D1Method(info);
        return;
      }
      break;
    case 9:
      if (info[7]->IsArrayBufferView()) {
        CompressedTexImage3D1Method(info);
        return;
      }
      if (info[7]->IsNumber()) {
        CompressedTexImage3D2Method(info);
        return;
      }
      if (true) {
        CompressedTexImage3D2Method(info);
        return;
      }
      break;
    case 10:
      if (true) {
        CompressedTexImage3D1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage3D");
  if (is_arity_error) {
    if (info.Length() < 8) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CompressedTexSubImage3D2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage3D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t target;
  int32_t level;
  int32_t xoffset;
  int32_t yoffset;
  int32_t zoffset;
  int32_t width;
  int32_t height;
  int32_t depth;
  uint32_t format;
  int32_t image_size;
  int64_t offset;
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

  zoffset = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  width = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  height = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  format = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[8], exception_state);
  if (exception_state.HadException())
    return;

  image_size = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[9], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[10], exception_state);
  if (exception_state.HadException())
    return;

  impl->compressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, image_size, offset);
}

static void CompressedTexSubImage3DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(12, info.Length())) {
    case 10:
      if (true) {
        CompressedTexSubImage3D1Method(info);
        return;
      }
      break;
    case 11:
      if (info[9]->IsArrayBufferView()) {
        CompressedTexSubImage3D1Method(info);
        return;
      }
      if (info[9]->IsNumber()) {
        CompressedTexSubImage3D2Method(info);
        return;
      }
      if (true) {
        CompressedTexSubImage3D2Method(info);
        return;
      }
      break;
    case 12:
      if (true) {
        CompressedTexSubImage3D1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage3D");
  if (is_arity_error) {
    if (info.Length() < 10) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(10, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void GetFragDataLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getFragDataLocation", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getFragDataLocation", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValueInt(info, impl->getFragDataLocation(program, name));
}

static void Uniform1UiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  uint32_t v0;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v0 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform1ui(location, v0);
}

static void Uniform2UiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  uint32_t v0;
  uint32_t v_1;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v0 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  v_1 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform2ui(location, v0, v_1);
}

static void Uniform3UiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  uint32_t v0;
  uint32_t v_1;
  uint32_t v_2;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v0 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  v_1 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  v_2 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform3ui(location, v0, v_1, v_2);
}

static void Uniform4UiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  WebGLUniformLocation* location;
  uint32_t v0;
  uint32_t v_1;
  uint32_t v_2;
  uint32_t v_3;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v0 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  v_1 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  v_2 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  v_3 = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniform4ui(location, v0, v_1, v_2, v_3);
}

static void Uniform1Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform1fv(location, v, src_offset, src_length);
}

static void Uniform1Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform1fv(location, v, src_offset, src_length);
}

static void Uniform2Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform2fv(location, v, src_offset, src_length);
}

static void Uniform2Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform2fv(location, v, src_offset, src_length);
}

static void Uniform3Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform3fv(location, v, src_offset, src_length);
}

static void Uniform3Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform3fv(location, v, src_offset, src_length);
}

static void Uniform4Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleFloat32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform4fv(location, v, src_offset, src_length);
}

static void Uniform4Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<float> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform4fv(location, v, src_offset, src_length);
}

static void Uniform1Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform1iv(location, v, src_offset, src_length);
}

static void Uniform1Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform1iv(location, v, src_offset, src_length);
}

static void Uniform2Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform2iv(location, v, src_offset, src_length);
}

static void Uniform2Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform2iv(location, v, src_offset, src_length);
}

static void Uniform3Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform3iv(location, v, src_offset, src_length);
}

static void Uniform3Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform3iv(location, v, src_offset, src_length);
}

static void Uniform4Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleInt32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform4iv(location, v, src_offset, src_length);
}

static void Uniform4Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<int32_t> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform4iv(location, v, src_offset, src_length);
}

static void Uniform1Uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleUint32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform1uiv(location, v, src_offset, src_length);
}

static void Uniform1Uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<uint32_t> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform1uiv(location, v, src_offset, src_length);
}

static void Uniform1UivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        Uniform1Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform1Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform1Uiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsUint32Array()) {
        Uniform1Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform1Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform1Uiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsUint32Array()) {
        Uniform1Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform1Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform1Uiv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1uiv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform2Uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleUint32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform2uiv(location, v, src_offset, src_length);
}

static void Uniform2Uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<uint32_t> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform2uiv(location, v, src_offset, src_length);
}

static void Uniform2UivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        Uniform2Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform2Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform2Uiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsUint32Array()) {
        Uniform2Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform2Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform2Uiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsUint32Array()) {
        Uniform2Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform2Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform2Uiv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2uiv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform3Uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleUint32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform3uiv(location, v, src_offset, src_length);
}

static void Uniform3Uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<uint32_t> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform3uiv(location, v, src_offset, src_length);
}

static void Uniform3UivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        Uniform3Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform3Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform3Uiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsUint32Array()) {
        Uniform3Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform3Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform3Uiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsUint32Array()) {
        Uniform3Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform3Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform3Uiv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3uiv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform4Uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  FlexibleUint32ArrayView v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  ToFlexibleArrayBufferView(info.GetIsolate(), info[1], v, allocateFlexibleArrayBufferViewStorage(info[1]));
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[2]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform4uiv(location, v, src_offset, src_length);
}

static void Uniform4Uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  Vector<uint32_t> v;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[2]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[3]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniform4uiv(location, v, src_offset, src_length);
}

static void Uniform4UivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        Uniform4Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform4Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform4Uiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
      if (info[1]->IsUint32Array()) {
        Uniform4Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform4Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform4Uiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[1]->IsUint32Array()) {
        Uniform4Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform4Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform4Uiv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4uiv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix2Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix2fv(location, transpose, array, src_offset, src_length);
}

static void UniformMatrix2Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix2fv(location, transpose, array, src_offset, src_length);
}

static void UniformMatrix3Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix3fv(location, transpose, array, src_offset, src_length);
}

static void UniformMatrix3Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix3fv(location, transpose, array, src_offset, src_length);
}

static void UniformMatrix4Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> array;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix4fv(location, transpose, array, src_offset, src_length);
}

static void UniformMatrix4Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> array;
  uint32_t src_offset;
  uint32_t src_length;
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

  src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix4fv(location, transpose, array, src_offset, src_length);
}

static void UniformMatrix2X3Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix2x3fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix2X3Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix2x3fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix2X3FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix2X3Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix2X3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix2X3Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix2X3Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix2X3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix2X3Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix2X3Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix2X3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix2X3Fv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x3fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix3X2Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix3x2fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix3X2Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix3x2fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix3X2FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix3X2Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix3X2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix3X2Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix3X2Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix3X2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix3X2Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix3X2Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix3X2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix3X2Fv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x2fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix2X4Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix2x4fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix2X4Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix2x4fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix2X4FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix2X4Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix2X4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix2X4Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix2X4Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix2X4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix2X4Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix2X4Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix2X4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix2X4Fv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2x4fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix4X2Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix4x2fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix4X2Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix4x2fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix4X2FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix4X2Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix4X2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix4X2Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix4X2Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix4X2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix4X2Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix4X2Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix4X2Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix4X2Fv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x2fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix3X4Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix3x4fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix3X4Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix3x4fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix3X4FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix3X4Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix3X4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix3X4Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix3X4Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix3X4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix3X4Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix3X4Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix3X4Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3x4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix3X4Fv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3x4fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix4X3Fv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  MaybeShared<DOMFloat32Array> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix4x3fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix4X3Fv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLUniformLocation* location;
  bool transpose;
  Vector<float> value;
  uint32_t src_offset;
  uint32_t src_length;
  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!location && !IsUndefinedOrNull(info[0])) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLUniformLocation'.");
    return;
  }

  transpose = NativeValueTraits<IDLBoolean>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }
  if (!info[4]->IsUndefined()) {
    src_length = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_length = 0u;
  }

  impl->uniformMatrix4x3fv(location, transpose, value, src_offset, src_length);
}

static void UniformMatrix4X3FvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix4X3Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix4X3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix4X3Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix4X3Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix4X3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix4X3Fv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 5:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix4X3Fv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix4X3Fv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4x3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix4X3Fv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4x3fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttribI4IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t index;
  int32_t x;
  int32_t y;
  int32_t z;
  int32_t w;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

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

  impl->vertexAttribI4i(index, x, y, z, w);
}

static void VertexAttribI4Iv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t index;
  MaybeShared<DOMInt32Array> v;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  v = ToMaybeShared<MaybeShared<DOMInt32Array>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Int32Array'.");
    return;
  }

  impl->vertexAttribI4iv(index, v);
}

static void VertexAttribI4Iv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t index;
  Vector<int32_t> v;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  v = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttribI4iv(index, v);
}

static void VertexAttribI4IvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        VertexAttribI4Iv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        VertexAttribI4Iv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "vertexAttribI4iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          VertexAttribI4Iv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttribI4UiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4ui");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t index;
  uint32_t x;
  uint32_t y;
  uint32_t z;
  uint32_t w;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  x = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  y = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  z = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  w = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttribI4ui(index, x, y, z, w);
}

static void VertexAttribI4Uiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t index;
  MaybeShared<DOMUint32Array> v;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  v = ToMaybeShared<MaybeShared<DOMUint32Array>>(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;
  if (!v) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'Uint32Array'.");
    return;
  }

  impl->vertexAttribI4uiv(index, v);
}

static void VertexAttribI4Uiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4uiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t index;
  Vector<uint32_t> v;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  v = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttribI4uiv(index, v);
}

static void VertexAttribI4UivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(2, info.Length())) {
    case 2:
      if (info[1]->IsUint32Array()) {
        VertexAttribI4Uiv1Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        VertexAttribI4Uiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "vertexAttribI4uiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          VertexAttribI4Uiv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribI4uiv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttribIPointerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribIPointer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t index;
  int32_t size;
  uint32_t type;
  int32_t stride;
  int64_t offset;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  stride = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttribIPointer(index, size, type, stride, offset);
}

static void VertexAttribDivisorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribDivisor");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t index;
  uint32_t divisor;
  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  divisor = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  impl->vertexAttribDivisor(index, divisor);
}

static void DrawArraysInstancedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawArraysInstanced");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t first;
  int32_t count;
  int32_t instance_count;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  first = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  instance_count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawArraysInstanced(mode, first, count, instance_count);
}

static void DrawElementsInstancedMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawElementsInstanced");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t mode;
  int32_t count;
  uint32_t type;
  int64_t offset;
  int32_t instance_count;
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

  instance_count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawElementsInstanced(mode, count, type, offset, instance_count);
}

static void DrawRangeElementsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawRangeElements");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 6)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
    return;
  }

  uint32_t mode;
  uint32_t start;
  uint32_t end;
  int32_t count;
  uint32_t type;
  int64_t offset;
  mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  start = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  end = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  count = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  type = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[5], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawRangeElements(mode, start, end, count, type, offset);
}

static void DrawBuffersMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawBuffers");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  Vector<uint32_t> buffers;
  buffers = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->drawBuffers(buffers);
}

static void ClearBufferiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  MaybeShared<DOMInt32Array> value;
  uint32_t src_offset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMInt32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Int32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }

  impl->clearBufferiv(buffer, drawbuffer, value, src_offset);
}

static void ClearBufferiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  Vector<int32_t> value;
  uint32_t src_offset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLLong>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }

  impl->clearBufferiv(buffer, drawbuffer, value, src_offset);
}

static void ClearBufferivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 3:
      if (info[2]->IsInt32Array()) {
        ClearBufferiv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        ClearBufferiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          ClearBufferiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsInt32Array()) {
        ClearBufferiv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        ClearBufferiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          ClearBufferiv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferiv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ClearBufferuiv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferuiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  MaybeShared<DOMUint32Array> value;
  uint32_t src_offset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMUint32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Uint32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }

  impl->clearBufferuiv(buffer, drawbuffer, value, src_offset);
}

static void ClearBufferuiv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferuiv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  Vector<uint32_t> value;
  uint32_t src_offset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }

  impl->clearBufferuiv(buffer, drawbuffer, value, src_offset);
}

static void ClearBufferuivMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 3:
      if (info[2]->IsUint32Array()) {
        ClearBufferuiv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        ClearBufferuiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferuiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          ClearBufferuiv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsUint32Array()) {
        ClearBufferuiv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        ClearBufferuiv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferuiv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          ClearBufferuiv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferuiv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ClearBufferfv1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferfv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  MaybeShared<DOMFloat32Array> value;
  uint32_t src_offset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = ToMaybeShared<MaybeShared<DOMFloat32Array>>(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;
  if (!value) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'Float32Array'.");
    return;
  }

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }

  impl->clearBufferfv(buffer, drawbuffer, value, src_offset);
}

static void ClearBufferfv2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferfv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  uint32_t buffer;
  int32_t drawbuffer;
  Vector<float> value;
  uint32_t src_offset;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  value = NativeValueTraits<IDLSequence<IDLUnrestrictedFloat>>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  if (!info[3]->IsUndefined()) {
    src_offset = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
    if (exception_state.HadException())
      return;
  } else {
    src_offset = 0u;
  }

  impl->clearBufferfv(buffer, drawbuffer, value, src_offset);
}

static void ClearBufferfvMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(4, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        ClearBufferfv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        ClearBufferfv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferfv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          ClearBufferfv2Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
      if (info[2]->IsFloat32Array()) {
        ClearBufferfv1Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        ClearBufferfv2Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "clearBufferfv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          ClearBufferfv2Method(info);
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferfv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void ClearBufferfiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearBufferfi");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 4)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(4, info.Length()));
    return;
  }

  uint32_t buffer;
  int32_t drawbuffer;
  float depth;
  int32_t stencil;
  buffer = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  drawbuffer = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  depth = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  stencil = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  impl->clearBufferfi(buffer, drawbuffer, depth, stencil);
}

static void CreateQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createQuery());
}

static void DeleteQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteQuery", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLQuery* query;
  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteQuery", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLQuery'."));
    return;
  }

  impl->deleteQuery(query);
}

static void IsQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isQuery", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLQuery* query;
  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isQuery", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLQuery'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isQuery(query));
}

static void BeginQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "beginQuery");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLQuery* query;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!query) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'WebGLQuery'.");
    return;
  }

  impl->beginQuery(target, query);
}

static void EndQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "endQuery");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t target;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->endQuery(target);
}

static void GetQueryMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getQuery");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  ScriptValue result = impl->getQuery(script_state, target, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetQueryParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getQueryParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLQuery* query;
  uint32_t pname;
  query = V8WebGLQuery::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!query) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLQuery'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getQueryParameter(script_state, query, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateSamplerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createSampler());
}

static void DeleteSamplerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteSampler", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLSampler* sampler;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteSampler", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLSampler'."));
    return;
  }

  impl->deleteSampler(sampler);
}

static void IsSamplerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSampler", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLSampler* sampler;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSampler", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLSampler'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isSampler(sampler));
}

static void BindSamplerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindSampler");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t unit;
  WebGLSampler* sampler;
  unit = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!sampler && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'WebGLSampler'.");
    return;
  }

  impl->bindSampler(unit, sampler);
}

static void SamplerParameteriMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "samplerParameteri");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLSampler* sampler;
  uint32_t pname;
  int32_t param;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLSampler'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  param = NativeValueTraits<IDLLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->samplerParameteri(sampler, pname, param);
}

static void SamplerParameterfMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "samplerParameterf");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLSampler* sampler;
  uint32_t pname;
  float param;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLSampler'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  param = NativeValueTraits<IDLUnrestrictedFloat>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->samplerParameterf(sampler, pname, param);
}

static void GetSamplerParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getSamplerParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLSampler* sampler;
  uint32_t pname;
  sampler = V8WebGLSampler::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sampler) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLSampler'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getSamplerParameter(script_state, sampler, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void FenceSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "fenceSync");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t condition;
  uint32_t flags;
  condition = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  flags = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValue(info, impl->fenceSync(condition, flags));
}

static void IsSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSync", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLSync* sync;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isSync", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLSync'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isSync(sync));
}

static void DeleteSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteSync", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLSync* sync;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteSync", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLSync'."));
    return;
  }

  impl->deleteSync(sync);
}

static void ClientWaitSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clientWaitSync");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLSync* sync;
  uint32_t flags;
  uint64_t timeout;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLSync'.");
    return;
  }

  flags = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  timeout = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueUnsigned(info, impl->clientWaitSync(sync, flags, timeout));
}

static void WaitSyncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "waitSync");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLSync* sync;
  uint32_t flags;
  int64_t timeout;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLSync'.");
    return;
  }

  flags = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  timeout = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->waitSync(sync, flags, timeout);
}

static void GetSyncParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getSyncParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLSync* sync;
  uint32_t pname;
  sync = V8WebGLSync::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!sync) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLSync'.");
    return;
  }

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getSyncParameter(script_state, sync, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void CreateTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createTransformFeedback());
}

static void DeleteTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTransformFeedback", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTransformFeedback* feedback;
  feedback = V8WebGLTransformFeedback::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!feedback && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTransformFeedback", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLTransformFeedback'."));
    return;
  }

  impl->deleteTransformFeedback(feedback);
}

static void IsTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTransformFeedback", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTransformFeedback* feedback;
  feedback = V8WebGLTransformFeedback::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!feedback && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTransformFeedback", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLTransformFeedback'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isTransformFeedback(feedback));
}

static void BindTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindTransformFeedback");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  WebGLTransformFeedback* feedback;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  feedback = V8WebGLTransformFeedback::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!feedback && !IsUndefinedOrNull(info[1])) {
    exception_state.ThrowTypeError("parameter 2 is not of type 'WebGLTransformFeedback'.");
    return;
  }

  impl->bindTransformFeedback(target, feedback);
}

static void BeginTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "beginTransformFeedback");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(1, info.Length()));
    return;
  }

  uint32_t primitive_mode;
  primitive_mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  impl->beginTransformFeedback(primitive_mode);
}

static void EndTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->endTransformFeedback();
}

static void TransformFeedbackVaryingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "transformFeedbackVaryings");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  Vector<String> varyings;
  uint32_t buffer_mode;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  varyings = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  buffer_mode = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->transformFeedbackVaryings(program, varyings, buffer_mode);
}

static void GetTransformFeedbackVaryingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getTransformFeedbackVarying");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  V8SetReturnValue(info, impl->getTransformFeedbackVarying(program, index));
}

static void PauseTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->pauseTransformFeedback();
}

static void ResumeTransformFeedbackMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->resumeTransformFeedback();
}

static void BindBufferBaseMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindBufferBase");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t index;
  WebGLBuffer* buffer;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!buffer && !IsUndefinedOrNull(info[2])) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'WebGLBuffer'.");
    return;
  }

  impl->bindBufferBase(target, index, buffer);
}

static void BindBufferRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindBufferRange");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 5)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(5, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t index;
  WebGLBuffer* buffer;
  int64_t offset;
  int64_t size;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[2]);
  if (!buffer && !IsUndefinedOrNull(info[2])) {
    exception_state.ThrowTypeError("parameter 3 is not of type 'WebGLBuffer'.");
    return;
  }

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[3], exception_state);
  if (exception_state.HadException())
    return;

  size = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[4], exception_state);
  if (exception_state.HadException())
    return;

  impl->bindBufferRange(target, index, buffer, offset, size);
}

static void GetIndexedParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getIndexedParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  uint32_t target;
  uint32_t index;
  target = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[0], exception_state);
  if (exception_state.HadException())
    return;

  index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getIndexedParameter(script_state, target, index);
  V8SetReturnValue(info, result.V8Value());
}

static void GetUniformIndicesMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getUniformIndices");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  Vector<String> uniform_names;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniform_names = NativeValueTraits<IDLSequence<IDLString>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  base::Optional<Vector<uint32_t>> result = impl->getUniformIndices(program, uniform_names);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void GetActiveUniformsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveUniforms");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  Vector<uint32_t> uniform_indices;
  uint32_t pname;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniform_indices = NativeValueTraits<IDLSequence<IDLUnsignedLong>>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getActiveUniforms(script_state, program, uniform_indices, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetUniformBlockIndexMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformBlockIndex", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> uniform_block_name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformBlockIndex", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  uniform_block_name = info[1];
  if (!uniform_block_name.Prepare())
    return;

  V8SetReturnValueUnsigned(info, impl->getUniformBlockIndex(program, uniform_block_name));
}

static void GetActiveUniformBlockParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveUniformBlockParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t uniform_block_index;
  uint32_t pname;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniform_block_index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  pname = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  ScriptValue result = impl->getActiveUniformBlockParameter(script_state, program, uniform_block_index, pname);
  V8SetReturnValue(info, result.V8Value());
}

static void GetActiveUniformBlockNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveUniformBlockName");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t uniform_block_index;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniform_block_index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  V8SetReturnValueStringOrNull(info, impl->getActiveUniformBlockName(program, uniform_block_index), info.GetIsolate());
}

static void UniformBlockBindingMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformBlockBinding");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 3)) {
    exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
    return;
  }

  WebGLProgram* program;
  uint32_t uniform_block_index;
  uint32_t uniform_block_binding;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    exception_state.ThrowTypeError("parameter 1 is not of type 'WebGLProgram'.");
    return;
  }

  uniform_block_index = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[1], exception_state);
  if (exception_state.HadException())
    return;

  uniform_block_binding = NativeValueTraits<IDLUnsignedLong>::NativeValue(info.GetIsolate(), info[2], exception_state);
  if (exception_state.HadException())
    return;

  impl->uniformBlockBinding(program, uniform_block_index, uniform_block_binding);
}

static void CreateVertexArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createVertexArray());
}

static void DeleteVertexArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteVertexArray", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLVertexArrayObject* vertex_array;
  vertex_array = V8WebGLVertexArrayObject::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!vertex_array && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteVertexArray", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLVertexArrayObject'."));
    return;
  }

  impl->deleteVertexArray(vertex_array);
}

static void IsVertexArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVertexArray", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLVertexArrayObject* vertex_array;
  vertex_array = V8WebGLVertexArrayObject::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!vertex_array && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isVertexArray", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLVertexArrayObject'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isVertexArray(vertex_array));
}

static void BindVertexArrayMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("bindVertexArray", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLVertexArrayObject* vertex_array;
  vertex_array = V8WebGLVertexArrayObject::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!vertex_array && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("bindVertexArray", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLVertexArrayObject'."));
    return;
  }

  impl->bindVertexArray(vertex_array);
}

static void ReadPixels1Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readPixels");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  MaybeShared<DOMArrayBufferView> dst_data;
  int64_t offset;
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

  dst_data = ToMaybeShared<MaybeShared<DOMArrayBufferView>>(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;
  if (!dst_data) {
    exception_state.ThrowTypeError("parameter 7 is not of type 'ArrayBufferView'.");
    return;
  }

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[7], exception_state);
  if (exception_state.HadException())
    return;

  impl->readPixels(x, y, width, height, format, type, dst_data, offset);
}

static void ReadPixels2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readPixels");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;
  uint32_t format;
  uint32_t type;
  int64_t offset;
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

  offset = NativeValueTraits<IDLLongLong>::NativeValue(info.GetIsolate(), info[6], exception_state);
  if (exception_state.HadException())
    return;

  impl->readPixels(x, y, width, height, format, type, offset);
}

static void ActiveTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "activeTexture");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLShader* shader;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("attachShader", "WebGL2RenderingContext", "parameter 2 is not of type 'WebGLShader'."));
    return;
  }

  impl->attachShader(program, shader);
}

static void BindAttribLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindAttribLocation");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindBuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindFramebuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindRenderbuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bindTexture");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendColor");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendEquation");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendEquationSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendFunc");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "blendFuncSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void BufferData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void BufferData3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void BufferData4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(5, info.Length())) {
    case 3:
      if (IsUndefinedOrNull(info[1])) {
        BufferData4Method(info);
        return;
      }
      if (info[1]->IsArrayBufferView()) {
        BufferData3Method(info);
        return;
      }
      if (info[1]->IsArrayBuffer()) {
        BufferData4Method(info);
        return;
      }
      if (info[1]->IsNumber()) {
        BufferData2Method(info);
        return;
      }
      if (true) {
        BufferData2Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        BufferData1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        BufferData1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferData");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void BufferSubData2Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void BufferSubData3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferSubData");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsArrayBufferView()) {
        BufferSubData2Method(info);
        return;
      }
      if (info[2]->IsArrayBuffer()) {
        BufferSubData3Method(info);
        return;
      }
      break;
    case 4:
      if (true) {
        BufferSubData1Method(info);
        return;
      }
      break;
    case 5:
      if (true) {
        BufferSubData1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "bufferSubData");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CheckFramebufferStatusMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "checkFramebufferStatus");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clear");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearColor");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearDepth");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "clearStencil");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "colorMask");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compileShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("compileShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  impl->compileShader(shader);
}

static void CompressedTexImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void CompressedTexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(9, info.Length())) {
    case 7:
      if (true) {
        CompressedTexImage2D3Method(info);
        return;
      }
      break;
    case 8:
      if (info[6]->IsArrayBufferView()) {
        CompressedTexImage2D1Method(info);
        return;
      }
      if (info[6]->IsNumber()) {
        CompressedTexImage2D2Method(info);
        return;
      }
      if (true) {
        CompressedTexImage2D2Method(info);
        return;
      }
      break;
    case 9:
      if (true) {
        CompressedTexImage2D1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexImage2D");
  if (is_arity_error) {
    if (info.Length() < 7) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CompressedTexSubImage2D3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void CompressedTexSubImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(10, info.Length())) {
    case 8:
      if (true) {
        CompressedTexSubImage2D3Method(info);
        return;
      }
      break;
    case 9:
      if (info[7]->IsArrayBufferView()) {
        CompressedTexSubImage2D1Method(info);
        return;
      }
      if (info[7]->IsNumber()) {
        CompressedTexSubImage2D2Method(info);
        return;
      }
      if (true) {
        CompressedTexSubImage2D2Method(info);
        return;
      }
      break;
    case 10:
      if (true) {
        CompressedTexSubImage2D1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "compressedTexSubImage2D");
  if (is_arity_error) {
    if (info.Length() < 8) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(8, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void CopyTexImage2DMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "copyTexImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "copyTexSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createBuffer());
}

static void CreateFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createFramebuffer());
}

static void CreateProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createProgram());
}

static void CreateRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createRenderbuffer());
}

static void CreateShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "createShader");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValue(info, impl->createTexture());
}

static void CullFaceMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "cullFace");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteBuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLBuffer* buffer;
  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteBuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLBuffer'."));
    return;
  }

  impl->deleteBuffer(buffer);
}

static void DeleteFramebufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteFramebuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLFramebuffer* framebuffer;
  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!framebuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteFramebuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLFramebuffer'."));
    return;
  }

  impl->deleteFramebuffer(framebuffer);
}

static void DeleteProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->deleteProgram(program);
}

static void DeleteRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteRenderbuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLRenderbuffer* renderbuffer;
  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!renderbuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteRenderbuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLRenderbuffer'."));
    return;
  }

  impl->deleteRenderbuffer(renderbuffer);
}

static void DeleteShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  impl->deleteShader(shader);
}

static void DeleteTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTexture", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTexture* texture;
  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!texture && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("deleteTexture", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLTexture'."));
    return;
  }

  impl->deleteTexture(texture);
}

static void DepthFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "depthFunc");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "depthMask");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "depthRange");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLShader* shader;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("detachShader", "WebGL2RenderingContext", "parameter 2 is not of type 'WebGLShader'."));
    return;
  }

  impl->detachShader(program, shader);
}

static void DisableMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "disable");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "disableVertexAttribArray");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawArrays");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "drawElements");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "enable");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "enableVertexAttribArray");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->finish();
}

static void FlushMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->flush();
}

static void FramebufferRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "framebufferRenderbuffer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "framebufferTexture2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "frontFace");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "generateMipmap");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveAttrib");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getActiveUniform");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttachedShaders", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttachedShaders", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  base::Optional<HeapVector<Member<WebGLShader>>> result = impl->getAttachedShaders(program);
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void GetAttribLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribLocation", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getAttribLocation", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValueInt(info, impl->getAttribLocation(program, name));
}

static void GetBufferParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getBufferParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  WebGLContextAttributes* result = impl->getContextAttributes();
  V8SetReturnValue(info, result);
}

static void GetErrorMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValueUnsigned(info, impl->getError());
}

static void GetExtensionMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getExtension", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getFramebufferAttachmentParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getProgramParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgramInfoLog", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getProgramInfoLog", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getProgramInfoLog(program), info.GetIsolate());
}

static void GetRenderbufferParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getRenderbufferParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getShaderParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderInfoLog", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderInfoLog", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getShaderInfoLog(shader), info.GetIsolate());
}

static void GetShaderPrecisionFormatMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getShaderPrecisionFormat");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderSource", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getShaderSource", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueStringOrNull(info, impl->getShaderSource(shader), info.GetIsolate());
}

static void GetSupportedExtensionsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  base::Optional<Vector<String>> result = impl->getSupportedExtensions();
  if (!result)
    V8SetReturnValueNull(info);
  else
    V8SetReturnValue(info, ToV8(result.value(), info.Holder(), info.GetIsolate()));
}

static void GetTexParameterMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getTexParameter");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  WebGLUniformLocation* location;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  location = V8WebGLUniformLocation::ToImplWithTypeCheck(info.GetIsolate(), info[1]);
  if (!location) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniform", "WebGL2RenderingContext", "parameter 2 is not of type 'WebGLUniformLocation'."));
    return;
  }

  ScriptValue result = impl->getUniform(script_state, program, location);
  V8SetReturnValue(info, result.V8Value());
}

static void GetUniformLocationMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformLocation", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLProgram* program;
  V8StringResource<> name;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("getUniformLocation", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  name = info[1];
  if (!name.Prepare())
    return;

  V8SetReturnValue(info, impl->getUniformLocation(program, name));
}

static void GetVertexAttribMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getVertexAttrib");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "getVertexAttribOffset");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "hint");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isBuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLBuffer* buffer;
  buffer = V8WebGLBuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!buffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isBuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLBuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isBuffer(buffer));
}

static void IsContextLostMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  V8SetReturnValueBool(info, impl->isContextLost());
}

static void IsEnabledMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "isEnabled");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isFramebuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLFramebuffer* framebuffer;
  framebuffer = V8WebGLFramebuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!framebuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isFramebuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLFramebuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isFramebuffer(framebuffer));
}

static void IsProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isProgram(program));
}

static void IsRenderbufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isRenderbuffer", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLRenderbuffer* renderbuffer;
  renderbuffer = V8WebGLRenderbuffer::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!renderbuffer && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isRenderbuffer", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLRenderbuffer'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isRenderbuffer(renderbuffer));
}

static void IsShaderMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isShader", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLShader* shader;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isShader", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isShader(shader));
}

static void IsTextureMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTexture", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLTexture* texture;
  texture = V8WebGLTexture::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!texture && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("isTexture", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLTexture'."));
    return;
  }

  V8SetReturnValueBool(info, impl->isTexture(texture));
}

static void LineWidthMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "lineWidth");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("linkProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("linkProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->linkProgram(program);
}

static void PixelStoreiMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "pixelStorei");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "polygonOffset");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void ReadPixels3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readPixels");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void ReadPixelsMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  scheduler::CooperativeSchedulingManager::Instance()->Safepoint();

  bool is_arity_error = false;

  switch (std::min(8, info.Length())) {
    case 7:
      if (IsUndefinedOrNull(info[6])) {
        ReadPixels3Method(info);
        return;
      }
      if (info[6]->IsArrayBufferView()) {
        ReadPixels3Method(info);
        return;
      }
      if (info[6]->IsNumber()) {
        ReadPixels2Method(info);
        return;
      }
      if (true) {
        ReadPixels2Method(info);
        return;
      }
      break;
    case 8:
      if (true) {
        ReadPixels1Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "readPixels");
  if (is_arity_error) {
    if (info.Length() < 7) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void RenderbufferStorageMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "renderbufferStorage");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "sampleCoverage");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "scissor");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 2)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shaderSource", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(2, info.Length())));
    return;
  }

  WebGLShader* shader;
  V8StringResource<> string;
  shader = V8WebGLShader::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!shader) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("shaderSource", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLShader'."));
    return;
  }

  string = info[1];
  if (!string.Prepare())
    return;

  impl->shaderSource(shader, string);
}

static void StencilFuncMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilFunc");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilFuncSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilMask");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilMaskSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilOp");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "stencilOpSeparate");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texParameterf");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texParameteri");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexImage2D9Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexImage2D10Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexImage2D11Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexImage2D12Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexImage2D13Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexImage2D14Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexImage2D15Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(10, info.Length())) {
    case 6:
      if (V8ImageData::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D10Method(info);
        return;
      }
      if (V8HTMLImageElement::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D11Method(info);
        return;
      }
      if (V8HTMLCanvasElement::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D12Method(info);
        return;
      }
      if (V8OffscreenCanvas::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D13Method(info);
        return;
      }
      if (V8HTMLVideoElement::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D14Method(info);
        return;
      }
      if (V8ImageBitmap::HasInstance(info[5], info.GetIsolate())) {
        TexImage2D15Method(info);
        return;
      }
      break;
    case 9:
      if (IsUndefinedOrNull(info[8])) {
        TexImage2D9Method(info);
        return;
      }
      if (V8ImageData::HasInstance(info[8], info.GetIsolate())) {
        TexImage2D2Method(info);
        return;
      }
      if (V8HTMLImageElement::HasInstance(info[8], info.GetIsolate())) {
        TexImage2D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::HasInstance(info[8], info.GetIsolate())) {
        TexImage2D4Method(info);
        return;
      }
      if (V8OffscreenCanvas::HasInstance(info[8], info.GetIsolate())) {
        TexImage2D5Method(info);
        return;
      }
      if (V8HTMLVideoElement::HasInstance(info[8], info.GetIsolate())) {
        TexImage2D6Method(info);
        return;
      }
      if (V8ImageBitmap::HasInstance(info[8], info.GetIsolate())) {
        TexImage2D7Method(info);
        return;
      }
      if (info[8]->IsArrayBufferView()) {
        TexImage2D9Method(info);
        return;
      }
      if (info[8]->IsNumber()) {
        TexImage2D1Method(info);
        return;
      }
      if (true) {
        TexImage2D1Method(info);
        return;
      }
      break;
    case 10:
      if (true) {
        TexImage2D8Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texImage2D");
  if (is_arity_error) {
    if (info.Length() < 6) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(6, info.Length()));
      return;
    }
    if (info.Length() >= 6) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[6, 9, 10]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void TexSubImage2D9Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexSubImage2D10Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexSubImage2D11Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexSubImage2D12Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexSubImage2D13Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexSubImage2D14Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void TexSubImage2D15Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(10, info.Length())) {
    case 7:
      if (V8ImageData::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D10Method(info);
        return;
      }
      if (V8HTMLImageElement::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D11Method(info);
        return;
      }
      if (V8HTMLCanvasElement::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D12Method(info);
        return;
      }
      if (V8OffscreenCanvas::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D13Method(info);
        return;
      }
      if (V8HTMLVideoElement::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D14Method(info);
        return;
      }
      if (V8ImageBitmap::HasInstance(info[6], info.GetIsolate())) {
        TexSubImage2D15Method(info);
        return;
      }
      break;
    case 9:
      if (IsUndefinedOrNull(info[8])) {
        TexSubImage2D9Method(info);
        return;
      }
      if (V8ImageData::HasInstance(info[8], info.GetIsolate())) {
        TexSubImage2D2Method(info);
        return;
      }
      if (V8HTMLImageElement::HasInstance(info[8], info.GetIsolate())) {
        TexSubImage2D3Method(info);
        return;
      }
      if (V8HTMLCanvasElement::HasInstance(info[8], info.GetIsolate())) {
        TexSubImage2D4Method(info);
        return;
      }
      if (V8OffscreenCanvas::HasInstance(info[8], info.GetIsolate())) {
        TexSubImage2D5Method(info);
        return;
      }
      if (V8HTMLVideoElement::HasInstance(info[8], info.GetIsolate())) {
        TexSubImage2D6Method(info);
        return;
      }
      if (V8ImageBitmap::HasInstance(info[8], info.GetIsolate())) {
        TexSubImage2D7Method(info);
        return;
      }
      if (info[8]->IsArrayBufferView()) {
        TexSubImage2D9Method(info);
        return;
      }
      if (info[8]->IsNumber()) {
        TexSubImage2D1Method(info);
        return;
      }
      if (true) {
        TexSubImage2D1Method(info);
        return;
      }
      break;
    case 10:
      if (true) {
        TexSubImage2D8Method(info);
        return;
      }
      break;
    default:
      is_arity_error = true;
  }

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "texSubImage2D");
  if (is_arity_error) {
    if (info.Length() < 7) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(7, info.Length()));
      return;
    }
    if (info.Length() >= 7) {
      exception_state.ThrowTypeError(ExceptionMessages::InvalidArity("[7, 9, 10]", info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform1FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform1Fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform1Fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        Uniform1Fv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform1Fv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform1Fv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
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
                                      "WebGL2RenderingContext", "uniform1fv");
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
    case 4:
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
                                      "WebGL2RenderingContext", "uniform1fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform1IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform1Iv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform1Iv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        Uniform1Iv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform1Iv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform1iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform1Iv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
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
                                      "WebGL2RenderingContext", "uniform1iv");
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
    case 4:
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
                                      "WebGL2RenderingContext", "uniform1iv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform1iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform2FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform2Fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform2Fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        Uniform2Fv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform2Fv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform2Fv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
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
                                      "WebGL2RenderingContext", "uniform2fv");
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
    case 4:
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
                                      "WebGL2RenderingContext", "uniform2fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform2IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform2Iv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform2Iv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        Uniform2Iv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform2Iv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform2iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform2Iv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
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
                                      "WebGL2RenderingContext", "uniform2iv");
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
    case 4:
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
                                      "WebGL2RenderingContext", "uniform2iv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform2iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform3FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform3Fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform3Fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        Uniform3Fv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform3Fv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform3Fv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
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
                                      "WebGL2RenderingContext", "uniform3fv");
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
    case 4:
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
                                      "WebGL2RenderingContext", "uniform3fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform3IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform3Iv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform3Iv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        Uniform3Iv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform3Iv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform3iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform3Iv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
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
                                      "WebGL2RenderingContext", "uniform3iv");
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
    case 4:
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
                                      "WebGL2RenderingContext", "uniform3iv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform3iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform4FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform4Fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform4Fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsFloat32Array()) {
        Uniform4Fv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform4Fv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform4Fv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
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
                                      "WebGL2RenderingContext", "uniform4fv");
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
    case 4:
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
                                      "WebGL2RenderingContext", "uniform4fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void Uniform4IMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4i");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform4Iv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void Uniform4Iv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(4, info.Length())) {
    case 2:
      if (info[1]->IsInt32Array()) {
        Uniform4Iv3Method(info);
        return;
      }
      if (info[1]->IsArray()) {
        Uniform4Iv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniform4iv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[1], exception_state)) {
          Uniform4Iv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 3:
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
                                      "WebGL2RenderingContext", "uniform4iv");
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
    case 4:
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
                                      "WebGL2RenderingContext", "uniform4iv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniform4iv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix2Fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void UniformMatrix2Fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix2Fv3Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix2Fv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix2fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix2Fv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
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
                                      "WebGL2RenderingContext", "uniformMatrix2fv");
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
    case 5:
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
                                      "WebGL2RenderingContext", "uniformMatrix2fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix2fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix3Fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void UniformMatrix3Fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix3Fv3Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix3Fv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix3fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix3Fv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
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
                                      "WebGL2RenderingContext", "uniformMatrix3fv");
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
    case 5:
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
                                      "WebGL2RenderingContext", "uniformMatrix3fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix3fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UniformMatrix4Fv3Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

static void UniformMatrix4Fv4Method(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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

  switch (std::min(5, info.Length())) {
    case 3:
      if (info[2]->IsFloat32Array()) {
        UniformMatrix4Fv3Method(info);
        return;
      }
      if (info[2]->IsArray()) {
        UniformMatrix4Fv4Method(info);
        return;
      }
      {
        ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext,
                                      "WebGL2RenderingContext", "uniformMatrix4fv");
        if (HasCallableIteratorSymbol(info.GetIsolate(), info[2], exception_state)) {
          UniformMatrix4Fv4Method(info);
          return;
        }
        if (exception_state.HadException()) {
          exception_state.RethrowV8Exception(exception_state.GetException());
          return;
        }
      }
      break;
    case 4:
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
                                      "WebGL2RenderingContext", "uniformMatrix4fv");
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
    case 5:
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
                                      "WebGL2RenderingContext", "uniformMatrix4fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "uniformMatrix4fv");
  if (is_arity_error) {
    if (info.Length() < 3) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(3, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void UseProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("useProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program && !IsUndefinedOrNull(info[0])) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("useProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->useProgram(program);
}

static void ValidateProgramMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  if (UNLIKELY(info.Length() < 1)) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("validateProgram", "WebGL2RenderingContext", ExceptionMessages::NotEnoughArguments(1, info.Length())));
    return;
  }

  WebGLProgram* program;
  program = V8WebGLProgram::ToImplWithTypeCheck(info.GetIsolate(), info[0]);
  if (!program) {
    V8ThrowException::ThrowTypeError(info.GetIsolate(), ExceptionMessages::FailedToExecute("validateProgram", "WebGL2RenderingContext", "parameter 1 is not of type 'WebGLProgram'."));
    return;
  }

  impl->validateProgram(program);
}

static void VertexAttrib1FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib1f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib1fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
                                      "WebGL2RenderingContext", "vertexAttrib1fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib1fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttrib2FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib2f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib2fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
                                      "WebGL2RenderingContext", "vertexAttrib2fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib2fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttrib3FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib3f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib3fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
                                      "WebGL2RenderingContext", "vertexAttrib3fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib3fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttrib4FMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib4f");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib4fv");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
                                      "WebGL2RenderingContext", "vertexAttrib4fv");
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

  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttrib4fv");
  if (is_arity_error) {
    if (info.Length() < 2) {
      exception_state.ThrowTypeError(ExceptionMessages::NotEnoughArguments(2, info.Length()));
      return;
    }
  }
  exception_state.ThrowTypeError("No function was found that matched the signature provided.");
}

static void VertexAttribPointerMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "vertexAttribPointer");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "viewport");

  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

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
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  impl->commit();
}

static void MakeXRCompatibleMethod(const v8::FunctionCallbackInfo<v8::Value>& info) {
  ExceptionState exception_state(info.GetIsolate(), ExceptionState::kExecutionContext, "WebGL2RenderingContext", "makeXRCompatible");
  ExceptionToRejectPromiseScope reject_promise_scope(info, exception_state);

  // V8DOMConfiguration::kDoNotCheckHolder
  // Make sure that info.Holder() really points to an instance of the type.
  if (!V8WebGL2RenderingContext::HasInstance(info.Holder(), info.GetIsolate())) {
    exception_state.ThrowTypeError("Illegal invocation");
    return;
  }
  WebGL2RenderingContext* impl = V8WebGL2RenderingContext::ToImpl(info.Holder());

  ScriptState* script_state = ScriptState::ForRelevantRealm(info);

  ScriptPromise result = impl->makeXRCompatible(script_state);
  V8SetReturnValue(info, result.V8Value());
}

}  // namespace webgl2_rendering_context_v8_internal

void V8WebGL2RenderingContext::CanvasAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_canvas_Getter");

  webgl2_rendering_context_v8_internal::CanvasAttributeGetter(info);
}

void V8WebGL2RenderingContext::DrawingBufferWidthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawingBufferWidth_Getter");

  webgl2_rendering_context_v8_internal::DrawingBufferWidthAttributeGetter(info);
}

void V8WebGL2RenderingContext::DrawingBufferHeightAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawingBufferHeight_Getter");

  webgl2_rendering_context_v8_internal::DrawingBufferHeightAttributeGetter(info);
}

void V8WebGL2RenderingContext::CopyBufferSubDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_copyBufferSubData");

  webgl2_rendering_context_v8_internal::CopyBufferSubDataMethod(info);
}

void V8WebGL2RenderingContext::GetBufferSubDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getBufferSubData");

  webgl2_rendering_context_v8_internal::GetBufferSubDataMethod(info);
}

void V8WebGL2RenderingContext::BlitFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blitFramebuffer");

  webgl2_rendering_context_v8_internal::BlitFramebufferMethod(info);
}

void V8WebGL2RenderingContext::FramebufferTextureLayerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_framebufferTextureLayer");

  webgl2_rendering_context_v8_internal::FramebufferTextureLayerMethod(info);
}

void V8WebGL2RenderingContext::GetInternalformatParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getInternalformatParameter");

  webgl2_rendering_context_v8_internal::GetInternalformatParameterMethod(info);
}

void V8WebGL2RenderingContext::InvalidateFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_invalidateFramebuffer");

  webgl2_rendering_context_v8_internal::InvalidateFramebufferMethod(info);
}

void V8WebGL2RenderingContext::InvalidateSubFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_invalidateSubFramebuffer");

  webgl2_rendering_context_v8_internal::InvalidateSubFramebufferMethod(info);
}

void V8WebGL2RenderingContext::ReadBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_readBuffer");

  webgl2_rendering_context_v8_internal::ReadBufferMethod(info);
}

void V8WebGL2RenderingContext::RenderbufferStorageMultisampleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_renderbufferStorageMultisample");

  webgl2_rendering_context_v8_internal::RenderbufferStorageMultisampleMethod(info);
}

void V8WebGL2RenderingContext::TexStorage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texStorage2D");

  webgl2_rendering_context_v8_internal::TexStorage2DMethod(info);
}

void V8WebGL2RenderingContext::TexStorage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texStorage3D");

  webgl2_rendering_context_v8_internal::TexStorage3DMethod(info);
}

void V8WebGL2RenderingContext::TexImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texImage3D");

  webgl2_rendering_context_v8_internal::TexImage3DMethod(info);
}

void V8WebGL2RenderingContext::TexSubImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texSubImage3D");

  webgl2_rendering_context_v8_internal::TexSubImage3DMethod(info);
}

void V8WebGL2RenderingContext::CopyTexSubImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_copyTexSubImage3D");

  webgl2_rendering_context_v8_internal::CopyTexSubImage3DMethod(info);
}

void V8WebGL2RenderingContext::CompressedTexImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compressedTexImage3D");

  webgl2_rendering_context_v8_internal::CompressedTexImage3DMethod(info);
}

void V8WebGL2RenderingContext::CompressedTexSubImage3DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compressedTexSubImage3D");

  webgl2_rendering_context_v8_internal::CompressedTexSubImage3DMethod(info);
}

void V8WebGL2RenderingContext::GetFragDataLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getFragDataLocation");

  webgl2_rendering_context_v8_internal::GetFragDataLocationMethod(info);
}

void V8WebGL2RenderingContext::Uniform1UiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1ui");

  webgl2_rendering_context_v8_internal::Uniform1UiMethod(info);
}

void V8WebGL2RenderingContext::Uniform2UiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2ui");

  webgl2_rendering_context_v8_internal::Uniform2UiMethod(info);
}

void V8WebGL2RenderingContext::Uniform3UiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3ui");

  webgl2_rendering_context_v8_internal::Uniform3UiMethod(info);
}

void V8WebGL2RenderingContext::Uniform4UiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4ui");

  webgl2_rendering_context_v8_internal::Uniform4UiMethod(info);
}

void V8WebGL2RenderingContext::Uniform1UivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1uiv");

  webgl2_rendering_context_v8_internal::Uniform1UivMethod(info);
}

void V8WebGL2RenderingContext::Uniform2UivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2uiv");

  webgl2_rendering_context_v8_internal::Uniform2UivMethod(info);
}

void V8WebGL2RenderingContext::Uniform3UivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3uiv");

  webgl2_rendering_context_v8_internal::Uniform3UivMethod(info);
}

void V8WebGL2RenderingContext::Uniform4UivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4uiv");

  webgl2_rendering_context_v8_internal::Uniform4UivMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix2X3FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix2x3fv");

  webgl2_rendering_context_v8_internal::UniformMatrix2X3FvMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix3X2FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix3x2fv");

  webgl2_rendering_context_v8_internal::UniformMatrix3X2FvMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix2X4FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix2x4fv");

  webgl2_rendering_context_v8_internal::UniformMatrix2X4FvMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix4X2FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix4x2fv");

  webgl2_rendering_context_v8_internal::UniformMatrix4X2FvMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix3X4FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix3x4fv");

  webgl2_rendering_context_v8_internal::UniformMatrix3X4FvMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix4X3FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix4x3fv");

  webgl2_rendering_context_v8_internal::UniformMatrix4X3FvMethod(info);
}

void V8WebGL2RenderingContext::VertexAttribI4IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribI4i");

  webgl2_rendering_context_v8_internal::VertexAttribI4IMethod(info);
}

void V8WebGL2RenderingContext::VertexAttribI4IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribI4iv");

  webgl2_rendering_context_v8_internal::VertexAttribI4IvMethod(info);
}

void V8WebGL2RenderingContext::VertexAttribI4UiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribI4ui");

  webgl2_rendering_context_v8_internal::VertexAttribI4UiMethod(info);
}

void V8WebGL2RenderingContext::VertexAttribI4UivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribI4uiv");

  webgl2_rendering_context_v8_internal::VertexAttribI4UivMethod(info);
}

void V8WebGL2RenderingContext::VertexAttribIPointerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribIPointer");

  webgl2_rendering_context_v8_internal::VertexAttribIPointerMethod(info);
}

void V8WebGL2RenderingContext::VertexAttribDivisorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribDivisor");

  webgl2_rendering_context_v8_internal::VertexAttribDivisorMethod(info);
}

void V8WebGL2RenderingContext::DrawArraysInstancedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawArraysInstanced");

  webgl2_rendering_context_v8_internal::DrawArraysInstancedMethod(info);
}

void V8WebGL2RenderingContext::DrawElementsInstancedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawElementsInstanced");

  webgl2_rendering_context_v8_internal::DrawElementsInstancedMethod(info);
}

void V8WebGL2RenderingContext::DrawRangeElementsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawRangeElements");

  webgl2_rendering_context_v8_internal::DrawRangeElementsMethod(info);
}

void V8WebGL2RenderingContext::DrawBuffersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawBuffers");

  webgl2_rendering_context_v8_internal::DrawBuffersMethod(info);
}

void V8WebGL2RenderingContext::ClearBufferivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearBufferiv");

  webgl2_rendering_context_v8_internal::ClearBufferivMethod(info);
}

void V8WebGL2RenderingContext::ClearBufferuivMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearBufferuiv");

  webgl2_rendering_context_v8_internal::ClearBufferuivMethod(info);
}

void V8WebGL2RenderingContext::ClearBufferfvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearBufferfv");

  webgl2_rendering_context_v8_internal::ClearBufferfvMethod(info);
}

void V8WebGL2RenderingContext::ClearBufferfiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearBufferfi");

  webgl2_rendering_context_v8_internal::ClearBufferfiMethod(info);
}

void V8WebGL2RenderingContext::CreateQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createQuery");

  webgl2_rendering_context_v8_internal::CreateQueryMethod(info);
}

void V8WebGL2RenderingContext::DeleteQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteQuery");

  webgl2_rendering_context_v8_internal::DeleteQueryMethod(info);
}

void V8WebGL2RenderingContext::IsQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isQuery");

  webgl2_rendering_context_v8_internal::IsQueryMethod(info);
}

void V8WebGL2RenderingContext::BeginQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_beginQuery");

  webgl2_rendering_context_v8_internal::BeginQueryMethod(info);
}

void V8WebGL2RenderingContext::EndQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_endQuery");

  webgl2_rendering_context_v8_internal::EndQueryMethod(info);
}

void V8WebGL2RenderingContext::GetQueryMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getQuery");

  webgl2_rendering_context_v8_internal::GetQueryMethod(info);
}

void V8WebGL2RenderingContext::GetQueryParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getQueryParameter");

  webgl2_rendering_context_v8_internal::GetQueryParameterMethod(info);
}

void V8WebGL2RenderingContext::CreateSamplerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createSampler");

  webgl2_rendering_context_v8_internal::CreateSamplerMethod(info);
}

void V8WebGL2RenderingContext::DeleteSamplerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteSampler");

  webgl2_rendering_context_v8_internal::DeleteSamplerMethod(info);
}

void V8WebGL2RenderingContext::IsSamplerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isSampler");

  webgl2_rendering_context_v8_internal::IsSamplerMethod(info);
}

void V8WebGL2RenderingContext::BindSamplerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindSampler");

  webgl2_rendering_context_v8_internal::BindSamplerMethod(info);
}

void V8WebGL2RenderingContext::SamplerParameteriMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_samplerParameteri");

  webgl2_rendering_context_v8_internal::SamplerParameteriMethod(info);
}

void V8WebGL2RenderingContext::SamplerParameterfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_samplerParameterf");

  webgl2_rendering_context_v8_internal::SamplerParameterfMethod(info);
}

void V8WebGL2RenderingContext::GetSamplerParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getSamplerParameter");

  webgl2_rendering_context_v8_internal::GetSamplerParameterMethod(info);
}

void V8WebGL2RenderingContext::FenceSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_fenceSync");

  webgl2_rendering_context_v8_internal::FenceSyncMethod(info);
}

void V8WebGL2RenderingContext::IsSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isSync");

  webgl2_rendering_context_v8_internal::IsSyncMethod(info);
}

void V8WebGL2RenderingContext::DeleteSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteSync");

  webgl2_rendering_context_v8_internal::DeleteSyncMethod(info);
}

void V8WebGL2RenderingContext::ClientWaitSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clientWaitSync");

  webgl2_rendering_context_v8_internal::ClientWaitSyncMethod(info);
}

void V8WebGL2RenderingContext::WaitSyncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_waitSync");

  webgl2_rendering_context_v8_internal::WaitSyncMethod(info);
}

void V8WebGL2RenderingContext::GetSyncParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getSyncParameter");

  webgl2_rendering_context_v8_internal::GetSyncParameterMethod(info);
}

void V8WebGL2RenderingContext::CreateTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createTransformFeedback");

  webgl2_rendering_context_v8_internal::CreateTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::DeleteTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteTransformFeedback");

  webgl2_rendering_context_v8_internal::DeleteTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::IsTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isTransformFeedback");

  webgl2_rendering_context_v8_internal::IsTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::BindTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindTransformFeedback");

  webgl2_rendering_context_v8_internal::BindTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::BeginTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_beginTransformFeedback");

  webgl2_rendering_context_v8_internal::BeginTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::EndTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_endTransformFeedback");

  webgl2_rendering_context_v8_internal::EndTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::TransformFeedbackVaryingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_transformFeedbackVaryings");

  webgl2_rendering_context_v8_internal::TransformFeedbackVaryingsMethod(info);
}

void V8WebGL2RenderingContext::GetTransformFeedbackVaryingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getTransformFeedbackVarying");

  webgl2_rendering_context_v8_internal::GetTransformFeedbackVaryingMethod(info);
}

void V8WebGL2RenderingContext::PauseTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_pauseTransformFeedback");

  webgl2_rendering_context_v8_internal::PauseTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::ResumeTransformFeedbackMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_resumeTransformFeedback");

  webgl2_rendering_context_v8_internal::ResumeTransformFeedbackMethod(info);
}

void V8WebGL2RenderingContext::BindBufferBaseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindBufferBase");

  webgl2_rendering_context_v8_internal::BindBufferBaseMethod(info);
}

void V8WebGL2RenderingContext::BindBufferRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindBufferRange");

  webgl2_rendering_context_v8_internal::BindBufferRangeMethod(info);
}

void V8WebGL2RenderingContext::GetIndexedParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getIndexedParameter");

  webgl2_rendering_context_v8_internal::GetIndexedParameterMethod(info);
}

void V8WebGL2RenderingContext::GetUniformIndicesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getUniformIndices");

  webgl2_rendering_context_v8_internal::GetUniformIndicesMethod(info);
}

void V8WebGL2RenderingContext::GetActiveUniformsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveUniforms");

  webgl2_rendering_context_v8_internal::GetActiveUniformsMethod(info);
}

void V8WebGL2RenderingContext::GetUniformBlockIndexMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getUniformBlockIndex");

  webgl2_rendering_context_v8_internal::GetUniformBlockIndexMethod(info);
}

void V8WebGL2RenderingContext::GetActiveUniformBlockParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveUniformBlockParameter");

  webgl2_rendering_context_v8_internal::GetActiveUniformBlockParameterMethod(info);
}

void V8WebGL2RenderingContext::GetActiveUniformBlockNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveUniformBlockName");

  webgl2_rendering_context_v8_internal::GetActiveUniformBlockNameMethod(info);
}

void V8WebGL2RenderingContext::UniformBlockBindingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformBlockBinding");

  webgl2_rendering_context_v8_internal::UniformBlockBindingMethod(info);
}

void V8WebGL2RenderingContext::CreateVertexArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createVertexArray");

  webgl2_rendering_context_v8_internal::CreateVertexArrayMethod(info);
}

void V8WebGL2RenderingContext::DeleteVertexArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteVertexArray");

  webgl2_rendering_context_v8_internal::DeleteVertexArrayMethod(info);
}

void V8WebGL2RenderingContext::IsVertexArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isVertexArray");

  webgl2_rendering_context_v8_internal::IsVertexArrayMethod(info);
}

void V8WebGL2RenderingContext::BindVertexArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindVertexArray");

  webgl2_rendering_context_v8_internal::BindVertexArrayMethod(info);
}

void V8WebGL2RenderingContext::ActiveTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_activeTexture");

  webgl2_rendering_context_v8_internal::ActiveTextureMethod(info);
}

void V8WebGL2RenderingContext::AttachShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_attachShader");

  webgl2_rendering_context_v8_internal::AttachShaderMethod(info);
}

void V8WebGL2RenderingContext::BindAttribLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindAttribLocation");

  webgl2_rendering_context_v8_internal::BindAttribLocationMethod(info);
}

void V8WebGL2RenderingContext::BindBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindBuffer");

  webgl2_rendering_context_v8_internal::BindBufferMethod(info);
}

void V8WebGL2RenderingContext::BindFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindFramebuffer");

  webgl2_rendering_context_v8_internal::BindFramebufferMethod(info);
}

void V8WebGL2RenderingContext::BindRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindRenderbuffer");

  webgl2_rendering_context_v8_internal::BindRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::BindTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bindTexture");

  webgl2_rendering_context_v8_internal::BindTextureMethod(info);
}

void V8WebGL2RenderingContext::BlendColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendColor");

  webgl2_rendering_context_v8_internal::BlendColorMethod(info);
}

void V8WebGL2RenderingContext::BlendEquationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendEquation");

  webgl2_rendering_context_v8_internal::BlendEquationMethod(info);
}

void V8WebGL2RenderingContext::BlendEquationSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendEquationSeparate");

  webgl2_rendering_context_v8_internal::BlendEquationSeparateMethod(info);
}

void V8WebGL2RenderingContext::BlendFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendFunc");

  webgl2_rendering_context_v8_internal::BlendFuncMethod(info);
}

void V8WebGL2RenderingContext::BlendFuncSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_blendFuncSeparate");

  webgl2_rendering_context_v8_internal::BlendFuncSeparateMethod(info);
}

void V8WebGL2RenderingContext::BufferDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bufferData");

  webgl2_rendering_context_v8_internal::BufferDataMethod(info);
}

void V8WebGL2RenderingContext::BufferSubDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_bufferSubData");

  webgl2_rendering_context_v8_internal::BufferSubDataMethod(info);
}

void V8WebGL2RenderingContext::CheckFramebufferStatusMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_checkFramebufferStatus");

  webgl2_rendering_context_v8_internal::CheckFramebufferStatusMethod(info);
}

void V8WebGL2RenderingContext::ClearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clear");

  webgl2_rendering_context_v8_internal::ClearMethod(info);
}

void V8WebGL2RenderingContext::ClearColorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearColor");

  webgl2_rendering_context_v8_internal::ClearColorMethod(info);
}

void V8WebGL2RenderingContext::ClearDepthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearDepth");

  webgl2_rendering_context_v8_internal::ClearDepthMethod(info);
}

void V8WebGL2RenderingContext::ClearStencilMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_clearStencil");

  webgl2_rendering_context_v8_internal::ClearStencilMethod(info);
}

void V8WebGL2RenderingContext::ColorMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_colorMask");

  webgl2_rendering_context_v8_internal::ColorMaskMethod(info);
}

void V8WebGL2RenderingContext::CompileShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compileShader");

  webgl2_rendering_context_v8_internal::CompileShaderMethod(info);
}

void V8WebGL2RenderingContext::CompressedTexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compressedTexImage2D");

  webgl2_rendering_context_v8_internal::CompressedTexImage2DMethod(info);
}

void V8WebGL2RenderingContext::CompressedTexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_compressedTexSubImage2D");

  webgl2_rendering_context_v8_internal::CompressedTexSubImage2DMethod(info);
}

void V8WebGL2RenderingContext::CopyTexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_copyTexImage2D");

  webgl2_rendering_context_v8_internal::CopyTexImage2DMethod(info);
}

void V8WebGL2RenderingContext::CopyTexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_copyTexSubImage2D");

  webgl2_rendering_context_v8_internal::CopyTexSubImage2DMethod(info);
}

void V8WebGL2RenderingContext::CreateBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createBuffer");

  webgl2_rendering_context_v8_internal::CreateBufferMethod(info);
}

void V8WebGL2RenderingContext::CreateFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createFramebuffer");

  webgl2_rendering_context_v8_internal::CreateFramebufferMethod(info);
}

void V8WebGL2RenderingContext::CreateProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createProgram");

  webgl2_rendering_context_v8_internal::CreateProgramMethod(info);
}

void V8WebGL2RenderingContext::CreateRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createRenderbuffer");

  webgl2_rendering_context_v8_internal::CreateRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::CreateShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createShader");

  webgl2_rendering_context_v8_internal::CreateShaderMethod(info);
}

void V8WebGL2RenderingContext::CreateTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_createTexture");

  webgl2_rendering_context_v8_internal::CreateTextureMethod(info);
}

void V8WebGL2RenderingContext::CullFaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_cullFace");

  webgl2_rendering_context_v8_internal::CullFaceMethod(info);
}

void V8WebGL2RenderingContext::DeleteBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteBuffer");

  webgl2_rendering_context_v8_internal::DeleteBufferMethod(info);
}

void V8WebGL2RenderingContext::DeleteFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteFramebuffer");

  webgl2_rendering_context_v8_internal::DeleteFramebufferMethod(info);
}

void V8WebGL2RenderingContext::DeleteProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteProgram");

  webgl2_rendering_context_v8_internal::DeleteProgramMethod(info);
}

void V8WebGL2RenderingContext::DeleteRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteRenderbuffer");

  webgl2_rendering_context_v8_internal::DeleteRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::DeleteShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteShader");

  webgl2_rendering_context_v8_internal::DeleteShaderMethod(info);
}

void V8WebGL2RenderingContext::DeleteTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_deleteTexture");

  webgl2_rendering_context_v8_internal::DeleteTextureMethod(info);
}

void V8WebGL2RenderingContext::DepthFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_depthFunc");

  webgl2_rendering_context_v8_internal::DepthFuncMethod(info);
}

void V8WebGL2RenderingContext::DepthMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_depthMask");

  webgl2_rendering_context_v8_internal::DepthMaskMethod(info);
}

void V8WebGL2RenderingContext::DepthRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_depthRange");

  webgl2_rendering_context_v8_internal::DepthRangeMethod(info);
}

void V8WebGL2RenderingContext::DetachShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_detachShader");

  webgl2_rendering_context_v8_internal::DetachShaderMethod(info);
}

void V8WebGL2RenderingContext::DisableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_disable");

  webgl2_rendering_context_v8_internal::DisableMethod(info);
}

void V8WebGL2RenderingContext::DisableVertexAttribArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_disableVertexAttribArray");

  webgl2_rendering_context_v8_internal::DisableVertexAttribArrayMethod(info);
}

void V8WebGL2RenderingContext::DrawArraysMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawArrays");

  webgl2_rendering_context_v8_internal::DrawArraysMethod(info);
}

void V8WebGL2RenderingContext::DrawElementsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_drawElements");

  webgl2_rendering_context_v8_internal::DrawElementsMethod(info);
}

void V8WebGL2RenderingContext::EnableMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_enable");

  webgl2_rendering_context_v8_internal::EnableMethod(info);
}

void V8WebGL2RenderingContext::EnableVertexAttribArrayMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_enableVertexAttribArray");

  webgl2_rendering_context_v8_internal::EnableVertexAttribArrayMethod(info);
}

void V8WebGL2RenderingContext::FinishMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_finish");

  webgl2_rendering_context_v8_internal::FinishMethod(info);
}

void V8WebGL2RenderingContext::FlushMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_flush");

  webgl2_rendering_context_v8_internal::FlushMethod(info);
}

void V8WebGL2RenderingContext::FramebufferRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_framebufferRenderbuffer");

  webgl2_rendering_context_v8_internal::FramebufferRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::FramebufferTexture2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_framebufferTexture2D");

  webgl2_rendering_context_v8_internal::FramebufferTexture2DMethod(info);
}

void V8WebGL2RenderingContext::FrontFaceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_frontFace");

  webgl2_rendering_context_v8_internal::FrontFaceMethod(info);
}

void V8WebGL2RenderingContext::GenerateMipmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_generateMipmap");

  webgl2_rendering_context_v8_internal::GenerateMipmapMethod(info);
}

void V8WebGL2RenderingContext::GetActiveAttribMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveAttrib");

  webgl2_rendering_context_v8_internal::GetActiveAttribMethod(info);
}

void V8WebGL2RenderingContext::GetActiveUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getActiveUniform");

  webgl2_rendering_context_v8_internal::GetActiveUniformMethod(info);
}

void V8WebGL2RenderingContext::GetAttachedShadersMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getAttachedShaders");

  webgl2_rendering_context_v8_internal::GetAttachedShadersMethod(info);
}

void V8WebGL2RenderingContext::GetAttribLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getAttribLocation");

  webgl2_rendering_context_v8_internal::GetAttribLocationMethod(info);
}

void V8WebGL2RenderingContext::GetBufferParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getBufferParameter");

  webgl2_rendering_context_v8_internal::GetBufferParameterMethod(info);
}

void V8WebGL2RenderingContext::GetContextAttributesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getContextAttributes");

  webgl2_rendering_context_v8_internal::GetContextAttributesMethod(info);
}

void V8WebGL2RenderingContext::GetErrorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getError");

  webgl2_rendering_context_v8_internal::GetErrorMethod(info);
}

void V8WebGL2RenderingContext::GetExtensionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getExtension");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8WebGL2RenderingContext_GetExtension_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8WebGL2RenderingContext_GetExtension_Method);
  webgl2_rendering_context_v8_internal::GetExtensionMethod(info);
}

void V8WebGL2RenderingContext::GetFramebufferAttachmentParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getFramebufferAttachmentParameter");

  webgl2_rendering_context_v8_internal::GetFramebufferAttachmentParameterMethod(info);
}

void V8WebGL2RenderingContext::GetParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getParameter");

  webgl2_rendering_context_v8_internal::GetParameterMethod(info);
}

void V8WebGL2RenderingContext::GetProgramParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getProgramParameter");

  webgl2_rendering_context_v8_internal::GetProgramParameterMethod(info);
}

void V8WebGL2RenderingContext::GetProgramInfoLogMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getProgramInfoLog");

  webgl2_rendering_context_v8_internal::GetProgramInfoLogMethod(info);
}

void V8WebGL2RenderingContext::GetRenderbufferParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getRenderbufferParameter");

  webgl2_rendering_context_v8_internal::GetRenderbufferParameterMethod(info);
}

void V8WebGL2RenderingContext::GetShaderParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getShaderParameter");

  webgl2_rendering_context_v8_internal::GetShaderParameterMethod(info);
}

void V8WebGL2RenderingContext::GetShaderInfoLogMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getShaderInfoLog");

  webgl2_rendering_context_v8_internal::GetShaderInfoLogMethod(info);
}

void V8WebGL2RenderingContext::GetShaderPrecisionFormatMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getShaderPrecisionFormat");

  webgl2_rendering_context_v8_internal::GetShaderPrecisionFormatMethod(info);
}

void V8WebGL2RenderingContext::GetShaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getShaderSource");

  webgl2_rendering_context_v8_internal::GetShaderSourceMethod(info);
}

void V8WebGL2RenderingContext::GetSupportedExtensionsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getSupportedExtensions");

  ExecutionContext* execution_context_for_measurement = CurrentExecutionContext(info.GetIsolate());
  UseCounter::Count(execution_context_for_measurement, WebFeature::kV8WebGL2RenderingContext_GetSupportedExtensions_Method);
  Dactyloscoper::Record(execution_context_for_measurement, WebFeature::kV8WebGL2RenderingContext_GetSupportedExtensions_Method);
  webgl2_rendering_context_v8_internal::GetSupportedExtensionsMethod(info);
}

void V8WebGL2RenderingContext::GetTexParameterMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getTexParameter");

  webgl2_rendering_context_v8_internal::GetTexParameterMethod(info);
}

void V8WebGL2RenderingContext::GetUniformMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getUniform");

  webgl2_rendering_context_v8_internal::GetUniformMethod(info);
}

void V8WebGL2RenderingContext::GetUniformLocationMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getUniformLocation");

  webgl2_rendering_context_v8_internal::GetUniformLocationMethod(info);
}

void V8WebGL2RenderingContext::GetVertexAttribMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getVertexAttrib");

  webgl2_rendering_context_v8_internal::GetVertexAttribMethod(info);
}

void V8WebGL2RenderingContext::GetVertexAttribOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_getVertexAttribOffset");

  webgl2_rendering_context_v8_internal::GetVertexAttribOffsetMethod(info);
}

void V8WebGL2RenderingContext::HintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_hint");

  webgl2_rendering_context_v8_internal::HintMethod(info);
}

void V8WebGL2RenderingContext::IsBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isBuffer");

  webgl2_rendering_context_v8_internal::IsBufferMethod(info);
}

void V8WebGL2RenderingContext::IsContextLostMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isContextLost");

  webgl2_rendering_context_v8_internal::IsContextLostMethod(info);
}

void V8WebGL2RenderingContext::IsEnabledMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isEnabled");

  webgl2_rendering_context_v8_internal::IsEnabledMethod(info);
}

void V8WebGL2RenderingContext::IsFramebufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isFramebuffer");

  webgl2_rendering_context_v8_internal::IsFramebufferMethod(info);
}

void V8WebGL2RenderingContext::IsProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isProgram");

  webgl2_rendering_context_v8_internal::IsProgramMethod(info);
}

void V8WebGL2RenderingContext::IsRenderbufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isRenderbuffer");

  webgl2_rendering_context_v8_internal::IsRenderbufferMethod(info);
}

void V8WebGL2RenderingContext::IsShaderMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isShader");

  webgl2_rendering_context_v8_internal::IsShaderMethod(info);
}

void V8WebGL2RenderingContext::IsTextureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_isTexture");

  webgl2_rendering_context_v8_internal::IsTextureMethod(info);
}

void V8WebGL2RenderingContext::LineWidthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_lineWidth");

  webgl2_rendering_context_v8_internal::LineWidthMethod(info);
}

void V8WebGL2RenderingContext::LinkProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_linkProgram");

  webgl2_rendering_context_v8_internal::LinkProgramMethod(info);
}

void V8WebGL2RenderingContext::PixelStoreiMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_pixelStorei");

  webgl2_rendering_context_v8_internal::PixelStoreiMethod(info);
}

void V8WebGL2RenderingContext::PolygonOffsetMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_polygonOffset");

  webgl2_rendering_context_v8_internal::PolygonOffsetMethod(info);
}

void V8WebGL2RenderingContext::ReadPixelsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_readPixels");

  webgl2_rendering_context_v8_internal::ReadPixelsMethod(info);
}

void V8WebGL2RenderingContext::RenderbufferStorageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_renderbufferStorage");

  webgl2_rendering_context_v8_internal::RenderbufferStorageMethod(info);
}

void V8WebGL2RenderingContext::SampleCoverageMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_sampleCoverage");

  webgl2_rendering_context_v8_internal::SampleCoverageMethod(info);
}

void V8WebGL2RenderingContext::ScissorMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_scissor");

  webgl2_rendering_context_v8_internal::ScissorMethod(info);
}

void V8WebGL2RenderingContext::ShaderSourceMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_shaderSource");

  webgl2_rendering_context_v8_internal::ShaderSourceMethod(info);
}

void V8WebGL2RenderingContext::StencilFuncMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilFunc");

  webgl2_rendering_context_v8_internal::StencilFuncMethod(info);
}

void V8WebGL2RenderingContext::StencilFuncSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilFuncSeparate");

  webgl2_rendering_context_v8_internal::StencilFuncSeparateMethod(info);
}

void V8WebGL2RenderingContext::StencilMaskMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilMask");

  webgl2_rendering_context_v8_internal::StencilMaskMethod(info);
}

void V8WebGL2RenderingContext::StencilMaskSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilMaskSeparate");

  webgl2_rendering_context_v8_internal::StencilMaskSeparateMethod(info);
}

void V8WebGL2RenderingContext::StencilOpMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilOp");

  webgl2_rendering_context_v8_internal::StencilOpMethod(info);
}

void V8WebGL2RenderingContext::StencilOpSeparateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_stencilOpSeparate");

  webgl2_rendering_context_v8_internal::StencilOpSeparateMethod(info);
}

void V8WebGL2RenderingContext::TexParameterfMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texParameterf");

  webgl2_rendering_context_v8_internal::TexParameterfMethod(info);
}

void V8WebGL2RenderingContext::TexParameteriMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texParameteri");

  webgl2_rendering_context_v8_internal::TexParameteriMethod(info);
}

void V8WebGL2RenderingContext::TexImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texImage2D");

  webgl2_rendering_context_v8_internal::TexImage2DMethod(info);
}

void V8WebGL2RenderingContext::TexSubImage2DMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_texSubImage2D");

  webgl2_rendering_context_v8_internal::TexSubImage2DMethod(info);
}

void V8WebGL2RenderingContext::Uniform1FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1f");

  webgl2_rendering_context_v8_internal::Uniform1FMethod(info);
}

void V8WebGL2RenderingContext::Uniform1FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1fv");

  webgl2_rendering_context_v8_internal::Uniform1FvMethod(info);
}

void V8WebGL2RenderingContext::Uniform1IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1i");

  webgl2_rendering_context_v8_internal::Uniform1IMethod(info);
}

void V8WebGL2RenderingContext::Uniform1IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform1iv");

  webgl2_rendering_context_v8_internal::Uniform1IvMethod(info);
}

void V8WebGL2RenderingContext::Uniform2FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2f");

  webgl2_rendering_context_v8_internal::Uniform2FMethod(info);
}

void V8WebGL2RenderingContext::Uniform2FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2fv");

  webgl2_rendering_context_v8_internal::Uniform2FvMethod(info);
}

void V8WebGL2RenderingContext::Uniform2IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2i");

  webgl2_rendering_context_v8_internal::Uniform2IMethod(info);
}

void V8WebGL2RenderingContext::Uniform2IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform2iv");

  webgl2_rendering_context_v8_internal::Uniform2IvMethod(info);
}

void V8WebGL2RenderingContext::Uniform3FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3f");

  webgl2_rendering_context_v8_internal::Uniform3FMethod(info);
}

void V8WebGL2RenderingContext::Uniform3FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3fv");

  webgl2_rendering_context_v8_internal::Uniform3FvMethod(info);
}

void V8WebGL2RenderingContext::Uniform3IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3i");

  webgl2_rendering_context_v8_internal::Uniform3IMethod(info);
}

void V8WebGL2RenderingContext::Uniform3IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform3iv");

  webgl2_rendering_context_v8_internal::Uniform3IvMethod(info);
}

void V8WebGL2RenderingContext::Uniform4FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4f");

  webgl2_rendering_context_v8_internal::Uniform4FMethod(info);
}

void V8WebGL2RenderingContext::Uniform4FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4fv");

  webgl2_rendering_context_v8_internal::Uniform4FvMethod(info);
}

void V8WebGL2RenderingContext::Uniform4IMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4i");

  webgl2_rendering_context_v8_internal::Uniform4IMethod(info);
}

void V8WebGL2RenderingContext::Uniform4IvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniform4iv");

  webgl2_rendering_context_v8_internal::Uniform4IvMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix2FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix2fv");

  webgl2_rendering_context_v8_internal::UniformMatrix2FvMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix3FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix3fv");

  webgl2_rendering_context_v8_internal::UniformMatrix3FvMethod(info);
}

void V8WebGL2RenderingContext::UniformMatrix4FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_uniformMatrix4fv");

  webgl2_rendering_context_v8_internal::UniformMatrix4FvMethod(info);
}

void V8WebGL2RenderingContext::UseProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_useProgram");

  webgl2_rendering_context_v8_internal::UseProgramMethod(info);
}

void V8WebGL2RenderingContext::ValidateProgramMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_validateProgram");

  webgl2_rendering_context_v8_internal::ValidateProgramMethod(info);
}

void V8WebGL2RenderingContext::VertexAttrib1FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib1f");

  webgl2_rendering_context_v8_internal::VertexAttrib1FMethod(info);
}

void V8WebGL2RenderingContext::VertexAttrib1FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib1fv");

  webgl2_rendering_context_v8_internal::VertexAttrib1FvMethod(info);
}

void V8WebGL2RenderingContext::VertexAttrib2FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib2f");

  webgl2_rendering_context_v8_internal::VertexAttrib2FMethod(info);
}

void V8WebGL2RenderingContext::VertexAttrib2FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib2fv");

  webgl2_rendering_context_v8_internal::VertexAttrib2FvMethod(info);
}

void V8WebGL2RenderingContext::VertexAttrib3FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib3f");

  webgl2_rendering_context_v8_internal::VertexAttrib3FMethod(info);
}

void V8WebGL2RenderingContext::VertexAttrib3FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib3fv");

  webgl2_rendering_context_v8_internal::VertexAttrib3FvMethod(info);
}

void V8WebGL2RenderingContext::VertexAttrib4FMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib4f");

  webgl2_rendering_context_v8_internal::VertexAttrib4FMethod(info);
}

void V8WebGL2RenderingContext::VertexAttrib4FvMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttrib4fv");

  webgl2_rendering_context_v8_internal::VertexAttrib4FvMethod(info);
}

void V8WebGL2RenderingContext::VertexAttribPointerMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_vertexAttribPointer");

  webgl2_rendering_context_v8_internal::VertexAttribPointerMethod(info);
}

void V8WebGL2RenderingContext::ViewportMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_viewport");

  webgl2_rendering_context_v8_internal::ViewportMethod(info);
}

void V8WebGL2RenderingContext::CommitMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_commit");

  webgl2_rendering_context_v8_internal::CommitMethod(info);
}

void V8WebGL2RenderingContext::MakeXRCompatibleMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_WebGL2RenderingContext_makeXRCompatible");

  webgl2_rendering_context_v8_internal::MakeXRCompatibleMethod(info);
}

static constexpr V8DOMConfiguration::AccessorConfiguration kV8WebGL2RenderingContextAccessors[] = {
    { "canvas", V8WebGL2RenderingContext::CanvasAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "drawingBufferWidth", V8WebGL2RenderingContext::DrawingBufferWidthAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    { "drawingBufferHeight", V8WebGL2RenderingContext::DrawingBufferHeightAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
};

static constexpr V8DOMConfiguration::MethodConfiguration kV8WebGL2RenderingContextMethods[] = {
    {"copyBufferSubData", V8WebGL2RenderingContext::CopyBufferSubDataMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getBufferSubData", V8WebGL2RenderingContext::GetBufferSubDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blitFramebuffer", V8WebGL2RenderingContext::BlitFramebufferMethodCallback, 10, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferTextureLayer", V8WebGL2RenderingContext::FramebufferTextureLayerMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getInternalformatParameter", V8WebGL2RenderingContext::GetInternalformatParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"invalidateFramebuffer", V8WebGL2RenderingContext::InvalidateFramebufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"invalidateSubFramebuffer", V8WebGL2RenderingContext::InvalidateSubFramebufferMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readBuffer", V8WebGL2RenderingContext::ReadBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"renderbufferStorageMultisample", V8WebGL2RenderingContext::RenderbufferStorageMultisampleMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texStorage2D", V8WebGL2RenderingContext::TexStorage2DMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texStorage3D", V8WebGL2RenderingContext::TexStorage3DMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texImage3D", V8WebGL2RenderingContext::TexImage3DMethodCallback, 10, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texSubImage3D", V8WebGL2RenderingContext::TexSubImage3DMethodCallback, 11, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexSubImage3D", V8WebGL2RenderingContext::CopyTexSubImage3DMethodCallback, 9, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexImage3D", V8WebGL2RenderingContext::CompressedTexImage3DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexSubImage3D", V8WebGL2RenderingContext::CompressedTexSubImage3DMethodCallback, 10, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFragDataLocation", V8WebGL2RenderingContext::GetFragDataLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1ui", V8WebGL2RenderingContext::Uniform1UiMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2ui", V8WebGL2RenderingContext::Uniform2UiMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3ui", V8WebGL2RenderingContext::Uniform3UiMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4ui", V8WebGL2RenderingContext::Uniform4UiMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1uiv", V8WebGL2RenderingContext::Uniform1UivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2uiv", V8WebGL2RenderingContext::Uniform2UivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3uiv", V8WebGL2RenderingContext::Uniform3UivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4uiv", V8WebGL2RenderingContext::Uniform4UivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix2x3fv", V8WebGL2RenderingContext::UniformMatrix2X3FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix3x2fv", V8WebGL2RenderingContext::UniformMatrix3X2FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix2x4fv", V8WebGL2RenderingContext::UniformMatrix2X4FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix4x2fv", V8WebGL2RenderingContext::UniformMatrix4X2FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix3x4fv", V8WebGL2RenderingContext::UniformMatrix3X4FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix4x3fv", V8WebGL2RenderingContext::UniformMatrix4X3FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribI4i", V8WebGL2RenderingContext::VertexAttribI4IMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribI4iv", V8WebGL2RenderingContext::VertexAttribI4IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribI4ui", V8WebGL2RenderingContext::VertexAttribI4UiMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribI4uiv", V8WebGL2RenderingContext::VertexAttribI4UivMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribIPointer", V8WebGL2RenderingContext::VertexAttribIPointerMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribDivisor", V8WebGL2RenderingContext::VertexAttribDivisorMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawArraysInstanced", V8WebGL2RenderingContext::DrawArraysInstancedMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawElementsInstanced", V8WebGL2RenderingContext::DrawElementsInstancedMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawRangeElements", V8WebGL2RenderingContext::DrawRangeElementsMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawBuffers", V8WebGL2RenderingContext::DrawBuffersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearBufferiv", V8WebGL2RenderingContext::ClearBufferivMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearBufferuiv", V8WebGL2RenderingContext::ClearBufferuivMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearBufferfv", V8WebGL2RenderingContext::ClearBufferfvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearBufferfi", V8WebGL2RenderingContext::ClearBufferfiMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createQuery", V8WebGL2RenderingContext::CreateQueryMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteQuery", V8WebGL2RenderingContext::DeleteQueryMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isQuery", V8WebGL2RenderingContext::IsQueryMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginQuery", V8WebGL2RenderingContext::BeginQueryMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endQuery", V8WebGL2RenderingContext::EndQueryMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getQuery", V8WebGL2RenderingContext::GetQueryMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getQueryParameter", V8WebGL2RenderingContext::GetQueryParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createSampler", V8WebGL2RenderingContext::CreateSamplerMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteSampler", V8WebGL2RenderingContext::DeleteSamplerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSampler", V8WebGL2RenderingContext::IsSamplerMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindSampler", V8WebGL2RenderingContext::BindSamplerMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"samplerParameteri", V8WebGL2RenderingContext::SamplerParameteriMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"samplerParameterf", V8WebGL2RenderingContext::SamplerParameterfMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSamplerParameter", V8WebGL2RenderingContext::GetSamplerParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"fenceSync", V8WebGL2RenderingContext::FenceSyncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isSync", V8WebGL2RenderingContext::IsSyncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteSync", V8WebGL2RenderingContext::DeleteSyncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clientWaitSync", V8WebGL2RenderingContext::ClientWaitSyncMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"waitSync", V8WebGL2RenderingContext::WaitSyncMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSyncParameter", V8WebGL2RenderingContext::GetSyncParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTransformFeedback", V8WebGL2RenderingContext::CreateTransformFeedbackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteTransformFeedback", V8WebGL2RenderingContext::DeleteTransformFeedbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isTransformFeedback", V8WebGL2RenderingContext::IsTransformFeedbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindTransformFeedback", V8WebGL2RenderingContext::BindTransformFeedbackMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"beginTransformFeedback", V8WebGL2RenderingContext::BeginTransformFeedbackMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"endTransformFeedback", V8WebGL2RenderingContext::EndTransformFeedbackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"transformFeedbackVaryings", V8WebGL2RenderingContext::TransformFeedbackVaryingsMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTransformFeedbackVarying", V8WebGL2RenderingContext::GetTransformFeedbackVaryingMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pauseTransformFeedback", V8WebGL2RenderingContext::PauseTransformFeedbackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"resumeTransformFeedback", V8WebGL2RenderingContext::ResumeTransformFeedbackMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindBufferBase", V8WebGL2RenderingContext::BindBufferBaseMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindBufferRange", V8WebGL2RenderingContext::BindBufferRangeMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getIndexedParameter", V8WebGL2RenderingContext::GetIndexedParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniformIndices", V8WebGL2RenderingContext::GetUniformIndicesMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniforms", V8WebGL2RenderingContext::GetActiveUniformsMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniformBlockIndex", V8WebGL2RenderingContext::GetUniformBlockIndexMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniformBlockParameter", V8WebGL2RenderingContext::GetActiveUniformBlockParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniformBlockName", V8WebGL2RenderingContext::GetActiveUniformBlockNameMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformBlockBinding", V8WebGL2RenderingContext::UniformBlockBindingMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createVertexArray", V8WebGL2RenderingContext::CreateVertexArrayMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteVertexArray", V8WebGL2RenderingContext::DeleteVertexArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isVertexArray", V8WebGL2RenderingContext::IsVertexArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindVertexArray", V8WebGL2RenderingContext::BindVertexArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"activeTexture", V8WebGL2RenderingContext::ActiveTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"attachShader", V8WebGL2RenderingContext::AttachShaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindAttribLocation", V8WebGL2RenderingContext::BindAttribLocationMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindBuffer", V8WebGL2RenderingContext::BindBufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindFramebuffer", V8WebGL2RenderingContext::BindFramebufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindRenderbuffer", V8WebGL2RenderingContext::BindRenderbufferMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bindTexture", V8WebGL2RenderingContext::BindTextureMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendColor", V8WebGL2RenderingContext::BlendColorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendEquation", V8WebGL2RenderingContext::BlendEquationMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendEquationSeparate", V8WebGL2RenderingContext::BlendEquationSeparateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendFunc", V8WebGL2RenderingContext::BlendFuncMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"blendFuncSeparate", V8WebGL2RenderingContext::BlendFuncSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bufferData", V8WebGL2RenderingContext::BufferDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"bufferSubData", V8WebGL2RenderingContext::BufferSubDataMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"checkFramebufferStatus", V8WebGL2RenderingContext::CheckFramebufferStatusMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clear", V8WebGL2RenderingContext::ClearMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearColor", V8WebGL2RenderingContext::ClearColorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearDepth", V8WebGL2RenderingContext::ClearDepthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"clearStencil", V8WebGL2RenderingContext::ClearStencilMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"colorMask", V8WebGL2RenderingContext::ColorMaskMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compileShader", V8WebGL2RenderingContext::CompileShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexImage2D", V8WebGL2RenderingContext::CompressedTexImage2DMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"compressedTexSubImage2D", V8WebGL2RenderingContext::CompressedTexSubImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexImage2D", V8WebGL2RenderingContext::CopyTexImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"copyTexSubImage2D", V8WebGL2RenderingContext::CopyTexSubImage2DMethodCallback, 8, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createBuffer", V8WebGL2RenderingContext::CreateBufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createFramebuffer", V8WebGL2RenderingContext::CreateFramebufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createProgram", V8WebGL2RenderingContext::CreateProgramMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createRenderbuffer", V8WebGL2RenderingContext::CreateRenderbufferMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createShader", V8WebGL2RenderingContext::CreateShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"createTexture", V8WebGL2RenderingContext::CreateTextureMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"cullFace", V8WebGL2RenderingContext::CullFaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteBuffer", V8WebGL2RenderingContext::DeleteBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteFramebuffer", V8WebGL2RenderingContext::DeleteFramebufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteProgram", V8WebGL2RenderingContext::DeleteProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteRenderbuffer", V8WebGL2RenderingContext::DeleteRenderbufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteShader", V8WebGL2RenderingContext::DeleteShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"deleteTexture", V8WebGL2RenderingContext::DeleteTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthFunc", V8WebGL2RenderingContext::DepthFuncMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthMask", V8WebGL2RenderingContext::DepthMaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"depthRange", V8WebGL2RenderingContext::DepthRangeMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"detachShader", V8WebGL2RenderingContext::DetachShaderMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disable", V8WebGL2RenderingContext::DisableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"disableVertexAttribArray", V8WebGL2RenderingContext::DisableVertexAttribArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawArrays", V8WebGL2RenderingContext::DrawArraysMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"drawElements", V8WebGL2RenderingContext::DrawElementsMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enable", V8WebGL2RenderingContext::EnableMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"enableVertexAttribArray", V8WebGL2RenderingContext::EnableVertexAttribArrayMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"finish", V8WebGL2RenderingContext::FinishMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"flush", V8WebGL2RenderingContext::FlushMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferRenderbuffer", V8WebGL2RenderingContext::FramebufferRenderbufferMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"framebufferTexture2D", V8WebGL2RenderingContext::FramebufferTexture2DMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"frontFace", V8WebGL2RenderingContext::FrontFaceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"generateMipmap", V8WebGL2RenderingContext::GenerateMipmapMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveAttrib", V8WebGL2RenderingContext::GetActiveAttribMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getActiveUniform", V8WebGL2RenderingContext::GetActiveUniformMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttachedShaders", V8WebGL2RenderingContext::GetAttachedShadersMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getAttribLocation", V8WebGL2RenderingContext::GetAttribLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getBufferParameter", V8WebGL2RenderingContext::GetBufferParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getContextAttributes", V8WebGL2RenderingContext::GetContextAttributesMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getError", V8WebGL2RenderingContext::GetErrorMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getExtension", V8WebGL2RenderingContext::GetExtensionMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getFramebufferAttachmentParameter", V8WebGL2RenderingContext::GetFramebufferAttachmentParameterMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getParameter", V8WebGL2RenderingContext::GetParameterMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgramParameter", V8WebGL2RenderingContext::GetProgramParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getProgramInfoLog", V8WebGL2RenderingContext::GetProgramInfoLogMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getRenderbufferParameter", V8WebGL2RenderingContext::GetRenderbufferParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderParameter", V8WebGL2RenderingContext::GetShaderParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderInfoLog", V8WebGL2RenderingContext::GetShaderInfoLogMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderPrecisionFormat", V8WebGL2RenderingContext::GetShaderPrecisionFormatMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getShaderSource", V8WebGL2RenderingContext::GetShaderSourceMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getSupportedExtensions", V8WebGL2RenderingContext::GetSupportedExtensionsMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getTexParameter", V8WebGL2RenderingContext::GetTexParameterMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniform", V8WebGL2RenderingContext::GetUniformMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getUniformLocation", V8WebGL2RenderingContext::GetUniformLocationMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVertexAttrib", V8WebGL2RenderingContext::GetVertexAttribMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"getVertexAttribOffset", V8WebGL2RenderingContext::GetVertexAttribOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"hint", V8WebGL2RenderingContext::HintMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isBuffer", V8WebGL2RenderingContext::IsBufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isContextLost", V8WebGL2RenderingContext::IsContextLostMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isEnabled", V8WebGL2RenderingContext::IsEnabledMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isFramebuffer", V8WebGL2RenderingContext::IsFramebufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isProgram", V8WebGL2RenderingContext::IsProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isRenderbuffer", V8WebGL2RenderingContext::IsRenderbufferMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isShader", V8WebGL2RenderingContext::IsShaderMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"isTexture", V8WebGL2RenderingContext::IsTextureMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"lineWidth", V8WebGL2RenderingContext::LineWidthMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"linkProgram", V8WebGL2RenderingContext::LinkProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"pixelStorei", V8WebGL2RenderingContext::PixelStoreiMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"polygonOffset", V8WebGL2RenderingContext::PolygonOffsetMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"readPixels", V8WebGL2RenderingContext::ReadPixelsMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"renderbufferStorage", V8WebGL2RenderingContext::RenderbufferStorageMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"sampleCoverage", V8WebGL2RenderingContext::SampleCoverageMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"scissor", V8WebGL2RenderingContext::ScissorMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"shaderSource", V8WebGL2RenderingContext::ShaderSourceMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilFunc", V8WebGL2RenderingContext::StencilFuncMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilFuncSeparate", V8WebGL2RenderingContext::StencilFuncSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilMask", V8WebGL2RenderingContext::StencilMaskMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilMaskSeparate", V8WebGL2RenderingContext::StencilMaskSeparateMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilOp", V8WebGL2RenderingContext::StencilOpMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"stencilOpSeparate", V8WebGL2RenderingContext::StencilOpSeparateMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texParameterf", V8WebGL2RenderingContext::TexParameterfMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texParameteri", V8WebGL2RenderingContext::TexParameteriMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texImage2D", V8WebGL2RenderingContext::TexImage2DMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"texSubImage2D", V8WebGL2RenderingContext::TexSubImage2DMethodCallback, 7, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1f", V8WebGL2RenderingContext::Uniform1FMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1fv", V8WebGL2RenderingContext::Uniform1FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1i", V8WebGL2RenderingContext::Uniform1IMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform1iv", V8WebGL2RenderingContext::Uniform1IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2f", V8WebGL2RenderingContext::Uniform2FMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2fv", V8WebGL2RenderingContext::Uniform2FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2i", V8WebGL2RenderingContext::Uniform2IMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform2iv", V8WebGL2RenderingContext::Uniform2IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3f", V8WebGL2RenderingContext::Uniform3FMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3fv", V8WebGL2RenderingContext::Uniform3FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3i", V8WebGL2RenderingContext::Uniform3IMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform3iv", V8WebGL2RenderingContext::Uniform3IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4f", V8WebGL2RenderingContext::Uniform4FMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4fv", V8WebGL2RenderingContext::Uniform4FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4i", V8WebGL2RenderingContext::Uniform4IMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniform4iv", V8WebGL2RenderingContext::Uniform4IvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix2fv", V8WebGL2RenderingContext::UniformMatrix2FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix3fv", V8WebGL2RenderingContext::UniformMatrix3FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"uniformMatrix4fv", V8WebGL2RenderingContext::UniformMatrix4FvMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"useProgram", V8WebGL2RenderingContext::UseProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"validateProgram", V8WebGL2RenderingContext::ValidateProgramMethodCallback, 1, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib1f", V8WebGL2RenderingContext::VertexAttrib1FMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib1fv", V8WebGL2RenderingContext::VertexAttrib1FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib2f", V8WebGL2RenderingContext::VertexAttrib2FMethodCallback, 3, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib2fv", V8WebGL2RenderingContext::VertexAttrib2FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib3f", V8WebGL2RenderingContext::VertexAttrib3FMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib3fv", V8WebGL2RenderingContext::VertexAttrib3FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib4f", V8WebGL2RenderingContext::VertexAttrib4FMethodCallback, 5, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttrib4fv", V8WebGL2RenderingContext::VertexAttrib4FvMethodCallback, 2, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"vertexAttribPointer", V8WebGL2RenderingContext::VertexAttribPointerMethodCallback, 6, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
    {"viewport", V8WebGL2RenderingContext::ViewportMethodCallback, 4, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds},
};

static void InstallV8WebGL2RenderingContextTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8DOMConfiguration::InitializeDOMInterfaceTemplate(isolate, interface_template, V8WebGL2RenderingContext::GetWrapperTypeInfo()->interface_name, v8::Local<v8::FunctionTemplate>(), V8WebGL2RenderingContext::kInternalFieldCount);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.
  {
    static constexpr V8DOMConfiguration::ConstantConfiguration kConstants[] = {
        {"READ_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0C02)},
        {"UNPACK_ROW_LENGTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0CF2)},
        {"UNPACK_SKIP_ROWS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0CF3)},
        {"UNPACK_SKIP_PIXELS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0CF4)},
        {"PACK_ROW_LENGTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D02)},
        {"PACK_SKIP_ROWS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D03)},
        {"PACK_SKIP_PIXELS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x0D04)},
        {"COLOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1800)},
        {"DEPTH", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1801)},
        {"STENCIL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1802)},
        {"RED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x1903)},
        {"RGB8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8051)},
        {"RGBA8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8058)},
        {"RGB10_A2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8059)},
        {"TEXTURE_BINDING_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x806A)},
        {"UNPACK_SKIP_IMAGES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x806D)},
        {"UNPACK_IMAGE_HEIGHT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x806E)},
        {"TEXTURE_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x806F)},
        {"TEXTURE_WRAP_R", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8072)},
        {"MAX_3D_TEXTURE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8073)},
        {"UNSIGNED_INT_2_10_10_10_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8368)},
        {"MAX_ELEMENTS_VERTICES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80E8)},
        {"MAX_ELEMENTS_INDICES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x80E9)},
        {"TEXTURE_MIN_LOD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x813A)},
        {"TEXTURE_MAX_LOD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x813B)},
        {"TEXTURE_BASE_LEVEL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x813C)},
        {"TEXTURE_MAX_LEVEL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x813D)},
        {"MIN", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8007)},
        {"MAX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8008)},
        {"DEPTH_COMPONENT24", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x81A6)},
        {"MAX_TEXTURE_LOD_BIAS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84FD)},
        {"TEXTURE_COMPARE_MODE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x884C)},
        {"TEXTURE_COMPARE_FUNC", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x884D)},
        {"CURRENT_QUERY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8865)},
        {"QUERY_RESULT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8866)},
        {"QUERY_RESULT_AVAILABLE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8867)},
        {"STREAM_READ", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E1)},
        {"STREAM_COPY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E2)},
        {"STATIC_READ", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E5)},
        {"STATIC_COPY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E6)},
        {"DYNAMIC_READ", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88E9)},
        {"DYNAMIC_COPY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88EA)},
        {"MAX_DRAW_BUFFERS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8824)},
        {"DRAW_BUFFER0", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8825)},
        {"DRAW_BUFFER1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8826)},
        {"DRAW_BUFFER2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8827)},
        {"DRAW_BUFFER3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8828)},
        {"DRAW_BUFFER4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8829)},
        {"DRAW_BUFFER5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882A)},
        {"DRAW_BUFFER6", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882B)},
        {"DRAW_BUFFER7", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882C)},
        {"DRAW_BUFFER8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882D)},
        {"DRAW_BUFFER9", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882E)},
        {"DRAW_BUFFER10", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x882F)},
        {"DRAW_BUFFER11", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8830)},
        {"DRAW_BUFFER12", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8831)},
        {"DRAW_BUFFER13", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8832)},
        {"DRAW_BUFFER14", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8833)},
        {"DRAW_BUFFER15", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8834)},
        {"MAX_FRAGMENT_UNIFORM_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B49)},
        {"MAX_VERTEX_UNIFORM_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4A)},
        {"SAMPLER_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B5F)},
        {"SAMPLER_2D_SHADOW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B62)},
        {"FRAGMENT_SHADER_DERIVATIVE_HINT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B8B)},
        {"PIXEL_PACK_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88EB)},
        {"PIXEL_UNPACK_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88EC)},
        {"PIXEL_PACK_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88ED)},
        {"PIXEL_UNPACK_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88EF)},
        {"FLOAT_MAT2x3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B65)},
        {"FLOAT_MAT2x4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B66)},
        {"FLOAT_MAT3x2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B67)},
        {"FLOAT_MAT3x4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B68)},
        {"FLOAT_MAT4x2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B69)},
        {"FLOAT_MAT4x3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B6A)},
        {"SRGB", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C40)},
        {"SRGB8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C41)},
        {"SRGB8_ALPHA8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C43)},
        {"COMPARE_REF_TO_TEXTURE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x884E)},
        {"RGBA32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8814)},
        {"RGB32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8815)},
        {"RGBA16F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x881A)},
        {"RGB16F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x881B)},
        {"VERTEX_ATTRIB_ARRAY_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88FD)},
        {"MAX_ARRAY_TEXTURE_LAYERS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88FF)},
        {"MIN_PROGRAM_TEXEL_OFFSET", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8904)},
        {"MAX_PROGRAM_TEXEL_OFFSET", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8905)},
        {"MAX_VARYING_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8B4B)},
        {"TEXTURE_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C1A)},
        {"TEXTURE_BINDING_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C1D)},
        {"R11F_G11F_B10F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C3A)},
        {"UNSIGNED_INT_10F_11F_11F_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C3B)},
        {"RGB9_E5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C3D)},
        {"UNSIGNED_INT_5_9_9_9_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C3E)},
        {"TRANSFORM_FEEDBACK_BUFFER_MODE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C7F)},
        {"MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C80)},
        {"TRANSFORM_FEEDBACK_VARYINGS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C83)},
        {"TRANSFORM_FEEDBACK_BUFFER_START", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C84)},
        {"TRANSFORM_FEEDBACK_BUFFER_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C85)},
        {"TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C88)},
        {"RASTERIZER_DISCARD", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C89)},
        {"MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8A)},
        {"MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8B)},
        {"INTERLEAVED_ATTRIBS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8C)},
        {"SEPARATE_ATTRIBS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8D)},
        {"TRANSFORM_FEEDBACK_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8E)},
        {"TRANSFORM_FEEDBACK_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C8F)},
        {"RGBA32UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D70)},
        {"RGB32UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D71)},
        {"RGBA16UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D76)},
        {"RGB16UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D77)},
        {"RGBA8UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D7C)},
        {"RGB8UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D7D)},
        {"RGBA32I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D82)},
        {"RGB32I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D83)},
        {"RGBA16I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D88)},
        {"RGB16I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D89)},
        {"RGBA8I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D8E)},
        {"RGB8I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D8F)},
        {"RED_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D94)},
        {"RGB_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D98)},
        {"RGBA_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D99)},
        {"SAMPLER_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC1)},
        {"SAMPLER_2D_ARRAY_SHADOW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC4)},
        {"SAMPLER_CUBE_SHADOW", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC5)},
        {"UNSIGNED_INT_VEC2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC6)},
        {"UNSIGNED_INT_VEC3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC7)},
        {"UNSIGNED_INT_VEC4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DC8)},
        {"INT_SAMPLER_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DCA)},
        {"INT_SAMPLER_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DCB)},
        {"INT_SAMPLER_CUBE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DCC)},
        {"INT_SAMPLER_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DCF)},
        {"UNSIGNED_INT_SAMPLER_2D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DD2)},
        {"UNSIGNED_INT_SAMPLER_3D", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DD3)},
        {"UNSIGNED_INT_SAMPLER_CUBE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DD4)},
        {"UNSIGNED_INT_SAMPLER_2D_ARRAY", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DD7)},
        {"DEPTH_COMPONENT32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CAC)},
        {"DEPTH32F_STENCIL8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CAD)},
        {"FLOAT_32_UNSIGNED_INT_24_8_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8DAD)},
        {"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8210)},
        {"FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8211)},
        {"FRAMEBUFFER_ATTACHMENT_RED_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8212)},
        {"FRAMEBUFFER_ATTACHMENT_GREEN_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8213)},
        {"FRAMEBUFFER_ATTACHMENT_BLUE_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8214)},
        {"FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8215)},
        {"FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8216)},
        {"FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8217)},
        {"FRAMEBUFFER_DEFAULT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8218)},
        {"UNSIGNED_INT_24_8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x84FA)},
        {"DEPTH24_STENCIL8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88F0)},
        {"UNSIGNED_NORMALIZED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C17)},
        {"DRAW_FRAMEBUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA6)},
        {"READ_FRAMEBUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA8)},
        {"DRAW_FRAMEBUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CA9)},
        {"READ_FRAMEBUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CAA)},
        {"RENDERBUFFER_SAMPLES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CAB)},
        {"FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CD4)},
        {"MAX_COLOR_ATTACHMENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CDF)},
        {"COLOR_ATTACHMENT1", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE1)},
        {"COLOR_ATTACHMENT2", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE2)},
        {"COLOR_ATTACHMENT3", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE3)},
        {"COLOR_ATTACHMENT4", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE4)},
        {"COLOR_ATTACHMENT5", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE5)},
        {"COLOR_ATTACHMENT6", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE6)},
        {"COLOR_ATTACHMENT7", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE7)},
        {"COLOR_ATTACHMENT8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE8)},
        {"COLOR_ATTACHMENT9", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CE9)},
        {"COLOR_ATTACHMENT10", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEA)},
        {"COLOR_ATTACHMENT11", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEB)},
        {"COLOR_ATTACHMENT12", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEC)},
        {"COLOR_ATTACHMENT13", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CED)},
        {"COLOR_ATTACHMENT14", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEE)},
        {"COLOR_ATTACHMENT15", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8CEF)},
        {"FRAMEBUFFER_INCOMPLETE_MULTISAMPLE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D56)},
        {"MAX_SAMPLES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D57)},
        {"HALF_FLOAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x140B)},
        {"RG", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8227)},
        {"RG_INTEGER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8228)},
        {"R8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8229)},
        {"RG8", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x822B)},
        {"R16F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x822D)},
        {"R32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x822E)},
        {"RG16F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x822F)},
        {"RG32F", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8230)},
        {"R8I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8231)},
        {"R8UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8232)},
        {"R16I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8233)},
        {"R16UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8234)},
        {"R32I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8235)},
        {"R32UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8236)},
        {"RG8I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8237)},
        {"RG8UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8238)},
        {"RG16I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8239)},
        {"RG16UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x823A)},
        {"RG32I", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x823B)},
        {"RG32UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x823C)},
        {"VERTEX_ARRAY_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x85B5)},
        {"R8_SNORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F94)},
        {"RG8_SNORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F95)},
        {"RGB8_SNORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F96)},
        {"RGBA8_SNORM", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F97)},
        {"SIGNED_NORMALIZED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F9C)},
        {"COPY_READ_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F36)},
        {"COPY_WRITE_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F37)},
        {"COPY_READ_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F36)},
        {"COPY_WRITE_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8F37)},
        {"UNIFORM_BUFFER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A11)},
        {"UNIFORM_BUFFER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A28)},
        {"UNIFORM_BUFFER_START", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A29)},
        {"UNIFORM_BUFFER_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2A)},
        {"MAX_VERTEX_UNIFORM_BLOCKS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2B)},
        {"MAX_FRAGMENT_UNIFORM_BLOCKS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2D)},
        {"MAX_COMBINED_UNIFORM_BLOCKS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2E)},
        {"MAX_UNIFORM_BUFFER_BINDINGS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A2F)},
        {"MAX_UNIFORM_BLOCK_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A30)},
        {"MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A31)},
        {"MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A33)},
        {"UNIFORM_BUFFER_OFFSET_ALIGNMENT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A34)},
        {"ACTIVE_UNIFORM_BLOCKS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A36)},
        {"UNIFORM_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A37)},
        {"UNIFORM_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A38)},
        {"UNIFORM_BLOCK_INDEX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3A)},
        {"UNIFORM_OFFSET", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3B)},
        {"UNIFORM_ARRAY_STRIDE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3C)},
        {"UNIFORM_MATRIX_STRIDE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3D)},
        {"UNIFORM_IS_ROW_MAJOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3E)},
        {"UNIFORM_BLOCK_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A3F)},
        {"UNIFORM_BLOCK_DATA_SIZE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A40)},
        {"UNIFORM_BLOCK_ACTIVE_UNIFORMS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A42)},
        {"UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A43)},
        {"UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A44)},
        {"UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8A46)},
        {"INVALID_INDEX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0xFFFFFFFF)},
        {"MAX_VERTEX_OUTPUT_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9122)},
        {"MAX_FRAGMENT_INPUT_COMPONENTS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9125)},
        {"MAX_SERVER_WAIT_TIMEOUT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9111)},
        {"OBJECT_TYPE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9112)},
        {"SYNC_CONDITION", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9113)},
        {"SYNC_STATUS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9114)},
        {"SYNC_FLAGS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9115)},
        {"SYNC_FENCE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9116)},
        {"SYNC_GPU_COMMANDS_COMPLETE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9117)},
        {"UNSIGNALED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9118)},
        {"SIGNALED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9119)},
        {"ALREADY_SIGNALED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x911A)},
        {"TIMEOUT_EXPIRED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x911B)},
        {"CONDITION_SATISFIED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x911C)},
        {"WAIT_FAILED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x911D)},
        {"SYNC_FLUSH_COMMANDS_BIT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x00000001)},
        {"VERTEX_ATTRIB_ARRAY_DIVISOR", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x88FE)},
        {"ANY_SAMPLES_PASSED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8C2F)},
        {"ANY_SAMPLES_PASSED_CONSERVATIVE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D6A)},
        {"SAMPLER_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8919)},
        {"RGB10_A2UI", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x906F)},
        {"INT_2_10_10_10_REV", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D9F)},
        {"TRANSFORM_FEEDBACK", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E22)},
        {"TRANSFORM_FEEDBACK_PAUSED", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E23)},
        {"TRANSFORM_FEEDBACK_ACTIVE", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E24)},
        {"TRANSFORM_FEEDBACK_BINDING", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8E25)},
        {"TEXTURE_IMMUTABLE_FORMAT", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x912F)},
        {"MAX_ELEMENT_INDEX", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x8D6B)},
        {"TEXTURE_IMMUTABLE_LEVELS", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x82DF)},
        {"TIMEOUT_IGNORED", V8DOMConfiguration::kConstantTypeLong, static_cast<int>(-1)},
        {"MAX_CLIENT_WAIT_TIMEOUT_WEBGL", V8DOMConfiguration::kConstantTypeUnsignedLong, static_cast<int>(0x9247)},
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
      signature, kV8WebGL2RenderingContextAccessors, base::size(kV8WebGL2RenderingContextAccessors));
  V8DOMConfiguration::InstallMethods(
      isolate, world, instance_template, prototype_template, interface_template,
      signature, kV8WebGL2RenderingContextMethods, base::size(kV8WebGL2RenderingContextMethods));

  // Custom signature

  V8WebGL2RenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8WebGL2RenderingContext::InstallRuntimeEnabledFeaturesOnTemplate(
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
          {"commit", V8WebGL2RenderingContext::CommitMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
      };
      for (const auto& config : kConfigurations) {
        V8DOMConfiguration::InstallMethod(
            isolate, world, instance_template, prototype_template,
            interface_template, signature, config);
      }
    }
  }
}

void V8WebGL2RenderingContext::InstallWebXR(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::Object> instance,
    v8::Local<v8::Object> prototype,
    v8::Local<v8::Function> interface) {
  v8::Local<v8::FunctionTemplate> interface_template =
      V8WebGL2RenderingContext::GetWrapperTypeInfo()->DomTemplate(isolate, world);
  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  ExecutionContext* execution_context = ToExecutionContext(isolate->GetCurrentContext());
  bool is_secure_context = (execution_context && execution_context->IsSecureContext());
  if (is_secure_context) {
    static constexpr V8DOMConfiguration::MethodConfiguration
    kMakeXRCompatibleConfigurations[] = {
        {"makeXRCompatible", V8WebGL2RenderingContext::MakeXRCompatibleMethodCallback, 0, v8::None, V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kDoNotCheckHolder, V8DOMConfiguration::kDoNotCheckAccess, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAllWorlds}
    };
    for (const auto& config : kMakeXRCompatibleConfigurations) {
      V8DOMConfiguration::InstallMethod(
          isolate, world, instance, prototype,
          interface, signature, config);
    }
  }
}

void V8WebGL2RenderingContext::InstallWebXR(
    ScriptState* script_state, v8::Local<v8::Object> instance) {
  V8PerContextData* per_context_data = script_state->PerContextData();
  v8::Local<v8::Object> prototype = per_context_data->PrototypeForType(
      V8WebGL2RenderingContext::GetWrapperTypeInfo());
  v8::Local<v8::Function> interface = per_context_data->ConstructorForType(
      V8WebGL2RenderingContext::GetWrapperTypeInfo());
  ALLOW_UNUSED_LOCAL(interface);
  InstallWebXR(script_state->GetIsolate(), script_state->World(), instance, prototype, interface);
}

void V8WebGL2RenderingContext::InstallWebXR(ScriptState* script_state) {
  InstallWebXR(script_state, v8::Local<v8::Object>());
}

v8::Local<v8::FunctionTemplate> V8WebGL2RenderingContext::DomTemplate(
    v8::Isolate* isolate, const DOMWrapperWorld& world) {
  return V8DOMConfiguration::DomClassTemplate(
      isolate, world, const_cast<WrapperTypeInfo*>(V8WebGL2RenderingContext::GetWrapperTypeInfo()),
      InstallV8WebGL2RenderingContextTemplate);
}

bool V8WebGL2RenderingContext::HasInstance(v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->HasInstance(V8WebGL2RenderingContext::GetWrapperTypeInfo(), v8_value);
}

v8::Local<v8::Object> V8WebGL2RenderingContext::FindInstanceInPrototypeChain(
    v8::Local<v8::Value> v8_value, v8::Isolate* isolate) {
  return V8PerIsolateData::From(isolate)->FindInstanceInPrototypeChain(
      V8WebGL2RenderingContext::GetWrapperTypeInfo(), v8_value);
}

WebGL2RenderingContext* V8WebGL2RenderingContext::ToImplWithTypeCheck(
    v8::Isolate* isolate, v8::Local<v8::Value> value) {
  return HasInstance(value, isolate) ? ToImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

WebGL2RenderingContext* NativeValueTraits<WebGL2RenderingContext>::NativeValue(
    v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  WebGL2RenderingContext* native_value = V8WebGL2RenderingContext::ToImplWithTypeCheck(isolate, value);
  if (!native_value) {
    exception_state.ThrowTypeError(ExceptionMessages::FailedToConvertJSValue(
        "WebGL2RenderingContext"));
  }
  return native_value;
}

}  // namespace blink
