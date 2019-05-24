// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-shared.h"
#include "third_party/blink/public/mojom/mediastream/media_devices.mojom-blink-forward.h"
#include "media/capture/mojom/video_capture_types.mojom-blink.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_MediaDeviceType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::MediaDeviceType& value) {
    using utype = std::underlying_type<::blink::mojom::MediaDeviceType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::MediaDeviceType& left, const ::blink::mojom::MediaDeviceType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::MediaDeviceType>
    : public GenericHashTraits<::blink::mojom::MediaDeviceType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::MediaDeviceType& value) {
    return value == static_cast<::blink::mojom::MediaDeviceType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::MediaDeviceType& slot, bool) {
    slot = static_cast<::blink::mojom::MediaDeviceType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::MediaDeviceType& value) {
    return value == static_cast<::blink::mojom::MediaDeviceType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_FacingMode_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::FacingMode& value) {
    using utype = std::underlying_type<::blink::mojom::FacingMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::FacingMode& left, const ::blink::mojom::FacingMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::FacingMode>
    : public GenericHashTraits<::blink::mojom::FacingMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::FacingMode& value) {
    return value == static_cast<::blink::mojom::FacingMode>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::FacingMode& slot, bool) {
    slot = static_cast<::blink::mojom::FacingMode>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::FacingMode& value) {
    return value == static_cast<::blink::mojom::FacingMode>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class MediaDevicesDispatcherHostProxy;

template <typename ImplRefTraits>
class MediaDevicesDispatcherHostStub;

class MediaDevicesDispatcherHostRequestValidator;
class MediaDevicesDispatcherHostResponseValidator;


class PLATFORM_EXPORT MediaDevicesDispatcherHost
    : public MediaDevicesDispatcherHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaDevicesDispatcherHostInterfaceBase;
  using Proxy_ = MediaDevicesDispatcherHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaDevicesDispatcherHostStub<ImplRefTraits>;

  using RequestValidator_ = MediaDevicesDispatcherHostRequestValidator;
  using ResponseValidator_ = MediaDevicesDispatcherHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kEnumerateDevicesMinVersion = 0,
    kGetVideoInputCapabilitiesMinVersion = 0,
    kGetAllVideoInputDeviceFormatsMinVersion = 0,
    kGetAvailableVideoInputDeviceFormatsMinVersion = 0,
    kGetAudioInputCapabilitiesMinVersion = 0,
    kAddMediaDevicesListenerMinVersion = 0,
  };
  virtual ~MediaDevicesDispatcherHost() {}


  using EnumerateDevicesCallback = base::OnceCallback<void(WTF::Vector<WTF::Vector<MediaDeviceInfoPtr>>, WTF::Vector<VideoInputDeviceCapabilitiesPtr>, WTF::Vector<AudioInputDeviceCapabilitiesPtr>)>;
  
  virtual void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, bool request_audio_input_capabilities, EnumerateDevicesCallback callback) = 0;


  using GetVideoInputCapabilitiesCallback = base::OnceCallback<void(WTF::Vector<VideoInputDeviceCapabilitiesPtr>)>;
  
  virtual void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) = 0;


  using GetAllVideoInputDeviceFormatsCallback = base::OnceCallback<void(WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>)>;
  
  virtual void GetAllVideoInputDeviceFormats(const WTF::String& device_id, GetAllVideoInputDeviceFormatsCallback callback) = 0;


  using GetAvailableVideoInputDeviceFormatsCallback = base::OnceCallback<void(WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr>)>;
  
  virtual void GetAvailableVideoInputDeviceFormats(const WTF::String& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) = 0;


  using GetAudioInputCapabilitiesCallback = base::OnceCallback<void(WTF::Vector<AudioInputDeviceCapabilitiesPtr>)>;
  
  virtual void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) = 0;

  
  virtual void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) = 0;
};

class MediaDevicesListenerProxy;

template <typename ImplRefTraits>
class MediaDevicesListenerStub;

class MediaDevicesListenerRequestValidator;


class PLATFORM_EXPORT MediaDevicesListener
    : public MediaDevicesListenerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaDevicesListenerInterfaceBase;
  using Proxy_ = MediaDevicesListenerProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaDevicesListenerStub<ImplRefTraits>;

  using RequestValidator_ = MediaDevicesListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDevicesChangedMinVersion = 0,
  };
  virtual ~MediaDevicesListener() {}

  
  virtual void OnDevicesChanged(MediaDeviceType type, WTF::Vector<MediaDeviceInfoPtr> device_infos) = 0;
};

class PLATFORM_EXPORT MediaDevicesDispatcherHostProxy
    : public MediaDevicesDispatcherHost {
 public:
  using InterfaceType = MediaDevicesDispatcherHost;

  explicit MediaDevicesDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void EnumerateDevices(bool request_audio_input, bool request_video_input, bool request_audio_output, bool request_video_input_capabilities, bool request_audio_input_capabilities, EnumerateDevicesCallback callback) final;
  void GetVideoInputCapabilities(GetVideoInputCapabilitiesCallback callback) final;
  void GetAllVideoInputDeviceFormats(const WTF::String& device_id, GetAllVideoInputDeviceFormatsCallback callback) final;
  void GetAvailableVideoInputDeviceFormats(const WTF::String& device_id, GetAvailableVideoInputDeviceFormatsCallback callback) final;
  void GetAudioInputCapabilities(GetAudioInputCapabilitiesCallback callback) final;
  void AddMediaDevicesListener(bool subscribe_audio_input, bool subscribe_video_input, bool subscribe_audio_output, MediaDevicesListenerPtr listener) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT MediaDevicesListenerProxy
    : public MediaDevicesListener {
 public:
  using InterfaceType = MediaDevicesListener;

  explicit MediaDevicesListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDevicesChanged(MediaDeviceType type, WTF::Vector<MediaDeviceInfoPtr> device_infos) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT MediaDevicesDispatcherHostStubDispatch {
 public:
  static bool Accept(MediaDevicesDispatcherHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaDevicesDispatcherHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaDevicesDispatcherHost>>
class MediaDevicesDispatcherHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaDevicesDispatcherHostStub() {}
  ~MediaDevicesDispatcherHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDevicesDispatcherHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDevicesDispatcherHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT MediaDevicesListenerStubDispatch {
 public:
  static bool Accept(MediaDevicesListener* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaDevicesListener* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaDevicesListener>>
class MediaDevicesListenerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaDevicesListenerStub() {}
  ~MediaDevicesListenerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDevicesListenerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaDevicesListenerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT MediaDevicesDispatcherHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT MediaDevicesListenerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT MediaDevicesDispatcherHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class PLATFORM_EXPORT MediaDeviceInfo {
 public:
  using DataView = MediaDeviceInfoDataView;
  using Data_ = internal::MediaDeviceInfo_Data;

  template <typename... Args>
  static MediaDeviceInfoPtr New(Args&&... args) {
    return MediaDeviceInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<MediaDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaDeviceInfo>::Convert(*this);
  }


  MediaDeviceInfo();

  MediaDeviceInfo(
      const WTF::String& device_id,
      const WTF::String& label,
      const WTF::String& group_id);

  ~MediaDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaDeviceInfoPtr>
  MediaDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaDeviceInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaDeviceInfo_UnserializedMessageContext<
            UserType, MediaDeviceInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaDeviceInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaDeviceInfo_UnserializedMessageContext<
            UserType, MediaDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaDeviceInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String device_id;
  
  WTF::String label;
  
  WTF::String group_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};










class PLATFORM_EXPORT VideoInputDeviceCapabilities {
 public:
  using DataView = VideoInputDeviceCapabilitiesDataView;
  using Data_ = internal::VideoInputDeviceCapabilities_Data;

  template <typename... Args>
  static VideoInputDeviceCapabilitiesPtr New(Args&&... args) {
    return VideoInputDeviceCapabilitiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static VideoInputDeviceCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<VideoInputDeviceCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoInputDeviceCapabilities>::Convert(*this);
  }


  VideoInputDeviceCapabilities();

  VideoInputDeviceCapabilities(
      const WTF::String& device_id,
      const WTF::String& group_id,
      WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> formats,
      FacingMode facing_mode);

  ~VideoInputDeviceCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoInputDeviceCapabilitiesPtr>
  VideoInputDeviceCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoInputDeviceCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        VideoInputDeviceCapabilities::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        VideoInputDeviceCapabilities::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::VideoInputDeviceCapabilities_UnserializedMessageContext<
            UserType, VideoInputDeviceCapabilities::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<VideoInputDeviceCapabilities::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return VideoInputDeviceCapabilities::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::VideoInputDeviceCapabilities_UnserializedMessageContext<
            UserType, VideoInputDeviceCapabilities::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<VideoInputDeviceCapabilities::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String device_id;
  
  WTF::String group_id;
  
  WTF::Vector<::media::mojom::blink::VideoCaptureFormatPtr> formats;
  
  FacingMode facing_mode;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(VideoInputDeviceCapabilities);
};





class PLATFORM_EXPORT AudioInputDeviceCapabilities {
 public:
  using DataView = AudioInputDeviceCapabilitiesDataView;
  using Data_ = internal::AudioInputDeviceCapabilities_Data;

  template <typename... Args>
  static AudioInputDeviceCapabilitiesPtr New(Args&&... args) {
    return AudioInputDeviceCapabilitiesPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AudioInputDeviceCapabilitiesPtr From(const U& u) {
    return mojo::TypeConverter<AudioInputDeviceCapabilitiesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioInputDeviceCapabilities>::Convert(*this);
  }


  AudioInputDeviceCapabilities();

  AudioInputDeviceCapabilities(
      const WTF::String& device_id,
      const WTF::String& group_id,
      ::media::mojom::blink::AudioParametersPtr parameters,
      bool is_valid,
      int32_t channels,
      int32_t sample_rate,
      base::TimeDelta latency);

  ~AudioInputDeviceCapabilities();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioInputDeviceCapabilitiesPtr>
  AudioInputDeviceCapabilitiesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioInputDeviceCapabilities>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AudioInputDeviceCapabilities::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AudioInputDeviceCapabilities::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AudioInputDeviceCapabilities_UnserializedMessageContext<
            UserType, AudioInputDeviceCapabilities::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<AudioInputDeviceCapabilities::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AudioInputDeviceCapabilities::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AudioInputDeviceCapabilities_UnserializedMessageContext<
            UserType, AudioInputDeviceCapabilities::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AudioInputDeviceCapabilities::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String device_id;
  
  WTF::String group_id;
  
  ::media::mojom::blink::AudioParametersPtr parameters;
  
  bool is_valid;
  
  int32_t channels;
  
  int32_t sample_rate;
  
  base::TimeDelta latency;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(AudioInputDeviceCapabilities);
};

template <typename StructPtrType>
MediaDeviceInfoPtr MediaDeviceInfo::Clone() const {
  return New(
      mojo::Clone(device_id),
      mojo::Clone(label),
      mojo::Clone(group_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaDeviceInfo>::value>::type*>
bool MediaDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->label, other_struct.label))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  return true;
}
template <typename StructPtrType>
VideoInputDeviceCapabilitiesPtr VideoInputDeviceCapabilities::Clone() const {
  return New(
      mojo::Clone(device_id),
      mojo::Clone(group_id),
      mojo::Clone(formats),
      mojo::Clone(facing_mode)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoInputDeviceCapabilities>::value>::type*>
bool VideoInputDeviceCapabilities::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  if (!mojo::Equals(this->formats, other_struct.formats))
    return false;
  if (!mojo::Equals(this->facing_mode, other_struct.facing_mode))
    return false;
  return true;
}
template <typename StructPtrType>
AudioInputDeviceCapabilitiesPtr AudioInputDeviceCapabilities::Clone() const {
  return New(
      mojo::Clone(device_id),
      mojo::Clone(group_id),
      mojo::Clone(parameters),
      mojo::Clone(is_valid),
      mojo::Clone(channels),
      mojo::Clone(sample_rate),
      mojo::Clone(latency)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioInputDeviceCapabilities>::value>::type*>
bool AudioInputDeviceCapabilities::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  if (!mojo::Equals(this->parameters, other_struct.parameters))
    return false;
  if (!mojo::Equals(this->is_valid, other_struct.is_valid))
    return false;
  if (!mojo::Equals(this->channels, other_struct.channels))
    return false;
  if (!mojo::Equals(this->sample_rate, other_struct.sample_rate))
    return false;
  if (!mojo::Equals(this->latency, other_struct.latency))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::MediaDeviceInfo::DataView,
                                         ::blink::mojom::blink::MediaDeviceInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::MediaDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::MediaDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::MediaDeviceInfo::device_id)& device_id(
      const ::blink::mojom::blink::MediaDeviceInfoPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::blink::MediaDeviceInfo::label)& label(
      const ::blink::mojom::blink::MediaDeviceInfoPtr& input) {
    return input->label;
  }

  static const decltype(::blink::mojom::blink::MediaDeviceInfo::group_id)& group_id(
      const ::blink::mojom::blink::MediaDeviceInfoPtr& input) {
    return input->group_id;
  }

  static bool Read(::blink::mojom::blink::MediaDeviceInfo::DataView input, ::blink::mojom::blink::MediaDeviceInfoPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::VideoInputDeviceCapabilities::DataView,
                                         ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr> {
  static bool IsNull(const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::VideoInputDeviceCapabilities::device_id)& device_id(
      const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::blink::VideoInputDeviceCapabilities::group_id)& group_id(
      const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) {
    return input->group_id;
  }

  static const decltype(::blink::mojom::blink::VideoInputDeviceCapabilities::formats)& formats(
      const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) {
    return input->formats;
  }

  static decltype(::blink::mojom::blink::VideoInputDeviceCapabilities::facing_mode) facing_mode(
      const ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr& input) {
    return input->facing_mode;
  }

  static bool Read(::blink::mojom::blink::VideoInputDeviceCapabilities::DataView input, ::blink::mojom::blink::VideoInputDeviceCapabilitiesPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::AudioInputDeviceCapabilities::DataView,
                                         ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr> {
  static bool IsNull(const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::device_id)& device_id(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->device_id;
  }

  static const decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::group_id)& group_id(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->group_id;
  }

  static const decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::parameters)& parameters(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->parameters;
  }

  static decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::is_valid) is_valid(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->is_valid;
  }

  static decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::channels) channels(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->channels;
  }

  static decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::sample_rate) sample_rate(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->sample_rate;
  }

  static const decltype(::blink::mojom::blink::AudioInputDeviceCapabilities::latency)& latency(
      const ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr& input) {
    return input->latency;
  }

  static bool Read(::blink::mojom::blink::AudioInputDeviceCapabilities::DataView input, ::blink::mojom::blink::AudioInputDeviceCapabilitiesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_DEVICES_MOJOM_BLINK_H_