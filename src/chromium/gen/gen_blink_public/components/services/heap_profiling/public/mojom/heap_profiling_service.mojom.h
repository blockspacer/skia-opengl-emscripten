// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_H_
#define COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_H_

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
#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom-shared.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_service.mojom-forward.h"
#include "components/services/heap_profiling/public/mojom/heap_profiling_client.mojom-forward.h"
#include "mojo/public/mojom/base/process_id.mojom-forward.h"
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




namespace heap_profiling {
namespace mojom {

class ProfilingServiceProxy;

template <typename ImplRefTraits>
class ProfilingServiceStub;

class ProfilingServiceRequestValidator;
class ProfilingServiceResponseValidator;


class  ProfilingService
    : public ProfilingServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProfilingServiceInterfaceBase;
  using Proxy_ = ProfilingServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProfilingServiceStub<ImplRefTraits>;

  using RequestValidator_ = ProfilingServiceRequestValidator;
  using ResponseValidator_ = ProfilingServiceResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddProfilingClientMinVersion = 0,
    kGetProfiledPidsMinVersion = 0,
  };
  virtual ~ProfilingService() {}

  
  virtual void AddProfilingClient(base::ProcessId pid, ::heap_profiling::mojom::ProfilingClientPtr client, ProcessType process_type, ::heap_profiling::mojom::ProfilingParamsPtr params) = 0;


  using GetProfiledPidsCallback = base::OnceCallback<void(const std::vector<base::ProcessId>&)>;
  
  virtual void GetProfiledPids(GetProfiledPidsCallback callback) = 0;
};

class  ProfilingServiceProxy
    : public ProfilingService {
 public:
  using InterfaceType = ProfilingService;

  explicit ProfilingServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddProfilingClient(base::ProcessId pid, ::heap_profiling::mojom::ProfilingClientPtr client, ProcessType process_type, ::heap_profiling::mojom::ProfilingParamsPtr params) final;
  void GetProfiledPids(GetProfiledPidsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProfilingServiceStubDispatch {
 public:
  static bool Accept(ProfilingService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProfilingService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProfilingService>>
class ProfilingServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProfilingServiceStub() {}
  ~ProfilingServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfilingServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProfilingServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProfilingServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProfilingServiceResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace heap_profiling

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_HEAP_PROFILING_PUBLIC_MOJOM_HEAP_PROFILING_SERVICE_MOJOM_H_