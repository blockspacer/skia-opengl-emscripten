// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-shared.h"
#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-blink-forward.h"
#include "media/capture/mojom/video_capture_types.mojom-blink.h"
#include "media/mojo/interfaces/audio_parameters.mojom-blink.h"
#include "media/mojo/interfaces/display_media_information.mojom-blink.h"

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
struct blink_mojom_internal_MediaStreamType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::MediaStreamType& value) {
    using utype = std::underlying_type<::blink::mojom::MediaStreamType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::MediaStreamType& left, const ::blink::mojom::MediaStreamType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::MediaStreamType>
    : public GenericHashTraits<::blink::mojom::MediaStreamType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::MediaStreamType& value) {
    return value == static_cast<::blink::mojom::MediaStreamType>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::MediaStreamType& slot, bool) {
    slot = static_cast<::blink::mojom::MediaStreamType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::MediaStreamType& value) {
    return value == static_cast<::blink::mojom::MediaStreamType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct blink_mojom_internal_MediaStreamRequestResult_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::MediaStreamRequestResult& value) {
    using utype = std::underlying_type<::blink::mojom::MediaStreamRequestResult>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::MediaStreamRequestResult& left, const ::blink::mojom::MediaStreamRequestResult& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::MediaStreamRequestResult>
    : public GenericHashTraits<::blink::mojom::MediaStreamRequestResult> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::blink::mojom::MediaStreamRequestResult& value) {
    return value == static_cast<::blink::mojom::MediaStreamRequestResult>(-1000000);
  }
  static void ConstructDeletedValue(::blink::mojom::MediaStreamRequestResult& slot, bool) {
    slot = static_cast<::blink::mojom::MediaStreamRequestResult>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::MediaStreamRequestResult& value) {
    return value == static_cast<::blink::mojom::MediaStreamRequestResult>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {

class MediaStreamDeviceObserverProxy;

template <typename ImplRefTraits>
class MediaStreamDeviceObserverStub;

class MediaStreamDeviceObserverRequestValidator;


class PLATFORM_EXPORT MediaStreamDeviceObserver
    : public MediaStreamDeviceObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaStreamDeviceObserverInterfaceBase;
  using Proxy_ = MediaStreamDeviceObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaStreamDeviceObserverStub<ImplRefTraits>;

  using RequestValidator_ = MediaStreamDeviceObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDeviceStoppedMinVersion = 0,
    kOnDeviceChangedMinVersion = 0,
  };
  virtual ~MediaStreamDeviceObserver() {}

  
  virtual void OnDeviceStopped(const WTF::String& label, MediaStreamDevicePtr device) = 0;

  
  virtual void OnDeviceChanged(const WTF::String& label, MediaStreamDevicePtr old_device, MediaStreamDevicePtr new_device) = 0;
};

class MediaStreamDispatcherHostProxy;

template <typename ImplRefTraits>
class MediaStreamDispatcherHostStub;

class MediaStreamDispatcherHostRequestValidator;
class MediaStreamDispatcherHostResponseValidator;


class PLATFORM_EXPORT MediaStreamDispatcherHost
    : public MediaStreamDispatcherHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaStreamDispatcherHostInterfaceBase;
  using Proxy_ = MediaStreamDispatcherHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaStreamDispatcherHostStub<ImplRefTraits>;

  using RequestValidator_ = MediaStreamDispatcherHostRequestValidator;
  using ResponseValidator_ = MediaStreamDispatcherHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGenerateStreamMinVersion = 0,
    kCancelRequestMinVersion = 0,
    kStopStreamDeviceMinVersion = 0,
    kOpenDeviceMinVersion = 0,
    kCloseDeviceMinVersion = 0,
    kSetCapturingLinkSecuredMinVersion = 0,
    kOnStreamStartedMinVersion = 0,
  };
  virtual ~MediaStreamDispatcherHost() {}


  using GenerateStreamCallback = base::OnceCallback<void(MediaStreamRequestResult, const WTF::String&, WTF::Vector<MediaStreamDevicePtr>, WTF::Vector<MediaStreamDevicePtr>)>;
  
  virtual void GenerateStream(int32_t request_id, StreamControlsPtr controls, bool user_gesture, GenerateStreamCallback callback) = 0;

  
  virtual void CancelRequest(int32_t request_id) = 0;

  
  virtual void StopStreamDevice(const WTF::String& device_id, int32_t session_id) = 0;


  using OpenDeviceCallback = base::OnceCallback<void(bool, const WTF::String&, MediaStreamDevicePtr)>;
  
  virtual void OpenDevice(int32_t request_id, const WTF::String& device_id, MediaStreamType type, OpenDeviceCallback callback) = 0;

  
  virtual void CloseDevice(const WTF::String& label) = 0;

  
  virtual void SetCapturingLinkSecured(int32_t session_id, MediaStreamType type, bool is_secure) = 0;

  
  virtual void OnStreamStarted(const WTF::String& label) = 0;
};

class MediaStreamTrackMetricsHostProxy;

template <typename ImplRefTraits>
class MediaStreamTrackMetricsHostStub;

class MediaStreamTrackMetricsHostRequestValidator;


class PLATFORM_EXPORT MediaStreamTrackMetricsHost
    : public MediaStreamTrackMetricsHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaStreamTrackMetricsHostInterfaceBase;
  using Proxy_ = MediaStreamTrackMetricsHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaStreamTrackMetricsHostStub<ImplRefTraits>;

  using RequestValidator_ = MediaStreamTrackMetricsHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddTrackMinVersion = 0,
    kRemoveTrackMinVersion = 0,
  };
  virtual ~MediaStreamTrackMetricsHost() {}

  
  virtual void AddTrack(uint64_t id, bool is_audio, bool is_remote) = 0;

  
  virtual void RemoveTrack(uint64_t id) = 0;
};

class PLATFORM_EXPORT MediaStreamDeviceObserverProxy
    : public MediaStreamDeviceObserver {
 public:
  using InterfaceType = MediaStreamDeviceObserver;

  explicit MediaStreamDeviceObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceStopped(const WTF::String& label, MediaStreamDevicePtr device) final;
  void OnDeviceChanged(const WTF::String& label, MediaStreamDevicePtr old_device, MediaStreamDevicePtr new_device) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT MediaStreamDispatcherHostProxy
    : public MediaStreamDispatcherHost {
 public:
  using InterfaceType = MediaStreamDispatcherHost;

  explicit MediaStreamDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void GenerateStream(int32_t request_id, StreamControlsPtr controls, bool user_gesture, GenerateStreamCallback callback) final;
  void CancelRequest(int32_t request_id) final;
  void StopStreamDevice(const WTF::String& device_id, int32_t session_id) final;
  void OpenDevice(int32_t request_id, const WTF::String& device_id, MediaStreamType type, OpenDeviceCallback callback) final;
  void CloseDevice(const WTF::String& label) final;
  void SetCapturingLinkSecured(int32_t session_id, MediaStreamType type, bool is_secure) final;
  void OnStreamStarted(const WTF::String& label) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT MediaStreamTrackMetricsHostProxy
    : public MediaStreamTrackMetricsHost {
 public:
  using InterfaceType = MediaStreamTrackMetricsHost;

  explicit MediaStreamTrackMetricsHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddTrack(uint64_t id, bool is_audio, bool is_remote) final;
  void RemoveTrack(uint64_t id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT MediaStreamDeviceObserverStubDispatch {
 public:
  static bool Accept(MediaStreamDeviceObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaStreamDeviceObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaStreamDeviceObserver>>
class MediaStreamDeviceObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaStreamDeviceObserverStub() {}
  ~MediaStreamDeviceObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamDeviceObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamDeviceObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT MediaStreamDispatcherHostStubDispatch {
 public:
  static bool Accept(MediaStreamDispatcherHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaStreamDispatcherHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaStreamDispatcherHost>>
class MediaStreamDispatcherHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaStreamDispatcherHostStub() {}
  ~MediaStreamDispatcherHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamDispatcherHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamDispatcherHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT MediaStreamTrackMetricsHostStubDispatch {
 public:
  static bool Accept(MediaStreamTrackMetricsHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaStreamTrackMetricsHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaStreamTrackMetricsHost>>
class MediaStreamTrackMetricsHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaStreamTrackMetricsHostStub() {}
  ~MediaStreamTrackMetricsHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamTrackMetricsHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaStreamTrackMetricsHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT MediaStreamDeviceObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT MediaStreamDispatcherHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT MediaStreamTrackMetricsHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT MediaStreamDispatcherHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class PLATFORM_EXPORT TrackControls {
 public:
  using DataView = TrackControlsDataView;
  using Data_ = internal::TrackControls_Data;

  template <typename... Args>
  static TrackControlsPtr New(Args&&... args) {
    return TrackControlsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TrackControlsPtr From(const U& u) {
    return mojo::TypeConverter<TrackControlsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TrackControls>::Convert(*this);
  }


  TrackControls();

  TrackControls(
      bool requested,
      MediaStreamType stream_type,
      const WTF::String& device_id);

  ~TrackControls();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TrackControlsPtr>
  TrackControlsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TrackControls>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TrackControls::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TrackControls::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TrackControls_UnserializedMessageContext<
            UserType, TrackControls::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<TrackControls::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return TrackControls::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TrackControls_UnserializedMessageContext<
            UserType, TrackControls::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TrackControls::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool requested;
  
  MediaStreamType stream_type;
  
  WTF::String device_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class PLATFORM_EXPORT MediaStreamDevice {
 public:
  using DataView = MediaStreamDeviceDataView;
  using Data_ = internal::MediaStreamDevice_Data;

  template <typename... Args>
  static MediaStreamDevicePtr New(Args&&... args) {
    return MediaStreamDevicePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaStreamDevicePtr From(const U& u) {
    return mojo::TypeConverter<MediaStreamDevicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaStreamDevice>::Convert(*this);
  }


  MediaStreamDevice();

  MediaStreamDevice(
      MediaStreamType type,
      const WTF::String& id,
      ::media::mojom::blink::VideoFacingMode video_facing,
      const WTF::String& group_id,
      const WTF::String& matched_output_device_id,
      const WTF::String& name,
      ::media::mojom::blink::AudioParametersPtr input,
      int32_t session_id,
      ::media::mojom::blink::DisplayMediaInformationPtr display_media_info);

  ~MediaStreamDevice();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaStreamDevicePtr>
  MediaStreamDevicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaStreamDevice>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaStreamDevice::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaStreamDevice::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaStreamDevice_UnserializedMessageContext<
            UserType, MediaStreamDevice::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaStreamDevice::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaStreamDevice::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaStreamDevice_UnserializedMessageContext<
            UserType, MediaStreamDevice::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaStreamDevice::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  MediaStreamType type;
  
  WTF::String id;
  
  ::media::mojom::blink::VideoFacingMode video_facing;
  
  WTF::String group_id;
  
  WTF::String matched_output_device_id;
  
  WTF::String name;
  
  ::media::mojom::blink::AudioParametersPtr input;
  
  int32_t session_id;
  
  ::media::mojom::blink::DisplayMediaInformationPtr display_media_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MediaStreamDevice);
};






class PLATFORM_EXPORT StreamControls {
 public:
  using DataView = StreamControlsDataView;
  using Data_ = internal::StreamControls_Data;

  template <typename... Args>
  static StreamControlsPtr New(Args&&... args) {
    return StreamControlsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StreamControlsPtr From(const U& u) {
    return mojo::TypeConverter<StreamControlsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StreamControls>::Convert(*this);
  }


  StreamControls();

  StreamControls(
      TrackControlsPtr audio,
      TrackControlsPtr video,
      bool hotword_enabled,
      bool disable_local_echo);

  ~StreamControls();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StreamControlsPtr>
  StreamControlsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StreamControls>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StreamControls::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        StreamControls::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::StreamControls_UnserializedMessageContext<
            UserType, StreamControls::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<StreamControls::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return StreamControls::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::StreamControls_UnserializedMessageContext<
            UserType, StreamControls::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<StreamControls::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  TrackControlsPtr audio;
  
  TrackControlsPtr video;
  
  bool hotword_enabled;
  
  bool disable_local_echo;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(StreamControls);
};

template <typename StructPtrType>
MediaStreamDevicePtr MediaStreamDevice::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(id),
      mojo::Clone(video_facing),
      mojo::Clone(group_id),
      mojo::Clone(matched_output_device_id),
      mojo::Clone(name),
      mojo::Clone(input),
      mojo::Clone(session_id),
      mojo::Clone(display_media_info)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaStreamDevice>::value>::type*>
bool MediaStreamDevice::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->video_facing, other_struct.video_facing))
    return false;
  if (!mojo::Equals(this->group_id, other_struct.group_id))
    return false;
  if (!mojo::Equals(this->matched_output_device_id, other_struct.matched_output_device_id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->input, other_struct.input))
    return false;
  if (!mojo::Equals(this->session_id, other_struct.session_id))
    return false;
  if (!mojo::Equals(this->display_media_info, other_struct.display_media_info))
    return false;
  return true;
}
template <typename StructPtrType>
TrackControlsPtr TrackControls::Clone() const {
  return New(
      mojo::Clone(requested),
      mojo::Clone(stream_type),
      mojo::Clone(device_id)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TrackControls>::value>::type*>
bool TrackControls::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->requested, other_struct.requested))
    return false;
  if (!mojo::Equals(this->stream_type, other_struct.stream_type))
    return false;
  if (!mojo::Equals(this->device_id, other_struct.device_id))
    return false;
  return true;
}
template <typename StructPtrType>
StreamControlsPtr StreamControls::Clone() const {
  return New(
      mojo::Clone(audio),
      mojo::Clone(video),
      mojo::Clone(hotword_enabled),
      mojo::Clone(disable_local_echo)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StreamControls>::value>::type*>
bool StreamControls::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->audio, other_struct.audio))
    return false;
  if (!mojo::Equals(this->video, other_struct.video))
    return false;
  if (!mojo::Equals(this->hotword_enabled, other_struct.hotword_enabled))
    return false;
  if (!mojo::Equals(this->disable_local_echo, other_struct.disable_local_echo))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::MediaStreamDevice::DataView,
                                         ::blink::mojom::blink::MediaStreamDevicePtr> {
  static bool IsNull(const ::blink::mojom::blink::MediaStreamDevicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::MediaStreamDevicePtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::MediaStreamDevice::type) type(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::blink::MediaStreamDevice::id)& id(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->id;
  }

  static decltype(::blink::mojom::blink::MediaStreamDevice::video_facing) video_facing(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->video_facing;
  }

  static const decltype(::blink::mojom::blink::MediaStreamDevice::group_id)& group_id(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->group_id;
  }

  static const decltype(::blink::mojom::blink::MediaStreamDevice::matched_output_device_id)& matched_output_device_id(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->matched_output_device_id;
  }

  static const decltype(::blink::mojom::blink::MediaStreamDevice::name)& name(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::MediaStreamDevice::input)& input(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->input;
  }

  static decltype(::blink::mojom::blink::MediaStreamDevice::session_id) session_id(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->session_id;
  }

  static const decltype(::blink::mojom::blink::MediaStreamDevice::display_media_info)& display_media_info(
      const ::blink::mojom::blink::MediaStreamDevicePtr& input) {
    return input->display_media_info;
  }

  static bool Read(::blink::mojom::blink::MediaStreamDevice::DataView input, ::blink::mojom::blink::MediaStreamDevicePtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::TrackControls::DataView,
                                         ::blink::mojom::blink::TrackControlsPtr> {
  static bool IsNull(const ::blink::mojom::blink::TrackControlsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::TrackControlsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::TrackControls::requested) requested(
      const ::blink::mojom::blink::TrackControlsPtr& input) {
    return input->requested;
  }

  static decltype(::blink::mojom::blink::TrackControls::stream_type) stream_type(
      const ::blink::mojom::blink::TrackControlsPtr& input) {
    return input->stream_type;
  }

  static const decltype(::blink::mojom::blink::TrackControls::device_id)& device_id(
      const ::blink::mojom::blink::TrackControlsPtr& input) {
    return input->device_id;
  }

  static bool Read(::blink::mojom::blink::TrackControls::DataView input, ::blink::mojom::blink::TrackControlsPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::StreamControls::DataView,
                                         ::blink::mojom::blink::StreamControlsPtr> {
  static bool IsNull(const ::blink::mojom::blink::StreamControlsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::StreamControlsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::StreamControls::audio)& audio(
      const ::blink::mojom::blink::StreamControlsPtr& input) {
    return input->audio;
  }

  static const decltype(::blink::mojom::blink::StreamControls::video)& video(
      const ::blink::mojom::blink::StreamControlsPtr& input) {
    return input->video;
  }

  static decltype(::blink::mojom::blink::StreamControls::hotword_enabled) hotword_enabled(
      const ::blink::mojom::blink::StreamControlsPtr& input) {
    return input->hotword_enabled;
  }

  static decltype(::blink::mojom::blink::StreamControls::disable_local_echo) disable_local_echo(
      const ::blink::mojom::blink::StreamControlsPtr& input) {
    return input->disable_local_echo;
  }

  static bool Read(::blink::mojom::blink::StreamControls::DataView input, ::blink::mojom::blink::StreamControlsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_BLINK_H_