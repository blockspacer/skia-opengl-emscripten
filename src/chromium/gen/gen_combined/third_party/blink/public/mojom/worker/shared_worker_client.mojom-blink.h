// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/worker/shared_worker_client.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/shared_worker_client.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker_creation_context_type.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/web_feature/web_feature.mojom-blink-forward.h"

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
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {

class SharedWorkerClientProxy;

template <typename ImplRefTraits>
class SharedWorkerClientStub;

class SharedWorkerClientRequestValidator;


class PLATFORM_EXPORT SharedWorkerClient
    : public SharedWorkerClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SharedWorkerClientInterfaceBase;
  using Proxy_ = SharedWorkerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedWorkerClientStub<ImplRefTraits>;

  using RequestValidator_ = SharedWorkerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCreatedMinVersion = 0,
    kOnConnectedMinVersion = 0,
    kOnScriptLoadFailedMinVersion = 0,
    kOnFeatureUsedMinVersion = 0,
  };
  virtual ~SharedWorkerClient() {}

  
  virtual void OnCreated(::blink::mojom::blink::SharedWorkerCreationContextType creation_context_type) = 0;

  
  virtual void OnConnected(const WTF::Vector<::blink::mojom::blink::WebFeature>& features_used) = 0;

  
  virtual void OnScriptLoadFailed() = 0;

  
  virtual void OnFeatureUsed(::blink::mojom::blink::WebFeature feature) = 0;
};

class PLATFORM_EXPORT SharedWorkerClientProxy
    : public SharedWorkerClient {
 public:
  using InterfaceType = SharedWorkerClient;

  explicit SharedWorkerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnCreated(::blink::mojom::blink::SharedWorkerCreationContextType creation_context_type) final;
  void OnConnected(const WTF::Vector<::blink::mojom::blink::WebFeature>& features_used) final;
  void OnScriptLoadFailed() final;
  void OnFeatureUsed(::blink::mojom::blink::WebFeature feature) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT SharedWorkerClientStubDispatch {
 public:
  static bool Accept(SharedWorkerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedWorkerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedWorkerClient>>
class SharedWorkerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedWorkerClientStub() {}
  ~SharedWorkerClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT SharedWorkerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_BLINK_H_