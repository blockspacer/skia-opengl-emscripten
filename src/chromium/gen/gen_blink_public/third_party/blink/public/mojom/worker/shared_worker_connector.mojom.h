// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_H_

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
#include "third_party/blink/public/mojom/worker/shared_worker_connector.mojom-shared.h"
#include "third_party/blink/public/mojom/worker/shared_worker_connector.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker_client.mojom-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker_creation_context_type.mojom-forward.h"
#include "third_party/blink/public/mojom/worker/shared_worker_info.mojom-forward.h"
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

class SharedWorkerConnectorProxy;

template <typename ImplRefTraits>
class SharedWorkerConnectorStub;

class SharedWorkerConnectorRequestValidator;


class BLINK_COMMON_EXPORT SharedWorkerConnector
    : public SharedWorkerConnectorInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SharedWorkerConnectorInterfaceBase;
  using Proxy_ = SharedWorkerConnectorProxy;

  template <typename ImplRefTraits>
  using Stub_ = SharedWorkerConnectorStub<ImplRefTraits>;

  using RequestValidator_ = SharedWorkerConnectorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kConnectMinVersion = 0,
  };
  virtual ~SharedWorkerConnector() {}

  
  virtual void Connect(::blink::mojom::SharedWorkerInfoPtr info, ::blink::mojom::SharedWorkerClientPtr client, ::blink::mojom::SharedWorkerCreationContextType creation_context_type, mojo::ScopedMessagePipeHandle message_port, ::blink::mojom::BlobURLTokenPtr blob_url_token) = 0;
};

class BLINK_COMMON_EXPORT SharedWorkerConnectorProxy
    : public SharedWorkerConnector {
 public:
  using InterfaceType = SharedWorkerConnector;

  explicit SharedWorkerConnectorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(::blink::mojom::SharedWorkerInfoPtr info, ::blink::mojom::SharedWorkerClientPtr client, ::blink::mojom::SharedWorkerCreationContextType creation_context_type, mojo::ScopedMessagePipeHandle message_port, ::blink::mojom::BlobURLTokenPtr blob_url_token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT SharedWorkerConnectorStubDispatch {
 public:
  static bool Accept(SharedWorkerConnector* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SharedWorkerConnector* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SharedWorkerConnector>>
class SharedWorkerConnectorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SharedWorkerConnectorStub() {}
  ~SharedWorkerConnectorStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerConnectorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SharedWorkerConnectorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT SharedWorkerConnectorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CONNECTOR_MOJOM_H_