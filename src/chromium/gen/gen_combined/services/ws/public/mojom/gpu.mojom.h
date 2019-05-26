// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_H_
#define SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_H_

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
#include "services/ws/public/mojom/gpu.mojom-shared.h"
#include "services/ws/public/mojom/gpu.mojom-forward.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-forward.h"
#include "gpu/ipc/common/gpu_info.mojom-forward.h"
#include "gpu/ipc/common/sync_token.mojom-forward.h"
#include "media/mojo/interfaces/video_encode_accelerator.mojom-forward.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-forward.h"
#include "ui/gfx/mojo/buffer_types.mojom-forward.h"
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




namespace ws {
namespace mojom {

class GpuMemoryBufferFactoryProxy;

template <typename ImplRefTraits>
class GpuMemoryBufferFactoryStub;

class GpuMemoryBufferFactoryRequestValidator;
class GpuMemoryBufferFactoryResponseValidator;


class  GpuMemoryBufferFactory
    : public GpuMemoryBufferFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = GpuMemoryBufferFactoryInterfaceBase;
  using Proxy_ = GpuMemoryBufferFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = GpuMemoryBufferFactoryStub<ImplRefTraits>;

  using RequestValidator_ = GpuMemoryBufferFactoryRequestValidator;
  using ResponseValidator_ = GpuMemoryBufferFactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateGpuMemoryBufferMinVersion = 0,
    kDestroyGpuMemoryBufferMinVersion = 0,
  };
  virtual ~GpuMemoryBufferFactory() {}


  using CreateGpuMemoryBufferCallback = base::OnceCallback<void(gfx::GpuMemoryBufferHandle)>;
  
  virtual void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, CreateGpuMemoryBufferCallback callback) = 0;

  
  virtual void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const ::gpu::SyncToken& sync_token) = 0;
};

class GpuProxy;

template <typename ImplRefTraits>
class GpuStub;

class GpuRequestValidator;
class GpuResponseValidator;


class  Gpu
    : public GpuInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = GpuInterfaceBase;
  using Proxy_ = GpuProxy;

  template <typename ImplRefTraits>
  using Stub_ = GpuStub<ImplRefTraits>;

  using RequestValidator_ = GpuRequestValidator;
  using ResponseValidator_ = GpuResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateGpuMemoryBufferFactoryMinVersion = 0,
    kEstablishGpuChannelMinVersion = 0,
    kCreateVideoEncodeAcceleratorProviderMinVersion = 0,
  };
  virtual ~Gpu() {}

  
  virtual void CreateGpuMemoryBufferFactory(GpuMemoryBufferFactoryRequest request) = 0;


  using EstablishGpuChannelCallback = base::OnceCallback<void(int32_t, mojo::ScopedMessagePipeHandle, const gpu::GPUInfo&, const gpu::GpuFeatureInfo&)>;
  
  virtual void EstablishGpuChannel(EstablishGpuChannelCallback callback) = 0;

  
  virtual void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) = 0;
};

class  GpuMemoryBufferFactoryProxy
    : public GpuMemoryBufferFactory {
 public:
  using InterfaceType = GpuMemoryBufferFactory;

  explicit GpuMemoryBufferFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const gfx::Size& size, gfx::BufferFormat format, gfx::BufferUsage usage, CreateGpuMemoryBufferCallback callback) final;
  void DestroyGpuMemoryBuffer(gfx::GpuMemoryBufferId id, const ::gpu::SyncToken& sync_token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  GpuProxy
    : public Gpu {
 public:
  using InterfaceType = Gpu;

  explicit GpuProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateGpuMemoryBufferFactory(GpuMemoryBufferFactoryRequest request) final;
  void EstablishGpuChannel(EstablishGpuChannelCallback callback) final;
  void CreateVideoEncodeAcceleratorProvider(::media::mojom::VideoEncodeAcceleratorProviderRequest vea_provider) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  GpuMemoryBufferFactoryStubDispatch {
 public:
  static bool Accept(GpuMemoryBufferFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      GpuMemoryBufferFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<GpuMemoryBufferFactory>>
class GpuMemoryBufferFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GpuMemoryBufferFactoryStub() {}
  ~GpuMemoryBufferFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuMemoryBufferFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuMemoryBufferFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GpuStubDispatch {
 public:
  static bool Accept(Gpu* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Gpu* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Gpu>>
class GpuStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  GpuStub() {}
  ~GpuStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return GpuStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  GpuMemoryBufferFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GpuRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GpuMemoryBufferFactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  GpuResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ws

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_WS_PUBLIC_MOJOM_GPU_MOJOM_H_