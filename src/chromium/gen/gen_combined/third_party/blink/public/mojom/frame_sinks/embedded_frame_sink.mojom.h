// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_H_

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
#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-shared.h"
#include "third_party/blink/public/mojom/frame_sinks/embedded_frame_sink.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/compositor_frame_sink.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/frame_sink_id.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/surface_info.mojom-forward.h"
#include "services/viz/public/interfaces/compositing/local_surface_id.mojom-forward.h"
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
#include "content/common/content_export.h"




namespace blink {
namespace mojom {

class SurfaceEmbedderProxy;

template <typename ImplRefTraits>
class SurfaceEmbedderStub;

class SurfaceEmbedderRequestValidator;


class CONTENT_EXPORT SurfaceEmbedder
    : public SurfaceEmbedderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SurfaceEmbedderInterfaceBase;
  using Proxy_ = SurfaceEmbedderProxy;

  template <typename ImplRefTraits>
  using Stub_ = SurfaceEmbedderStub<ImplRefTraits>;

  using RequestValidator_ = SurfaceEmbedderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kSetLocalSurfaceIdMinVersion = 0,
  };
  virtual ~SurfaceEmbedder() {}

  
  virtual void SetLocalSurfaceId(const viz::LocalSurfaceId& local_surface_id) = 0;
};

class EmbeddedFrameSinkClientProxy;

template <typename ImplRefTraits>
class EmbeddedFrameSinkClientStub;

class EmbeddedFrameSinkClientRequestValidator;


class CONTENT_EXPORT EmbeddedFrameSinkClient
    : public EmbeddedFrameSinkClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = EmbeddedFrameSinkClientInterfaceBase;
  using Proxy_ = EmbeddedFrameSinkClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedFrameSinkClientStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedFrameSinkClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnFirstSurfaceActivationMinVersion = 0,
    kBindSurfaceEmbedderMinVersion = 0,
  };
  virtual ~EmbeddedFrameSinkClient() {}

  
  virtual void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) = 0;

  
  virtual void BindSurfaceEmbedder(SurfaceEmbedderRequest embedder) = 0;
};

class EmbeddedFrameSinkProviderProxy;

template <typename ImplRefTraits>
class EmbeddedFrameSinkProviderStub;

class EmbeddedFrameSinkProviderRequestValidator;


class CONTENT_EXPORT EmbeddedFrameSinkProvider
    : public EmbeddedFrameSinkProviderInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = EmbeddedFrameSinkProviderInterfaceBase;
  using Proxy_ = EmbeddedFrameSinkProviderProxy;

  template <typename ImplRefTraits>
  using Stub_ = EmbeddedFrameSinkProviderStub<ImplRefTraits>;

  using RequestValidator_ = EmbeddedFrameSinkProviderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kRegisterEmbeddedFrameSinkMinVersion = 0,
    kCreateCompositorFrameSinkMinVersion = 0,
    kCreateSimpleCompositorFrameSinkMinVersion = 0,
    kConnectToEmbedderMinVersion = 0,
  };
  virtual ~EmbeddedFrameSinkProvider() {}

  
  virtual void RegisterEmbeddedFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr client) = 0;

  
  virtual void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::CompositorFrameSinkClientPtr client, ::viz::mojom::CompositorFrameSinkRequest sink) = 0;

  
  virtual void CreateSimpleCompositorFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr surface_client, ::viz::mojom::CompositorFrameSinkClientPtr client, ::viz::mojom::CompositorFrameSinkRequest sink) = 0;

  
  virtual void ConnectToEmbedder(const viz::FrameSinkId& frame_sink_id, SurfaceEmbedderRequest embedder) = 0;
};

class CONTENT_EXPORT SurfaceEmbedderProxy
    : public SurfaceEmbedder {
 public:
  using InterfaceType = SurfaceEmbedder;

  explicit SurfaceEmbedderProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetLocalSurfaceId(const viz::LocalSurfaceId& local_surface_id) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT EmbeddedFrameSinkClientProxy
    : public EmbeddedFrameSinkClient {
 public:
  using InterfaceType = EmbeddedFrameSinkClient;

  explicit EmbeddedFrameSinkClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnFirstSurfaceActivation(const viz::SurfaceInfo& surface_info) final;
  void BindSurfaceEmbedder(SurfaceEmbedderRequest embedder) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class CONTENT_EXPORT EmbeddedFrameSinkProviderProxy
    : public EmbeddedFrameSinkProvider {
 public:
  using InterfaceType = EmbeddedFrameSinkProvider;

  explicit EmbeddedFrameSinkProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterEmbeddedFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr client) final;
  void CreateCompositorFrameSink(const viz::FrameSinkId& frame_sink_id, ::viz::mojom::CompositorFrameSinkClientPtr client, ::viz::mojom::CompositorFrameSinkRequest sink) final;
  void CreateSimpleCompositorFrameSink(const viz::FrameSinkId& parent_frame_sink_id, const viz::FrameSinkId& frame_sink_id, EmbeddedFrameSinkClientPtr surface_client, ::viz::mojom::CompositorFrameSinkClientPtr client, ::viz::mojom::CompositorFrameSinkRequest sink) final;
  void ConnectToEmbedder(const viz::FrameSinkId& frame_sink_id, SurfaceEmbedderRequest embedder) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT SurfaceEmbedderStubDispatch {
 public:
  static bool Accept(SurfaceEmbedder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SurfaceEmbedder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SurfaceEmbedder>>
class SurfaceEmbedderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SurfaceEmbedderStub() {}
  ~SurfaceEmbedderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SurfaceEmbedderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SurfaceEmbedderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT EmbeddedFrameSinkClientStubDispatch {
 public:
  static bool Accept(EmbeddedFrameSinkClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedFrameSinkClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedFrameSinkClient>>
class EmbeddedFrameSinkClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedFrameSinkClientStub() {}
  ~EmbeddedFrameSinkClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedFrameSinkClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedFrameSinkClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT EmbeddedFrameSinkProviderStubDispatch {
 public:
  static bool Accept(EmbeddedFrameSinkProvider* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      EmbeddedFrameSinkProvider* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<EmbeddedFrameSinkProvider>>
class EmbeddedFrameSinkProviderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  EmbeddedFrameSinkProviderStub() {}
  ~EmbeddedFrameSinkProviderStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedFrameSinkProviderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return EmbeddedFrameSinkProviderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT SurfaceEmbedderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT EmbeddedFrameSinkClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT EmbeddedFrameSinkProviderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_SINKS_EMBEDDED_FRAME_SINK_MOJOM_H_