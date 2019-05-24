// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated from the Jinja2 template
// third_party/blink/renderer/bindings/templates/union_container.h.tmpl
// by the script code_generator_v8.py.
// DO NOT MODIFY!

// clang-format off
#ifndef THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_VIDEO_TRACK_OR_AUDIO_TRACK_OR_TEXT_TRACK_H_
#define THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_VIDEO_TRACK_OR_AUDIO_TRACK_OR_TEXT_TRACK_H_

#include "base/optional.h"
#include "third_party/blink/renderer/bindings/core/v8/dictionary.h"
#include "third_party/blink/renderer/bindings/core/v8/native_value_traits.h"
#include "third_party/blink/renderer/bindings/core/v8/v8_binding_for_core.h"
#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/platform/bindings/exception_state.h"
#include "third_party/blink/renderer/platform/heap/handle.h"

namespace blink {

class AudioTrack;
class TextTrack;
class VideoTrack;

class CORE_EXPORT VideoTrackOrAudioTrackOrTextTrack final {
  DISALLOW_NEW();
 public:
  VideoTrackOrAudioTrackOrTextTrack();
  bool IsNull() const { return type_ == SpecificType::kNone; }

  bool IsAudioTrack() const { return type_ == SpecificType::kAudioTrack; }
  AudioTrack* GetAsAudioTrack() const;
  void SetAudioTrack(AudioTrack*);
  static VideoTrackOrAudioTrackOrTextTrack FromAudioTrack(AudioTrack*);

  bool IsTextTrack() const { return type_ == SpecificType::kTextTrack; }
  TextTrack* GetAsTextTrack() const;
  void SetTextTrack(TextTrack*);
  static VideoTrackOrAudioTrackOrTextTrack FromTextTrack(TextTrack*);

  bool IsVideoTrack() const { return type_ == SpecificType::kVideoTrack; }
  VideoTrack* GetAsVideoTrack() const;
  void SetVideoTrack(VideoTrack*);
  static VideoTrackOrAudioTrackOrTextTrack FromVideoTrack(VideoTrack*);

  VideoTrackOrAudioTrackOrTextTrack(const VideoTrackOrAudioTrackOrTextTrack&);
  ~VideoTrackOrAudioTrackOrTextTrack();
  VideoTrackOrAudioTrackOrTextTrack& operator=(const VideoTrackOrAudioTrackOrTextTrack&);
  void Trace(blink::Visitor*);

 private:
  enum class SpecificType {
    kNone,
    kAudioTrack,
    kTextTrack,
    kVideoTrack,
  };
  SpecificType type_;

  Member<AudioTrack> audio_track_;
  Member<TextTrack> text_track_;
  Member<VideoTrack> video_track_;

  friend CORE_EXPORT v8::Local<v8::Value> ToV8(const VideoTrackOrAudioTrackOrTextTrack&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8VideoTrackOrAudioTrackOrTextTrack final {
 public:
  CORE_EXPORT static void ToImpl(v8::Isolate*, v8::Local<v8::Value>, VideoTrackOrAudioTrackOrTextTrack&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> ToV8(const VideoTrackOrAudioTrackOrTextTrack&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, VideoTrackOrAudioTrackOrTextTrack& impl) {
  V8SetReturnValue(callbackInfo, ToV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <class CallbackInfo>
inline void V8SetReturnValue(const CallbackInfo& callbackInfo, VideoTrackOrAudioTrackOrTextTrack& impl, v8::Local<v8::Object> creationContext) {
  V8SetReturnValue(callbackInfo, ToV8(impl, creationContext, callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<VideoTrackOrAudioTrackOrTextTrack> : public NativeValueTraitsBase<VideoTrackOrAudioTrackOrTextTrack> {
  CORE_EXPORT static VideoTrackOrAudioTrackOrTextTrack NativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
  CORE_EXPORT static VideoTrackOrAudioTrackOrTextTrack NullValue() { return VideoTrackOrAudioTrackOrTextTrack(); }
};

template <>
struct V8TypeOf<VideoTrackOrAudioTrackOrTextTrack> {
  typedef V8VideoTrackOrAudioTrackOrTextTrack Type;
};

}  // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::VideoTrackOrAudioTrackOrTextTrack)

#endif  // THIRD_PARTY_BLINK_RENDERER_BINDINGS_CORE_V8_VIDEO_TRACK_OR_AUDIO_TRACK_OR_TEXT_TRACK_H_
