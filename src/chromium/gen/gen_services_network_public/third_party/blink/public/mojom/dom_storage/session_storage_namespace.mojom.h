// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_H_

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
#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-shared.h"
#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-forward.h"
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-forward.h"
#include "url/mojom/origin.mojom-forward.h"
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

class SessionStorageNamespaceProxy;

template <typename ImplRefTraits>
class SessionStorageNamespaceStub;

class SessionStorageNamespaceRequestValidator;


class BLINK_COMMON_EXPORT SessionStorageNamespace
    : public SessionStorageNamespaceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = SessionStorageNamespaceInterfaceBase;
  using Proxy_ = SessionStorageNamespaceProxy;

  template <typename ImplRefTraits>
  using Stub_ = SessionStorageNamespaceStub<ImplRefTraits>;

  using RequestValidator_ = SessionStorageNamespaceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOpenAreaMinVersion = 0,
    kCloneMinVersion = 0,
  };
  virtual ~SessionStorageNamespace() {}

  
  virtual void OpenArea(const url::Origin& origin, ::blink::mojom::StorageAreaAssociatedRequest area) = 0;

  
  virtual void Clone(const std::string& clone_to_namespace) = 0;
};

class BLINK_COMMON_EXPORT SessionStorageNamespaceProxy
    : public SessionStorageNamespace {
 public:
  using InterfaceType = SessionStorageNamespace;

  explicit SessionStorageNamespaceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenArea(const url::Origin& origin, ::blink::mojom::StorageAreaAssociatedRequest area) final;
  void Clone(const std::string& clone_to_namespace) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT SessionStorageNamespaceStubDispatch {
 public:
  static bool Accept(SessionStorageNamespace* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      SessionStorageNamespace* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<SessionStorageNamespace>>
class SessionStorageNamespaceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  SessionStorageNamespaceStub() {}
  ~SessionStorageNamespaceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SessionStorageNamespaceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return SessionStorageNamespaceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT SessionStorageNamespaceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_SESSION_STORAGE_NAMESPACE_MOJOM_H_