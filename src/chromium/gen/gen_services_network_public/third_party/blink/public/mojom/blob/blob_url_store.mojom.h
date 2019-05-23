// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_H_

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
#include "third_party/blink/public/mojom/blob/blob_url_store.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-forward.h"
#include "services/network/public/mojom/url_loader_factory.mojom-forward.h"
#include "third_party/blink/public/mojom/blob/blob.mojom-forward.h"
#include "url/mojom/url.mojom-forward.h"
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

class BlobURLStoreProxy;

template <typename ImplRefTraits>
class BlobURLStoreStub;

class BlobURLStoreRequestValidator;
class BlobURLStoreResponseValidator;


class BLINK_COMMON_EXPORT BlobURLStore
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
  
  virtual bool Register(::blink::mojom::BlobPtr blob, const GURL& url);

  using RegisterCallback = base::OnceCallback<void()>;
  
  virtual void Register(::blink::mojom::BlobPtr blob, const GURL& url, RegisterCallback callback) = 0;

  
  virtual void Revoke(const GURL& url) = 0;


  using ResolveCallback = base::OnceCallback<void(::blink::mojom::BlobPtr)>;
  
  virtual void Resolve(const GURL& url, ResolveCallback callback) = 0;

  
  virtual void ResolveAsURLLoaderFactory(const GURL& url, ::network::mojom::URLLoaderFactoryRequest factory) = 0;

  
  virtual void ResolveForNavigation(const GURL& url, BlobURLTokenRequest token) = 0;
};

class BlobURLTokenProxy;

template <typename ImplRefTraits>
class BlobURLTokenStub;

class BlobURLTokenRequestValidator;
class BlobURLTokenResponseValidator;


class BLINK_COMMON_EXPORT BlobURLToken
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

class BLINK_COMMON_EXPORT BlobURLStoreProxy
    : public BlobURLStore {
 public:
  using InterfaceType = BlobURLStore;

  explicit BlobURLStoreProxy(mojo::MessageReceiverWithResponder* receiver);
  bool Register(::blink::mojom::BlobPtr blob, const GURL& url) final;
  void Register(::blink::mojom::BlobPtr blob, const GURL& url, RegisterCallback callback) final;
  void Revoke(const GURL& url) final;
  void Resolve(const GURL& url, ResolveCallback callback) final;
  void ResolveAsURLLoaderFactory(const GURL& url, ::network::mojom::URLLoaderFactoryRequest factory) final;
  void ResolveForNavigation(const GURL& url, BlobURLTokenRequest token) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class BLINK_COMMON_EXPORT BlobURLTokenProxy
    : public BlobURLToken {
 public:
  using InterfaceType = BlobURLToken;

  explicit BlobURLTokenProxy(mojo::MessageReceiverWithResponder* receiver);
  void Clone(BlobURLTokenRequest token) final;
  void GetToken(GetTokenCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT BlobURLStoreStubDispatch {
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
class BLINK_COMMON_EXPORT BlobURLTokenStubDispatch {
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
class BLINK_COMMON_EXPORT BlobURLStoreRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BlobURLTokenRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BlobURLStoreResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT BlobURLTokenResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BLOB_BLOB_URL_STORE_MOJOM_H_