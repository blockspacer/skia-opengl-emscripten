// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_H_

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
#include "third_party/blink/public/mojom/frame/document_interface_broker.mojom-shared.h"
#include "third_party/blink/public/mojom/frame/document_interface_broker.mojom-forward.h"
#include "third_party/blink/public/mojom/credentialmanager/credential_manager.mojom-forward.h"
#include "third_party/blink/public/mojom/frame/frame_host_test_interface.mojom-forward.h"
#include "third_party/blink/public/mojom/webaudio/audio_context_manager.mojom-forward.h"
#include "third_party/blink/public/mojom/webauthn/authenticator.mojom-forward.h"
#include "third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-forward.h"
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

class DocumentInterfaceBrokerProxy;

template <typename ImplRefTraits>
class DocumentInterfaceBrokerStub;

class DocumentInterfaceBrokerRequestValidator;


class BLINK_COMMON_EXPORT DocumentInterfaceBroker
    : public DocumentInterfaceBrokerInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = DocumentInterfaceBrokerInterfaceBase;
  using Proxy_ = DocumentInterfaceBrokerProxy;

  template <typename ImplRefTraits>
  using Stub_ = DocumentInterfaceBrokerStub<ImplRefTraits>;

  using RequestValidator_ = DocumentInterfaceBrokerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetAudioContextManagerMinVersion = 0,
    kGetAuthenticatorMinVersion = 0,
    kGetCredentialManagerMinVersion = 0,
    kGetFrameHostTestInterfaceMinVersion = 0,
    kGetVirtualAuthenticatorManagerMinVersion = 0,
  };
  virtual ~DocumentInterfaceBroker() {}

  
  virtual void GetAudioContextManager(::blink::mojom::AudioContextManagerRequest request) = 0;

  
  virtual void GetAuthenticator(::blink::mojom::AuthenticatorRequest request) = 0;

  
  virtual void GetCredentialManager(::blink::mojom::CredentialManagerRequest request) = 0;

  
  virtual void GetFrameHostTestInterface(::blink::mojom::FrameHostTestInterfaceRequest request) = 0;

  
  virtual void GetVirtualAuthenticatorManager(::blink::test::mojom::VirtualAuthenticatorManagerRequest request) = 0;
};

class BLINK_COMMON_EXPORT DocumentInterfaceBrokerProxy
    : public DocumentInterfaceBroker {
 public:
  using InterfaceType = DocumentInterfaceBroker;

  explicit DocumentInterfaceBrokerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetAudioContextManager(::blink::mojom::AudioContextManagerRequest request) final;
  void GetAuthenticator(::blink::mojom::AuthenticatorRequest request) final;
  void GetCredentialManager(::blink::mojom::CredentialManagerRequest request) final;
  void GetFrameHostTestInterface(::blink::mojom::FrameHostTestInterfaceRequest request) final;
  void GetVirtualAuthenticatorManager(::blink::test::mojom::VirtualAuthenticatorManagerRequest request) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT DocumentInterfaceBrokerStubDispatch {
 public:
  static bool Accept(DocumentInterfaceBroker* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DocumentInterfaceBroker* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DocumentInterfaceBroker>>
class DocumentInterfaceBrokerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DocumentInterfaceBrokerStub() {}
  ~DocumentInterfaceBrokerStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DocumentInterfaceBrokerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DocumentInterfaceBrokerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT DocumentInterfaceBrokerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_DOCUMENT_INTERFACE_BROKER_MOJOM_H_