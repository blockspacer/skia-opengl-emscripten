// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_H_

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
#include "media/mojo/interfaces/renderer.mojom-shared.h"
#include "media/mojo/interfaces/renderer.mojom-forward.h"
#include "media/mojo/interfaces/demuxer_stream.mojom-forward.h"
#include "media/mojo/interfaces/media_types.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-forward.h"
#include "url/mojom/url.mojom-forward.h"
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

class RendererProxy;

template <typename ImplRefTraits>
class RendererStub;

class RendererRequestValidator;
class RendererResponseValidator;


class  Renderer
    : public RendererInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RendererInterfaceBase;
  using Proxy_ = RendererProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererStub<ImplRefTraits>;

  using RequestValidator_ = RendererRequestValidator;
  using ResponseValidator_ = RendererResponseValidator;
  enum MethodMinVersions : uint32_t {
    kInitializeMinVersion = 0,
    kFlushMinVersion = 0,
    kStartPlayingFromMinVersion = 0,
    kSetPlaybackRateMinVersion = 0,
    kSetVolumeMinVersion = 0,
    kSetCdmMinVersion = 0,
  };
  virtual ~Renderer() {}


  using InitializeCallback = base::OnceCallback<void(bool)>;
  
  virtual void Initialize(RendererClientAssociatedPtrInfo client, base::Optional<std::vector<::media::mojom::DemuxerStreamPtrInfo>> streams, const base::Optional<GURL>& media_url, const base::Optional<GURL>& first_party_for_cookies, bool allow_credentials, InitializeCallback callback) = 0;


  using FlushCallback = base::OnceCallback<void()>;
  
  virtual void Flush(FlushCallback callback) = 0;

  
  virtual void StartPlayingFrom(base::TimeDelta time) = 0;

  
  virtual void SetPlaybackRate(double playback_rate) = 0;

  
  virtual void SetVolume(float volume) = 0;


  using SetCdmCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetCdm(int32_t cdm_id, SetCdmCallback callback) = 0;
};

class RendererClientProxy;

template <typename ImplRefTraits>
class RendererClientStub;

class RendererClientRequestValidator;


class  RendererClient
    : public RendererClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = RendererClientInterfaceBase;
  using Proxy_ = RendererClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = RendererClientStub<ImplRefTraits>;

  using RequestValidator_ = RendererClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnTimeUpdateMinVersion = 0,
    kOnBufferingStateChangeMinVersion = 0,
    kOnEndedMinVersion = 0,
    kOnErrorMinVersion = 0,
    kOnAudioConfigChangeMinVersion = 0,
    kOnVideoConfigChangeMinVersion = 0,
    kOnVideoNaturalSizeChangeMinVersion = 0,
    kOnVideoOpacityChangeMinVersion = 0,
    kOnStatisticsUpdateMinVersion = 0,
    kOnWaitingMinVersion = 0,
  };
  virtual ~RendererClient() {}

  
  virtual void OnTimeUpdate(base::TimeDelta time, base::TimeDelta max_time, base::TimeTicks capture_time) = 0;

  
  virtual void OnBufferingStateChange(media::BufferingState state) = 0;

  
  virtual void OnEnded() = 0;

  
  virtual void OnError() = 0;

  
  virtual void OnAudioConfigChange(const ::media::AudioDecoderConfig& config) = 0;

  
  virtual void OnVideoConfigChange(const media::VideoDecoderConfig& config) = 0;

  
  virtual void OnVideoNaturalSizeChange(const gfx::Size& size) = 0;

  
  virtual void OnVideoOpacityChange(bool opaque) = 0;

  
  virtual void OnStatisticsUpdate(const media::PipelineStatistics& stats) = 0;

  
  virtual void OnWaiting(media::WaitingReason reason) = 0;
};

class  RendererProxy
    : public Renderer {
 public:
  using InterfaceType = Renderer;

  explicit RendererProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(RendererClientAssociatedPtrInfo client, base::Optional<std::vector<::media::mojom::DemuxerStreamPtrInfo>> streams, const base::Optional<GURL>& media_url, const base::Optional<GURL>& first_party_for_cookies, bool allow_credentials, InitializeCallback callback) final;
  void Flush(FlushCallback callback) final;
  void StartPlayingFrom(base::TimeDelta time) final;
  void SetPlaybackRate(double playback_rate) final;
  void SetVolume(float volume) final;
  void SetCdm(int32_t cdm_id, SetCdmCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  RendererClientProxy
    : public RendererClient {
 public:
  using InterfaceType = RendererClient;

  explicit RendererClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTimeUpdate(base::TimeDelta time, base::TimeDelta max_time, base::TimeTicks capture_time) final;
  void OnBufferingStateChange(media::BufferingState state) final;
  void OnEnded() final;
  void OnError() final;
  void OnAudioConfigChange(const ::media::AudioDecoderConfig& config) final;
  void OnVideoConfigChange(const media::VideoDecoderConfig& config) final;
  void OnVideoNaturalSizeChange(const gfx::Size& size) final;
  void OnVideoOpacityChange(bool opaque) final;
  void OnStatisticsUpdate(const media::PipelineStatistics& stats) final;
  void OnWaiting(media::WaitingReason reason) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  RendererStubDispatch {
 public:
  static bool Accept(Renderer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Renderer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Renderer>>
class RendererStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererStub() {}
  ~RendererStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RendererClientStubDispatch {
 public:
  static bool Accept(RendererClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      RendererClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<RendererClient>>
class RendererClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  RendererClientStub() {}
  ~RendererClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return RendererClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  RendererRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RendererClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  RendererResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_H_