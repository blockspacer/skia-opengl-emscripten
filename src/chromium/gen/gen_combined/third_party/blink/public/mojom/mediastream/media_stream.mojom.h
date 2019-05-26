// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_H_

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
#include "third_party/blink/public/mojom/mediastream/media_stream.mojom-forward.h"
#include "media/capture/mojom/video_capture_types.mojom.h"
#include "media/mojo/interfaces/audio_parameters.mojom.h"
#include "media/mojo/interfaces/display_media_information.mojom.h"
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
#include "third_party/blink/public/common/common_export.h"
#include "third_party/blink/public/common/mediastream/media_stream_controls.h"
#include "third_party/blink/public/common/mediastream/media_stream_request.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class MediaStreamDeviceObserverProxy;

template <typename ImplRefTraits>
class MediaStreamDeviceObserverStub;

class MediaStreamDeviceObserverRequestValidator;


class BLINK_COMMON_EXPORT MediaStreamDeviceObserver
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

  
  virtual void OnDeviceStopped(const std::string& label, const blink::MediaStreamDevice& device) = 0;

  
  virtual void OnDeviceChanged(const std::string& label, const blink::MediaStreamDevice& old_device, const blink::MediaStreamDevice& new_device) = 0;
};

class MediaStreamDispatcherHostProxy;

template <typename ImplRefTraits>
class MediaStreamDispatcherHostStub;

class MediaStreamDispatcherHostRequestValidator;
class MediaStreamDispatcherHostResponseValidator;


class BLINK_COMMON_EXPORT MediaStreamDispatcherHost
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


  using GenerateStreamCallback = base::OnceCallback<void(blink::MediaStreamRequestResult, const std::string&, const std::vector<blink::MediaStreamDevice>&, const std::vector<blink::MediaStreamDevice>&)>;
  
  virtual void GenerateStream(int32_t request_id, const blink::StreamControls& controls, bool user_gesture, GenerateStreamCallback callback) = 0;

  
  virtual void CancelRequest(int32_t request_id) = 0;

  
  virtual void StopStreamDevice(const std::string& device_id, int32_t session_id) = 0;


  using OpenDeviceCallback = base::OnceCallback<void(bool, const std::string&, const blink::MediaStreamDevice&)>;
  
  virtual void OpenDevice(int32_t request_id, const std::string& device_id, blink::MediaStreamType type, OpenDeviceCallback callback) = 0;

  
  virtual void CloseDevice(const std::string& label) = 0;

  
  virtual void SetCapturingLinkSecured(int32_t session_id, blink::MediaStreamType type, bool is_secure) = 0;

  
  virtual void OnStreamStarted(const std::string& label) = 0;
};

class MediaStreamTrackMetricsHostProxy;

template <typename ImplRefTraits>
class MediaStreamTrackMetricsHostStub;

class MediaStreamTrackMetricsHostRequestValidator;


class BLINK_COMMON_EXPORT MediaStreamTrackMetricsHost
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

class BLINK_COMMON_EXPORT MediaStreamDeviceObserverProxy
    : public MediaStreamDeviceObserver {
 public:
  using InterfaceType = MediaStreamDeviceObserver;

  explicit MediaStreamDeviceObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceStopped(const std::string& label, const blink::MediaStreamDevice& device) final;
  void OnDeviceChanged(const std::string& label, const blink::MediaStreamDevice& old_device, const blink::MediaStreamDevice& new_device) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT MediaStreamDispatcherHostProxy
    : public MediaStreamDispatcherHost {
 public:
  using InterfaceType = MediaStreamDispatcherHost;

  explicit MediaStreamDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void GenerateStream(int32_t request_id, const blink::StreamControls& controls, bool user_gesture, GenerateStreamCallback callback) final;
  void CancelRequest(int32_t request_id) final;
  void StopStreamDevice(const std::string& device_id, int32_t session_id) final;
  void OpenDevice(int32_t request_id, const std::string& device_id, blink::MediaStreamType type, OpenDeviceCallback callback) final;
  void CloseDevice(const std::string& label) final;
  void SetCapturingLinkSecured(int32_t session_id, blink::MediaStreamType type, bool is_secure) final;
  void OnStreamStarted(const std::string& label) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT MediaStreamTrackMetricsHostProxy
    : public MediaStreamTrackMetricsHost {
 public:
  using InterfaceType = MediaStreamTrackMetricsHost;

  explicit MediaStreamTrackMetricsHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddTrack(uint64_t id, bool is_audio, bool is_remote) final;
  void RemoveTrack(uint64_t id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT MediaStreamDeviceObserverStubDispatch {
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
class BLINK_COMMON_EXPORT MediaStreamDispatcherHostStubDispatch {
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
class BLINK_COMMON_EXPORT MediaStreamTrackMetricsHostStubDispatch {
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
class BLINK_COMMON_EXPORT MediaStreamDeviceObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT MediaStreamDispatcherHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT MediaStreamTrackMetricsHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT MediaStreamDispatcherHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};






class BLINK_COMMON_EXPORT TrackControls {
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
      blink::MediaStreamType stream_type,
      const std::string& device_id);

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

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TrackControls::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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
  
  blink::MediaStreamType stream_type;
  
  std::string device_id;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};








class BLINK_COMMON_EXPORT MediaStreamDevice {
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
      blink::MediaStreamType type,
      const std::string& id,
      media::VideoFacingMode video_facing,
      const base::Optional<std::string>& group_id,
      const base::Optional<std::string>& matched_output_device_id,
      const std::string& name,
      const media::AudioParameters& input,
      int32_t session_id,
      ::media::mojom::DisplayMediaInformationPtr display_media_info);

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
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaStreamDevice::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  blink::MediaStreamType type;
  
  std::string id;
  
  media::VideoFacingMode video_facing;
  
  base::Optional<std::string> group_id;
  
  base::Optional<std::string> matched_output_device_id;
  
  std::string name;
  
  media::AudioParameters input;
  
  int32_t session_id;
  
  ::media::mojom::DisplayMediaInformationPtr display_media_info;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
  DISALLOW_COPY_AND_ASSIGN(MediaStreamDevice);
};






class BLINK_COMMON_EXPORT StreamControls {
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
      const blink::TrackControls& audio,
      const blink::TrackControls& video,
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

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        StreamControls::DataView, std::vector<uint8_t>>(input);
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
  static bool Deserialize(const std::vector<uint8_t>& input,
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

  
  blink::TrackControls audio;
  
  blink::TrackControls video;
  
  bool hotword_enabled;
  
  bool disable_local_echo;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
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


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::MediaStreamDevice::DataView,
                                         ::blink::mojom::MediaStreamDevicePtr> {
  static bool IsNull(const ::blink::mojom::MediaStreamDevicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::MediaStreamDevicePtr* output) { output->reset(); }

  static decltype(::blink::mojom::MediaStreamDevice::type) type(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::MediaStreamDevice::id)& id(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->id;
  }

  static decltype(::blink::mojom::MediaStreamDevice::video_facing) video_facing(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->video_facing;
  }

  static const decltype(::blink::mojom::MediaStreamDevice::group_id)& group_id(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->group_id;
  }

  static const decltype(::blink::mojom::MediaStreamDevice::matched_output_device_id)& matched_output_device_id(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->matched_output_device_id;
  }

  static const decltype(::blink::mojom::MediaStreamDevice::name)& name(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::MediaStreamDevice::input)& input(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->input;
  }

  static decltype(::blink::mojom::MediaStreamDevice::session_id) session_id(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->session_id;
  }

  static const decltype(::blink::mojom::MediaStreamDevice::display_media_info)& display_media_info(
      const ::blink::mojom::MediaStreamDevicePtr& input) {
    return input->display_media_info;
  }

  static bool Read(::blink::mojom::MediaStreamDevice::DataView input, ::blink::mojom::MediaStreamDevicePtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::TrackControls::DataView,
                                         ::blink::mojom::TrackControlsPtr> {
  static bool IsNull(const ::blink::mojom::TrackControlsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::TrackControlsPtr* output) { output->reset(); }

  static decltype(::blink::mojom::TrackControls::requested) requested(
      const ::blink::mojom::TrackControlsPtr& input) {
    return input->requested;
  }

  static decltype(::blink::mojom::TrackControls::stream_type) stream_type(
      const ::blink::mojom::TrackControlsPtr& input) {
    return input->stream_type;
  }

  static const decltype(::blink::mojom::TrackControls::device_id)& device_id(
      const ::blink::mojom::TrackControlsPtr& input) {
    return input->device_id;
  }

  static bool Read(::blink::mojom::TrackControls::DataView input, ::blink::mojom::TrackControlsPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::StreamControls::DataView,
                                         ::blink::mojom::StreamControlsPtr> {
  static bool IsNull(const ::blink::mojom::StreamControlsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::StreamControlsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::StreamControls::audio)& audio(
      const ::blink::mojom::StreamControlsPtr& input) {
    return input->audio;
  }

  static const decltype(::blink::mojom::StreamControls::video)& video(
      const ::blink::mojom::StreamControlsPtr& input) {
    return input->video;
  }

  static decltype(::blink::mojom::StreamControls::hotword_enabled) hotword_enabled(
      const ::blink::mojom::StreamControlsPtr& input) {
    return input->hotword_enabled;
  }

  static decltype(::blink::mojom::StreamControls::disable_local_echo) disable_local_echo(
      const ::blink::mojom::StreamControlsPtr& input) {
    return input->disable_local_echo;
  }

  static bool Read(::blink::mojom::StreamControls::DataView input, ::blink::mojom::StreamControlsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIASTREAM_MEDIA_STREAM_MOJOM_H_