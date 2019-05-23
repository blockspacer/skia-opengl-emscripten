// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_H_

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
#include "third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom-shared.h"
#include "third_party/blink/public/mojom/quota/quota_dispatcher_host.mojom-forward.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-forward.h"
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

class QuotaDispatcherHostProxy;

template <typename ImplRefTraits>
class QuotaDispatcherHostStub;

class QuotaDispatcherHostRequestValidator;
class QuotaDispatcherHostResponseValidator;


class BLINK_COMMON_EXPORT QuotaDispatcherHost
    : public QuotaDispatcherHostInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = QuotaDispatcherHostInterfaceBase;
  using Proxy_ = QuotaDispatcherHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = QuotaDispatcherHostStub<ImplRefTraits>;

  using RequestValidator_ = QuotaDispatcherHostRequestValidator;
  using ResponseValidator_ = QuotaDispatcherHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kQueryStorageUsageAndQuotaMinVersion = 0,
    kRequestStorageQuotaMinVersion = 0,
  };
  virtual ~QuotaDispatcherHost() {}


  using QueryStorageUsageAndQuotaCallback = base::OnceCallback<void(::blink::mojom::QuotaStatusCode, int64_t, int64_t, ::blink::mojom::UsageBreakdownPtr)>;
  
  virtual void QueryStorageUsageAndQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, QueryStorageUsageAndQuotaCallback callback) = 0;


  using RequestStorageQuotaCallback = base::OnceCallback<void(::blink::mojom::QuotaStatusCode, int64_t, int64_t)>;
  
  virtual void RequestStorageQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, uint64_t requested_size, RequestStorageQuotaCallback callback) = 0;
};

class BLINK_COMMON_EXPORT QuotaDispatcherHostProxy
    : public QuotaDispatcherHost {
 public:
  using InterfaceType = QuotaDispatcherHost;

  explicit QuotaDispatcherHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueryStorageUsageAndQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, QueryStorageUsageAndQuotaCallback callback) final;
  void RequestStorageQuota(const url::Origin& origin, ::blink::mojom::StorageType storage_type, uint64_t requested_size, RequestStorageQuotaCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT QuotaDispatcherHostStubDispatch {
 public:
  static bool Accept(QuotaDispatcherHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      QuotaDispatcherHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<QuotaDispatcherHost>>
class QuotaDispatcherHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  QuotaDispatcherHostStub() {}
  ~QuotaDispatcherHostStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return QuotaDispatcherHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return QuotaDispatcherHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT QuotaDispatcherHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT QuotaDispatcherHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_DISPATCHER_HOST_MOJOM_H_