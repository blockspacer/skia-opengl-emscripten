// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_H_

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
#include "third_party/blink/public/mojom/blob/blob_registry.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob_registry.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/data_element.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-forward.h"
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

class ProgressClientProxy;

template <typename ImplRefTraits>
class ProgressClientStub;

class ProgressClientRequestValidator;


class BLINK_COMMON_EXPORT ProgressClient
    : public ProgressClientInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProgressClientInterfaceBase;
  using Proxy_ = ProgressClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProgressClientStub<ImplRefTraits>;

  using RequestValidator_ = ProgressClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnProgressMinVersion = 0,
  };
  virtual ~ProgressClient() {}

  
  virtual void OnProgress(uint64_t delta) = 0;
};

class BlobRegistryProxy;

template <typename ImplRefTraits>
class BlobRegistryStub;

class BlobRegistryRequestValidator;
class BlobRegistryResponseValidator;


class BLINK_COMMON_EXPORT BlobRegistry
    : public BlobRegistryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = true;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = BlobRegistryInterfaceBase;
  using Proxy_ = BlobRegistryProxy;

  template <typename ImplRefTraits>
  using Stub_ = BlobRegistryStub<ImplRefTraits>;

  using RequestValidator_ = BlobRegistryRequestValidator;
  using ResponseValidator_ = BlobRegistryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMinVersion = 0,
    kRegisterFromStreamMinVersion = 0,
    kGetBlobFromUUIDMinVersion = 0,
    kURLStoreForOriginMinVersion = 0,
  };
  virtual ~BlobRegistry() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Register(::blink::mojom::BlobRequest blob, const std::string& uuid, const std::string& content_type, const std::string& content_disposition, std::vector<::blink::mojom::DataElementPtr> elements);

  using RegisterCallback = base::OnceCallback<void()>;
  
  virtual void Register(::blink::mojom::BlobRequest blob, const std::string& uuid, const std::string& content_type, const std::string& content_disposition, std::vector<::blink::mojom::DataElementPtr> elements, RegisterCallback callback) = 0;


  using RegisterFromStreamCallback = base::OnceCallback<void(::blink::mojom::SerializedBlobPtr)>;
  
  virtual void RegisterFromStream(const std::string& content_type, const std::string& content_disposition, uint64_t length_hint, mojo::ScopedDataPipeConsumerHandle data, ProgressClientAssociatedPtrInfo progress_client, RegisterFromStreamCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetBlobFromUUID(::blink::mojom::BlobRequest blob, const std::string& uuid);

  using GetBlobFromUUIDCallback = base::OnceCallback<void()>;
  
  virtual void GetBlobFromUUID(::blink::mojom::BlobRequest blob, const std::string& uuid, GetBlobFromUUIDCallback callback) = 0;

  
  virtual void URLStoreForOrigin(const url::Origin& origin, ::blink::mojom::BlobURLStoreAssociatedRequest url_store) = 0;
};

class BLINK_COMMON_EXPORT ProgressClientProxy
    : public ProgressClient {
 public:
  using InterfaceType = ProgressClient;

  explicit ProgressClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnProgress(uint64_t delta) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT BlobRegistryProxy
    : public BlobRegistry {
 public:
  using InterfaceType = BlobRegistry;

  explicit BlobRegistryProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Register(::blink::mojom::BlobRequest blob, const std::string& uuid, const std::string& content_type, const std::string& content_disposition, std::vector<::blink::mojom::DataElementPtr> elements) final;
  void Register(::blink::mojom::BlobRequest blob, const std::string& uuid, const std::string& content_type, const std::string& content_disposition, std::vector<::blink::mojom::DataElementPtr> elements, RegisterCallback callback) final;
  void RegisterFromStream(const std::string& content_type, const std::string& content_disposition, uint64_t length_hint, mojo::ScopedDataPipeConsumerHandle data, ProgressClientAssociatedPtrInfo progress_client, RegisterFromStreamCallback callback) final;
  bool GetBlobFromUUID(::blink::mojom::BlobRequest blob, const std::string& uuid) final;
  void GetBlobFromUUID(::blink::mojom::BlobRequest blob, const std::string& uuid, GetBlobFromUUIDCallback callback) final;
  void URLStoreForOrigin(const url::Origin& origin, ::blink::mojom::BlobURLStoreAssociatedRequest url_store) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ProgressClientStubDispatch {
 public:
  static bool Accept(ProgressClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProgressClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProgressClient>>
class ProgressClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProgressClientStub() {}
  ~ProgressClientStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProgressClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProgressClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT BlobRegistryStubDispatch {
 public:
  static bool Accept(BlobRegistry* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BlobRegistry* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BlobRegistry>>
class BlobRegistryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BlobRegistryStub() {}
  ~BlobRegistryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobRegistryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobRegistryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ProgressClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BlobRegistryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BlobRegistryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_REGISTRY_MOJOM_H_