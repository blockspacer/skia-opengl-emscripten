// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_H_

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
#include "media/mojo/interfaces/cdm_service.mojom-shared.h"
#include "media/mojo/interfaces/cdm_service.mojom-forward.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-forward.h"
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

class CdmServiceProxy;

template <typename ImplRefTraits>
class CdmServiceStub;

class CdmServiceRequestValidator;


class  CdmService
    : public CdmServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = CdmServiceInterfaceBase;
  using Proxy_ = CdmServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = CdmServiceStub<ImplRefTraits>;

  using RequestValidator_ = CdmServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kLoadCdmMinVersion = 0,
    kCreateCdmFactoryMinVersion = 0,
  };
  virtual ~CdmService() {}

  
  virtual void LoadCdm(const base::FilePath& cdm_path) = 0;

  
  virtual void CreateCdmFactory(::media::mojom::CdmFactoryRequest factory, ::service_manager::mojom::InterfaceProviderPtr host_interfaces) = 0;
};

class  CdmServiceProxy
    : public CdmService {
 public:
  using InterfaceType = CdmService;

  explicit CdmServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void LoadCdm(const base::FilePath& cdm_path) final;
  void CreateCdmFactory(::media::mojom::CdmFactoryRequest factory, ::service_manager::mojom::InterfaceProviderPtr host_interfaces) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CdmServiceStubDispatch {
 public:
  static bool Accept(CdmService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CdmService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CdmService>>
class CdmServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CdmServiceStub() {}
  ~CdmServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CdmServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CdmServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_CDM_SERVICE_MOJOM_H_