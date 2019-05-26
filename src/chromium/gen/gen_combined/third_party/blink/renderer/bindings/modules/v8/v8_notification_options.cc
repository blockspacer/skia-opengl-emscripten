// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/dictionary_v8.cc.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_options.h"

#include "base/stl_util.h"
#include "third_party/blink/renderer/bindings/core/v8/idl_types.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits_impl.h"
#include "third_party/blink/renderer/bindings/core/v8/script_value.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_notification_action.h"
#include "third_party/blink/renderer/bindings/modules/v8/v8_timestamp_trigger.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

static const v8::Eternal<v8::Name>* eternalV8NotificationOptionsKeys(v8::Isolate* isolate) {
  static const char* const kKeys[] = {
    "actions",
    "badge",
    "body",
    "data",
    "dir",
    "icon",
    "image",
    "lang",
    "renotify",
    "requireInteraction",
    "showTrigger",
    "silent",
    "tag",
    "timestamp",
    "vibrate",
  };
  return V8PerIsolateData::From(isolate)->FindOrCreateEternalNameCache(
      kKeys, kKeys, base::size(kKeys));
}

void V8NotificationOptions::ToImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8_value, NotificationOptions* impl, ExceptionState& exception_state) {
  if (IsUndefinedOrNull(v8_value)) {
    return;
  }
  if (!v8_value->IsObject()) {
    exception_state.ThrowTypeError("cannot convert to dictionary.");
    return;
  }
  v8::Local<v8::Object> v8Object = v8_value.As<v8::Object>();
  ALLOW_UNUSED_LOCAL(v8Object);

  const v8::Eternal<v8::Name>* keys = eternalV8NotificationOptionsKeys(isolate);
  v8::TryCatch block(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();
  v8::Local<v8::Value> actions_value;
  if (!v8Object->Get(context, keys[0].Get(isolate)).ToLocal(&actions_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (actions_value.IsEmpty() || actions_value->IsUndefined()) {
    // Do nothing.
  } else {
    HeapVector<Member<NotificationAction>> actions_cpp_value = NativeValueTraits<IDLSequence<NotificationAction>>::NativeValue(isolate, actions_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setActions(actions_cpp_value);
  }

  v8::Local<v8::Value> badge_value;
  if (!v8Object->Get(context, keys[1].Get(isolate)).ToLocal(&badge_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (badge_value.IsEmpty() || badge_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> badge_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, badge_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setBadge(badge_cpp_value);
  }

  v8::Local<v8::Value> body_value;
  if (!v8Object->Get(context, keys[2].Get(isolate)).ToLocal(&body_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (body_value.IsEmpty() || body_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> body_cpp_value = body_value;
    if (!body_cpp_value.Prepare(exception_state))
      return;
    impl->setBody(body_cpp_value);
  }

  v8::Local<v8::Value> data_value;
  if (!v8Object->Get(context, keys[3].Get(isolate)).ToLocal(&data_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (data_value.IsEmpty() || data_value->IsUndefined()) {
    // Do nothing.
  } else {
    ScriptValue data_cpp_value = ScriptValue(ScriptState::Current(isolate), data_value);
    impl->setData(data_cpp_value);
  }

  v8::Local<v8::Value> dir_value;
  if (!v8Object->Get(context, keys[4].Get(isolate)).ToLocal(&dir_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (dir_value.IsEmpty() || dir_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> dir_cpp_value = dir_value;
    if (!dir_cpp_value.Prepare(exception_state))
      return;
    const char* kValidValues[] = {
        "auto",
        "ltr",
        "rtl",
    };
    if (!IsValidEnum(dir_cpp_value, kValidValues, base::size(kValidValues), "NotificationDirection", exception_state))
      return;
    impl->setDir(dir_cpp_value);
  }

  v8::Local<v8::Value> icon_value;
  if (!v8Object->Get(context, keys[5].Get(isolate)).ToLocal(&icon_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (icon_value.IsEmpty() || icon_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> icon_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, icon_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setIcon(icon_cpp_value);
  }

  v8::Local<v8::Value> lang_value;
  if (!v8Object->Get(context, keys[7].Get(isolate)).ToLocal(&lang_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (lang_value.IsEmpty() || lang_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> lang_cpp_value = lang_value;
    if (!lang_cpp_value.Prepare(exception_state))
      return;
    impl->setLang(lang_cpp_value);
  }

  v8::Local<v8::Value> renotify_value;
  if (!v8Object->Get(context, keys[8].Get(isolate)).ToLocal(&renotify_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (renotify_value.IsEmpty() || renotify_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool renotify_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, renotify_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRenotify(renotify_cpp_value);
  }

  v8::Local<v8::Value> require_interaction_value;
  if (!v8Object->Get(context, keys[9].Get(isolate)).ToLocal(&require_interaction_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (require_interaction_value.IsEmpty() || require_interaction_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool require_interaction_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, require_interaction_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setRequireInteraction(require_interaction_cpp_value);
  }

  v8::Local<v8::Value> silent_value;
  if (!v8Object->Get(context, keys[11].Get(isolate)).ToLocal(&silent_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (silent_value.IsEmpty() || silent_value->IsUndefined()) {
    // Do nothing.
  } else {
    bool silent_cpp_value = NativeValueTraits<IDLBoolean>::NativeValue(isolate, silent_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setSilent(silent_cpp_value);
  }

  v8::Local<v8::Value> tag_value;
  if (!v8Object->Get(context, keys[12].Get(isolate)).ToLocal(&tag_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (tag_value.IsEmpty() || tag_value->IsUndefined()) {
    // Do nothing.
  } else {
    V8StringResource<> tag_cpp_value = tag_value;
    if (!tag_cpp_value.Prepare(exception_state))
      return;
    impl->setTag(tag_cpp_value);
  }

  v8::Local<v8::Value> timestamp_value;
  if (!v8Object->Get(context, keys[13].Get(isolate)).ToLocal(&timestamp_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (timestamp_value.IsEmpty() || timestamp_value->IsUndefined()) {
    // Do nothing.
  } else {
    uint64_t timestamp_cpp_value = NativeValueTraits<IDLUnsignedLongLong>::NativeValue(isolate, timestamp_value, exception_state);
    if (exception_state.HadException())
      return;
    impl->setTimestamp(timestamp_cpp_value);
  }

  v8::Local<v8::Value> vibrate_value;
  if (!v8Object->Get(context, keys[14].Get(isolate)).ToLocal(&vibrate_value)) {
    exception_state.RethrowV8Exception(block.Exception());
    return;
  }
  if (vibrate_value.IsEmpty() || vibrate_value->IsUndefined()) {
    // Do nothing.
  } else {
    UnsignedLongOrUnsignedLongSequence vibrate_cpp_value;
    V8UnsignedLongOrUnsignedLongSequence::ToImpl(isolate, vibrate_value, vibrate_cpp_value, UnionTypeConversionMode::kNotNullable, exception_state);
    if (exception_state.HadException())
      return;
    impl->setVibrate(vibrate_cpp_value);
  }

  if (RuntimeEnabledFeatures::NotificationContentImageEnabled()) {
    v8::Local<v8::Value> image_value;
    if (!v8Object->Get(context, keys[6].Get(isolate)).ToLocal(&image_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (image_value.IsEmpty() || image_value->IsUndefined()) {
      // Do nothing.
    } else {
      V8StringResource<> image_cpp_value = NativeValueTraits<IDLUSVString>::NativeValue(isolate, image_value, exception_state);
      if (exception_state.HadException())
        return;
      impl->setImage(image_cpp_value);
    }
  }

  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    v8::Local<v8::Value> show_trigger_value;
    if (!v8Object->Get(context, keys[10].Get(isolate)).ToLocal(&show_trigger_value)) {
      exception_state.RethrowV8Exception(block.Exception());
      return;
    }
    if (show_trigger_value.IsEmpty() || show_trigger_value->IsUndefined()) {
      // Do nothing.
    } else {
      TimestampTrigger* show_trigger_cpp_value = V8TimestampTrigger::ToImplWithTypeCheck(isolate, show_trigger_value);
      if (!show_trigger_cpp_value) {
        exception_state.ThrowTypeError("member showTrigger is not of type TimestampTrigger.");
        return;
      }
      impl->setShowTrigger(show_trigger_cpp_value);
    }
  }
}

v8::Local<v8::Value> NotificationOptions::ToV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const {
  v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
  if (!toV8NotificationOptions(this, v8Object, creationContext, isolate))
    return v8::Undefined(isolate);
  return v8Object;
}

bool toV8NotificationOptions(const NotificationOptions* impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate) {
  const v8::Eternal<v8::Name>* keys = eternalV8NotificationOptionsKeys(isolate);
  v8::Local<v8::Context> context = isolate->GetCurrentContext();

  auto create_property = [dictionary, context, keys, isolate](
                             size_t key_index, v8::Local<v8::Value> value) {
    bool added_property;
    v8::Local<v8::Name> key = keys[key_index].Get(isolate);
    if (!dictionary->CreateDataProperty(context, key, value)
             .To(&added_property)) {
      return false;
    }
    return added_property;
  };

  v8::Local<v8::Value> actions_value;
  bool actions_has_value_or_default = false;
  if (impl->hasActions()) {
    actions_value = ToV8(impl->actions(), creationContext, isolate);
    actions_has_value_or_default = true;
  } else {
    actions_value = ToV8(HeapVector<Member<NotificationAction>>(), creationContext, isolate);
    actions_has_value_or_default = true;
  }
  if (actions_has_value_or_default &&
      !create_property(0, actions_value)) {
    return false;
  }

  v8::Local<v8::Value> badge_value;
  bool badge_has_value_or_default = false;
  if (impl->hasBadge()) {
    badge_value = V8String(isolate, impl->badge());
    badge_has_value_or_default = true;
  }
  if (badge_has_value_or_default &&
      !create_property(1, badge_value)) {
    return false;
  }

  v8::Local<v8::Value> body_value;
  bool body_has_value_or_default = false;
  if (impl->hasBody()) {
    body_value = V8String(isolate, impl->body());
    body_has_value_or_default = true;
  } else {
    body_value = V8String(isolate, WTF::g_empty_string);
    body_has_value_or_default = true;
  }
  if (body_has_value_or_default &&
      !create_property(2, body_value)) {
    return false;
  }

  v8::Local<v8::Value> data_value;
  bool data_has_value_or_default = false;
  if (impl->hasData()) {
    data_value = impl->data().V8Value();
    data_has_value_or_default = true;
  } else {
    data_value = v8::Null(isolate);
    data_has_value_or_default = true;
  }
  if (data_has_value_or_default &&
      !create_property(3, data_value)) {
    return false;
  }

  v8::Local<v8::Value> dir_value;
  bool dir_has_value_or_default = false;
  if (impl->hasDir()) {
    dir_value = V8String(isolate, impl->dir());
    dir_has_value_or_default = true;
  } else {
    dir_value = V8String(isolate, "auto");
    dir_has_value_or_default = true;
  }
  if (dir_has_value_or_default &&
      !create_property(4, dir_value)) {
    return false;
  }

  v8::Local<v8::Value> icon_value;
  bool icon_has_value_or_default = false;
  if (impl->hasIcon()) {
    icon_value = V8String(isolate, impl->icon());
    icon_has_value_or_default = true;
  }
  if (icon_has_value_or_default &&
      !create_property(5, icon_value)) {
    return false;
  }

  v8::Local<v8::Value> lang_value;
  bool lang_has_value_or_default = false;
  if (impl->hasLang()) {
    lang_value = V8String(isolate, impl->lang());
    lang_has_value_or_default = true;
  } else {
    lang_value = V8String(isolate, WTF::g_empty_string);
    lang_has_value_or_default = true;
  }
  if (lang_has_value_or_default &&
      !create_property(7, lang_value)) {
    return false;
  }

  v8::Local<v8::Value> renotify_value;
  bool renotify_has_value_or_default = false;
  if (impl->hasRenotify()) {
    renotify_value = v8::Boolean::New(isolate, impl->renotify());
    renotify_has_value_or_default = true;
  } else {
    renotify_value = v8::Boolean::New(isolate, false);
    renotify_has_value_or_default = true;
  }
  if (renotify_has_value_or_default &&
      !create_property(8, renotify_value)) {
    return false;
  }

  v8::Local<v8::Value> require_interaction_value;
  bool require_interaction_has_value_or_default = false;
  if (impl->hasRequireInteraction()) {
    require_interaction_value = v8::Boolean::New(isolate, impl->requireInteraction());
    require_interaction_has_value_or_default = true;
  } else {
    require_interaction_value = v8::Boolean::New(isolate, false);
    require_interaction_has_value_or_default = true;
  }
  if (require_interaction_has_value_or_default &&
      !create_property(9, require_interaction_value)) {
    return false;
  }

  v8::Local<v8::Value> silent_value;
  bool silent_has_value_or_default = false;
  if (impl->hasSilent()) {
    silent_value = v8::Boolean::New(isolate, impl->silent());
    silent_has_value_or_default = true;
  } else {
    silent_value = v8::Boolean::New(isolate, false);
    silent_has_value_or_default = true;
  }
  if (silent_has_value_or_default &&
      !create_property(11, silent_value)) {
    return false;
  }

  v8::Local<v8::Value> tag_value;
  bool tag_has_value_or_default = false;
  if (impl->hasTag()) {
    tag_value = V8String(isolate, impl->tag());
    tag_has_value_or_default = true;
  } else {
    tag_value = V8String(isolate, WTF::g_empty_string);
    tag_has_value_or_default = true;
  }
  if (tag_has_value_or_default &&
      !create_property(12, tag_value)) {
    return false;
  }

  v8::Local<v8::Value> timestamp_value;
  bool timestamp_has_value_or_default = false;
  if (impl->hasTimestamp()) {
    timestamp_value = v8::Number::New(isolate, static_cast<double>(impl->timestamp()));
    timestamp_has_value_or_default = true;
  }
  if (timestamp_has_value_or_default &&
      !create_property(13, timestamp_value)) {
    return false;
  }

  v8::Local<v8::Value> vibrate_value;
  bool vibrate_has_value_or_default = false;
  if (impl->hasVibrate()) {
    vibrate_value = ToV8(impl->vibrate(), creationContext, isolate);
    vibrate_has_value_or_default = true;
  }
  if (vibrate_has_value_or_default &&
      !create_property(14, vibrate_value)) {
    return false;
  }

  if (RuntimeEnabledFeatures::NotificationContentImageEnabled()) {
    v8::Local<v8::Value> image_value;
    bool image_has_value_or_default = false;
    if (impl->hasImage()) {
      image_value = V8String(isolate, impl->image());
      image_has_value_or_default = true;
    }
    if (image_has_value_or_default &&
        !create_property(6, image_value)) {
      return false;
    }
  }

  if (RuntimeEnabledFeatures::NotificationTriggersEnabled()) {
    v8::Local<v8::Value> show_trigger_value;
    bool show_trigger_has_value_or_default = false;
    if (impl->hasShowTrigger()) {
      show_trigger_value = ToV8(impl->showTrigger(), creationContext, isolate);
      show_trigger_has_value_or_default = true;
    } else {
      show_trigger_value = v8::Null(isolate);
      show_trigger_has_value_or_default = true;
    }
    if (show_trigger_has_value_or_default &&
        !create_property(10, show_trigger_value)) {
      return false;
    }
  }

  return true;
}

NotificationOptions* NativeValueTraits<NotificationOptions>::NativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exception_state) {
  NotificationOptions* impl = NotificationOptions::Create();
  V8NotificationOptions::ToImpl(isolate, value, impl, exception_state);
  return impl;
}

}  // namespace blink
