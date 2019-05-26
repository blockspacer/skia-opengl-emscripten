// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_H_

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
#include "services/media_session/public/mojom/media_controller.mojom-shared.h"
#include "services/media_session/public/mojom/media_controller.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-forward.h"
#include "services/media_session/public/mojom/media_session.mojom-forward.h"
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




namespace media_session {
namespace mojom {

class MediaControllerManagerProxy;

template <typename ImplRefTraits>
class MediaControllerManagerStub;

class MediaControllerManagerRequestValidator;


class  MediaControllerManager
    : public MediaControllerManagerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaControllerManagerInterfaceBase;
  using Proxy_ = MediaControllerManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaControllerManagerStub<ImplRefTraits>;

  using RequestValidator_ = MediaControllerManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateMediaControllerForSessionMinVersion = 0,
    kCreateActiveMediaControllerMinVersion = 0,
    kSuspendAllSessionsMinVersion = 0,
  };
  virtual ~MediaControllerManager() {}

  
  virtual void CreateMediaControllerForSession(MediaControllerRequest request, const base::UnguessableToken& request_id) = 0;

  
  virtual void CreateActiveMediaController(MediaControllerRequest request) = 0;

  
  virtual void SuspendAllSessions() = 0;
};

class MediaControllerProxy;

template <typename ImplRefTraits>
class MediaControllerStub;

class MediaControllerRequestValidator;


class  MediaController
    : public MediaControllerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaControllerInterfaceBase;
  using Proxy_ = MediaControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaControllerStub<ImplRefTraits>;

  using RequestValidator_ = MediaControllerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSuspendMinVersion = 0,
    kResumeMinVersion = 0,
    kStopMinVersion = 0,
    kToggleSuspendResumeMinVersion = 0,
    kAddObserverMinVersion = 0,
    kPreviousTrackMinVersion = 0,
    kNextTrackMinVersion = 0,
    kSeekMinVersion = 0,
    kObserveImagesMinVersion = 0,
  };
  virtual ~MediaController() {}

  
  virtual void Suspend() = 0;

  
  virtual void Resume() = 0;

  
  virtual void Stop() = 0;

  
  virtual void ToggleSuspendResume() = 0;

  
  virtual void AddObserver(MediaControllerObserverPtr observer) = 0;

  
  virtual void PreviousTrack() = 0;

  
  virtual void NextTrack() = 0;

  
  virtual void Seek(base::TimeDelta seek_time) = 0;

  
  virtual void ObserveImages(::media_session::mojom::MediaSessionImageType type, int32_t minimum_size_px, int32_t desired_size_px, MediaControllerImageObserverPtr observer) = 0;
};

class MediaControllerObserverProxy;

template <typename ImplRefTraits>
class MediaControllerObserverStub;

class MediaControllerObserverRequestValidator;


class  MediaControllerObserver
    : public MediaControllerObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaControllerObserverInterfaceBase;
  using Proxy_ = MediaControllerObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaControllerObserverStub<ImplRefTraits>;

  using RequestValidator_ = MediaControllerObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kMediaSessionInfoChangedMinVersion = 0,
    kMediaSessionMetadataChangedMinVersion = 0,
    kMediaSessionActionsChangedMinVersion = 0,
    kMediaSessionChangedMinVersion = 0,
  };
  virtual ~MediaControllerObserver() {}

  
  virtual void MediaSessionInfoChanged(::media_session::mojom::MediaSessionInfoPtr info) = 0;

  
  virtual void MediaSessionMetadataChanged(const base::Optional<media_session::MediaMetadata>& metadata) = 0;

  
  virtual void MediaSessionActionsChanged(const std::vector<::media_session::mojom::MediaSessionAction>& action) = 0;

  
  virtual void MediaSessionChanged(const base::Optional<base::UnguessableToken>& request_id) = 0;
};

class MediaControllerImageObserverProxy;

template <typename ImplRefTraits>
class MediaControllerImageObserverStub;

class MediaControllerImageObserverRequestValidator;


class  MediaControllerImageObserver
    : public MediaControllerImageObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaControllerImageObserverInterfaceBase;
  using Proxy_ = MediaControllerImageObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaControllerImageObserverStub<ImplRefTraits>;

  using RequestValidator_ = MediaControllerImageObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kMediaControllerImageChangedMinVersion = 0,
  };
  virtual ~MediaControllerImageObserver() {}

  
  virtual void MediaControllerImageChanged(::media_session::mojom::MediaSessionImageType type, const SkBitmap& bitmap) = 0;
};

class  MediaControllerManagerProxy
    : public MediaControllerManager {
 public:
  using InterfaceType = MediaControllerManager;

  explicit MediaControllerManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateMediaControllerForSession(MediaControllerRequest request, const base::UnguessableToken& request_id) final;
  void CreateActiveMediaController(MediaControllerRequest request) final;
  void SuspendAllSessions() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MediaControllerProxy
    : public MediaController {
 public:
  using InterfaceType = MediaController;

  explicit MediaControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Suspend() final;
  void Resume() final;
  void Stop() final;
  void ToggleSuspendResume() final;
  void AddObserver(MediaControllerObserverPtr observer) final;
  void PreviousTrack() final;
  void NextTrack() final;
  void Seek(base::TimeDelta seek_time) final;
  void ObserveImages(::media_session::mojom::MediaSessionImageType type, int32_t minimum_size_px, int32_t desired_size_px, MediaControllerImageObserverPtr observer) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MediaControllerObserverProxy
    : public MediaControllerObserver {
 public:
  using InterfaceType = MediaControllerObserver;

  explicit MediaControllerObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void MediaSessionInfoChanged(::media_session::mojom::MediaSessionInfoPtr info) final;
  void MediaSessionMetadataChanged(const base::Optional<media_session::MediaMetadata>& metadata) final;
  void MediaSessionActionsChanged(const std::vector<::media_session::mojom::MediaSessionAction>& action) final;
  void MediaSessionChanged(const base::Optional<base::UnguessableToken>& request_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  MediaControllerImageObserverProxy
    : public MediaControllerImageObserver {
 public:
  using InterfaceType = MediaControllerImageObserver;

  explicit MediaControllerImageObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void MediaControllerImageChanged(::media_session::mojom::MediaSessionImageType type, const SkBitmap& bitmap) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaControllerManagerStubDispatch {
 public:
  static bool Accept(MediaControllerManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaControllerManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaControllerManager>>
class MediaControllerManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaControllerManagerStub() {}
  ~MediaControllerManagerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaControllerStubDispatch {
 public:
  static bool Accept(MediaController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaController>>
class MediaControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaControllerStub() {}
  ~MediaControllerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaControllerObserverStubDispatch {
 public:
  static bool Accept(MediaControllerObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaControllerObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaControllerObserver>>
class MediaControllerObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaControllerObserverStub() {}
  ~MediaControllerObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaControllerImageObserverStubDispatch {
 public:
  static bool Accept(MediaControllerImageObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaControllerImageObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaControllerImageObserver>>
class MediaControllerImageObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaControllerImageObserverStub() {}
  ~MediaControllerImageObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerImageObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaControllerImageObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaControllerManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaControllerObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  MediaControllerImageObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media_session

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_CONTROLLER_MOJOM_H_