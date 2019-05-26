// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_H_
#define MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_H_

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
#include "media/capture/mojom/video_capture.mojom-shared.h"
#include "media/capture/mojom/video_capture.mojom-forward.h"
#include "media/capture/mojom/video_capture_types.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-forward.h"
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

class VideoCaptureObserverProxy;

template <typename ImplRefTraits>
class VideoCaptureObserverStub;

class VideoCaptureObserverRequestValidator;


class  VideoCaptureObserver
    : public VideoCaptureObserverInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = VideoCaptureObserverInterfaceBase;
  using Proxy_ = VideoCaptureObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoCaptureObserverStub<ImplRefTraits>;

  using RequestValidator_ = VideoCaptureObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnStateChangedMinVersion = 0,
    kOnNewBufferMinVersion = 0,
    kOnBufferReadyMinVersion = 0,
    kOnBufferDestroyedMinVersion = 0,
  };
  virtual ~VideoCaptureObserver() {}

  
  virtual void OnStateChanged(VideoCaptureState state) = 0;

  
  virtual void OnNewBuffer(int32_t buffer_id, ::media::mojom::VideoBufferHandlePtr buffer_handle) = 0;

  
  virtual void OnBufferReady(int32_t buffer_id, ::media::mojom::VideoFrameInfoPtr info) = 0;

  
  virtual void OnBufferDestroyed(int32_t buffer_id) = 0;
};

class VideoCaptureHostProxy;

template <typename ImplRefTraits>
class VideoCaptureHostStub;

class VideoCaptureHostRequestValidator;
class VideoCaptureHostResponseValidator;


class  VideoCaptureHost
    : public VideoCaptureHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = VideoCaptureHostInterfaceBase;
  using Proxy_ = VideoCaptureHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = VideoCaptureHostStub<ImplRefTraits>;

  using RequestValidator_ = VideoCaptureHostRequestValidator;
  using ResponseValidator_ = VideoCaptureHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kStartMinVersion = 0,
    kStopMinVersion = 0,
    kPauseMinVersion = 0,
    kResumeMinVersion = 0,
    kRequestRefreshFrameMinVersion = 0,
    kReleaseBufferMinVersion = 0,
    kGetDeviceSupportedFormatsMinVersion = 0,
    kGetDeviceFormatsInUseMinVersion = 0,
    kOnFrameDroppedMinVersion = 0,
    kOnLogMinVersion = 0,
  };
  virtual ~VideoCaptureHost() {}

  
  virtual void Start(int32_t device_id, int32_t session_id, const media::VideoCaptureParams& params, VideoCaptureObserverPtr observer) = 0;

  
  virtual void Stop(int32_t device_id) = 0;

  
  virtual void Pause(int32_t device_id) = 0;

  
  virtual void Resume(int32_t device_id, int32_t session_id, const media::VideoCaptureParams& params) = 0;

  
  virtual void RequestRefreshFrame(int32_t device_id) = 0;

  
  virtual void ReleaseBuffer(int32_t device_id, int32_t buffer_id, double consumer_resource_utilization) = 0;


  using GetDeviceSupportedFormatsCallback = base::OnceCallback<void(const std::vector<media::VideoCaptureFormat>&)>;
  
  virtual void GetDeviceSupportedFormats(int32_t device_id, int32_t session_id, GetDeviceSupportedFormatsCallback callback) = 0;


  using GetDeviceFormatsInUseCallback = base::OnceCallback<void(const std::vector<media::VideoCaptureFormat>&)>;
  
  virtual void GetDeviceFormatsInUse(int32_t device_id, int32_t session_id, GetDeviceFormatsInUseCallback callback) = 0;

  
  virtual void OnFrameDropped(int32_t device_id, media::VideoCaptureFrameDropReason reason) = 0;

  
  virtual void OnLog(int32_t device_id, const std::string& message) = 0;
};

class  VideoCaptureObserverProxy
    : public VideoCaptureObserver {
 public:
  using InterfaceType = VideoCaptureObserver;

  explicit VideoCaptureObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnStateChanged(VideoCaptureState state) final;
  void OnNewBuffer(int32_t buffer_id, ::media::mojom::VideoBufferHandlePtr buffer_handle) final;
  void OnBufferReady(int32_t buffer_id, ::media::mojom::VideoFrameInfoPtr info) final;
  void OnBufferDestroyed(int32_t buffer_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  VideoCaptureHostProxy
    : public VideoCaptureHost {
 public:
  using InterfaceType = VideoCaptureHost;

  explicit VideoCaptureHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void Start(int32_t device_id, int32_t session_id, const media::VideoCaptureParams& params, VideoCaptureObserverPtr observer) final;
  void Stop(int32_t device_id) final;
  void Pause(int32_t device_id) final;
  void Resume(int32_t device_id, int32_t session_id, const media::VideoCaptureParams& params) final;
  void RequestRefreshFrame(int32_t device_id) final;
  void ReleaseBuffer(int32_t device_id, int32_t buffer_id, double consumer_resource_utilization) final;
  void GetDeviceSupportedFormats(int32_t device_id, int32_t session_id, GetDeviceSupportedFormatsCallback callback) final;
  void GetDeviceFormatsInUse(int32_t device_id, int32_t session_id, GetDeviceFormatsInUseCallback callback) final;
  void OnFrameDropped(int32_t device_id, media::VideoCaptureFrameDropReason reason) final;
  void OnLog(int32_t device_id, const std::string& message) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  VideoCaptureObserverStubDispatch {
 public:
  static bool Accept(VideoCaptureObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoCaptureObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoCaptureObserver>>
class VideoCaptureObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoCaptureObserverStub() {}
  ~VideoCaptureObserverStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoCaptureObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoCaptureObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoCaptureHostStubDispatch {
 public:
  static bool Accept(VideoCaptureHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      VideoCaptureHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<VideoCaptureHost>>
class VideoCaptureHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  VideoCaptureHostStub() {}
  ~VideoCaptureHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoCaptureHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return VideoCaptureHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  VideoCaptureObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoCaptureHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  VideoCaptureHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_CAPTURE_MOJOM_VIDEO_CAPTURE_MOJOM_H_