// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_H_

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
#include "services/media_session/public/mojom/media_session.mojom-shared.h"
#include "services/media_session/public/mojom/media_session.mojom-blink-forward.h"
#include "mojo/public/mojom/base/string16.mojom-blink.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

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
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct media_session_mojom_internal_MediaPlaybackState_DataHashFn {
  static unsigned GetHash(const ::media_session::mojom::MediaPlaybackState& value) {
    using utype = std::underlying_type<::media_session::mojom::MediaPlaybackState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media_session::mojom::MediaPlaybackState& left, const ::media_session::mojom::MediaPlaybackState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media_session::mojom::MediaPlaybackState>
    : public GenericHashTraits<::media_session::mojom::MediaPlaybackState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media_session::mojom::MediaPlaybackState& value) {
    return value == static_cast<::media_session::mojom::MediaPlaybackState>(-1000000);
  }
  static void ConstructDeletedValue(::media_session::mojom::MediaPlaybackState& slot, bool) {
    slot = static_cast<::media_session::mojom::MediaPlaybackState>(-1000001);
  }
  static bool IsDeletedValue(const ::media_session::mojom::MediaPlaybackState& value) {
    return value == static_cast<::media_session::mojom::MediaPlaybackState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct media_session_mojom_internal_MediaSessionAction_DataHashFn {
  static unsigned GetHash(const ::media_session::mojom::MediaSessionAction& value) {
    using utype = std::underlying_type<::media_session::mojom::MediaSessionAction>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media_session::mojom::MediaSessionAction& left, const ::media_session::mojom::MediaSessionAction& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media_session::mojom::MediaSessionAction>
    : public GenericHashTraits<::media_session::mojom::MediaSessionAction> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media_session::mojom::MediaSessionAction& value) {
    return value == static_cast<::media_session::mojom::MediaSessionAction>(-1000000);
  }
  static void ConstructDeletedValue(::media_session::mojom::MediaSessionAction& slot, bool) {
    slot = static_cast<::media_session::mojom::MediaSessionAction>(-1000001);
  }
  static bool IsDeletedValue(const ::media_session::mojom::MediaSessionAction& value) {
    return value == static_cast<::media_session::mojom::MediaSessionAction>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct media_session_mojom_internal_MediaSessionImageType_DataHashFn {
  static unsigned GetHash(const ::media_session::mojom::MediaSessionImageType& value) {
    using utype = std::underlying_type<::media_session::mojom::MediaSessionImageType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media_session::mojom::MediaSessionImageType& left, const ::media_session::mojom::MediaSessionImageType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media_session::mojom::MediaSessionImageType>
    : public GenericHashTraits<::media_session::mojom::MediaSessionImageType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media_session::mojom::MediaSessionImageType& value) {
    return value == static_cast<::media_session::mojom::MediaSessionImageType>(-1000000);
  }
  static void ConstructDeletedValue(::media_session::mojom::MediaSessionImageType& slot, bool) {
    slot = static_cast<::media_session::mojom::MediaSessionImageType>(-1000001);
  }
  static bool IsDeletedValue(const ::media_session::mojom::MediaSessionImageType& value) {
    return value == static_cast<::media_session::mojom::MediaSessionImageType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct media_session_mojom_internal_MediaSessionInfo_SessionState_DataHashFn {
  static unsigned GetHash(const ::media_session::mojom::MediaSessionInfo_SessionState& value) {
    using utype = std::underlying_type<::media_session::mojom::MediaSessionInfo_SessionState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media_session::mojom::MediaSessionInfo_SessionState& left, const ::media_session::mojom::MediaSessionInfo_SessionState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media_session::mojom::MediaSessionInfo_SessionState>
    : public GenericHashTraits<::media_session::mojom::MediaSessionInfo_SessionState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media_session::mojom::MediaSessionInfo_SessionState& value) {
    return value == static_cast<::media_session::mojom::MediaSessionInfo_SessionState>(-1000000);
  }
  static void ConstructDeletedValue(::media_session::mojom::MediaSessionInfo_SessionState& slot, bool) {
    slot = static_cast<::media_session::mojom::MediaSessionInfo_SessionState>(-1000001);
  }
  static bool IsDeletedValue(const ::media_session::mojom::MediaSessionInfo_SessionState& value) {
    return value == static_cast<::media_session::mojom::MediaSessionInfo_SessionState>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct media_session_mojom_internal_MediaSession_SuspendType_DataHashFn {
  static unsigned GetHash(const ::media_session::mojom::MediaSession_SuspendType& value) {
    using utype = std::underlying_type<::media_session::mojom::MediaSession_SuspendType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::media_session::mojom::MediaSession_SuspendType& left, const ::media_session::mojom::MediaSession_SuspendType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::media_session::mojom::MediaSession_SuspendType>
    : public GenericHashTraits<::media_session::mojom::MediaSession_SuspendType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool hasIsEmptyValueFunction = true;
  static bool IsEmptyValue(const ::media_session::mojom::MediaSession_SuspendType& value) {
    return value == static_cast<::media_session::mojom::MediaSession_SuspendType>(-1000000);
  }
  static void ConstructDeletedValue(::media_session::mojom::MediaSession_SuspendType& slot, bool) {
    slot = static_cast<::media_session::mojom::MediaSession_SuspendType>(-1000001);
  }
  static bool IsDeletedValue(const ::media_session::mojom::MediaSession_SuspendType& value) {
    return value == static_cast<::media_session::mojom::MediaSession_SuspendType>(-1000001);
  }
};
}  // namespace WTF


namespace media_session {
namespace mojom {
namespace blink {

class MediaSessionObserverProxy;

template <typename ImplRefTraits>
class MediaSessionObserverStub;

class MediaSessionObserverRequestValidator;


class BLINK_PLATFORM_EXPORT MediaSessionObserver
    : public MediaSessionObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaSessionObserverInterfaceBase;
  using Proxy_ = MediaSessionObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaSessionObserverStub<ImplRefTraits>;

  using RequestValidator_ = MediaSessionObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kMediaSessionInfoChangedMinVersion = 0,
    kMediaSessionMetadataChangedMinVersion = 0,
    kMediaSessionActionsChangedMinVersion = 0,
    kMediaSessionImagesChangedMinVersion = 0,
  };
  virtual ~MediaSessionObserver() {}

  
  virtual void MediaSessionInfoChanged(MediaSessionInfoPtr info) = 0;

  
  virtual void MediaSessionMetadataChanged(MediaMetadataPtr metadata) = 0;

  
  virtual void MediaSessionActionsChanged(const WTF::Vector<MediaSessionAction>& action) = 0;

  
  virtual void MediaSessionImagesChanged(WTF::HashMap<MediaSessionImageType, WTF::Vector<MediaImagePtr>> images) = 0;
};

class MediaSessionProxy;

template <typename ImplRefTraits>
class MediaSessionStub;

class MediaSessionRequestValidator;
class MediaSessionResponseValidator;


class BLINK_PLATFORM_EXPORT MediaSession
    : public MediaSessionInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaSessionInterfaceBase;
  using Proxy_ = MediaSessionProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaSessionStub<ImplRefTraits>;

  using RequestValidator_ = MediaSessionRequestValidator;
  using ResponseValidator_ = MediaSessionResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetMediaSessionInfoMinVersion = 0,
    kGetDebugInfoMinVersion = 0,
    kStartDuckingMinVersion = 0,
    kStopDuckingMinVersion = 0,
    kSuspendMinVersion = 0,
    kResumeMinVersion = 0,
    kAddObserverMinVersion = 0,
    kPreviousTrackMinVersion = 0,
    kNextTrackMinVersion = 0,
    kSeekMinVersion = 0,
    kStopMinVersion = 0,
    kSkipAdMinVersion = 0,
    kGetMediaImageBitmapMinVersion = 0,
  };
  
  using SuspendType = MediaSession_SuspendType;
  virtual ~MediaSession() {}


  using GetMediaSessionInfoCallback = base::OnceCallback<void(MediaSessionInfoPtr)>;
  
  virtual void GetMediaSessionInfo(GetMediaSessionInfoCallback callback) = 0;


  using GetDebugInfoCallback = base::OnceCallback<void(MediaSessionDebugInfoPtr)>;
  
  virtual void GetDebugInfo(GetDebugInfoCallback callback) = 0;

  
  virtual void StartDucking() = 0;

  
  virtual void StopDucking() = 0;

  
  virtual void Suspend(MediaSession::SuspendType suspend_type) = 0;

  
  virtual void Resume(MediaSession::SuspendType suspend_type) = 0;

  
  virtual void AddObserver(MediaSessionObserverPtr observer) = 0;

  
  virtual void PreviousTrack() = 0;

  
  virtual void NextTrack() = 0;

  
  virtual void Seek(base::TimeDelta seek_time) = 0;

  
  virtual void Stop(MediaSession::SuspendType suspend_type) = 0;

  
  virtual void SkipAd() = 0;


  using GetMediaImageBitmapCallback = base::OnceCallback<void(MediaImageBitmapPtr)>;
  
  virtual void GetMediaImageBitmap(MediaImagePtr image, int32_t minimum_size_px, int32_t desired_size_px, GetMediaImageBitmapCallback callback) = 0;
};

class BLINK_PLATFORM_EXPORT MediaSessionObserverProxy
    : public MediaSessionObserver {
 public:
  using InterfaceType = MediaSessionObserver;

  explicit MediaSessionObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void MediaSessionInfoChanged(MediaSessionInfoPtr info) final;
  void MediaSessionMetadataChanged(MediaMetadataPtr metadata) final;
  void MediaSessionActionsChanged(const WTF::Vector<MediaSessionAction>& action) final;
  void MediaSessionImagesChanged(WTF::HashMap<MediaSessionImageType, WTF::Vector<MediaImagePtr>> images) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_PLATFORM_EXPORT MediaSessionProxy
    : public MediaSession {
 public:
  using InterfaceType = MediaSession;

  explicit MediaSessionProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetMediaSessionInfo(GetMediaSessionInfoCallback callback) final;
  void GetDebugInfo(GetDebugInfoCallback callback) final;
  void StartDucking() final;
  void StopDucking() final;
  void Suspend(MediaSession::SuspendType suspend_type) final;
  void Resume(MediaSession::SuspendType suspend_type) final;
  void AddObserver(MediaSessionObserverPtr observer) final;
  void PreviousTrack() final;
  void NextTrack() final;
  void Seek(base::TimeDelta seek_time) final;
  void Stop(MediaSession::SuspendType suspend_type) final;
  void SkipAd() final;
  void GetMediaImageBitmap(MediaImagePtr image, int32_t minimum_size_px, int32_t desired_size_px, GetMediaImageBitmapCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT MediaSessionObserverStubDispatch {
 public:
  static bool Accept(MediaSessionObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaSessionObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaSessionObserver>>
class MediaSessionObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaSessionObserverStub() {}
  ~MediaSessionObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT MediaSessionStubDispatch {
 public:
  static bool Accept(MediaSession* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaSession* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaSession>>
class MediaSessionStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaSessionStub() {}
  ~MediaSessionStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaSessionStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT MediaSessionObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class BLINK_PLATFORM_EXPORT MediaSessionDebugInfo {
 public:
  using DataView = MediaSessionDebugInfoDataView;
  using Data_ = internal::MediaSessionDebugInfo_Data;

  template <typename... Args>
  static MediaSessionDebugInfoPtr New(Args&&... args) {
    return MediaSessionDebugInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaSessionDebugInfoPtr From(const U& u) {
    return mojo::TypeConverter<MediaSessionDebugInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaSessionDebugInfo>::Convert(*this);
  }


  MediaSessionDebugInfo();

  MediaSessionDebugInfo(
      const WTF::String& name,
      const WTF::String& owner,
      const WTF::String& state);

  ~MediaSessionDebugInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaSessionDebugInfoPtr>
  MediaSessionDebugInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaSessionDebugInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaSessionDebugInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaSessionDebugInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaSessionDebugInfo_UnserializedMessageContext<
            UserType, MediaSessionDebugInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaSessionDebugInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaSessionDebugInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaSessionDebugInfo_UnserializedMessageContext<
            UserType, MediaSessionDebugInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaSessionDebugInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String name;
  
  WTF::String owner;
  
  WTF::String state;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};







class BLINK_PLATFORM_EXPORT MediaImage {
 public:
  using DataView = MediaImageDataView;
  using Data_ = internal::MediaImage_Data;

  template <typename... Args>
  static MediaImagePtr New(Args&&... args) {
    return MediaImagePtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaImagePtr From(const U& u) {
    return mojo::TypeConverter<MediaImagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaImage>::Convert(*this);
  }


  MediaImage();

  MediaImage(
      const ::blink::KURL& src,
      const WTF::String& type,
      const WTF::Vector<::blink::WebSize>& sizes);

  ~MediaImage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaImagePtr>
  MediaImagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaImage>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaImage::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaImage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaImage_UnserializedMessageContext<
            UserType, MediaImage::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaImage::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaImage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaImage_UnserializedMessageContext<
            UserType, MediaImage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaImage::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  ::blink::KURL src;
  
  WTF::String type;
  
  WTF::Vector<::blink::WebSize> sizes;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT MediaMetadata {
 public:
  using DataView = MediaMetadataDataView;
  using Data_ = internal::MediaMetadata_Data;

  template <typename... Args>
  static MediaMetadataPtr New(Args&&... args) {
    return MediaMetadataPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaMetadataPtr From(const U& u) {
    return mojo::TypeConverter<MediaMetadataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaMetadata>::Convert(*this);
  }


  MediaMetadata();

  MediaMetadata(
      const WTF::String& title,
      const WTF::String& artist,
      const WTF::String& album,
      const WTF::String& source_title);

  ~MediaMetadata();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaMetadataPtr>
  MediaMetadataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaMetadata>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaMetadata::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaMetadata::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaMetadata_UnserializedMessageContext<
            UserType, MediaMetadata::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaMetadata::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaMetadata::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaMetadata_UnserializedMessageContext<
            UserType, MediaMetadata::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaMetadata::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  WTF::String title;
  
  WTF::String artist;
  
  WTF::String album;
  
  WTF::String source_title;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT MediaImageBitmap {
 public:
  using DataView = MediaImageBitmapDataView;
  using Data_ = internal::MediaImageBitmap_Data;

  template <typename... Args>
  static MediaImageBitmapPtr New(Args&&... args) {
    return MediaImageBitmapPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaImageBitmapPtr From(const U& u) {
    return mojo::TypeConverter<MediaImageBitmapPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaImageBitmap>::Convert(*this);
  }


  MediaImageBitmap();

  MediaImageBitmap(
      int32_t width,
      int32_t height,
      const WTF::Vector<uint8_t>& pixel_data);

  ~MediaImageBitmap();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaImageBitmapPtr>
  MediaImageBitmapPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaImageBitmap>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaImageBitmap::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaImageBitmap::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaImageBitmap_UnserializedMessageContext<
            UserType, MediaImageBitmap::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaImageBitmap::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaImageBitmap::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaImageBitmap_UnserializedMessageContext<
            UserType, MediaImageBitmap::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaImageBitmap::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  int32_t width;
  
  int32_t height;
  
  WTF::Vector<uint8_t> pixel_data;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};





class BLINK_PLATFORM_EXPORT MediaSessionInfo {
 public:
  using DataView = MediaSessionInfoDataView;
  using Data_ = internal::MediaSessionInfo_Data;
  using SessionState = MediaSessionInfo_SessionState;

  template <typename... Args>
  static MediaSessionInfoPtr New(Args&&... args) {
    return MediaSessionInfoPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MediaSessionInfoPtr From(const U& u) {
    return mojo::TypeConverter<MediaSessionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaSessionInfo>::Convert(*this);
  }


  MediaSessionInfo();

  MediaSessionInfo(
      MediaSessionInfo::SessionState state,
      bool force_duck);

  MediaSessionInfo(
      MediaSessionInfo::SessionState state,
      bool force_duck,
      MediaPlaybackState playback_state);

  MediaSessionInfo(
      MediaSessionInfo::SessionState state,
      bool force_duck,
      MediaPlaybackState playback_state,
      bool is_controllable);

  MediaSessionInfo(
      MediaSessionInfo::SessionState state,
      bool force_duck,
      MediaPlaybackState playback_state,
      bool is_controllable,
      bool prefer_stop_for_gain_focus_loss);

  ~MediaSessionInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MediaSessionInfoPtr>
  MediaSessionInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, MediaSessionInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MediaSessionInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MediaSessionInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MediaSessionInfo_UnserializedMessageContext<
            UserType, MediaSessionInfo::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<MediaSessionInfo::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MediaSessionInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MediaSessionInfo_UnserializedMessageContext<
            UserType, MediaSessionInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MediaSessionInfo::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  MediaSessionInfo::SessionState state;
  
  bool force_duck;
  
  MediaPlaybackState playback_state;
  
  bool is_controllable;
  
  bool prefer_stop_for_gain_focus_loss;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};


template <typename StructPtrType>
MediaImagePtr MediaImage::Clone() const {
  return New(
      mojo::Clone(src),
      mojo::Clone(type),
      mojo::Clone(sizes)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaImage>::value>::type*>
bool MediaImage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->src, other_struct.src))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->sizes, other_struct.sizes))
    return false;
  return true;
}
template <typename StructPtrType>
MediaMetadataPtr MediaMetadata::Clone() const {
  return New(
      mojo::Clone(title),
      mojo::Clone(artist),
      mojo::Clone(album),
      mojo::Clone(source_title)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaMetadata>::value>::type*>
bool MediaMetadata::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->artist, other_struct.artist))
    return false;
  if (!mojo::Equals(this->album, other_struct.album))
    return false;
  if (!mojo::Equals(this->source_title, other_struct.source_title))
    return false;
  return true;
}
template <typename StructPtrType>
MediaImageBitmapPtr MediaImageBitmap::Clone() const {
  return New(
      mojo::Clone(width),
      mojo::Clone(height),
      mojo::Clone(pixel_data)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaImageBitmap>::value>::type*>
bool MediaImageBitmap::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->width, other_struct.width))
    return false;
  if (!mojo::Equals(this->height, other_struct.height))
    return false;
  if (!mojo::Equals(this->pixel_data, other_struct.pixel_data))
    return false;
  return true;
}
template <typename StructPtrType>
MediaSessionInfoPtr MediaSessionInfo::Clone() const {
  return New(
      mojo::Clone(state),
      mojo::Clone(force_duck),
      mojo::Clone(playback_state),
      mojo::Clone(is_controllable),
      mojo::Clone(prefer_stop_for_gain_focus_loss)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaSessionInfo>::value>::type*>
bool MediaSessionInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  if (!mojo::Equals(this->force_duck, other_struct.force_duck))
    return false;
  if (!mojo::Equals(this->playback_state, other_struct.playback_state))
    return false;
  if (!mojo::Equals(this->is_controllable, other_struct.is_controllable))
    return false;
  if (!mojo::Equals(this->prefer_stop_for_gain_focus_loss, other_struct.prefer_stop_for_gain_focus_loss))
    return false;
  return true;
}
template <typename StructPtrType>
MediaSessionDebugInfoPtr MediaSessionDebugInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(owner),
      mojo::Clone(state)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, MediaSessionDebugInfo>::value>::type*>
bool MediaSessionDebugInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->owner, other_struct.owner))
    return false;
  if (!mojo::Equals(this->state, other_struct.state))
    return false;
  return true;
}


}  // namespace blink
}  // namespace mojom
}  // namespace media_session

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media_session::mojom::blink::MediaImage::DataView,
                                         ::media_session::mojom::blink::MediaImagePtr> {
  static bool IsNull(const ::media_session::mojom::blink::MediaImagePtr& input) { return !input; }
  static void SetToNull(::media_session::mojom::blink::MediaImagePtr* output) { output->reset(); }

  static const decltype(::media_session::mojom::blink::MediaImage::src)& src(
      const ::media_session::mojom::blink::MediaImagePtr& input) {
    return input->src;
  }

  static const decltype(::media_session::mojom::blink::MediaImage::type)& type(
      const ::media_session::mojom::blink::MediaImagePtr& input) {
    return input->type;
  }

  static const decltype(::media_session::mojom::blink::MediaImage::sizes)& sizes(
      const ::media_session::mojom::blink::MediaImagePtr& input) {
    return input->sizes;
  }

  static bool Read(::media_session::mojom::blink::MediaImage::DataView input, ::media_session::mojom::blink::MediaImagePtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media_session::mojom::blink::MediaMetadata::DataView,
                                         ::media_session::mojom::blink::MediaMetadataPtr> {
  static bool IsNull(const ::media_session::mojom::blink::MediaMetadataPtr& input) { return !input; }
  static void SetToNull(::media_session::mojom::blink::MediaMetadataPtr* output) { output->reset(); }

  static const decltype(::media_session::mojom::blink::MediaMetadata::title)& title(
      const ::media_session::mojom::blink::MediaMetadataPtr& input) {
    return input->title;
  }

  static const decltype(::media_session::mojom::blink::MediaMetadata::artist)& artist(
      const ::media_session::mojom::blink::MediaMetadataPtr& input) {
    return input->artist;
  }

  static const decltype(::media_session::mojom::blink::MediaMetadata::album)& album(
      const ::media_session::mojom::blink::MediaMetadataPtr& input) {
    return input->album;
  }

  static const decltype(::media_session::mojom::blink::MediaMetadata::source_title)& source_title(
      const ::media_session::mojom::blink::MediaMetadataPtr& input) {
    return input->source_title;
  }

  static bool Read(::media_session::mojom::blink::MediaMetadata::DataView input, ::media_session::mojom::blink::MediaMetadataPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media_session::mojom::blink::MediaImageBitmap::DataView,
                                         ::media_session::mojom::blink::MediaImageBitmapPtr> {
  static bool IsNull(const ::media_session::mojom::blink::MediaImageBitmapPtr& input) { return !input; }
  static void SetToNull(::media_session::mojom::blink::MediaImageBitmapPtr* output) { output->reset(); }

  static decltype(::media_session::mojom::blink::MediaImageBitmap::width) width(
      const ::media_session::mojom::blink::MediaImageBitmapPtr& input) {
    return input->width;
  }

  static decltype(::media_session::mojom::blink::MediaImageBitmap::height) height(
      const ::media_session::mojom::blink::MediaImageBitmapPtr& input) {
    return input->height;
  }

  static const decltype(::media_session::mojom::blink::MediaImageBitmap::pixel_data)& pixel_data(
      const ::media_session::mojom::blink::MediaImageBitmapPtr& input) {
    return input->pixel_data;
  }

  static bool Read(::media_session::mojom::blink::MediaImageBitmap::DataView input, ::media_session::mojom::blink::MediaImageBitmapPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media_session::mojom::blink::MediaSessionInfo::DataView,
                                         ::media_session::mojom::blink::MediaSessionInfoPtr> {
  static bool IsNull(const ::media_session::mojom::blink::MediaSessionInfoPtr& input) { return !input; }
  static void SetToNull(::media_session::mojom::blink::MediaSessionInfoPtr* output) { output->reset(); }

  static decltype(::media_session::mojom::blink::MediaSessionInfo::state) state(
      const ::media_session::mojom::blink::MediaSessionInfoPtr& input) {
    return input->state;
  }

  static decltype(::media_session::mojom::blink::MediaSessionInfo::force_duck) force_duck(
      const ::media_session::mojom::blink::MediaSessionInfoPtr& input) {
    return input->force_duck;
  }

  static decltype(::media_session::mojom::blink::MediaSessionInfo::playback_state) playback_state(
      const ::media_session::mojom::blink::MediaSessionInfoPtr& input) {
    return input->playback_state;
  }

  static decltype(::media_session::mojom::blink::MediaSessionInfo::is_controllable) is_controllable(
      const ::media_session::mojom::blink::MediaSessionInfoPtr& input) {
    return input->is_controllable;
  }

  static decltype(::media_session::mojom::blink::MediaSessionInfo::prefer_stop_for_gain_focus_loss) prefer_stop_for_gain_focus_loss(
      const ::media_session::mojom::blink::MediaSessionInfoPtr& input) {
    return input->prefer_stop_for_gain_focus_loss;
  }

  static bool Read(::media_session::mojom::blink::MediaSessionInfo::DataView input, ::media_session::mojom::blink::MediaSessionInfoPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::media_session::mojom::blink::MediaSessionDebugInfo::DataView,
                                         ::media_session::mojom::blink::MediaSessionDebugInfoPtr> {
  static bool IsNull(const ::media_session::mojom::blink::MediaSessionDebugInfoPtr& input) { return !input; }
  static void SetToNull(::media_session::mojom::blink::MediaSessionDebugInfoPtr* output) { output->reset(); }

  static const decltype(::media_session::mojom::blink::MediaSessionDebugInfo::name)& name(
      const ::media_session::mojom::blink::MediaSessionDebugInfoPtr& input) {
    return input->name;
  }

  static const decltype(::media_session::mojom::blink::MediaSessionDebugInfo::owner)& owner(
      const ::media_session::mojom::blink::MediaSessionDebugInfoPtr& input) {
    return input->owner;
  }

  static const decltype(::media_session::mojom::blink::MediaSessionDebugInfo::state)& state(
      const ::media_session::mojom::blink::MediaSessionDebugInfoPtr& input) {
    return input->state;
  }

  static bool Read(::media_session::mojom::blink::MediaSessionDebugInfo::DataView input, ::media_session::mojom::blink::MediaSessionDebugInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_H_