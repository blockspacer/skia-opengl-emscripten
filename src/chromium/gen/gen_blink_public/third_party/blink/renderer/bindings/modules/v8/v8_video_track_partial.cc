// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/partial_interface.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_video_track_partial.h"

#include <algorithm>

#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_dom_configuration.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_video_track.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_source_buffer.h"
#include "third_party/blink/renderer/core/execution_context/execution_context.h"
#include "third_party/blink/renderer/modules/mediasource/source_buffer_track_base_supplement.h"
#include "third_party/blink/renderer/platform/bindings/exception_messages.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/bindings/runtime_call_stats.h"
#include "third_party/blink/renderer/platform/bindings/v8_object_constructor.h"
#include "third_party/blink/renderer/platform/bindings/v8_private_property.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "third_party/blink/renderer/platform/scheduler/public/cooperative_scheduling_manager.h"
#include "third_party/blink/renderer/platform/wtf/get_ptr.h"

namespace blink {

namespace video_track_partial_v8_internal {

static void SourceBufferAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info) {
  v8::Local<v8::Object> holder = info.Holder();

  VideoTrack* impl = V8VideoTrack::ToImpl(holder);

  SourceBuffer* cpp_value(SourceBufferTrackBaseSupplement::sourceBuffer(*impl));

  // Keep the wrapper object for the return value alive as long as |this|
  // object is alive in order to save creation time of the wrapper object.
  if (cpp_value && DOMDataStore::SetReturnValue(info.GetReturnValue(), cpp_value))
    return;
  v8::Local<v8::Value> v8_value(ToV8(cpp_value, holder, info.GetIsolate()));
  V8PrivateProperty::GetSymbol(
      info.GetIsolate(), "KeepAlive#VideoTrack#sourceBuffer")
      .Set(holder, v8_value);

  V8SetReturnValue(info, v8_value);
}

}  // namespace video_track_partial_v8_internal

void V8VideoTrackPartial::SourceBufferAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info) {
  RUNTIME_CALL_TIMER_SCOPE_DISABLED_BY_DEFAULT(info.GetIsolate(), "Blink_VideoTrack_sourceBuffer_Getter");

  video_track_partial_v8_internal::SourceBufferAttributeGetter(info);
}

void V8VideoTrackPartial::InstallV8VideoTrackTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  // Initialize the interface object's template.
  V8VideoTrack::InstallV8VideoTrackTemplate(isolate, world, interface_template);

  if (!RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
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

  V8VideoTrackPartial::InstallRuntimeEnabledFeaturesOnTemplate(
      isolate, world, interface_template);
}

void V8VideoTrackPartial::InstallRuntimeEnabledFeaturesOnTemplate(
    v8::Isolate* isolate,
    const DOMWrapperWorld& world,
    v8::Local<v8::FunctionTemplate> interface_template) {
  if (!RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
    return;
  }

  V8VideoTrack::InstallRuntimeEnabledFeaturesOnTemplate(isolate, world, interface_template);

  v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interface_template);
  ALLOW_UNUSED_LOCAL(signature);
  v8::Local<v8::ObjectTemplate> instance_template = interface_template->InstanceTemplate();
  ALLOW_UNUSED_LOCAL(instance_template);
  v8::Local<v8::ObjectTemplate> prototype_template = interface_template->PrototypeTemplate();
  ALLOW_UNUSED_LOCAL(prototype_template);

  // Register IDL constants, attributes and operations.

  if (RuntimeEnabledFeatures::AudioVideoTracksEnabled()) {
    static constexpr V8DOMConfiguration::AccessorConfiguration kConfigurations[] = {
        { "sourceBuffer", V8VideoTrackPartial::SourceBufferAttributeGetterCallback, nullptr, V8PrivateProperty::kNoCachedAccessor, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::kOnPrototype, V8DOMConfiguration::kCheckHolder, V8DOMConfiguration::kHasSideEffect, V8DOMConfiguration::kAlwaysCallGetter, V8DOMConfiguration::kAllWorlds },
    };
    V8DOMConfiguration::InstallAccessors(
        isolate, world, instance_template, prototype_template, interface_template,
        signature, kConfigurations, base::size(kConfigurations));
  }

  // Custom signature
}

void V8VideoTrackPartial::Initialize() {
  // Should be invoked from ModulesInitializer.
  V8VideoTrack::UpdateWrapperTypeInfo(
      &V8VideoTrackPartial::InstallV8VideoTrackTemplate,
      nullptr,
      &V8VideoTrackPartial::InstallRuntimeEnabledFeaturesOnTemplate,
      nullptr);
}

}  // namespace blink
