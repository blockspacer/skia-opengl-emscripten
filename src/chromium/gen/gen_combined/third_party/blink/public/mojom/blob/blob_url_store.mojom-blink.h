// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_H_

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
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-shared.h"
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-blink-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink-forward.h"
#if defined(ENABLE_GNET)
#include "services/network/public/mojom/url_loader_factory.mojom-blink-forward.h"
#endif // ENABLE_GNET
#include "third_party/blink/public/mojom/blob/blob.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink-forward.h"

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

class BlobURLStoreProxy;

template <typename ImplRefTraits>
class BlobURLStoreStub;

class BlobURLStoreRequestValidator;
class BlobURLStoreResponseValidator;


class PLATFORM_EXPORT BlobURLStore
    : public BlobURLStoreInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;

  using Base_ = BlobURLStoreInterfaceBase;
  using Proxy_ = BlobURLStoreProxy;

  template <typename ImplRefTraits>
  using Stub_ = BlobURLStoreStub<ImplRefTraits>;

  using RequestValidator_ = BlobURLStoreRequestValidator;
  using ResponseValidator_ = BlobURLStoreResponseValidator;
  enum MethodMinVersions : uint32_t {
    kRegisterMinVersion = 0,
    kRevokeMinVersion = 0,
    kResolveMinVersion = 0,
    kResolveAsURLLoaderFactoryMinVersion = 0,
    kResolveForNavigationMinVersion = 0,
  };
  virtual ~BlobURLStore() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool Register(::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url);

  using RegisterCallback = base::OnceCallback<void()>;
  
  virtual void Register(::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url, RegisterCallback callback) = 0;

  
  virtual void Revoke(const ::blink::KURL& url) = 0;


  using ResolveCallback = base::OnceCallback<void(::blink::mojom::blink::BlobPtr)>;
  
  virtual void Resolve(const ::blink::KURL& url, ResolveCallback callback) = 0;

#if defined(ENABLE_GNET)
  virtual void ResolveAsURLLoaderFactory(const ::blink::KURL& url, ::network::mojom::blink::URLLoaderFactoryRequest factory) = 0;
#endif // ENABLE_GNET

  
  virtual void ResolveForNavigation(const ::blink::KURL& url, BlobURLTokenRequest token) = 0;
};

class BlobURLTokenProxy;

template <typename ImplRefTraits>
class BlobURLTokenStub;

class BlobURLTokenRequestValidator;
class BlobURLTokenResponseValidator;


class PLATFORM_EXPORT BlobURLToken
    : public BlobURLTokenInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = BlobURLTokenInterfaceBase;
  using Proxy_ = BlobURLTokenProxy;

  template <typename ImplRefTraits>
  using Stub_ = BlobURLTokenStub<ImplRefTraits>;

  using RequestValidator_ = BlobURLTokenRequestValidator;
  using ResponseValidator_ = BlobURLTokenResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCloneMinVersion = 0,
    kGetTokenMinVersion = 0,
  };
  virtual ~BlobURLToken() {}

  
  virtual void Clone(BlobURLTokenRequest token) = 0;


  using GetTokenCallback = base::OnceCallback<void(const base::UnguessableToken&)>;
  
  virtual void GetToken(GetTokenCallback callback) = 0;
};

class PLATFORM_EXPORT BlobURLStoreProxy
    : public BlobURLStore {
 public:
  using InterfaceType = BlobURLStore;

  explicit BlobURLStoreProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Register(::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url) final;
  void Register(::blink::mojom::blink::BlobPtr blob, const ::blink::KURL& url, RegisterCallback callback) final;
  void Revoke(const ::blink::KURL& url) final;
  void Resolve(const ::blink::KURL& url, ResolveCallback callback) final;
#if defined(ENABLE_GNET)
  void ResolveAsURLLoaderFactory(const ::blink::KURL& url, ::network::mojom::blink::URLLoaderFactoryRequest factory) final;
#endif // ENABLE_GNET
  void ResolveForNavigation(const ::blink::KURL& url, BlobURLTokenRequest token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class PLATFORM_EXPORT BlobURLTokenProxy
    : public BlobURLToken {
 public:
  using InterfaceType = BlobURLToken;

  explicit BlobURLTokenProxy(mojo::MessageReceiverWithResponder* receiver);
  void Clone(BlobURLTokenRequest token) final;
  void GetToken(GetTokenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT BlobURLStoreStubDispatch {
 public:
  static bool Accept(BlobURLStore* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BlobURLStore* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BlobURLStore>>
class BlobURLStoreStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BlobURLStoreStub() {}
  ~BlobURLStoreStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobURLStoreStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobURLStoreStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT BlobURLTokenStubDispatch {
 public:
  static bool Accept(BlobURLToken* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      BlobURLToken* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<BlobURLToken>>
class BlobURLTokenStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BlobURLTokenStub() {}
  ~BlobURLTokenStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobURLTokenStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BlobURLTokenStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT BlobURLStoreRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT BlobURLTokenRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT BlobURLStoreResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT BlobURLTokenResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_BLINK_H_
