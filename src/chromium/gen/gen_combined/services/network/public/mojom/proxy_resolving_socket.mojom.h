// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_H_

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
#include "services/network/public/mojom/proxy_resolving_socket.mojom-shared.h"
#include "services/network/public/mojom/proxy_resolving_socket.mojom-forward.h"
#include "services/network/public/mojom/ip_endpoint.mojom-forward.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-forward.h"
#include "services/network/public/mojom/network_param.mojom-forward.h"
#include "services/network/public/mojom/ssl_config.mojom-forward.h"
#include "services/network/public/mojom/tcp_socket.mojom-forward.h"
#include "services/network/public/mojom/tls_socket.mojom-forward.h"
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




namespace network {
namespace mojom {

class ProxyResolvingSocketProxy;

template <typename ImplRefTraits>
class ProxyResolvingSocketStub;

class ProxyResolvingSocketRequestValidator;
class ProxyResolvingSocketResponseValidator;


class  ProxyResolvingSocket
    : public ProxyResolvingSocketInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyResolvingSocketInterfaceBase;
  using Proxy_ = ProxyResolvingSocketProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyResolvingSocketStub<ImplRefTraits>;

  using RequestValidator_ = ProxyResolvingSocketRequestValidator;
  using ResponseValidator_ = ProxyResolvingSocketResponseValidator;
  enum MethodMinVersions : uint32_t {
    kUpgradeToTLSMinVersion = 0,
  };
  virtual ~ProxyResolvingSocket() {}


  using UpgradeToTLSCallback = base::OnceCallback<void(int32_t, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle)>;
  
  virtual void UpgradeToTLS(const net::HostPortPair& host_port_pair, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TLSClientSocketRequest request, ::network::mojom::SocketObserverPtr observer, UpgradeToTLSCallback callback) = 0;
};

class ProxyResolvingSocketFactoryProxy;

template <typename ImplRefTraits>
class ProxyResolvingSocketFactoryStub;

class ProxyResolvingSocketFactoryRequestValidator;
class ProxyResolvingSocketFactoryResponseValidator;


class  ProxyResolvingSocketFactory
    : public ProxyResolvingSocketFactoryInterfaceBase {
 public:
  static const char Name_[];
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;

  using Base_ = ProxyResolvingSocketFactoryInterfaceBase;
  using Proxy_ = ProxyResolvingSocketFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = ProxyResolvingSocketFactoryStub<ImplRefTraits>;

  using RequestValidator_ = ProxyResolvingSocketFactoryRequestValidator;
  using ResponseValidator_ = ProxyResolvingSocketFactoryResponseValidator;
  enum MethodMinVersions : uint32_t {
    kCreateProxyResolvingSocketMinVersion = 0,
  };
  virtual ~ProxyResolvingSocketFactory() {}


  using CreateProxyResolvingSocketCallback = base::OnceCallback<void(int32_t, const base::Optional<net::IPEndPoint>&, const base::Optional<net::IPEndPoint>&, mojo::ScopedDataPipeConsumerHandle, mojo::ScopedDataPipeProducerHandle)>;
  
  virtual void CreateProxyResolvingSocket(const GURL& url, ProxyResolvingSocketOptionsPtr options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ProxyResolvingSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateProxyResolvingSocketCallback callback) = 0;
};

class  ProxyResolvingSocketProxy
    : public ProxyResolvingSocket {
 public:
  using InterfaceType = ProxyResolvingSocket;

  explicit ProxyResolvingSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void UpgradeToTLS(const net::HostPortPair& host_port_pair, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ::network::mojom::TLSClientSocketRequest request, ::network::mojom::SocketObserverPtr observer, UpgradeToTLSCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};

class  ProxyResolvingSocketFactoryProxy
    : public ProxyResolvingSocketFactory {
 public:
  using InterfaceType = ProxyResolvingSocketFactory;

  explicit ProxyResolvingSocketFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateProxyResolvingSocket(const GURL& url, ProxyResolvingSocketOptionsPtr options, const net::MutableNetworkTrafficAnnotationTag& traffic_annotation, ProxyResolvingSocketRequest socket, ::network::mojom::SocketObserverPtr observer, CreateProxyResolvingSocketCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  ProxyResolvingSocketStubDispatch {
 public:
  static bool Accept(ProxyResolvingSocket* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyResolvingSocket* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyResolvingSocket>>
class ProxyResolvingSocketStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyResolvingSocketStub() {}
  ~ProxyResolvingSocketStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolvingSocketStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolvingSocketStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyResolvingSocketFactoryStubDispatch {
 public:
  static bool Accept(ProxyResolvingSocketFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ProxyResolvingSocketFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ProxyResolvingSocketFactory>>
class ProxyResolvingSocketFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ProxyResolvingSocketFactoryStub() {}
  ~ProxyResolvingSocketFactoryStub() override {}

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolvingSocketFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ProxyResolvingSocketFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  ProxyResolvingSocketRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyResolvingSocketFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyResolvingSocketResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  ProxyResolvingSocketFactoryResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  ProxyResolvingSocketOptions {
 public:
  using DataView = ProxyResolvingSocketOptionsDataView;
  using Data_ = internal::ProxyResolvingSocketOptions_Data;

  template <typename... Args>
  static ProxyResolvingSocketOptionsPtr New(Args&&... args) {
    return ProxyResolvingSocketOptionsPtr(
        base::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ProxyResolvingSocketOptionsPtr From(const U& u) {
    return mojo::TypeConverter<ProxyResolvingSocketOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyResolvingSocketOptions>::Convert(*this);
  }


  ProxyResolvingSocketOptions();

  ProxyResolvingSocketOptions(
      bool use_tls,
      bool fake_tls_handshake);

  ~ProxyResolvingSocketOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ProxyResolvingSocketOptionsPtr>
  ProxyResolvingSocketOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ProxyResolvingSocketOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;
  size_t Hash(size_t seed) const;

  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ProxyResolvingSocketOptions::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ProxyResolvingSocketOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ProxyResolvingSocketOptions_UnserializedMessageContext<
            UserType, ProxyResolvingSocketOptions::DataView>>(0, 0, std::move(input)));
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    return mojo::internal::DeserializeImpl<ProxyResolvingSocketOptions::DataView>(
        data, data_num_bytes, std::vector<mojo::ScopedHandle>(), output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ProxyResolvingSocketOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ProxyResolvingSocketOptions_UnserializedMessageContext<
            UserType, ProxyResolvingSocketOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ProxyResolvingSocketOptions::DataView>(
        input.payload(), input.payload_num_bytes(),
        std::move(*input.mutable_handles()), output, Validate);
  }

  
  bool use_tls;
  
  bool fake_tls_handshake;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};




template <typename StructPtrType>
ProxyResolvingSocketOptionsPtr ProxyResolvingSocketOptions::Clone() const {
  return New(
      mojo::Clone(use_tls),
      mojo::Clone(fake_tls_handshake)
  );
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ProxyResolvingSocketOptions>::value>::type*>
bool ProxyResolvingSocketOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->use_tls, other_struct.use_tls))
    return false;
  if (!mojo::Equals(this->fake_tls_handshake, other_struct.fake_tls_handshake))
    return false;
  return true;
}


}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::ProxyResolvingSocketOptions::DataView,
                                         ::network::mojom::ProxyResolvingSocketOptionsPtr> {
  static bool IsNull(const ::network::mojom::ProxyResolvingSocketOptionsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::ProxyResolvingSocketOptionsPtr* output) { output->reset(); }

  static decltype(::network::mojom::ProxyResolvingSocketOptions::use_tls) use_tls(
      const ::network::mojom::ProxyResolvingSocketOptionsPtr& input) {
    return input->use_tls;
  }

  static decltype(::network::mojom::ProxyResolvingSocketOptions::fake_tls_handshake) fake_tls_handshake(
      const ::network::mojom::ProxyResolvingSocketOptionsPtr& input) {
    return input->fake_tls_handshake;
  }

  static bool Read(::network::mojom::ProxyResolvingSocketOptions::DataView input, ::network::mojom::ProxyResolvingSocketOptionsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_RESOLVING_SOCKET_MOJOM_H_