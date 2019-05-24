// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom-shared.h"
#include "third_party/blink/public/mojom/dom_storage/storage_partition_service.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/dom_storage/session_storage_namespace.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/dom_storage/storage_area.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink-forward.h"

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

class StoragePartitionServiceProxy;

template <typename ImplRefTraits>
class StoragePartitionServiceStub;

class StoragePartitionServiceRequestValidator;


class PLATFORM_EXPORT StoragePartitionService
    : public StoragePartitionServiceInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = StoragePartitionServiceInterfaceBase;
  using Proxy_ = StoragePartitionServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = StoragePartitionServiceStub<ImplRefTraits>;

  using RequestValidator_ = StoragePartitionServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOpenLocalStorageMinVersion = 0,
    kOpenSessionStorageMinVersion = 0,
  };
  virtual ~StoragePartitionService() {}

  
  virtual void OpenLocalStorage(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::StorageAreaRequest area) = 0;

  
  virtual void OpenSessionStorage(const WTF::String& namespace_id, ::blink::mojom::blink::SessionStorageNamespaceRequest session_namespace) = 0;
};

class PLATFORM_EXPORT StoragePartitionServiceProxy
    : public StoragePartitionService {
 public:
  using InterfaceType = StoragePartitionService;

  explicit StoragePartitionServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void OpenLocalStorage(const scoped_refptr<const ::blink::SecurityOrigin>& origin, ::blink::mojom::blink::StorageAreaRequest area) final;
  void OpenSessionStorage(const WTF::String& namespace_id, ::blink::mojom::blink::SessionStorageNamespaceRequest session_namespace) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT StoragePartitionServiceStubDispatch {
 public:
  static bool Accept(StoragePartitionService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      StoragePartitionService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<StoragePartitionService>>
class StoragePartitionServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  StoragePartitionServiceStub() {}
  ~StoragePartitionServiceStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StoragePartitionServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return StoragePartitionServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT StoragePartitionServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOM_STORAGE_STORAGE_PARTITION_SERVICE_MOJOM_BLINK_H_