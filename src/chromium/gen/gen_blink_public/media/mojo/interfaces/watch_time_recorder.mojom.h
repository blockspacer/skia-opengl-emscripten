// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/macros.h"
#include "base/optional.h"

#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#if BUILDFLAG(MOJO_TRACE_ENABLED)
#include "base/trace_event/trace_event.h"
#endif
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom-shared.h"
#include "media/mojo/interfaces/watch_time_recorder.mojom-forward.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojom/origin.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"
#include "mojo/public/cpp/bindings/thread_safe_interface_ptr.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace media {
namespace mojom {

class WatchTimeRecorderProxy;

template <typename ImplRefTraits>
class WatchTimeRecorderStub;

class WatchTimeRecorderRequestValidator;


class  WatchTimeRecorder
    : public WatchTimeRecorderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = WatchTimeRecorderInterfaceBase;
  using Proxy_ = WatchTimeRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = WatchTimeRecorderStub<ImplRefTraits>;

  using RequestValidator_ = WatchTimeRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRecordWatchTimeMinVersion = 0,
    kFinalizeWatchTimeMinVersion = 0,
    kOnErrorMinVersion = 0,
    kUpdateSecondaryPropertiesMinVersion = 0,
    kSetAutoplayInitiatedMinVersion = 0,
    kOnDurationChangedMinVersion = 0,
    kUpdateUnderflowCountMinVersion = 0,
  };
  virtual ~WatchTimeRecorder() {}

  
  virtual void RecordWatchTime(media::WatchTimeKey key, base::TimeDelta watch_time) = 0;

  
  virtual void FinalizeWatchTime(const std::vector<media::WatchTimeKey>& watch_time_keys) = 0;

  
  virtual void OnError(media::PipelineStatus status) = 0;

  
  virtual void UpdateSecondaryProperties(SecondaryPlaybackPropertiesPtr secondary_properties) = 0;

  
  virtual void SetAutoplayInitiated(bool value) = 0;

  
  virtual void OnDurationChanged(base::TimeDelta duration) = 0;

  
  virtual void UpdateUnderflowCount(int32_t count) = 0;
};

class  WatchTimeRecorderProxy
    : public WatchTimeRecorder {
 public:
  using InterfaceType = WatchTimeRecorder;

  explicit WatchTimeRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RecordWatchTime(media::WatchTimeKey key, base::TimeDelta watch_time) final;
  void FinalizeWatchTime(const std::vector<media::WatchTimeKey>& watch_time_keys) final;
  void OnError(media::PipelineStatus status) final;
  void UpdateSecondaryProperties(SecondaryPlaybackPropertiesPtr secondary_properties) final;
  void SetAutoplayInitiated(bool value) final;
  void OnDurationChanged(base::TimeDelta duration) final;
  void UpdateUnderflowCount(int32_t count) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  WatchTimeRecorderStubDispatch {
 public:
  static bool Accept(WatchTimeRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      WatchTimeRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<WatchTimeRecorder>>
class WatchTimeRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  WatchTimeRecorderStub() {}
  ~WatchTimeRecorderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WatchTimeRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return WatchTimeRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  WatchTimeRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  PlaybackProperties {
 public:
  using DataView = PlaybackPropertiesDataView;
  using Data_ = internal::PlaybackProperties_Data;

  template <typename... Args>
  static PlaybackPropertiesPtr New(Args&&... args) {
    return PlaybackPropertiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PlaybackPropertiesPtr From(const U& u) {
    return mojo::TypeConverter<PlaybackPropertiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PlaybackProperties>::Convert(*this);
  }


  PlaybackProperties();

  PlaybackProperties(
      bool has_audio,
      bool has_video,
      bool is_background,
      bool is_muted,
      bool is_mse,
      bool is_eme,
      bool is_embedded_media_experience);

  ~PlaybackProperties();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PlaybackPropertiesPtr>
  PlaybackPropertiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PlaybackProperties>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PlaybackProperties::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PlaybackProperties::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PlaybackProperties_UnserializedMessageContext<
            UserType, PlaybackProperties::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<PlaybackProperties::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PlaybackProperties::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PlaybackProperties_UnserializedMessageContext<
            UserType, PlaybackProperties::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PlaybackProperties::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool has_audio;
  
  bool has_video;
  
  bool is_background;
  
  bool is_muted;
  
  bool is_mse;
  
  bool is_eme;
  
  bool is_embedded_media_experience;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class  SecondaryPlaybackProperties {
 public:
  using DataView = SecondaryPlaybackPropertiesDataView;
  using Data_ = internal::SecondaryPlaybackProperties_Data;

  template <typename... Args>
  static SecondaryPlaybackPropertiesPtr New(Args&&... args) {
    return SecondaryPlaybackPropertiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SecondaryPlaybackPropertiesPtr From(const U& u) {
    return mojo::TypeConverter<SecondaryPlaybackPropertiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SecondaryPlaybackProperties>::Convert(*this);
  }


  SecondaryPlaybackProperties();

  SecondaryPlaybackProperties(
      media::AudioCodec audio_codec,
      media::VideoCodec video_codec,
      const std::string& audio_decoder_name,
      const std::string& video_decoder_name,
      media::EncryptionMode audio_encryption_scheme,
      media::EncryptionMode video_encryption_scheme,
      const gfx::Size& natural_size);

  ~SecondaryPlaybackProperties();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SecondaryPlaybackPropertiesPtr>
  SecondaryPlaybackPropertiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SecondaryPlaybackProperties>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SecondaryPlaybackProperties::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SecondaryPlaybackProperties::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SecondaryPlaybackProperties_UnserializedMessageContext<
            UserType, SecondaryPlaybackProperties::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<SecondaryPlaybackProperties::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SecondaryPlaybackProperties::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SecondaryPlaybackProperties_UnserializedMessageContext<
            UserType, SecondaryPlaybackProperties::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SecondaryPlaybackProperties::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  media::AudioCodec audio_codec;
  
  media::VideoCodec video_codec;
  
  std::string audio_decoder_name;
  
  std::string video_decoder_name;
  
  media::EncryptionMode audio_encryption_scheme;
  
  media::EncryptionMode video_encryption_scheme;
  
  gfx::Size natural_size;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

template <typename StructPtrType>
PlaybackPropertiesPtr PlaybackProperties::Clone() const {
  return New(
      mojo::Clone(has_audio),
      mojo::Clone(has_video),
      mojo::Clone(is_background),
      mojo::Clone(is_muted),
      mojo::Clone(is_mse),
      mojo::Clone(is_eme),
      mojo::Clone(is_embedded_media_experience)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PlaybackProperties>::value>::type*>
bool PlaybackProperties::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->has_audio, other_struct.has_audio))
    return false;
  if (!mojo::Equals(this->has_video, other_struct.has_video))
    return false;
  if (!mojo::Equals(this->is_background, other_struct.is_background))
    return false;
  if (!mojo::Equals(this->is_muted, other_struct.is_muted))
    return false;
  if (!mojo::Equals(this->is_mse, other_struct.is_mse))
    return false;
  if (!mojo::Equals(this->is_eme, other_struct.is_eme))
    return false;
  if (!mojo::Equals(this->is_embedded_media_experience, other_struct.is_embedded_media_experience))
    return false;
  return true;
}
template <typename StructPtrType>
SecondaryPlaybackPropertiesPtr SecondaryPlaybackProperties::Clone() const {
  return New(
      mojo::Clone(audio_codec),
      mojo::Clone(video_codec),
      mojo::Clone(audio_decoder_name),
      mojo::Clone(video_decoder_name),
      mojo::Clone(audio_encryption_scheme),
      mojo::Clone(video_encryption_scheme),
      mojo::Clone(natural_size)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SecondaryPlaybackProperties>::value>::type*>
bool SecondaryPlaybackProperties::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->audio_codec, other_struct.audio_codec))
    return false;
  if (!mojo::Equals(this->video_codec, other_struct.video_codec))
    return false;
  if (!mojo::Equals(this->audio_decoder_name, other_struct.audio_decoder_name))
    return false;
  if (!mojo::Equals(this->video_decoder_name, other_struct.video_decoder_name))
    return false;
  if (!mojo::Equals(this->audio_encryption_scheme, other_struct.audio_encryption_scheme))
    return false;
  if (!mojo::Equals(this->video_encryption_scheme, other_struct.video_encryption_scheme))
    return false;
  if (!mojo::Equals(this->natural_size, other_struct.natural_size))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::PlaybackProperties::DataView,
                                         ::media::mojom::PlaybackPropertiesPtr> {
  static bool IsNull(const ::media::mojom::PlaybackPropertiesPtr& input) { return !input; }
  static void SetToNull(::media::mojom::PlaybackPropertiesPtr* output) { output->reset(); }

  static decltype(::media::mojom::PlaybackProperties::has_audio) has_audio(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->has_audio;
  }

  static decltype(::media::mojom::PlaybackProperties::has_video) has_video(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->has_video;
  }

  static decltype(::media::mojom::PlaybackProperties::is_background) is_background(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_background;
  }

  static decltype(::media::mojom::PlaybackProperties::is_muted) is_muted(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_muted;
  }

  static decltype(::media::mojom::PlaybackProperties::is_mse) is_mse(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_mse;
  }

  static decltype(::media::mojom::PlaybackProperties::is_eme) is_eme(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_eme;
  }

  static decltype(::media::mojom::PlaybackProperties::is_embedded_media_experience) is_embedded_media_experience(
      const ::media::mojom::PlaybackPropertiesPtr& input) {
    return input->is_embedded_media_experience;
  }

  static bool Read(::media::mojom::PlaybackProperties::DataView input, ::media::mojom::PlaybackPropertiesPtr* output);
};


template <>
struct  StructTraits<::media::mojom::SecondaryPlaybackProperties::DataView,
                                         ::media::mojom::SecondaryPlaybackPropertiesPtr> {
  static bool IsNull(const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) { return !input; }
  static void SetToNull(::media::mojom::SecondaryPlaybackPropertiesPtr* output) { output->reset(); }

  static decltype(::media::mojom::SecondaryPlaybackProperties::audio_codec) audio_codec(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->audio_codec;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::video_codec) video_codec(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->video_codec;
  }

  static const decltype(::media::mojom::SecondaryPlaybackProperties::audio_decoder_name)& audio_decoder_name(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->audio_decoder_name;
  }

  static const decltype(::media::mojom::SecondaryPlaybackProperties::video_decoder_name)& video_decoder_name(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->video_decoder_name;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::audio_encryption_scheme) audio_encryption_scheme(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->audio_encryption_scheme;
  }

  static decltype(::media::mojom::SecondaryPlaybackProperties::video_encryption_scheme) video_encryption_scheme(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->video_encryption_scheme;
  }

  static const decltype(::media::mojom::SecondaryPlaybackProperties::natural_size)& natural_size(
      const ::media::mojom::SecondaryPlaybackPropertiesPtr& input) {
    return input->natural_size;
  }

  static bool Read(::media::mojom::SecondaryPlaybackProperties::DataView input, ::media::mojom::SecondaryPlaybackPropertiesPtr* output);
};

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_WATCH_TIME_RECORDER_MOJOM_H_