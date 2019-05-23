// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_H_

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
#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/shared_worker_host.mojom-forward.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-forward.h"
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




namespace blink {
namespace mojom {

class SharedWorkerHostProxy;

template <typename ImplRefTraits>
class SharedWorkerHostStub;

class SharedWorkerHostRequestValidator;


class BLINK_COMMON_EXPORT SharedWorkerHost
    : public SharedWorkerHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SharedWorkerHostInterfaceBase;
  using Proxy_ = SharedWorkerHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedWorkerHostStub<ImplRefTraits>;

  using RequestValidator_ = SharedWorkerHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnConnectedMinVersion = 0,
    kOnContextClosedMinVersion = 0,
    kOnReadyForInspectionMinVersion = 0,
    kOnScriptLoadedMinVersion = 0,
    kOnScriptLoadFailedMinVersion = 0,
    kOnFeatureUsedMinVersion = 0,
  };
  virtual ~SharedWorkerHost() {}

  
  virtual void OnConnected(int32_t connection_id) = 0;

  
  virtual void OnContextClosed() = 0;

  
  virtual void OnReadyForInspection() = 0;

  
  virtual void OnScriptLoaded() = 0;

  
  virtual void OnScriptLoadFailed() = 0;

  
  virtual void OnFeatureUsed(::blink::mojom::WebFeature feature) = 0;
};

class BLINK_COMMON_EXPORT SharedWorkerHostProxy
    : public SharedWorkerHost {
 public:
  using InterfaceType = SharedWorkerHost;

  explicit SharedWorkerHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnConnected(int32_t connection_id) final;
  void OnContextClosed() final;
  void OnReadyForInspection() final;
  void OnScriptLoaded() final;
  void OnScriptLoadFailed() final;
  void OnFeatureUsed(::blink::mojom::WebFeature feature) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT SharedWorkerHostStubDispatch {
 public:
  static bool Accept(SharedWorkerHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedWorkerHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedWorkerHost>>
class SharedWorkerHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedWorkerHostStub() {}
  ~SharedWorkerHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT SharedWorkerHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_HOST_MOJOM_H_