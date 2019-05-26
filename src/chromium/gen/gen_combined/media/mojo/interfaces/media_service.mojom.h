// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_H_

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
#include "media/mojo/interfaces/media_service.mojom-shared.h"
#include "media/mojo/interfaces/media_service.mojom-forward.h"
#include "media/mojo/interfaces/interface_factory.mojom-forward.h"
#include "services/service_manager/public/mojom/interface_provider.mojom-forward.h"
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

class MediaServiceProxy;

template <typename ImplRefTraits>
class MediaServiceStub;

class MediaServiceRequestValidator;


class  MediaService
    : public MediaServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = MediaServiceInterfaceBase;
  using Proxy_ = MediaServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = MediaServiceStub<ImplRefTraits>;

  using RequestValidator_ = MediaServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateInterfaceFactoryMinVersion = 0,
  };
  virtual ~MediaService() {}

  
  virtual void CreateInterfaceFactory(::media::mojom::InterfaceFactoryRequest factory, ::service_manager::mojom::InterfaceProviderPtr host_interfaces) = 0;
};

class  MediaServiceProxy
    : public MediaService {
 public:
  using InterfaceType = MediaService;

  explicit MediaServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateInterfaceFactory(::media::mojom::InterfaceFactoryRequest factory, ::service_manager::mojom::InterfaceProviderPtr host_interfaces) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  MediaServiceStubDispatch {
 public:
  static bool Accept(MediaService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      MediaService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<MediaService>>
class MediaServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  MediaServiceStub() {}
  ~MediaServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return MediaServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  MediaServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_H_